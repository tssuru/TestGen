import { readFile, writeFile } from "node:fs/promises";

const escapeInTexttt = (s: string): string =>
  s
    .replace(/\\/g, "\\textbackslash{}")
    .replace(/[{}]/g, (c) => `\\${c}`)
    .replace(/[#$%&_]/g, (c) => `\\${c}`)
    .replace(/\^/g, "\\textasciicircum{}")
    .replace(/~/g, "\\textasciitilde{}")
    .replace(/"/g, "\"{}");

const OPTION_RE = /^\(\s*(\d+)\s*\)\s*(.*)$/;
const PROMPT_LINE_RE = /^\d+\.\s/;
const TRAILING_LATEX_RE = /^(.*?)(\s*)(\\par(?:\\vspace\{[^}]*\})?.*)$/;
const CODE_HINT_RE = /[(){};=<>\[\]]|\t|   /;

const collapseCodeBlocks = (lines: readonly string[]): string[] => {
  const out: string[] = [];
  let inCode = false;
  let buffer: string[] = [];
  for (const raw of lines) {
    const trimmed = raw.trim();
    if (trimmed === "%code") {
      if (inCode) {
        out.push("\\begingroup\\small");
        out.push("\\begin{Verbatim}[breaklines=true, breakanywhere=true]");
        for (const line of buffer) out.push(line);
        out.push("\\end{Verbatim}");
        out.push("\\endgroup");
        buffer = [];
        inCode = false;
      } else {
        inCode = true;
      }
      continue;
    }
    if (inCode) {
      buffer.push(raw);
    } else {
      out.push(raw);
    }
  }
  if (inCode) for (const line of buffer) out.push(line);
  return out;
};

const isCodeLine = (trimmed: string): boolean => {
  if (trimmed.length === 0) return false;
  if (trimmed.startsWith("\\")) return false;
  if (trimmed.startsWith("%")) return false;
  if (OPTION_RE.test(trimmed)) return false;
  if (PROMPT_LINE_RE.test(trimmed)) return false;
  return true;
};

const splitTrailingLatex = (lines: readonly string[]): string[] => {
  const out: string[] = [];
  for (const line of lines) {
    const m = TRAILING_LATEX_RE.exec(line);
    if (m === null) { out.push(line); continue; }
    const head = (m[1] ?? "").trimEnd();
    const tail = m[3] ?? "";
    if (head.length === 0 || head.startsWith("\\") || PROMPT_LINE_RE.test(head) || OPTION_RE.test(head)) {
      out.push(line);
    } else {
      out.push(head);
      out.push(tail);
    }
  }
  return out;
};

const wrapCodeInItem = (rawLines: string[]): string[] => {
  if (rawLines.some((l) => l.includes("\\begin{verbatim}") || l.includes("\\begin{Verbatim}"))) return rawLines;
  const lines = splitTrailingLatex(rawLines);
  const result: string[] = [];
  let i = 0;
  while (i < lines.length) {
    const line = lines[i]!;
    if (isCodeLine(line.trim())) {
      const block: string[] = [line];
      let j = i + 1;
      while (j < lines.length) {
        const next = lines[j]!;
        const nextTrimmed = next.trim();
        if (nextTrimmed.length === 0) {
          let k = j + 1;
          while (k < lines.length && lines[k]!.trim().length === 0) k++;
          if (k < lines.length && isCodeLine(lines[k]!.trim())) {
            block.push(...lines.slice(j, k));
            j = k;
          } else {
            break;
          }
          continue;
        }
        if (!isCodeLine(nextTrimmed)) break;
        block.push(next);
        j++;
      }
      const blockText = block.join("\n");
      const looksLikeCode = CODE_HINT_RE.test(blockText) || block.length >= 2;
      if (looksLikeCode) {
        result.push("\\begingroup\\small");
        result.push("\\begin{Verbatim}[breaklines=true, breakanywhere=true]");
        for (const cl of block) result.push(cl);
        result.push("\\end{Verbatim}");
        result.push("\\endgroup");
        i = j;
      } else {
        result.push(line);
        i++;
      }
    } else {
      result.push(line);
      i++;
    }
  }
  return result;
};

const detectInlineCodeBlocks = (lines: readonly string[]): string[] => {
  const out: string[] = [];
  let inItem = false;
  let itemBuf: string[] = [];
  for (const line of lines) {
    const trimmed = line.trim();
    if (trimmed === "%beginitem") {
      inItem = true;
      itemBuf = [];
      out.push(line);
      continue;
    }
    if (trimmed === "%enditem") {
      for (const l of wrapCodeInItem(itemBuf)) out.push(l);
      out.push(line);
      inItem = false;
      itemBuf = [];
      continue;
    }
    if (inItem) {
      itemBuf.push(line);
    } else {
      out.push(line);
    }
  }
  for (const l of itemBuf) out.push(l);
  return out;
};

const stripAnswerMarker = (s: string): string =>
  s.replace(/\s*%(?:good|bad)\s*$/i, "").trimEnd();

const looksLikePreEscapedLatex = (s: string): boolean =>
  /\\(?:code|textbf|textit|texttt|_|\{|\}|,|&|%|\$|\\)/.test(s);

const wrapOptions = (lines: readonly string[]): string[] =>
  lines.map((line) => {
    const match = OPTION_RE.exec(line);
    if (match === null) return line;
    const number = match[1] ?? "";
    const rawText = stripAnswerMarker((match[2] ?? "").trim());
    if (rawText.length === 0) return line;
    if (looksLikePreEscapedLatex(rawText)) {
      return `\\textbf{(${number})}~${rawText}\\par`;
    }
    return `\\textbf{(${number})}~\\texttt{${escapeInTexttt(rawText)}}\\par`;
  });

export const normalizeTex = async (path: string): Promise<void> => {
  const source = await readFile(path, "utf8");
  const lines = source.split("\n");
  const withExplicitCode = collapseCodeBlocks(lines);
  const withInlineCode = detectInlineCodeBlocks(withExplicitCode);
  const withOptions = wrapOptions(withInlineCode);
  await writeFile(path, withOptions.join("\n"), "utf8");
};
