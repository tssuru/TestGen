import { createServer, IncomingMessage, ServerResponse } from "node:http";
import { access, readFile } from "node:fs/promises";
import { constants } from "node:fs";
import { extname, normalize, relative, resolve } from "node:path";
import { readJsonBody, writeJson } from "../shared/json";
import { validateGenerationConfig } from "../modules/config/validator";
import { jobStore } from "../modules/jobs/store";
import { executeGenerationJob } from "../modules/jobs/executor";
import { poolStats } from "../modules/generation/pool";
import { getHealth } from "../modules/health/checks";
import { getRepositories } from "../modules/db";
import { seedIfEmpty } from "../modules/db/seed";
import { apiRoutes } from "./routes";
import { regenerateItemRoute } from "./routes-regenerate";

const port = Number(process.env["PORT"] ?? "3010");
const webDistRoot = resolve(process.cwd(), "../web/dist");
const tmpRoot = resolve(process.cwd(), "tmp");
const workdir = (): string =>
  process.env["QUIZ_ENGINE_WORKDIR"] ?? resolve(process.cwd(), "../../Quiz");

const UUID_RE = /^[0-9a-f]{8}-[0-9a-f]{4}-[0-9a-f]{4}-[0-9a-f]{4}-[0-9a-f]{12}$/i;
const SAFE_FILENAME_RE = /^[A-Za-z0-9._-]+$/;

const isValidJobId = (id: string): boolean => UUID_RE.test(id);
const isWithinDir = (parent: string, child: string): boolean => !relative(parent, child).startsWith("..");

const contentType = (path: string): string => {
  const ext = extname(path).toLowerCase();
  const map: Record<string, string> = {
    ".html": "text/html; charset=utf-8",
    ".js": "application/javascript; charset=utf-8",
    ".css": "text/css; charset=utf-8",
    ".json": "application/json; charset=utf-8",
    ".md": "text/markdown; charset=utf-8",
    ".txt": "text/plain; charset=utf-8",
    ".pdf": "application/pdf",
    ".docx": "application/vnd.openxmlformats-officedocument.wordprocessingml.document",
    ".zip": "application/zip",
    ".svg": "image/svg+xml",
    ".png": "image/png",
    ".jpg": "image/jpeg",
    ".jpeg": "image/jpeg",
    ".ico": "image/x-icon",
  };
  return map[ext] ?? "application/octet-stream";
};

const send = (res: ServerResponse, status: number, body: unknown): void => {
  const s = writeJson(status, body);
  res.statusCode = s.statusCode;
  res.setHeader("content-type", "application/json; charset=utf-8");
  res.end(s.body);
};

const tryRead = async (path: string): Promise<Buffer | null> => {
  try {
    await access(path, constants.R_OK);
    return await readFile(path);
  } catch {
    return null;
  }
};

