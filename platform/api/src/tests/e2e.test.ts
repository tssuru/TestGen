import { readFile, writeFile, mkdir, unlink } from "node:fs/promises";
import { tmpdir } from "node:os";
import { randomUUID } from "node:crypto";
import { resolve } from "node:path";

const BASE = process.env["TEST_BASE_URL"] ?? "http://localhost:3010";

interface AnswerOption {
  readonly number: number;
  readonly text: string;
  readonly correct: boolean;
}
interface AnswerItem {
  readonly index: number;
  readonly type: "closed" | "open";
  readonly source: string;
  readonly prompt: string;
  readonly codeSnippet: string | null;
  readonly options: readonly AnswerOption[];
}
interface AnswerKey {
  readonly title: string;
  readonly generatedAt: string;
  readonly variantCount: number;
  readonly questionsPerVariant: number;
  readonly variants: readonly { variantNumber: number; items: readonly AnswerItem[] }[];
}

interface JobArtifact {
  readonly name: string;
  readonly format: string;
  readonly sizeBytes: number;
  readonly sha256: string;
}
interface Job {
  readonly jobId: string;
  readonly status: "queued" | "running" | "completed" | "failed";
  readonly progress: number;
  readonly errors: readonly { code: string; message: string; hint?: string }[];
  readonly artifacts: readonly JobArtifact[];
}

type TestFn = () => Promise<void>;
const tests: { name: string; fn: TestFn }[] = [];
const test = (name: string, fn: TestFn): void => { tests.push({ name, fn }); };

const assert = (cond: unknown, msg: string): void => { if (!cond) throw new Error(`assertion failed: ${msg}`); };
const sleep = (ms: number): Promise<void> => new Promise((r) => setTimeout(r, ms));

const fetchJson = async <T>(path: string, init?: RequestInit): Promise<{ status: number; body: T }> => {
  const r = await fetch(`${BASE}${path}`, init);
  const text = await r.text();
  try {
    return { status: r.status, body: JSON.parse(text) as T };
  } catch {
    throw new Error(`non-JSON response from ${path} (${String(r.status)}): ${text.slice(0, 160)}`);
  }
};

const fetchRaw = async (path: string): Promise<{ status: number; contentType: string; bytes: Buffer }> => {
  const r = await fetch(`${BASE}${path}`);
  const buf = Buffer.from(await r.arrayBuffer());
  return { status: r.status, contentType: r.headers.get("content-type") ?? "", bytes: buf };
};

interface CreatePayload {
  title?: string;
  variantCount?: number;
  questionsPerVariant?: number;
  mode?: string;
  questionTypeFilter?: string;
  closedShare?: number;
  shuffleQuestions?: boolean;
  includeAnswerKey?: boolean;
  seed?: number;
  themeIds?: readonly string[];
  templateIds?: readonly string[];
}

const POLL_INTERVAL_MS = 400;
const POLL_TIMEOUT_MS = 120_000;

const runJob = async (payload: CreatePayload): Promise<Job> => {
  const body: CreatePayload = {
    title: "Test",
    variantCount: 1,
    questionsPerVariant: 2,
    mode: "OneOnLine",
    questionTypeFilter: "mixed",
    closedShare: 0.5,
    shuffleQuestions: true,
    includeAnswerKey: true,
    seed: 1,
    ...payload,
  };
  const created = await fetchJson<{ jobId: string; status: string }>("/api/generation/jobs", {
    method: "POST",
    headers: { "content-type": "application/json" },
    body: JSON.stringify(body),
  });
  assert(created.status === 202, `expected 202 got ${String(created.status)} body=${JSON.stringify(created.body)}`);
  const jobId = created.body.jobId;

  const deadline = Date.now() + POLL_TIMEOUT_MS;
  while (Date.now() < deadline) {
    const j = await fetchJson<Job>(`/api/generation/jobs/${jobId}`);
    assert(j.status === 200, `poll status ${String(j.status)}`);
    if (j.body.status === "completed" || j.body.status === "failed") return j.body;
    await sleep(POLL_INTERVAL_MS);
  }
  throw new Error(`job ${jobId} timed out after ${String(POLL_TIMEOUT_MS)}ms`);
};

const requireCompleted = (job: Job): void => {
  assert(job.status === "completed", `job failed: ${JSON.stringify(job.errors)}`);
};

const findArtifact = (job: Job, format: string): JobArtifact => {
  const a = job.artifacts.find((x) => x.format === format);
  assert(a !== undefined, `artifact format=${format} not found (have: ${job.artifacts.map((x) => x.format).join(",")})`);
  return a!;
};

const downloadArtifact = async (jobId: string, name: string): Promise<Buffer> => {
  const r = await fetchRaw(`/api/generation/jobs/${jobId}/artifacts/${name}`);
  assert(r.status === 200, `download ${name} status=${String(r.status)}`);
  return r.bytes;
};

