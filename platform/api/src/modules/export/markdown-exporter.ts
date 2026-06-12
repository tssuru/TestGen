import { readFile, writeFile } from "node:fs/promises";
import { resolve } from "node:path";

interface ParsedOption {
  readonly number: number;
  readonly text: string;
}

interface ParsedQuestion {
  readonly index: number;
  readonly lines: readonly string[];
  readonly options: readonly ParsedOption[];
  readonly codeBlock: string | null;
}

interface ParsedVariant {
  readonly number: number;
  readonly questions: readonly ParsedQuestion[];
}

const OPTION_RE = /^\(\s*(\d+)\s*\)\s*(.+)$/;

const stripLatex = (line: string): string => {
  let s = line
    .replace(/\$\$[\s\S]*?\$\$/g, "")
    .replace(/\$([^$\n]+)\$/g, "$1")
    .replace(/~/g, " ")
    .replace(/\\begin\{[^}]+\}(?:\[[^\]]*\])?/g, "")
    .replace(/\\end\{[^}]+\}/g, "")
    .replace(/\\textbf\{([^}]*)\}/g, "$1")
    .replace(/\\textit\{([^}]*)\}/g, "$1")
    .replace(/\\No/g, "№")
    .replace(/\\par/g, "")
    .replace(/\\adjustimage\{(?:[^{}]|\{[^{}]*\})*\}\{[^{}]*\}/g, "")
    .replace(/\\[hv]space\*?\{[^}]+\}/g, "")
    .replace(/\\newpage/g, "")
    .replace(/\\-/g, "")
    .replace(/\\_/g, "_")
    .replace(/\\[a-zA-Z]+\[[^\]]*\]\{[^}]*\}/g, "")
    .replace(/\\[a-zA-Z]+\{([^}]*)\}/g, "$1");
  let prev = "";
  while (prev !== s) { prev = s; s = s.replace(/\{[^{}]*\}/g, ""); }
  return s
    .replace(/\\[a-zA-Z]+/g, "")
    .replace(/\\[{}]/g, "")
    .replace(/[{}]/g, "")
    .replace(/^\d+\.\s*/, "")
    .trim();
};

const splitVariantBlocks = (source: string): readonly string[] => {
  const results: string[] = [];
  const lines = source.split("\n");
  let current: string[] = [];
  let inside = false;

  for (const line of lines) {
    const trimmed = line.trim();
    if (trimmed === "%begin") {
      inside = true;
      current = [];
      continue;
    }
    if (trimmed === "%end") {
      if (inside) results.push(current.join("\n"));
      inside = false;
      continue;
    }
    if (inside) current.push(line);
  }

  return results;
};

const splitItemBlocks = (block: string): readonly string[] => {
  const results: string[] = [];
  const lines = block.split("\n");
  let current: string[] = [];
  let inside = false;

  for (const line of lines) {
    const trimmed = line.trim();
    if (trimmed === "%beginitem") {
      inside = true;
      current = [];
      continue;
    }
    if (trimmed === "%enditem") {
      if (inside) results.push(current.join("\n"));
      inside = false;
      continue;
    }
    if (inside) current.push(line);
  }

  if (results.length > 0) return results;

  // Fallback for engine outputs without %beginitem markers (single-item variants):
  // split by \par\vspace{...} terminator, starting after the variant header.
  const fallback: string[] = [];
  let buf: string[] = [];
  let started = false;
  for (const raw of lines) {
    const trimmed = raw.trim();
    if (!started) {
      if (/^\d+\.\s/.test(trimmed) || /^\\textbf\{/.test(trimmed)) started = true;
      if (!started) continue;
    }
    if (/^\\par\\vspace\{/.test(trimmed)) {
      if (buf.length > 0) fallback.push(buf.join("\n"));
      buf = [];
      continue;
    }
    buf.push(raw);
  }
  if (buf.length > 0) fallback.push(buf.join("\n"));
  return fallback;
};

const parseVariants = (source: string): readonly ParsedVariant[] => {
  const blocks = splitVariantBlocks(source);
  const variants: ParsedVariant[] = [];

  for (let vi = 0; vi < blocks.length; vi++) {
    const block = blocks[vi];
    if (block === undefined) continue;
    const items = splitItemBlocks(block);
    const questions: ParsedQuestion[] = [];

    for (let qi = 0; qi < items.length; qi++) {
      const item = items[qi];
      if (item === undefined) continue;
      const rawLines = item
        .replace(/\\adjustimage\{(?:[^{}]|\{[^{}]*\})*\}\s*\{[^{}]*\}/g, "")
        .split("\n");
      const textLines: string[] = [];
      const options: ParsedOption[] = [];
      let codeBlock: string | null = null;

      let inCode = false;
      const codeLines: string[] = [];

      for (const rawLine of rawLines) {
        const trimmed = rawLine.trim();
        if (trimmed === "%code" || trimmed === "code") {
          if (inCode) {
            codeBlock = codeLines.join("\n");
            inCode = false;
          } else {
            inCode = true;
            codeLines.length = 0;
          }
          continue;
        }
        if (inCode) {
          codeLines.push(rawLine);
          continue;
        }
        if (trimmed.length === 0) continue;
        const optMatch = OPTION_RE.exec(trimmed);
        if (optMatch !== null) {
          options.push({ number: Number(optMatch[1]), text: optMatch[2]?.trim() ?? "" });
        } else {
          const cleaned = stripLatex(trimmed);
          if (cleaned.length > 0 && !cleaned.startsWith("%")) {
            textLines.push(cleaned);
          }
        }
      }

      questions.push({ index: qi + 1, lines: textLines, options, codeBlock });
    }

    variants.push({ number: vi + 1, questions });
  }

  return variants;
};

const renderPrint = (variants: readonly ParsedVariant[], title: string): string => {
  const result: string[] = [`# ${title}`, ""];

  for (const variant of variants) {
    result.push(`## Варіант ${variant.number}`, "");
    for (const q of variant.questions) {
      result.push(`**${q.index}.** ${q.lines.join(" ")}`, "");
      if (q.codeBlock !== null) {
        result.push("```cpp", q.codeBlock, "```", "");
      }
      if (q.options.length > 0) {
        for (const opt of q.options) {
          result.push(`- ( ${opt.number} ) ${opt.text}`);
        }
        result.push("");
      }
    }
  }

  return result.join("\n");
};

export const exportMarkdown = async (
  jobDir: string,
  texFileName: string,
  title: string,
): Promise<readonly string[]> => {
  const source = await readFile(resolve(jobDir, texFileName), "utf8");
  const variants = parseVariants(source);
  const generated: string[] = [];

  const mdPath = resolve(jobDir, "test.md");
  await writeFile(mdPath, renderPrint(variants, title), "utf8");
  generated.push(mdPath);

  return generated;
};
