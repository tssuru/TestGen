import type {
  ClosedTemplateBody, OpenTemplateBody, TemplateBody, TemplateCreateInput,
  TemplateKind, TemplateUpdateInput, ThemeCreateInput, ThemeUpdateInput, TemplateOption,
} from "@quiz/contracts";

const assertString = (v: unknown, field: string, maxLen = 2000): string => {
  if (typeof v !== "string") throw new Error(`${field}: must be a string`);
  if (v.length === 0) throw new Error(`${field}: must be non-empty`);
  if (v.length > maxLen) throw new Error(`${field}: exceeds ${String(maxLen)} chars`);
  return v;
};

const assertOptionalString = (v: unknown, field: string, maxLen = 2000): string | undefined => {
  if (v === undefined || v === null) return undefined;
  if (typeof v !== "string") throw new Error(`${field}: must be a string`);
  if (v.length > maxLen) throw new Error(`${field}: exceeds ${String(maxLen)} chars`);
  return v;
};

const assertIntInRange = (v: unknown, field: string, lo: number, hi: number): number => {
  if (typeof v !== "number" || !Number.isFinite(v) || !Number.isInteger(v))
    throw new Error(`${field}: must be integer`);
  if (v < lo || v > hi) throw new Error(`${field}: must be within [${String(lo)},${String(hi)}]`);
  return v;
};

const assertStringArray = (v: unknown, field: string): string[] => {
  if (!Array.isArray(v)) throw new Error(`${field}: must be an array`);
  return v.map((x, i) => {
    if (typeof x !== "string") throw new Error(`${field}[${String(i)}]: must be a string`);
    return x;
  });
};

const validateOption = (v: unknown, i: number): TemplateOption => {
  if (typeof v !== "object" || v === null) throw new Error(`option[${String(i)}]: must be an object`);
  const obj = v as Record<string, unknown>;
  const text = assertString(obj["text"], `option[${String(i)}].text`, 2000);
  const correct = typeof obj["correct"] === "boolean" ? obj["correct"] : false;
  return { text, correct };
};

const validateBody = (kind: TemplateKind, raw: unknown): TemplateBody => {
  if (typeof raw !== "object" || raw === null) throw new Error("body: must be an object");
  const obj = raw as Record<string, unknown>;
  if (kind === "closed") {
    if (obj["kind"] !== "closed") throw new Error("body.kind: must be 'closed'");
    const optsRaw = obj["options"];
    if (!Array.isArray(optsRaw) || optsRaw.length < 2)
      throw new Error("body.options: must contain at least 2 items");
    const options = optsRaw.map(validateOption);
    if (!options.some((o) => o.correct)) throw new Error("body.options: at least one correct option required");
    const ncase = assertIntInRange(obj["ncase"] ?? options.length, "body.ncase", 1, 50);
    const nGood = assertIntInRange(obj["nGood"] ?? Math.max(1, Math.floor(ncase / 2)), "body.nGood", 0, ncase);
    const imagePaths = obj["imagePaths"] === undefined ? [] : assertStringArray(obj["imagePaths"], "body.imagePaths");
    const body: ClosedTemplateBody = { kind: "closed", options, ncase, nGood, imagePaths };
    return body;
  }
  // open
  if (obj["kind"] !== "open") throw new Error("body.kind: must be 'open'");
  const fabric = obj["fabric"];
  if (fabric !== "template_answer" && fabric !== "file_answer")
    throw new Error("body.fabric: must be 'template_answer' or 'file_answer'");
  const code = assertString(obj["code"], "body.code", 50_000);
  const imagePaths = obj["imagePaths"] === undefined ? [] : assertStringArray(obj["imagePaths"], "body.imagePaths");
  const body: OpenTemplateBody = { kind: "open", fabric, code, imagePaths };
  return body;
};

export const validateTemplateCreate = (raw: unknown): TemplateCreateInput => {
  if (typeof raw !== "object" || raw === null) throw new Error("payload must be an object");
  const obj = raw as Record<string, unknown>;
  const kind = obj["kind"];
  if (kind !== "closed" && kind !== "open") throw new Error("kind: must be 'closed' or 'open'");
  const title = assertString(obj["title"], "title", 500);
  const body = validateBody(kind, obj["body"]);
  const themeIds = obj["themeIds"] === undefined ? undefined : assertStringArray(obj["themeIds"], "themeIds");
  return themeIds === undefined ? { kind, title, body } : { kind, title, body, themeIds };
};

export const validateTemplateUpdate = (raw: unknown, kind: TemplateKind): TemplateUpdateInput => {
  if (typeof raw !== "object" || raw === null) throw new Error("payload must be an object");
  const obj = raw as Record<string, unknown>;
  const patch: {
    title?: string;
    body?: TemplateBody;
    themeIds?: readonly string[];
  } = {};
  if (obj["title"] !== undefined) patch.title = assertString(obj["title"], "title", 500);
  if (obj["body"] !== undefined) patch.body = validateBody(kind, obj["body"]);
  if (obj["themeIds"] !== undefined) patch.themeIds = assertStringArray(obj["themeIds"], "themeIds");
  return patch;
};

export const validateThemeCreate = (raw: unknown): ThemeCreateInput => {
  if (typeof raw !== "object" || raw === null) throw new Error("payload must be an object");
  const obj = raw as Record<string, unknown>;
  const name = assertString(obj["name"], "name", 120);
  const description = assertOptionalString(obj["description"], "description", 2000);
  return description === undefined ? { name } : { name, description };
};

export const validateThemeUpdate = (raw: unknown): ThemeUpdateInput => {
  if (typeof raw !== "object" || raw === null) throw new Error("payload must be an object");
  const obj = raw as Record<string, unknown>;
  const patch: { name?: string; description?: string } = {};
  if (obj["name"] !== undefined) patch.name = assertString(obj["name"], "name", 120);
  if (obj["description"] !== undefined) {
    const d = assertOptionalString(obj["description"], "description", 2000);
    if (d !== undefined) patch.description = d;
  }
  return patch;
};