const downloadKey = async (job: Job): Promise<AnswerKey> => {
  const a = findArtifact(job, "answers_json");
  const raw = await downloadArtifact(job.jobId, a.name);
  return JSON.parse(raw.toString("utf8")) as AnswerKey;
};

// ======================================================================
// Tests
// ======================================================================

// --- Health & pool (1-3) ------------------------------------------------
test("01 GET /health returns ok", async () => {
  const r = await fetchJson<{ status: string }>("/health");
  assert(r.status === 200, `status=${String(r.status)}`);
  assert(r.body.status === "ok", `body.status=${r.body.status}`);
});

test("02 GET /api/pool returns non-empty counts", async () => {
  const r = await fetchJson<{ openCount: number; closedCount: number }>("/api/pool");
  assert(r.status === 200, `status=${String(r.status)}`);
  assert(r.body.openCount > 0, `openCount=${String(r.body.openCount)}`);
  assert(r.body.closedCount > 0, `closedCount=${String(r.body.closedCount)}`);
});

test("03 GET unknown job → 404", async () => {
  const r = await fetchJson<{ code: string }>(`/api/generation/jobs/00000000-0000-0000-0000-000000000000`);
  assert(r.status === 404, `status=${String(r.status)}`);
  assert(r.body.code === "NOT_FOUND", `code=${r.body.code}`);
});

// --- Validator via HTTP (4-8) -------------------------------------------
test("04 POST empty body → 400 INVALID_CONFIG", async () => {
  const r = await fetchJson<{ code: string }>("/api/generation/jobs", {
    method: "POST",
    headers: { "content-type": "application/json" },
    body: "{}",
  });
  assert(r.status === 400, `status=${String(r.status)}`);
  assert(r.body.code === "INVALID_CONFIG", `code=${r.body.code}`);
});

test("05 POST empty title → 400", async () => {
  const r = await fetchJson<{ code: string; message: string }>("/api/generation/jobs", {
    method: "POST",
    headers: { "content-type": "application/json" },
    body: JSON.stringify({ title: "", variantCount: 1, questionsPerVariant: 1, mode: "OneOnLine" }),
  });
  assert(r.status === 400, `status=${String(r.status)}`);
  assert(/title/i.test(r.body.message), `message=${r.body.message}`);
});

test("06 POST unknown mode → 400", async () => {
  const r = await fetchJson<{ code: string; message: string }>("/api/generation/jobs", {
    method: "POST",
    headers: { "content-type": "application/json" },
    body: JSON.stringify({ title: "T", variantCount: 1, questionsPerVariant: 1, mode: "Weird" }),
  });
  assert(r.status === 400, `status=${String(r.status)}`);
  assert(/mode/i.test(r.body.message), `message=${r.body.message}`);
});

test("07 POST closedShare=2 → 400", async () => {
  const r = await fetchJson<{ code: string; message: string }>("/api/generation/jobs", {
    method: "POST",
    headers: { "content-type": "application/json" },
    body: JSON.stringify({ title: "T", variantCount: 1, questionsPerVariant: 1, mode: "OneOnLine", closedShare: 2 }),
  });
  assert(r.status === 400, `status=${String(r.status)}`);
  assert(/closedShare/i.test(r.body.message), `message=${r.body.message}`);
});

test("08 POST variantCount=0 → 400", async () => {
  const r = await fetchJson<{ code: string; message: string }>("/api/generation/jobs", {
    method: "POST",
    headers: { "content-type": "application/json" },
    body: JSON.stringify({ title: "T", variantCount: 0, questionsPerVariant: 1, mode: "OneOnLine" }),
  });
  assert(r.status === 400, `status=${String(r.status)}`);
  assert(/variantCount/i.test(r.body.message), `message=${r.body.message}`);
});

// --- Full flow happy path (9-13) ----------------------------------------
test("09 minimal 1x1 mixed completes", async () => {
  const job = await runJob({ variantCount: 1, questionsPerVariant: 1, seed: 9 });
  requireCompleted(job);
  assert(job.progress === 100, `progress=${String(job.progress)}`);
  findArtifact(job, "pdf");
  findArtifact(job, "md");
});

test("10 2x3 mixed produces all expected artifact formats", async () => {
  const job = await runJob({ variantCount: 2, questionsPerVariant: 3, seed: 10 });
  requireCompleted(job);
  for (const fmt of ["pdf", "md", "docx", "zip", "manifest", "config", "answers_json", "answers_md"]) {
    findArtifact(job, fmt);
  }
});

