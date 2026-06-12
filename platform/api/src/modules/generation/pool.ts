import { readdirSync, readFileSync, existsSync } from "node:fs";
import { resolve, relative, dirname } from "node:path";

export interface ClosedQuestion {
  readonly id: string;
  readonly type: "closed";
  readonly goodPath: string;
  readonly badPath: string;
  readonly ncase: number;
  readonly nGood: number;
  readonly before: string;
  readonly promptText: string;
}

export interface OpenQuestion {
  readonly id: string;
  readonly type: "open";
  readonly fabric: "template_answer" | "file_answer";
  readonly fnamePath: string;
  readonly before: string;
  readonly promptText: string;
  readonly imageDir?: string;
}

export type Question = ClosedQuestion | OpenQuestion;

const quizRoot = (): string =>
  process.env["QUIZ_ENGINE_WORKDIR"] ?? resolve(process.cwd(), "../../Quiz");

const walk = (dir: string, out: string[]): void => {
  for (const entry of readdirSync(dir, { withFileTypes: true })) {
    if (entry.name.startsWith(".")) continue;
    const full = resolve(dir, entry.name);
    if (entry.isDirectory()) walk(full, out);
    else if (entry.isFile() && entry.name.endsWith(".txt")) out.push(full);
  }
};

const toRel = (abs: string, root: string): string =>
  relative(root, abs).split("\\").join("/");

const hashId = (prefix: string, rel: string): string => {
  let h = 2166136261 >>> 0;
  for (let i = 0; i < rel.length; i++) {
    h ^= rel.charCodeAt(i);
    h = Math.imul(h, 16777619);
  }
  return `${prefix}:${(h >>> 0).toString(16).padStart(8, "0")}`;
};

const contentKey = (abs: string): string => {
  try {
    return readFileSync(abs, "utf8")
      .split("\n")
      .filter((l) => !l.trim().startsWith("//"))
      .join("\n")
      .replace(/\s+/g, " ")
      .trim();
  } catch {
    return "";
  }
};

const REF_PATTERNS: readonly RegExp[] = [
  /\[\d+\s+"([^"]+)"\]/g,
  /=\[\d+\s+([^"\]\s]+)\s*\]/g,
  /\{<file(?::\d+)?>\s+([^}]+)\}/g,
];

const readFileSafe = (abs: string): string => {
  try { return readFileSync(abs, "utf8"); } catch { return ""; }
};

const isTemplateSource = (content: string): boolean =>
  /<template>[\s\S]*?<\\template>/.test(content);

const isFabricFile = (content: string): boolean =>
  /<fabric>[\s\S]*?<\\fabric>/.test(content) && !isTemplateSource(content);

const validateTemplateSource = (absPath: string, root: string): boolean => {
  const content = readFileSafe(absPath);
  if (content.length === 0) return false;
  if (content.includes("\uFFFD")) return false;
  if (content.includes("xbad")) return false;
  for (const pattern of REF_PATTERNS) {
    for (const match of content.matchAll(pattern)) {
      const ref = (match[1] ?? "").trim();
      if (ref.length === 0 || ref.includes("\\")) return false;
      const refContent = readFileSafe(resolve(root, ref));
      if (refContent.trim().length === 0) return false;
    }
  }
  return true;
};

const strip = (s: string): string =>
  s.split("\n").map((l) => l.replace(/\/\/.*$/, "").trim()).filter((l) => l.length > 0).join("\n");

// Normalize CRLF and drop full-line // comments. Engine doc comments are Russian and
// may contain literal tag names (e.g. "// <before> - текст…"), which would otherwise
// mis-anchor extractTag and leak into titles.
const stripCommentLines = (s: string): string =>
  s.replace(/\r/g, "").split("\n").filter((l) => !/^\s*\/\//.test(l)).join("\n");

// Russian-specific letters that never occur in Ukrainian text
const RUSSIAN_RE = /[ыэъёЫЭЪЁ]/;

const extractTag = (body: string, tag: string): string | null => {
  const re = new RegExp(`<${tag}>([\\s\\S]*?)<\\\\${tag}>`);
  const m = body.match(re);
  return m === null ? null : (m[1] ?? "").trim();
};

const resolveFabricRef = (raw: string, fabricRelPath: string): string => {
  const cleaned = strip(raw).split("\n").join(" ").trim();
  if (cleaned.length === 0) return "";
  if (cleaned.startsWith("Scripts/") || cleaned.startsWith("/")) return cleaned;
  const fabricDir = fabricRelPath.split("/").slice(0, -1).join("/");
  return fabricDir.length > 0 ? `${fabricDir}/${cleaned}` : cleaned;
};

const stripEngineMarkers = (s: string): string =>
  s.replace(/%(?:beginitem|enditem|begin|end)\b[^\n]*/g, " ");

const beforeText = (beforeRaw: string | null, fallback: string): { before: string; promptText: string } => {
  if (beforeRaw === null || beforeRaw.trim().length === 0) {
    return { before: `\\textbf{${fallback}}\\par{ENDL}`, promptText: fallback };
  }
  const cleaned = stripEngineMarkers(beforeRaw)
    .split("\n")
    .map((l) => l.replace(/^\s*\/\/.*$/, "").trimEnd())
    .join("\n")
    .replace(/\\par\b/g, " ")
    .replace(/\{ENDL\}/g, " ")
    .replace(/\{TAB\}/g, " ")
    .replace(/\{SPACE\}/g, " ")
    .replace(/\\vspace\{[^}]*\}/g, " ")
    .replace(/\\textbf\{([^}]*)\}/g, "$1")
    .replace(/\\[a-zA-Z]+\{([^}]*)\}/g, "$1")
    .replace(/\\[a-zA-Z]+/g, " ")
    .replace(/\bverbatim\b/g, "")
    .replace(/\s+/g, " ")
    .trim();
  const promptText = cleaned.length > 0 && !RUSSIAN_RE.test(cleaned) ? cleaned : fallback;
  return { before: `\\textbf{${promptText}}\\par{ENDL}`, promptText };
};

