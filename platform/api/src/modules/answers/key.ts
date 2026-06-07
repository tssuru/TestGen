import { readFile, writeFile } from "node:fs/promises";
import { resolve } from "node:path";
import type { GenerationConfig } from "@quiz/contracts";
import type { Question } from "../generation/pool";

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

interface VariantAnswers {
  readonly variantNumber: number;
  readonly items: readonly AnswerItem[];
}

interface AnswerKey {
  readonly title: string;
  readonly generatedAt: string;
  readonly variantCount: number;
  readonly questionsPerVariant: number;
  readonly variants: readonly VariantAnswers[];
}

const OPTION_RE = /^\(\s*(\d+)\s*\)\s*(.+)$/;
const ANSWER_MARKER_RE = /\s*%(?:good|bad)\s*$/i;

const stripAnswerMarker = (s: string): string =>
  s.replace(ANSWER_MARKER_RE, "").trimEnd();

const readGoodLinesSet = async (path: string): Promise<ReadonlySet<string>> => {
  try {
    const text = await readFile(path, "utf8");
    const lines = text.split(/\r?\n/).map((l) => l.trim()).filter((l) => l.length > 0);
    const hasMarkers = lines.some((l) => ANSWER_MARKER_RE.test(l));
    const goodOnly = hasMarkers ? lines.filter((l) => /%good\s*$/i.test(l)) : lines;
    return new Set(goodOnly.map(stripAnswerMarker));
  } catch {
    return new Set();
  }
};

const stripLatex = (s: string): string =>
  s
    .replace(/\\textbf\{([^}]*)\}/g, "$1")
    .replace(/\\textit\{([^}]*)\}/g, "$1")
    .replace(/\\texttt\{([^}]*)\}/g, "$1")
    .replace(/\\[a-zA-Z]+\{([^}]*)\}/g, "$1")
    .replace(/\\par/g, "")
    .replace(/\{|\}/g, "")
    .trim();

const splitBlocks = (source: string, startMarker: string, endMarker: string): string[] => {
  const out: string[] = [];
  const lines = source.split("\n");
  let inside = false;
  let buf: string[] = [];
  for (const line of lines) {
    const t = line.trim();
    if (t === startMarker) { inside = true; buf = []; continue; }
    if (t === endMarker) { if (inside) out.push(buf.join("\n")); inside = false; continue; }
    if (inside) buf.push(line);
  }
  return out;
};

const parseItem = (raw: string, selectedSource: string, goodSet: ReadonlySet<string>): Omit<AnswerItem, "index" | "source" | "type"> => {
  const lines = raw.split("\n");
  const options: AnswerOption[] = [];
  const promptLines: string[] = [];
  const codeLines: string[] = [];
  let inCode = false;
  let finishedPrompt = false;
  for (const rawLine of lines) {
    const trimmed = rawLine.trim();
    if (trimmed === "%code") { inCode = !inCode; continue; }
    if (inCode) { codeLines.push(rawLine); continue; }
    if (trimmed.length === 0 || trimmed.startsWith("%") || trimmed.startsWith("\\par\\vspace")) continue;
    const optMatch = OPTION_RE.exec(trimmed);
    if (optMatch !== null) {
      finishedPrompt = true;
      const num = Number(optMatch[1]);
      const txt = stripAnswerMarker((optMatch[2] ?? "").trim());
      options.push({ number: num, text: txt, correct: goodSet.has(txt) });
      continue;
    }
    if (!finishedPrompt) {
      promptLines.push(stripLatex(trimmed.replace(/^\d+\.\s*/, "")));
    }
  }
  const codeSnippet = codeLines.join("\n").trim();
  void selectedSource;
  return {
    prompt: promptLines.filter((l) => l.length > 0).join(" "),
    codeSnippet: codeSnippet.length > 0 ? codeSnippet : null,
    options,
  };
};