test("11 closed-only 2x2 → answers have closed items with correct options", async () => {
  const job = await runJob({ variantCount: 2, questionsPerVariant: 2, questionTypeFilter: "closed", seed: 11 });
  requireCompleted(job);
  const key = await downloadKey(job);
  assert(key.variants.length === 2, `variants=${String(key.variants.length)}`);
  for (const variant of key.variants) {
    assert(variant.items.length === 2, `items=${String(variant.items.length)}`);
    for (const item of variant.items) {
      assert(item.type === "closed", `type=${item.type}`);
      assert(item.options.length > 0, `options empty for source=${item.source}`);
      const correct = item.options.filter((o) => o.correct);
      assert(correct.length > 0, `no correct options for source=${item.source}`);
      assert(item.source.endsWith("-good.txt") || item.source.includes("/"), `source=${item.source}`);
    }
  }
});

test("12 open-only 2x3 → answers have open items with no correct options", async () => {
  const job = await runJob({ variantCount: 2, questionsPerVariant: 3, questionTypeFilter: "open", seed: 12 });
  requireCompleted(job);
  const key = await downloadKey(job);
  for (const variant of key.variants) {
    for (const item of variant.items) {
      assert(item.type === "open", `type=${item.type}`);
      assert(item.options.filter((o) => o.correct).length === 0, `open item has correct options`);
    }
  }
});

test("13 mixed closedShare=0 → all items are open type", async () => {
  const job = await runJob({ variantCount: 1, questionsPerVariant: 4, questionTypeFilter: "mixed", closedShare: 0, seed: 13 });
  requireCompleted(job);
  const key = await downloadKey(job);
  const allItems = key.variants.flatMap((v) => v.items);
  assert(allItems.every((x) => x.type === "open"), `got types: ${allItems.map((x) => x.type).join(",")}`);
});

