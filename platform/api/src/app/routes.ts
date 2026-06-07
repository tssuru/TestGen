import type { IncomingMessage, ServerResponse } from "node:http";
import { readJsonBody, writeJson } from "../shared/json";
import { getRepositories } from "../modules/db";
import { DuplicatePresetNameError } from "../modules/db/presets-repo";
import {
  validateTemplateCreate, validateTemplateUpdate,
  validateThemeCreate, validateThemeUpdate,
} from "../modules/config/template-validator";
import type { TemplateKind, TemplateListFilter } from "@quiz/contracts";

const send = (res: ServerResponse, status: number, body: unknown): void => {
  const s = writeJson(status, body);
  res.statusCode = s.statusCode;
  res.setHeader("content-type", "application/json; charset=utf-8");
  res.end(s.body);
};

const bad = (res: ServerResponse, message: string, code = "INVALID_CONFIG"): void =>
  send(res, 400, { code, message });
const notFound = (res: ServerResponse, what = "Resource"): void =>
  send(res, 404, { code: "NOT_FOUND", message: `${what} not found` });

const parseFilter = (url: URL): TemplateListFilter => {
  const filter: { kind?: TemplateKind; themeId?: string; search?: string } = {};
  const kind = url.searchParams.get("kind");
  if (kind === "closed" || kind === "open") filter.kind = kind;
  const themeId = url.searchParams.get("themeId");
  if (themeId !== null && themeId.length > 0) filter.themeId = themeId;
  const search = url.searchParams.get("search");
  if (search !== null && search.length > 0) filter.search = search;
  return filter;
};

type Handler = (req: IncomingMessage, res: ServerResponse, url: URL) => Promise<boolean> | boolean;