const discoverFabric = (abs: string, root: string): Question | null => {
  const content = stripCommentLines(readFileSafe(abs));
  if (!isFabricFile(content) || content.includes("\uFFFD") || content.includes("xbad")) return null;

  const itemWrapperRe = /<item>[\s\S]*?<fabric>/;
  if (itemWrapperRe.test(content)) return null;

  const fabricMatch = content.match(/<fabric>([\s\S]*?)<\\fabric>/);
  if (fabricMatch === null) return null;
  const body = fabricMatch[1] ?? "";

  const typeMatch = body.match(/^\s*(check auto|template answer|file answer)\s*$/m);
  if (typeMatch === null) return null;
  const type = typeMatch[1] ?? "";

  const rel = toRel(abs, root);
  const before = extractTag(body, "before");

  if (type === "check auto") {
    const good = extractTag(body, "good");
    const bad = extractTag(body, "bad");
    const ncase = Number(extractTag(body, "ncase") ?? "4");
    const nGood = Number(extractTag(body, "nGood") ?? "2");
    if (good === null || bad === null) return null;
    const goodPath = resolveFabricRef(good, rel);
    const badPath = resolveFabricRef(bad, rel);
    if (!existsSync(resolve(root, goodPath)) || !existsSync(resolve(root, badPath))) return null;
    if (!Number.isFinite(ncase) || ncase < 1 || ncase > 100) return null;
    if (!Number.isFinite(nGood) || nGood < 0 || nGood > ncase) return null;
    const meta = beforeText(before, "Виберіть усі правильні твердження:");
    return {
      id: hashId("closed", rel),
      type: "closed",
      goodPath,
      badPath,
      ncase,
      nGood,
      before: meta.before,
      promptText: meta.promptText,
    };
  }

  if (type === "template answer" || type === "file answer") {
    const fname = extractTag(body, "fname");
    if (fname === null) return null;
    const fnamePath = resolveFabricRef(fname, rel);
    if (!existsSync(resolve(root, fnamePath))) return null;
    if (type === "template answer" && !validateTemplateSource(resolve(root, fnamePath), root)) return null;
    const meta = beforeText(before, "Що буде виведено за виконання фрагменту коду?");
    const imageDir = /(graphs|adjlist|bfs|dfs|bintree)/i.test(fnamePath)
      ? resolve(root, fnamePath, "..")
      : undefined;
    return {
      id: hashId("open", rel),
      type: "open",
      fabric: type === "template answer" ? "template_answer" : "file_answer",
      fnamePath,
      before: meta.before,
      promptText: meta.promptText,
      ...(imageDir !== undefined ? { imageDir } : {}),
    };
  }
  return null;
};