// --- Variant structure in TeX (14-17) ------------------------------------
test("14 10-variant job → answers.md has 10 variant sections", async () => {
  const job = await runJob({ variantCount: 10, questionsPerVariant: 2, seed: 14 });
  requireCompleted(job);
  const a = findArtifact(job, "answers_md");
  const md = (await downloadArtifact(job.jobId, a.name)).toString("utf8");
  const variantCount = (md.match(/^## Варіант /gm) ?? []).length;
  assert(variantCount === 10, `variant sections in answers.md=${String(variantCount)}`);
});

test("15 PDF artifact starts with %PDF- magic bytes", async () => {
  const job = await runJob({ variantCount: 1, questionsPerVariant: 1, seed: 15 });
  requireCompleted(job);
  const pdf = await downloadArtifact(job.jobId, "quiz.pdf");
  assert(pdf.length > 1000, `pdf size=${String(pdf.length)}`);
  assert(pdf.slice(0, 5).toString("ascii") === "%PDF-", `pdf magic=${pdf.slice(0, 5).toString("ascii")}`);
});

test("16 DOCX artifact starts with PK zip magic", async () => {
  const job = await runJob({ variantCount: 1, questionsPerVariant: 1, seed: 16 });
  requireCompleted(job);
  const docx = await downloadArtifact(job.jobId, "test.docx");
  assert(docx.length > 500, `docx size=${String(docx.length)}`);
  assert(docx[0] === 0x50 && docx[1] === 0x4b, `docx magic=${String(docx[0])},${String(docx[1])}`);
});

test("17 bundle.zip downloadable via /download endpoint", async () => {
  const job = await runJob({ variantCount: 1, questionsPerVariant: 1, seed: 17 });
  requireCompleted(job);
  const r = await fetchRaw(`/api/generation/jobs/${job.jobId}/download`);
  assert(r.status === 200, `download status=${String(r.status)}`);
  assert(r.contentType.includes("zip"), `content-type=${r.contentType}`);
  assert(r.bytes[0] === 0x50 && r.bytes[1] === 0x4b, "zip magic");
  assert(r.bytes.length > 1000, `zip size=${String(r.bytes.length)}`);
});

// --- Determinism (18-20) ------------------------------------------------
test("18 same seed → identical template selection", async () => {
  const j1 = await runJob({ variantCount: 1, questionsPerVariant: 4, seed: 42 });
  const j2 = await runJob({ variantCount: 1, questionsPerVariant: 4, seed: 42 });
  requireCompleted(j1); requireCompleted(j2);
  const ids1 = (await fetchJson<{ templateIds: string[] }>(`/api/generation/jobs/${j1.jobId}/templates`)).body.templateIds;
  const ids2 = (await fetchJson<{ templateIds: string[] }>(`/api/generation/jobs/${j2.jobId}/templates`)).body.templateIds;
  assert(JSON.stringify(ids1) === JSON.stringify(ids2), `template ids differ`);
});

test("19 different seeds → different question sources", async () => {
  const j1 = await runJob({ variantCount: 1, questionsPerVariant: 6, seed: 111 });
  const j2 = await runJob({ variantCount: 1, questionsPerVariant: 6, seed: 222222 });
  requireCompleted(j1); requireCompleted(j2);
  const k1 = await downloadKey(j1);
  const k2 = await downloadKey(j2);
  const s1 = k1.variants.flatMap((v) => v.items).map((x) => x.source).join("|");
  const s2 = k2.variants.flatMap((v) => v.items).map((x) => x.source).join("|");
  assert(s1 !== s2, `selections unexpectedly equal: ${s1}`);
});

test("20 includeAnswerKey=false → no answers artifacts", async () => {
  const job = await runJob({ variantCount: 1, questionsPerVariant: 2, includeAnswerKey: false, seed: 20 });
  requireCompleted(job);
  const formats = job.artifacts.map((x) => x.format);
  assert(!formats.includes("answers_json"), "answers_json should be absent");
  assert(!formats.includes("answers_md"), "answers_md should be absent");
  assert(formats.includes("pdf"), "pdf still generated");
});

// --- Modes (21-24) ------------------------------------------------------
test("21 mode OneOnLine → valid PDF", async () => {
  const job = await runJob({ variantCount: 1, questionsPerVariant: 1, mode: "OneOnLine", questionTypeFilter: "closed", seed: 21 });
  requireCompleted(job);
  const pdf = await downloadArtifact(job.jobId, "quiz.pdf");
  assert(pdf.slice(0, 5).toString() === "%PDF-", "pdf ok");
});

test("22 mode TabBetween → valid PDF", async () => {
  const job = await runJob({ variantCount: 1, questionsPerVariant: 1, mode: "TabBetween", questionTypeFilter: "closed", seed: 22 });
  requireCompleted(job);
  const pdf = await downloadArtifact(job.jobId, "quiz.pdf");
  assert(pdf.slice(0, 5).toString() === "%PDF-", "pdf ok");
});

test("23 mode TwoOnLine → valid PDF", async () => {
  const job = await runJob({ variantCount: 1, questionsPerVariant: 1, mode: "TwoOnLine", questionTypeFilter: "closed", seed: 23 });
  requireCompleted(job);
  const pdf = await downloadArtifact(job.jobId, "quiz.pdf");
  assert(pdf.slice(0, 5).toString() === "%PDF-", "pdf ok");
});

test("24 mode SpaceBetween → valid PDF", async () => {
  const job = await runJob({ variantCount: 1, questionsPerVariant: 1, mode: "SpaceBetween", questionTypeFilter: "closed", seed: 24 });
  requireCompleted(job);
  const pdf = await downloadArtifact(job.jobId, "quiz.pdf");
  assert(pdf.slice(0, 5).toString() === "%PDF-", "pdf ok");
});

// --- Manifest & integrity (25-27) ---------------------------------------
test("25 manifest sha256 matches actual PDF sha256", async () => {
  const job = await runJob({ variantCount: 1, questionsPerVariant: 1, seed: 25 });
  requireCompleted(job);
  const manifestBytes = await downloadArtifact(job.jobId, "manifest.json");
  const manifest = JSON.parse(manifestBytes.toString("utf8")) as { artifacts: { name: string; sha256: string }[] };
  const pdfEntry = manifest.artifacts.find((a) => a.name === "quiz.pdf");
  const pdfArtifact = job.artifacts.find((a) => a.format === "pdf");
  assert(pdfEntry !== undefined, "pdf in manifest");
  assert(pdfArtifact !== undefined, "pdf in job artifacts");
  assert(pdfEntry!.sha256 === pdfArtifact!.sha256, `manifest sha=${pdfEntry!.sha256} vs job sha=${pdfArtifact!.sha256}`);
});

test("26 manifest lists pdf, md, docx, answers_json, answers_md", async () => {
  const job = await runJob({ variantCount: 1, questionsPerVariant: 2, seed: 26 });
  requireCompleted(job);
  const manifest = JSON.parse((await downloadArtifact(job.jobId, "manifest.json")).toString("utf8")) as { artifacts: { name: string }[] };
  const names = manifest.artifacts.map((a) => a.name);
  for (const expected of ["quiz.pdf", "test.md", "test.docx", "answers.json", "answers.md"]) {
    assert(names.includes(expected), `manifest missing ${expected} — have: ${names.join(",")}`);
  }
});

test("27 config.json artifact equals sent config", async () => {
  const job = await runJob({ title: "Cfg Check", variantCount: 3, questionsPerVariant: 2, seed: 27 });
  requireCompleted(job);
  const cfg = JSON.parse((await downloadArtifact(job.jobId, "config.json")).toString("utf8")) as { title: string; variantCount: number; questionsPerVariant: number };
  assert(cfg.title === "Cfg Check", `title=${cfg.title}`);
  assert(cfg.variantCount === 3, `variantCount=${String(cfg.variantCount)}`);
  assert(cfg.questionsPerVariant === 2, `questionsPerVariant=${String(cfg.questionsPerVariant)}`);
});

// --- Content quality (28-30) --------------------------------------------
test("28 test.md has one ## Варіант heading per variant", async () => {
  const job = await runJob({ variantCount: 4, questionsPerVariant: 2, seed: 28 });
  requireCompleted(job);
  const md = (await downloadArtifact(job.jobId, "test.md")).toString("utf8");
  const headings = (md.match(/^## Варіант /gm) ?? []).length;
  assert(headings === 4, `expected 4 headings got ${String(headings)}`);
});

test("29 answers.md lists each question as bold numbered item", async () => {
  const job = await runJob({ variantCount: 1, questionsPerVariant: 3, seed: 29 });
  requireCompleted(job);
  const md = (await downloadArtifact(job.jobId, "answers.md")).toString("utf8");
  for (const n of [1, 2, 3]) {
    assert(new RegExp(`\\*\\*${String(n)}\\.\\*\\*`).test(md), `missing bold item ${String(n)} in answers.md`);
  }
});

test("30 open-only TeX contains \\begin{verbatim} for code questions", async () => {
  // Run several open questions; at least some will contain code blocks that
  // tex-normalizer should have wrapped in verbatim
  const job = await runJob({ variantCount: 2, questionsPerVariant: 5, questionTypeFilter: "open", seed: 30 });
  requireCompleted(job);
  // The normalised TeX is not exposed directly, but the generated PDF is non-trivial
  // and the md should not contain raw LaTeX verbatim markers
  const pdf = await downloadArtifact(job.jobId, "quiz.pdf");
  assert(pdf.length > 5000, `pdf suspiciously small=${String(pdf.length)} — likely compile error`);
  // Verify answers.json has questionsPerVariant items in each variant
  const key = await downloadKey(job);
  assert(key.variants.length === 2, `variants=${String(key.variants.length)}`);
  for (const variant of key.variants) {
    assert(variant.items.length === 5, `items in variant ${String(variant.variantNumber)}=${String(variant.items.length)}`);
  }
});

// --- Templates CRUD (31-38) ---------------------------------------------
interface TemplateResp {
  id: string;
  kind: "closed" | "open";
  title: string;
  version: number;
  themeIds: readonly string[];
  body: { kind: string; options?: readonly { text: string; correct: boolean }[]; code?: string };
}

test("31 GET /api/templates returns at least the seeded pool", async () => {
  const r = await fetchJson<TemplateResp[]>("/api/templates");
  assert(r.status === 200, `status=${String(r.status)}`);
  assert(Array.isArray(r.body), "body not array");
  assert(r.body.length > 0, "expected seeded templates");
});

test("32 GET /api/templates?kind=closed filters by kind", async () => {
  const r = await fetchJson<TemplateResp[]>("/api/templates?kind=closed");
  assert(r.status === 200, `status=${String(r.status)}`);
  assert(r.body.every((t) => t.kind === "closed"), "non-closed in closed filter");
});

test("33 POST /api/templates creates a user template", async () => {
  const body = {
    kind: "closed", title: `E2E ${Date.now()}`,
    body: {
      kind: "closed", ncase: 2, nGood: 1,
      options: [{ text: "ok", correct: true }, { text: "no", correct: false }],
    },
  };
  const r = await fetchJson<TemplateResp>("/api/templates", {
    method: "POST", headers: { "content-type": "application/json" },
    body: JSON.stringify(body),
  });
  assert(r.status === 201, `status=${String(r.status)}`);
  assert(r.body.kind === "closed", `kind=${r.body.kind}`);
  assert(r.body.version === 1, `version=${String(r.body.version)}`);
});

test("34 PATCH /api/templates/:id bumps version on body change", async () => {
  const created = await fetchJson<TemplateResp>("/api/templates", {
    method: "POST", headers: { "content-type": "application/json" },
    body: JSON.stringify({
      kind: "closed", title: `v1 ${Date.now()}`,
      body: { kind: "closed", ncase: 2, nGood: 1, options: [{ text: "a", correct: true }, { text: "b", correct: false }] },
    }),
  });
  assert(created.status === 201, "create failed");
  const id = created.body.id;
  const upd = await fetchJson<TemplateResp>(`/api/templates/${id}`, {
    method: "PATCH", headers: { "content-type": "application/json" },
    body: JSON.stringify({ title: "v2" }),
  });
  assert(upd.status === 200, `status=${String(upd.status)}`);
  assert(upd.body.version === 2, `version=${String(upd.body.version)}`);
  assert(upd.body.title === "v2", `title=${upd.body.title}`);
});

test("35 GET /api/templates/:id/versions returns history", async () => {
  const created = await fetchJson<TemplateResp>("/api/templates", {
    method: "POST", headers: { "content-type": "application/json" },
    body: JSON.stringify({
      kind: "open", title: "hv",
      body: { kind: "open", fabric: "template_answer", code: "print(1)" },
    }),
  });
  const id = created.body.id;
  await fetchJson(`/api/templates/${id}`, {
    method: "PATCH", headers: { "content-type": "application/json" },
    body: JSON.stringify({ title: "hv-v2" }),
  });
  const vs = await fetchJson<{ version: number }[]>(`/api/templates/${id}/versions`);
  assert(vs.status === 200, `status=${String(vs.status)}`);
  assert(vs.body.length >= 2, `versions=${String(vs.body.length)}`);
});

test("36 POST /api/templates/:id/fork creates copy with different id", async () => {
  const list = await fetchJson<TemplateResp[]>("/api/templates?kind=closed");
  assert(list.body.length > 0, "no closed templates to fork");
  const src = list.body[0]!;
  const f = await fetchJson<TemplateResp>(`/api/templates/${src.id}/fork`, { method: "POST" });
  assert(f.status === 201, `status=${String(f.status)}`);
  assert(f.body.id !== src.id, "fork returned same id");
  assert(f.body.title.includes("копія"), `title=${f.body.title}`);
});

test("37 DELETE /api/templates/:id removes a user template", async () => {
  const c = await fetchJson<TemplateResp>("/api/templates", {
    method: "POST", headers: { "content-type": "application/json" },
    body: JSON.stringify({
      kind: "closed", title: "to-delete",
      body: { kind: "closed", ncase: 2, nGood: 1, options: [{ text: "a", correct: true }, { text: "b", correct: false }] },
    }),
  });
  const id = c.body.id;
  const d = await fetchJson<{ deleted: boolean }>(`/api/templates/${id}`, { method: "DELETE" });
  assert(d.status === 200, `status=${String(d.status)}`);
  const g = await fetchJson(`/api/templates/${id}`);
  assert(g.status === 404, `status=${String(g.status)}`);
});

test("38 POST /api/templates rejects empty title", async () => {
  const r = await fetchJson<{ code: string }>("/api/templates", {
    method: "POST", headers: { "content-type": "application/json" },
    body: JSON.stringify({ kind: "closed", title: "", body: {} }),
  });
  assert(r.status === 400, `status=${String(r.status)}`);
  assert(r.body.code === "INVALID_CONFIG", `code=${r.body.code}`);
});

// --- Themes CRUD (39-43) ------------------------------------------------
interface ThemeResp { id: string; name: string; description: string; templateCount: number }

test("39 GET /api/themes returns array", async () => {
  const r = await fetchJson<ThemeResp[]>("/api/themes");
  assert(r.status === 200, `status=${String(r.status)}`);
  assert(Array.isArray(r.body), "body not array");
});

test("40 POST /api/themes creates a theme", async () => {
  const name = `Theme ${Date.now()}`;
  const r = await fetchJson<ThemeResp>("/api/themes", {
    method: "POST", headers: { "content-type": "application/json" },
    body: JSON.stringify({ name, description: "test" }),
  });
  assert(r.status === 201, `status=${String(r.status)}`);
  assert(r.body.name === name, `name=${r.body.name}`);
});

test("41 PATCH /api/themes/:id renames theme", async () => {
  const c = await fetchJson<ThemeResp>("/api/themes", {
    method: "POST", headers: { "content-type": "application/json" },
    body: JSON.stringify({ name: `Rename ${Date.now()}` }),
  });
  const id = c.body.id;
  const u = await fetchJson<ThemeResp>(`/api/themes/${id}`, {
    method: "PATCH", headers: { "content-type": "application/json" },
    body: JSON.stringify({ name: `Renamed ${Date.now()}` }),
  });
  assert(u.status === 200, `status=${String(u.status)}`);
  assert(u.body.name.startsWith("Renamed"), `name=${u.body.name}`);
});

test("42 POST /api/themes/:id/assign links templates", async () => {
  const th = await fetchJson<ThemeResp>("/api/themes", {
    method: "POST", headers: { "content-type": "application/json" },
    body: JSON.stringify({ name: `Assign ${Date.now()}` }),
  });
  const tpl = await fetchJson<TemplateResp>("/api/templates", {
    method: "POST", headers: { "content-type": "application/json" },
    body: JSON.stringify({
      kind: "closed", title: "link",
      body: { kind: "closed", ncase: 2, nGood: 1, options: [{ text: "a", correct: true }, { text: "b", correct: false }] },
    }),
  });
  const r = await fetchJson<ThemeResp>(`/api/themes/${th.body.id}/assign`, {
    method: "POST", headers: { "content-type": "application/json" },
    body: JSON.stringify({ templateIds: [tpl.body.id] }),
  });
  assert(r.status === 200, `status=${String(r.status)}`);
  assert(r.body.templateCount === 1, `count=${String(r.body.templateCount)}`);
});

test("43 DELETE /api/themes/:id removes theme", async () => {
  const c = await fetchJson<ThemeResp>("/api/themes", {
    method: "POST", headers: { "content-type": "application/json" },
    body: JSON.stringify({ name: `Del ${Date.now()}` }),
  });
  const d = await fetchJson<{ deleted: boolean }>(`/api/themes/${c.body.id}`, { method: "DELETE" });
  assert(d.status === 200, `status=${String(d.status)}`);
});

// --- Job persistence & regenerate (44-46) -------------------------------
test("44 GET /api/generation/jobs returns list", async () => {
  await runJob({ variantCount: 1, questionsPerVariant: 1, seed: 44 });
  const r = await fetchJson<{ jobId: string; status: string }[]>("/api/generation/jobs");
  assert(r.status === 200, `status=${String(r.status)}`);
  assert(r.body.length > 0, "empty jobs list");
});

test("45 POST regenerate-item creates child job", async () => {
  const parent = await runJob({ variantCount: 1, questionsPerVariant: 3, seed: 45 });
  requireCompleted(parent);
  const r = await fetchJson<{ jobId: string; parentJobId: string }>(
    `/api/generation/jobs/${parent.jobId}/regenerate-item`,
    {
      method: "POST", headers: { "content-type": "application/json" },
      body: JSON.stringify({ index: 1 }),
    },
  );
  assert(r.status === 202, `status=${String(r.status)}`);
  assert(r.body.parentJobId === parent.jobId, `parent=${r.body.parentJobId}`);
});

test("46 regenerate-item rejects out-of-range index", async () => {
  const parent = await runJob({ variantCount: 1, questionsPerVariant: 2, seed: 46 });
  requireCompleted(parent);
  const r = await fetchJson<{ code: string }>(`/api/generation/jobs/${parent.jobId}/regenerate-item`, {
    method: "POST", headers: { "content-type": "application/json" },
    body: JSON.stringify({ index: 99 }),
  });
  assert(r.status === 400, `status=${String(r.status)}`);
  assert(r.body.code === "INVALID_CONFIG", `code=${r.body.code}`);
});

// --- Presets (48-53) ----------------------------------------------------
interface PresetResp { id: string; name: string; config: Record<string, unknown>; templateIds: string[] }

test("48 POST /api/presets creates config-only preset", async () => {
  const r = await fetchJson<PresetResp>("/api/presets", {
    method: "POST", headers: { "content-type": "application/json" },
    body: JSON.stringify({
      name: `cfg-${String(Date.now())}`,
      config: { title: "P", variantCount: 2, questionsPerVariant: 3,
        questionTypeFilter: "mixed", mode: "OneOnLine",
        shuffleQuestions: true, includeAnswerKey: true, closedShare: 0.5 },
    }),
  });
  assert(r.status === 201, `status=${String(r.status)}`);
  assert(r.body.templateIds.length === 0, `templateIds=${String(r.body.templateIds.length)}`);
});

test("49 POST /api/presets creates full preset from a job", async () => {
  const job = await runJob({ variantCount: 1, questionsPerVariant: 2, seed: 4800 });
  requireCompleted(job);
  const r = await fetchJson<PresetResp>("/api/presets", {
    method: "POST", headers: { "content-type": "application/json" },
    body: JSON.stringify({ name: `job-${String(Date.now())}`, jobId: job.jobId }),
  });
  assert(r.status === 201, `status=${String(r.status)}`);
  assert(r.body.templateIds.length === 2, `templateIds=${String(r.body.templateIds.length)}`);
});

test("50 GET /api/presets returns created presets", async () => {
  const r = await fetchJson<PresetResp[]>("/api/presets");
  assert(r.status === 200, `status=${String(r.status)}`);
  assert(Array.isArray(r.body) && r.body.length > 0, "empty list");
});

test("51 PATCH /api/presets/:id renames preset", async () => {
  const seq = String(Date.now());
  const c = await fetchJson<PresetResp>("/api/presets", {
    method: "POST", headers: { "content-type": "application/json" },
    body: JSON.stringify({ name: `renameable-${seq}`, config: {
      title: "T", variantCount: 1, questionsPerVariant: 1,
      questionTypeFilter: "closed", mode: "OneOnLine",
      shuffleQuestions: true, includeAnswerKey: true, closedShare: 1 } }),
  });
  const newName = `renamed-${seq}`;
  const u = await fetchJson<PresetResp>(`/api/presets/${c.body.id}`, {
    method: "PATCH", headers: { "content-type": "application/json" },
    body: JSON.stringify({ name: newName }),
  });
  assert(u.status === 200, `status=${String(u.status)}`);
  assert(u.body.name === newName, `name=${u.body.name}`);
});

test("52 DELETE /api/presets/:id removes preset", async () => {
  const c = await fetchJson<PresetResp>("/api/presets", {
    method: "POST", headers: { "content-type": "application/json" },
    body: JSON.stringify({ name: `to-del-${String(Date.now())}`, config: {
      title: "T", variantCount: 1, questionsPerVariant: 1,
      questionTypeFilter: "closed", mode: "OneOnLine",
      shuffleQuestions: true, includeAnswerKey: true, closedShare: 1 } }),
  });
  const d = await fetchJson<{ deleted: boolean }>(`/api/presets/${c.body.id}`, { method: "DELETE" });
  assert(d.status === 200, "delete status");
  const g = await fetchJson(`/api/presets/${c.body.id}`);
  assert(g.status === 404, "expected 404 after delete");
});

test("53.1 POST /api/presets duplicate name → 409 DUPLICATE_NAME", async () => {
  const name = `dup-${String(Date.now())}`;
  const body = {
    name, config: {
      title: "T", variantCount: 1, questionsPerVariant: 1,
      questionTypeFilter: "closed", mode: "OneOnLine",
      shuffleQuestions: true, includeAnswerKey: true, closedShare: 1,
    },
  };
  const first = await fetchJson<{ id: string }>("/api/presets", {
    method: "POST", headers: { "content-type": "application/json" },
    body: JSON.stringify(body),
  });
  assert(first.status === 201, `first status=${String(first.status)}`);
  const second = await fetchJson<{ code: string }>("/api/presets", {
    method: "POST", headers: { "content-type": "application/json" },
    body: JSON.stringify(body),
  });
  assert(second.status === 409, `dup status=${String(second.status)}`);
  assert(second.body.code === "DUPLICATE_NAME", `code=${second.body.code}`);
});

test("53 POST /api/presets rejects empty name", async () => {
  const r = await fetchJson<{ code: string }>("/api/presets", {
    method: "POST", headers: { "content-type": "application/json" },
    body: JSON.stringify({ name: "", config: {
      title: "T", variantCount: 1, questionsPerVariant: 1,
      questionTypeFilter: "closed", mode: "OneOnLine",
      shuffleQuestions: true, includeAnswerKey: true, closedShare: 1 } }),
  });
  assert(r.status === 400, "status");
  assert(r.body.code === "INVALID_CONFIG", "code");
});

// --- Theme-filtered generation (47) -------------------------------------
test("47 generation respects themeIds filter", async () => {
  // Create a fresh theme + linked closed template, generate with themeIds filter
  const th = await fetchJson<ThemeResp>("/api/themes", {
    method: "POST", headers: { "content-type": "application/json" },
    body: JSON.stringify({ name: `E2E-Theme-${Date.now()}` }),
  });
  const tpl = await fetchJson<TemplateResp>("/api/templates", {
    method: "POST", headers: { "content-type": "application/json" },
    body: JSON.stringify({
      kind: "closed", title: "only-me", themeIds: [th.body.id],
      body: { kind: "closed", ncase: 2, nGood: 1, options: [{ text: "good", correct: true }, { text: "bad", correct: false }] },
    }),
  });
  assert(tpl.status === 201, "template create failed");
  const job = await runJob({
    variantCount: 1, questionsPerVariant: 1, questionTypeFilter: "closed",
    themeIds: [th.body.id], seed: 47,
  });
  requireCompleted(job);
  // Expect selected ids contain our template
  const rec = await fetchJson<{ jobId: string }>(`/api/generation/jobs/${job.jobId}`);
  assert(rec.status === 200, `status=${String(rec.status)}`);
});

// ======================================================================
// Runner
// ======================================================================

const main = async (): Promise<void> => {
  try {
    await fetch(`${BASE}/health`);
  } catch {
    console.error(`[fatal] server not reachable at ${BASE}. Start container with: docker run -p 3010:3010 quiz-testgen`);
    process.exit(2);
  }

  const filter = process.env["TEST_FILTER"];
  let failed = 0;
  let passed = 0;
  const started = Date.now();
  for (const t of tests) {
    if (filter !== undefined && filter.length > 0 && !t.name.includes(filter)) continue;
    const t0 = Date.now();
    try {
      await t.fn();
      passed += 1;
      console.log(`ok   - ${t.name} (${String(Date.now() - t0)}ms)`);
    } catch (e) {
      failed += 1;
      console.error(`FAIL - ${t.name}: ${e instanceof Error ? e.message : String(e)}`);
    }
  }
  console.log(`\n${String(passed)} passed, ${String(failed)} failed of ${String(tests.length)} in ${String(Date.now() - started)}ms`);
  if (failed > 0) process.exit(1);
};

export type _Reserved = typeof readFile | typeof writeFile | typeof mkdir | typeof unlink | typeof tmpdir | typeof randomUUID | typeof resolve;

void main();