// When the C++ engine skips %beginitem/%enditem markers (happens with single-item variants),
// fall back to splitting the variant body by the per-item terminator \par\vspace{5mm}.
const splitItemsByTerminator = (block: string, expectedCount: number): string[] => {
  const lines = block.split("\n");
  const items: string[] = [];
  let buf: string[] = [];
  // Skip the variant header until the first question starts (N. <prompt>)
  let started = false;
  for (const raw of lines) {
    const trimmed = raw.trim();
    if (!started) {
      if (/^\d+\.\s/.test(trimmed) || /^\\textbf\{/.test(trimmed)) started = true;
      if (!started) continue;
    }
    if (/^\\par\\vspace\{[^}]*\}/.test(trimmed) || trimmed === "\\par\\vspace{5mm}") {
      if (buf.length > 0) items.push(buf.join("\n"));
      buf = [];
      continue;
    }
    buf.push(raw);
  }
  if (buf.length > 0) items.push(buf.join("\n"));
  return items.slice(0, expectedCount);
};

const parseVariants = async (
  texPath: string,
  workdir: string,
  selected: readonly Question[],
): Promise<readonly VariantAnswers[]> => {
  const source = await readFile(texPath, "utf8");
  const variantBlocks = splitBlocks(source, "%begin", "%end");
  const goodCache = new Map<string, ReadonlySet<string>>();
  const result: VariantAnswers[] = [];

  for (let vi = 0; vi < variantBlocks.length; vi++) {
    const block = variantBlocks[vi] ?? "";
    let itemBlocks = splitBlocks(block, "%beginitem", "%enditem");
    if (itemBlocks.length === 0) {
      itemBlocks = splitItemsByTerminator(block, selected.length);
    }
    const items: AnswerItem[] = [];
    for (let qi = 0; qi < itemBlocks.length; qi++) {
      const q = selected[qi];
      if (q === undefined) continue;
      const raw = itemBlocks[qi] ?? "";
      let goodSet: ReadonlySet<string> = new Set();
      if (q.type === "closed") {
        const cached = goodCache.get(q.goodPath);
        if (cached !== undefined) {
          goodSet = cached;
        } else {
          const loaded = await readGoodLinesSet(resolve(workdir, q.goodPath));
          goodCache.set(q.goodPath, loaded);
          goodSet = loaded;
        }
      }
      const parsed = parseItem(raw, q.type === "closed" ? q.goodPath : q.fnamePath, goodSet);
      items.push({
        index: qi + 1,
        type: q.type,
        source: q.type === "closed" ? q.goodPath : q.fnamePath,
        ...parsed,
        prompt: q.promptText.length > 0 ? q.promptText : parsed.prompt,
      });
    }
    result.push({ variantNumber: vi + 1, items });
  }
  return result;
};

const toMarkdown = (artifact: AnswerKey): string => {
  const lines: string[] = [`# Ключ відповідей`, "", `**${artifact.title}**`, `Створено: ${artifact.generatedAt}`, ""];
  for (const variant of artifact.variants) {
    lines.push(`## Варіант ${String(variant.variantNumber)}`, "");
    for (const item of variant.items) {
      lines.push(`**${String(item.index)}.** ${item.prompt}`);
      if (item.codeSnippet !== null) {
        lines.push("```", item.codeSnippet, "```");
      }
      if (item.type === "closed") {
        const correct = item.options.filter((o) => o.correct);
        if (correct.length === 0) {
          lines.push(`_у цьому варіанті правильних відповідей не знайдено_`);
        } else {
          lines.push(`Правильні: ${correct.map((o) => `(${String(o.number)}) \`${o.text}\``).join(", ")}`);
        }
        lines.push("");
        for (const opt of item.options) {
          const mark = opt.correct ? "✓" : " ";
          lines.push(`- [${mark}] (${String(opt.number)}) \`${opt.text}\``);
        }
      } else {
        lines.push(`_відкрита відповідь — значення залежить від параметрів у шаблоні_`);
      }
      lines.push("");
    }
  }
  return lines.join("\n");
};

export const buildAnswerKey = async (
  jobDir: string,
  workdir: string,
  config: GenerationConfig,
  selected: readonly Question[],
): Promise<void> => {
  const texPath = resolve(jobDir, "quiz.tex");
  const variants = await parseVariants(texPath, workdir, selected);

  const artifact: AnswerKey = {
    title: config.title,
    generatedAt: new Date().toISOString(),
    variantCount: config.variantCount,
    questionsPerVariant: config.questionsPerVariant,
    variants,
  };

  await writeFile(resolve(jobDir, "answers.json"), JSON.stringify(artifact, null, 2), "utf8");
  await writeFile(resolve(jobDir, "answers.md"), toMarkdown(artifact), "utf8");
};
