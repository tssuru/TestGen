import type { IncomingMessage, ServerResponse } from "node:http";
import { readJsonBody, writeJson } from "../shared/json";
import { jobStore } from "../modules/jobs/store";
import { executeGenerationJob } from "../modules/jobs/executor";
import { getRepositories } from "../modules/db";

const send = (res: ServerResponse, status: number, body: unknown): void => {
  const s = writeJson(status, body);
  res.statusCode = s.statusCode;
  res.setHeader("content-type", "application/json; charset=utf-8");
  res.end(s.body);
};

const UUID_RE = /^[0-9a-f]{8}-[0-9a-f]{4}-[0-9a-f]{4}-[0-9a-f]{4}-[0-9a-f]{12}$/i;

export const regenerateItemRoute = async (
  req: IncomingMessage,
  res: ServerResponse,
  url: URL,
): Promise<boolean> => {
  const m = /^\/api\/generation\/jobs\/([^/]+)\/regenerate-item$/.exec(url.pathname);
  if (req.method !== "POST" || m === null) return false;

  const jobId = m[1] ?? "";
  if (!UUID_RE.test(jobId)) {
    send(res, 404, { code: "NOT_FOUND", message: "Job not found" });
    return true;
  }

  const parent = jobStore.get(jobId);
  if (parent === null) { send(res, 404, { code: "NOT_FOUND", message: "Job not found" }); return true; }

  let body: { index?: unknown; replacementTemplateId?: unknown };
  try { body = (await readJsonBody(req)) as typeof body; }
  catch { send(res, 400, { code: "INVALID_CONFIG", message: "Invalid body" }); return true; }

  const index = typeof body.index === "number" ? body.index : -1;
  if (!Number.isInteger(index) || index < 1 || index > parent.config.questionsPerVariant) {
    send(res, 400, { code: "INVALID_CONFIG", message: "index: must be in [1, questionsPerVariant]" });
    return true;
  }

  const currentIds = [...jobStore.getSelectedTemplateIds(jobId)];
  if (currentIds.length === 0) {
    send(res, 400, { code: "INVALID_CONFIG", message: "parent job has no selected templates recorded" });
    return true;
  }

  // Determine replacement
  const repos = getRepositories();
  let replacementId: string;
  if (typeof body.replacementTemplateId === "string" && body.replacementTemplateId.length > 0) {
    const r = repos.templates.getById(body.replacementTemplateId);
    if (r === null) { send(res, 400, { code: "INVALID_CONFIG", message: "replacementTemplateId: not found" }); return true; }
    replacementId = r.id;
  } else {
    // Pick a random template of the same kind that is not currently used
    const target = repos.templates.getById(currentIds[index - 1] ?? "");
    const kind = target?.kind ?? "closed";
    const used = new Set(currentIds);
    const pool = repos.templates.list({ kind }).filter((t) => !used.has(t.id));
    if (pool.length === 0) {
      send(res, 400, { code: "INVALID_CONFIG", message: "no alternative templates of the same kind are available" });
      return true;
    }
    replacementId = pool[Math.floor(Math.random() * pool.length)]!.id;
  }

  const newIds = [...currentIds];
  newIds[index - 1] = replacementId;

  const childConfig = { ...parent.config, templateIds: newIds, shuffleQuestions: false };
  const child = jobStore.create(childConfig);
  // Link child to parent via jobs table
  repos.jobs.setSelectedTemplateIds(child.jobId, newIds);
  void executeGenerationJob(child.jobId, childConfig);
  send(res, 202, { jobId: child.jobId, status: child.status, parentJobId: jobId, replacedIndex: index });
  return true;
};