const route = async (req: IncomingMessage, res: ServerResponse): Promise<void> => {
  const method = req.method ?? "GET";
  const rawUrl = req.url ?? "/";
  const url = new URL(rawUrl, `http://${req.headers.host ?? "localhost"}`);

  if (method === "GET" && url.pathname === "/health") {
    const h = await getHealth();
    send(res, h.status === "ok" ? 200 : 503, h);
    return;
  }

  if (method === "GET" && url.pathname === "/api/pool") {
    send(res, 200, poolStats());
    return;
  }

  if (method === "POST" && url.pathname === "/api/generation/jobs") {
    try {
      const config = validateGenerationConfig(await readJsonBody(req));
      const job = jobStore.create(config);
      void executeGenerationJob(job.jobId, config);
      send(res, 202, { jobId: job.jobId, status: job.status });
    } catch (e) {
      send(res, 400, { code: "INVALID_CONFIG", message: e instanceof Error ? e.message : "Invalid request" });
    }
    return;
  }

  if (await regenerateItemRoute(req, res, url)) return;

  const artifactMatch = /^\/api\/generation\/jobs\/([^/]+)\/artifacts\/([^/]+)$/.exec(url.pathname);
  if (method === "GET" && artifactMatch !== null) {
    const jobId = artifactMatch[1] ?? "";
    const artifactName = artifactMatch[2] ?? "";
    if (!isValidJobId(jobId) || !SAFE_FILENAME_RE.test(artifactName)) {
      send(res, 404, { code: "NOT_FOUND", message: "Artifact not found" });
      return;
    }
    const job = jobStore.get(jobId);
    const artifact = job?.artifacts.find((a) => a.name === artifactName);
    if (job === null || artifact === undefined || !isWithinDir(tmpRoot, artifact.path)) {
      send(res, 404, { code: "NOT_FOUND", message: "Artifact not found" });
      return;
    }
    try {
      const file = await readFile(artifact.path);
      res.statusCode = 200;
      res.setHeader("content-type", contentType(artifact.path));
      res.setHeader("content-disposition", `inline; filename="${artifact.name}"`);
      res.end(file);
    } catch {
      send(res, 404, { code: "NOT_FOUND", message: "Artifact not available" });
    }
    return;
  }

  const downloadMatch = /^\/api\/generation\/jobs\/([^/]+)\/download$/.exec(url.pathname);
  if (method === "GET" && downloadMatch !== null) {
    const jobId = downloadMatch[1] ?? "";
    if (!isValidJobId(jobId)) {
      send(res, 404, { code: "NOT_FOUND", message: "Job not found" });
      return;
    }
    const zipPath = resolve(tmpRoot, jobId, "bundle.zip");
    try {
      const file = await readFile(zipPath);
      res.statusCode = 200;
      res.setHeader("content-type", "application/zip");
      res.setHeader("content-disposition", `attachment; filename="${jobId}.zip"`);
      res.end(file);
    } catch {
      send(res, 404, { code: "NOT_READY", message: "Bundle not available" });
    }
    return;
  }

  const jobMatch = /^\/api\/generation\/jobs\/([^/]+)$/.exec(url.pathname);
  if (method === "GET" && jobMatch !== null) {
    const jobId = jobMatch[1] ?? "";
    const job = isValidJobId(jobId) ? jobStore.get(jobId) : null;
    if (job === null) {
      send(res, 404, { code: "NOT_FOUND", message: "Job not found" });
      return;
    }
    send(res, 200, job);
    return;
  }

  // Template/theme/jobs-list CRUD
  if (await apiRoutes(req, res, url)) return;

  if (method === "GET") {
    const normalized = normalize(url.pathname.startsWith("/") ? url.pathname.slice(1) : url.pathname);
    const asset = resolve(webDistRoot, normalized === "" ? "index.html" : normalized);
    const safe = isWithinDir(webDistRoot, asset) ? asset : resolve(webDistRoot, "index.html");
    const file = await tryRead(safe);
    if (file !== null) {
      res.statusCode = 200;
      res.setHeader("content-type", contentType(safe));
      res.end(file);
      return;
    }
    const fallback = await tryRead(resolve(webDistRoot, "index.html"));
    if (fallback !== null) {
      res.statusCode = 200;
      res.setHeader("content-type", "text/html; charset=utf-8");
      res.end(fallback);
      return;
    }
  }

  send(res, 404, { code: "NOT_FOUND", message: "Endpoint not found" });
};

const boot = (): void => {
  try {
    const repos = getRepositories();
    seedIfEmpty(repos, workdir());
  } catch (err) {
    console.error(`[boot] database init failed: ${err instanceof Error ? err.message : String(err)}`);
  }
  const server = createServer((req, res) => {
    void route(req, res);
  });
  server.on("error", (err: Error) => {
    console.error(`[server:error] ${err.message}`);
  });
  server.listen(port);
  console.info(`[server:start] port=${String(port)}`);
};

boot();
