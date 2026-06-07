import { readFileSync } from "node:fs";
import { resolve } from "node:path";
import type { ClosedTemplateBody, OpenTemplateBody, TemplateOption } from "@quiz/contracts";
import { loadPool, type Question } from "../generation/pool";
import type { Repositories } from "./index";

const THEME_RULES: ReadonlyArray<readonly [RegExp, string]> = [
  [/graphs|adjlist|bfs|dfs|traversals/i, "Графи"],
  [/bintree|tree_bases|trees_exp/i, "Бінарні дерева"],
  [/recursion|recurs/i, "Рекурсія"],
  [/00?syntax|lex/i, "Синтаксис та лексика"],
  [/setops|sets/i, "Множини"],
  [/classes|class/i, "Класи та ООП"],
  [/log\d+|logic/i, "Логічні вирази"],
  [/pointer|pass/i, "Вказівники"],
  [/paros|combinator/i, "Комбінаторика"],
  [/cond|loop|cycle|iter/i, "Цикли та умови"],
  [/string|str\b/i, "Рядки та текст"],
  [/file|io/i, "Файли та ввід/вивід"],
  [/func|proc/i, "Функції"],
  [/c\+\+|cpp/i, "C++"],
  [/except/i, "Винятки"],
];

const FALLBACK_THEME = "Базові задачі";

const ANSWER_MARKER_RE = /\s*%(?:good|bad)\s*$/i;
const stripMarker = (s: string): string => s.replace(ANSWER_MARKER_RE, "").trimEnd();

// Templates that cause the C++ engine to abort at runtime (missing references,
// undefined classes, etc.) — skipped during seed to avoid PDF compilation failures.
const BROKEN_IMPORTED_TEMPLATES: ReadonlySet<string> = new Set([
  "Scripts/2020/Mod2020_3/Classes/02-f.txt",
  "Scripts/2019/MKRIOD2019/02-01-t.txt",
]);

const parseOptionsFile = (abs: string, markCorrect: boolean): TemplateOption[] => {
  try {
    const content = readFileSync(abs, "utf8");
    const lines = content.split(/\r?\n/).map((l) => l.trim()).filter((l) => l.length > 0);
    const hasMarkers = lines.some((l) => ANSWER_MARKER_RE.test(l));
    return lines.map((l) => ({
      text: stripMarker(l),
      correct: hasMarkers ? /%good\s*$/i.test(l) : markCorrect,
    }));
  } catch {
    return [];
  }
};

const detectThemeName = (sourcePath: string): string => {
  for (const [re, name] of THEME_RULES) {
    if (re.test(sourcePath)) return name;
  }
  return FALLBACK_THEME;
};

const readOpenCode = (abs: string): string => {
  try { return readFileSync(abs, "utf8"); } catch { return ""; }
};

export const seedFromFilesystem = (repos: Repositories, workdir: string): { imported: number; themes: number } => {
  const questions: readonly Question[] = loadPool();
  let imported = 0;
  const themeCache = new Map<string, string>();

  const ensureTheme = (name: string): string => {
    const cached = themeCache.get(name);
    if (cached !== undefined) return cached;
    const t = repos.themes.create({ name });
    themeCache.set(name, t.id);
    return t.id;
  };

  for (const q of questions) {
    const sourcePath = q.type === "closed" ? q.goodPath : q.fnamePath;
    if (BROKEN_IMPORTED_TEMPLATES.has(sourcePath)) continue;
    const themeName = detectThemeName(sourcePath);
    const themeIds = [ensureTheme(themeName)];

    if (q.type === "closed") {
      const goodAbs = resolve(workdir, q.goodPath);
      const badAbs = resolve(workdir, q.badPath);
      const goodOptions = parseOptionsFile(goodAbs, true);
      const badOptions = parseOptionsFile(badAbs, false);
      const options = [...goodOptions, ...badOptions];
      if (options.length === 0) continue;
      const body: ClosedTemplateBody = {
        kind: "closed",
        options,
        ncase: q.ncase,
        nGood: q.nGood,
        imagePaths: [],
        sourceGoodPath: q.goodPath,
        sourceBadPath: q.badPath,
      };
      const created = repos.templates.create({ kind: "closed", title: q.promptText, body, themeIds }, "imported");
      imported++;
      // Ensure theme assignment even on dedup returns (imported create may return existing)
      if (themeIds.length > 0 && created.themeIds.length === 0) {
        repos.templates.update(created.id, { themeIds });
      }
    } else {
      const codeAbs = resolve(workdir, q.fnamePath);
      const code = readOpenCode(codeAbs);
      if (code.length === 0 || code.includes("�")) continue;
      const body: OpenTemplateBody = {
        kind: "open",
        fabric: q.fabric,
        code,
        imagePaths: q.imageDir !== undefined ? [q.imageDir] : [],
        sourceFnamePath: q.fnamePath,
      };
      const created = repos.templates.create({ kind: "open", title: q.promptText, body, themeIds }, "imported");
      imported++;
      if (themeIds.length > 0 && created.themeIds.length === 0) {
        repos.templates.update(created.id, { themeIds });
      }
    }
  }

  return { imported, themes: themeCache.size };
};

export const seedIfEmpty = (repos: Repositories, workdir: string): { imported: number; themes: number } | null => {
  if (repos.templates.count() > 0) return null;
  console.info("[seed] database is empty, importing pool from filesystem");
  const stats = seedFromFilesystem(repos, workdir);
  console.info(`[seed] imported=${stats.imported} themes=${stats.themes}`);
  return stats;
};
