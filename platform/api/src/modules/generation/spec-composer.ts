import type { GenerationConfig } from "@quiz/contracts";
import type { Question } from "./pool";

const AFTER = "\\par\\vspace{5mm}{ENDL}";

const buildClosedItem = (q: Extract<Question, { type: "closed" }>, mode: string): string =>
  [
    "<item>",
    "<fabric>",
    "check auto",
    "<good>", q.goodPath, "<\\good>",
    "<bad>", q.badPath, "<\\bad>",
    "<ncase>", String(q.ncase), "<\\ncase>",
    "<nGood>", String(q.nGood), "<\\nGood>",
    "<mode>", mode, "<\\mode>",
    "<before>", q.before, "<\\before>",
    "<after>", AFTER, "<\\after>",
    "<\\fabric>",
    "<\\item>",
  ].join("\n");

const buildOpenItem = (q: Extract<Question, { type: "open" }>): string => {
  const fabricName = q.fabric === "file_answer" ? "file answer" : "template answer";
  return [
    "<item>",
    "<fabric>",
    fabricName,
    "<fname>", q.fnamePath, "<\\fname>",
    "<before>", q.before, "<\\before>",
    "<after>", AFTER, "<\\after>",
    "<\\fabric>",
    "<\\item>",
  ].join("\n");
};

export const composeScript = (
  config: GenerationConfig,
  selected: readonly Question[],
): string => {
  const graphicsDirs = Array.from(
    new Set(selected.flatMap((q) => (q.type === "open" && q.imageDir !== undefined ? [q.imageDir] : []))),
  );
  const graphicsLine = graphicsDirs.length > 0
    ? `\\graphicspath{${graphicsDirs.map((d) => `{${d}/}`).join("")}}{ENDL}`
    : "";

  const header = [
    "<document>",
    "",
    "<header>",
    "\\documentclass[11pt]{article}{ENDL}",
    "\\usepackage[a4paper, top=18mm, bottom=18mm, left=20mm, right=20mm]{geometry}{ENDL}",
    "\\usepackage[T2A]{fontenc}{ENDL}",
    "\\usepackage[utf8]{inputenc}{ENDL}",
    "\\usepackage[ukrainian]{babel}{ENDL}",
    "\\usepackage{graphicx}{ENDL}",
    "\\usepackage[export]{adjustbox}{ENDL}",
    "\\usepackage{amsmath}{ENDL}",
    "\\usepackage{amssymb}{ENDL}",
    "\\usepackage{fvextra}{ENDL}",
    "\\fvset{breaklines=true, breakanywhere=true}{ENDL}",
    "\\usepackage{paratype}{ENDL}",
    "\\renewcommand{\\familydefault}{\\sfdefault}{ENDL}",
    "\\providecommand{\\code}[1]{\\texttt{#1}}{ENDL}",
    ...(graphicsLine.length > 0 ? [graphicsLine] : []),
    "\\setlength{\\parindent}{0pt}{ENDL}",
    "\\setlength{\\parskip}{6pt}{ENDL}",
    "\\emergencystretch=3em{ENDL}",
    "\\sloppy{ENDL}",
    "\\pagestyle{empty}{ENDL}",
    "\\begin{document}{ENDL}",
    "<\\header>",
    "",
    "<footer>",
    "\\end{document}{ENDL}",
    "<\\footer>",
    "",
    "<onNextVariant>",
    "\\newpage{ENDL}",
    "<\\onNextVariant>",
    "",
    "<onNextPage>",
    "\\newpage{ENDL}",
    "<\\onNextPage>",
    "",
    "<from>", "1", "<\\from>",
    "<to>", String(config.variantCount), "<\\to>",
    "<onPage>", "1", "<\\onPage>",
    "",
    "<\\document>",
  ].join("\n");

  const variantBlock = [
    "",
    "<variant>",
    "<before>",
    `{\\centering\\Large\\bfseries ${config.title}\\par}{ENDL}`,
    `\\medskip{ENDL}`,
    `\\noindent\\rule{\\linewidth}{0.5pt}{ENDL}`,
    `\\smallskip{ENDL}`,
    `\\noindent\\textbf{Варіант \\No\\,#No#}\\hfill \\textit{ПІБ:}\\,\\underline{\\hspace{60mm}}{ENDL}`,
    `\\vspace{4mm}{ENDL}{ENDL}`,
    "<\\before>",
    "<after>",
    "{ENDL}",
    "<\\after>",
    "<\\variant>",
  ].join("\n");

  const items = selected
    .map((q) => (q.type === "closed" ? buildClosedItem(q, config.mode) : buildOpenItem(q)))
    .join("\n\n");

  return [header, variantBlock, "", items, ""].join("\n");
};