export const apiRoutes: Handler = async (req, res, url) => {
  const method = req.method ?? "GET";
  const path = url.pathname;
  const repos = getRepositories();

  // --- Templates -------------------------------------------------------------
  if (method === "GET" && path === "/api/templates") {
    send(res, 200, repos.templates.list(parseFilter(url)));
    return true;
  }

  const templateIdMatch = /^\/api\/templates\/([0-9a-f-]+)$/i.exec(path);
  const templateVersionsMatch = /^\/api\/templates\/([0-9a-f-]+)\/versions$/i.exec(path);
  const templateForkMatch = /^\/api\/templates\/([0-9a-f-]+)\/fork$/i.exec(path);

  if (method === "POST" && path === "/api/templates") {
    try {
      const input = validateTemplateCreate(await readJsonBody(req));
      const t = repos.templates.create(input);
      send(res, 201, t);
    } catch (e) {
      bad(res, e instanceof Error ? e.message : "invalid payload");
    }
    return true;
  }

  if (method === "GET" && templateVersionsMatch !== null) {
    const id = templateVersionsMatch[1] ?? "";
    if (repos.templates.getById(id) === null) { notFound(res, "Template"); return true; }
    send(res, 200, repos.templates.listVersions(id));
    return true;
  }

  if (method === "POST" && templateForkMatch !== null) {
    const id = templateForkMatch[1] ?? "";
    const forked = repos.templates.fork(id);
    if (forked === null) { notFound(res, "Template"); return true; }
    send(res, 201, forked);
    return true;
  }

  if (method === "GET" && templateIdMatch !== null) {
    const id = templateIdMatch[1] ?? "";
    const t = repos.templates.getById(id);
    if (t === null) { notFound(res, "Template"); return true; }
    send(res, 200, t);
    return true;
  }

  if (method === "PATCH" && templateIdMatch !== null) {
    const id = templateIdMatch[1] ?? "";
    const current = repos.templates.getById(id);
    if (current === null) { notFound(res, "Template"); return true; }
    try {
      const patch = validateTemplateUpdate(await readJsonBody(req), current.kind);
      const updated = repos.templates.update(id, patch);
      send(res, 200, updated);
    } catch (e) {
      bad(res, e instanceof Error ? e.message : "invalid payload");
    }
    return true;
  }

  if (method === "DELETE" && templateIdMatch !== null) {
    const id = templateIdMatch[1] ?? "";
    const ok = repos.templates.remove(id);
    if (!ok) { notFound(res, "Template"); return true; }
    send(res, 200, { deleted: true });
    return true;
  }

  // --- Themes ----------------------------------------------------------------
  if (method === "GET" && path === "/api/themes") {
    send(res, 200, repos.themes.list());
    return true;
  }

  const themeIdMatch = /^\/api\/themes\/([0-9a-f-]+)$/i.exec(path);
  const themeAssignMatch = /^\/api\/themes\/([0-9a-f-]+)\/assign$/i.exec(path);

  if (method === "POST" && path === "/api/themes") {
    try {
      const input = validateThemeCreate(await readJsonBody(req));
      const t = repos.themes.create(input);
      send(res, 201, t);
    } catch (e) {
      bad(res, e instanceof Error ? e.message : "invalid payload");
    }
    return true;
  }

  if (method === "GET" && themeIdMatch !== null) {
    const id = themeIdMatch[1] ?? "";
    const t = repos.themes.getById(id);
    if (t === null) { notFound(res, "Theme"); return true; }
    send(res, 200, t);
    return true;
  }

  if (method === "PATCH" && themeIdMatch !== null) {
    const id = themeIdMatch[1] ?? "";
    try {
      const patch = validateThemeUpdate(await readJsonBody(req));
      const updated = repos.themes.update(id, patch);
      if (updated === null) { notFound(res, "Theme"); return true; }
      send(res, 200, updated);
    } catch (e) {
      bad(res, e instanceof Error ? e.message : "invalid payload");
    }
    return true;
  }

  if (method === "DELETE" && themeIdMatch !== null) {
    const id = themeIdMatch[1] ?? "";
    const ok = repos.themes.remove(id);
    if (!ok) { notFound(res, "Theme"); return true; }
    send(res, 200, { deleted: true });
    return true;
  }

  if (method === "POST" && themeAssignMatch !== null) {
    const id = themeAssignMatch[1] ?? "";
    if (repos.themes.getById(id) === null) { notFound(res, "Theme"); return true; }
    try {
      const body = (await readJsonBody(req)) as { templateIds?: unknown; detach?: unknown };
      if (!Array.isArray(body.templateIds)) { bad(res, "templateIds: must be an array"); return true; }
      const ids = body.templateIds.map((x) => String(x));
      if (body.detach === true) repos.themes.unassignTemplates(id, ids);
      else repos.themes.assignTemplates(id, ids);
      send(res, 200, repos.themes.getById(id));
    } catch (e) {
      bad(res, e instanceof Error ? e.message : "invalid payload");
    }
    return true;
  }

  // --- Jobs list -------------------------------------------------------------
  if (method === "GET" && path === "/api/generation/jobs") {
    const limit = Number(url.searchParams.get("limit") ?? "50");
    send(res, 200, repos.jobs.list(Number.isFinite(limit) ? Math.min(Math.max(limit, 1), 200) : 50));
    return true;
  }

  // --- Presets ---------------------------------------------------------------
  if (method === "GET" && path === "/api/presets") {
    send(res, 200, repos.presets.list());
    return true;
  }

  const presetIdMatch = /^\/api\/presets\/([0-9a-f-]+)$/i.exec(path);

  if (method === "POST" && path === "/api/presets") {
    try {
      const body = await readJsonBody(req);
      if (typeof body !== "object" || body === null) throw new Error("payload must be an object");
      const obj = body as Record<string, unknown>;
      const name = typeof obj["name"] === "string" ? obj["name"].trim() : "";
      if (name.length === 0) throw new Error("name: must be non-empty");
      if (name.length > 200) throw new Error("name: too long");
      const description = typeof obj["description"] === "string" ? obj["description"] : "";
      // Accept either explicit config, or derive from jobId
      let config: unknown = obj["config"];
      let templateIds: readonly string[] = Array.isArray(obj["templateIds"])
        ? (obj["templateIds"] as unknown[]).map((x) => String(x))
        : [];
      if (typeof obj["jobId"] === "string") {
        const job = repos.jobs.get(obj["jobId"]);
        if (job === null) { bad(res, "jobId: not found"); return true; }
        config = job.config;
        if (templateIds.length === 0) templateIds = repos.jobs.getSelectedTemplateIds(obj["jobId"]);
      }
      if (typeof config !== "object" || config === null) throw new Error("config: required");
      try {
        const created = repos.presets.create({
          name, description,
          config: config as import("@quiz/contracts").GenerationConfig,
          templateIds,
        });
        send(res, 201, created);
      } catch (err) {
        if (err instanceof DuplicatePresetNameError) {
          send(res, 409, { code: "DUPLICATE_NAME", message: err.message });
          return true;
        }
        throw err;
      }
    } catch (e) {
      bad(res, e instanceof Error ? e.message : "invalid payload");
    }
    return true;
  }

  if (method === "GET" && presetIdMatch !== null) {
    const id = presetIdMatch[1] ?? "";
    const p = repos.presets.getById(id);
    if (p === null) { notFound(res, "Preset"); return true; }
    send(res, 200, p);
    return true;
  }

  if (method === "PATCH" && presetIdMatch !== null) {
    const id = presetIdMatch[1] ?? "";
    try {
      const body = (await readJsonBody(req)) as Record<string, unknown>;
      const patch: import("@quiz/contracts").QuizPresetUpdateInput = {};
      if (typeof body["name"] === "string") (patch as { name: string }).name = body["name"].trim();
      if (typeof body["description"] === "string") (patch as { description: string }).description = body["description"];
      if (typeof body["config"] === "object" && body["config"] !== null) {
        (patch as { config: import("@quiz/contracts").GenerationConfig }).config =
          body["config"] as import("@quiz/contracts").GenerationConfig;
      }
      if (Array.isArray(body["templateIds"])) {
        (patch as { templateIds: readonly string[] }).templateIds =
          (body["templateIds"] as unknown[]).map((x) => String(x));
      }
      try {
        const u = repos.presets.update(id, patch);
        if (u === null) { notFound(res, "Preset"); return true; }
        send(res, 200, u);
      } catch (err) {
        if (err instanceof DuplicatePresetNameError) {
          send(res, 409, { code: "DUPLICATE_NAME", message: err.message });
          return true;
        }
        throw err;
      }
    } catch (e) {
      bad(res, e instanceof Error ? e.message : "invalid payload");
    }
    return true;
  }

  if (method === "DELETE" && presetIdMatch !== null) {
    const id = presetIdMatch[1] ?? "";
    const ok = repos.presets.remove(id);
    if (!ok) { notFound(res, "Preset"); return true; }
    send(res, 200, { deleted: true });
    return true;
  }

  // Selected templates for a job (in order) — drives the preview editor
  const jobTemplatesMatch = /^\/api\/generation\/jobs\/([0-9a-f-]+)\/templates$/i.exec(path);
  if (method === "GET" && jobTemplatesMatch !== null) {
    const jobId = jobTemplatesMatch[1] ?? "";
    const job = repos.jobs.get(jobId);
    if (job === null) { notFound(res, "Job"); return true; }
    const ids = repos.jobs.getSelectedTemplateIds(jobId);
    const items = ids.map((id, idx) => {
      const t = repos.templates.getById(id);
      return t === null
        ? { index: idx + 1, templateId: id, kind: null, title: "[видалений шаблон]", body: null }
        : { index: idx + 1, templateId: id, kind: t.kind, title: t.title, body: t.body, source: t.source, themeIds: t.themeIds };
    });
    send(res, 200, { jobId, templateIds: ids, items });
    return true;
  }

  return false;
};