const defaultClosedPrompt = (goodPath: string): string => {
  const isLex = /\/(?:Lex|00Lex)\//.test(goodPath);
  const isSyntax = /\/00Syntax\//.test(goodPath);
  if (/\/01-good\.txt$/.test(goodPath)) return "Відмітити все, що є однією правильною лексемою:";
  if (/\/03-good\.txt$/.test(goodPath)) {
    if (isLex) return "Відмітити всі коректні оператори Python:";
    if (isSyntax) return "Відмітити все, що є коректним оператором C++:";
    return "Відмітити всі коректні оператори Python:";
  }
  if (/\/Lex\//.test(goodPath)) return "Відмітити все, що є правильним токеном Python:";
  return "Відмітити всі правильні варіанти:";
};

const defaultOpenPrompt = (fnamePath: string): string => {
  if (/(graphs|adjlist|bfs|dfs|bintree)/i.test(fnamePath)) {
    return "Дати відповідь на питання, що стосується зображеної структури:";
  }
  return "Що буде виведено за виконання фрагменту коду?";
};

const discoverByFilename = (files: readonly string[], root: string): Question[] => {
  const out: Question[] = [];
  for (const abs of files) {
    const rel = toRel(abs, root);
    if (rel.endsWith("-good.txt")) {
      const badAbs = abs.replace(/-good\.txt$/, "-bad.txt");
      const badRel = rel.replace(/-good\.txt$/, "-bad.txt");
      if (!existsSync(badAbs)) continue;
      if (!validateTemplateSource(abs, root) || !validateTemplateSource(badAbs, root)) continue;
      const prompt = defaultClosedPrompt(rel);
      out.push({
        id: hashId("closed", rel),
        type: "closed",
        goodPath: rel,
        badPath: badRel,
        ncase: 4,
        nGood: 2,
        before: `\\textbf{${prompt}}\\par{ENDL}`,
        promptText: prompt,
      });
      continue;
    }
    const isOpen = rel.endsWith("-f.txt") || rel.endsWith("/f.txt");
    if (!isOpen) continue;
    if (!validateTemplateSource(abs, root)) continue;
    const content = readFileSafe(abs);
    const hasImage = /\.(png|jpg|pdf)\}/.test(content);
    const prompt = defaultOpenPrompt(rel);
    out.push({
      id: hashId("open", rel),
      type: "open",
      fabric: "template_answer",
      fnamePath: rel,
      before: `\\textbf{${prompt}}\\par{ENDL}`,
      promptText: prompt,
      ...(hasImage ? { imageDir: resolve(abs, "..") } : {}),
    });
  }
  return out;
};

let cached: readonly Question[] | null = null;

export const loadPool = (): readonly Question[] => {
  if (cached !== null) return cached;
  const root = quizRoot();
  const scripts = resolve(root, "Scripts");
  if (!existsSync(scripts)) {
    cached = [];
    return cached;
  }
  const files: string[] = [];
  walk(scripts, files);
  files.sort();

  const fabricQuestions: Question[] = [];
  for (const abs of files) {
    const q = discoverFabric(abs, root);
    if (q !== null) fabricQuestions.push(q);
  }

  const filenameQuestions = discoverByFilename(files, root);

  const all = [...fabricQuestions, ...filenameQuestions];
  const byKey = new Map<string, Question>();
  for (const q of all) {
    const key = q.type === "closed"
      ? `c:${contentKey(resolve(root, q.goodPath))}\x00${contentKey(resolve(root, q.badPath))}`
      : `o:${contentKey(resolve(root, q.fnamePath))}`;
    if (key.length <= 2) continue;
    if (!byKey.has(key)) byKey.set(key, q);
  }

  cached = [...byKey.values()];
  const closed = cached.filter((q) => q.type === "closed").length;
  const open = cached.filter((q) => q.type === "open").length;
  console.info(`[pool] closed=${closed} open=${open} (fabric=${fabricQuestions.length} filename=${filenameQuestions.length})`);
  return cached;
};

export const poolStats = (themeIds?: readonly string[]): { closedCount: number; openCount: number } => {
  // Prefer DB stats when available (after seed runs); fall back to filesystem scan.
  try {
    // Lazy import to avoid a circular dependency during the db->generation boot sequence.
    const { getRepositories } = require("../db") as typeof import("../db");
    const byKind = getRepositories().templates.countByKind(themeIds);
    if (byKind.closed + byKind.open > 0 || (themeIds !== undefined && themeIds.length > 0)) {
      return { closedCount: byKind.closed, openCount: byKind.open };
    }
  } catch {
    // swallow — fall back to filesystem pool stats
  }
  const pool = loadPool();
  return {
    closedCount: pool.filter((q) => q.type === "closed").length,
    openCount: pool.filter((q) => q.type === "open").length,
  };
};

void dirname;
