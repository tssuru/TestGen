import { mkdirSync, writeFileSync } from "node:fs";
import { relative, resolve } from "node:path";
import type { Template } from "@quiz/contracts";
import type { Question } from "./pool";

const hashId = (templateId: string): string => `db:${templateId.slice(0, 8)}`;

export interface MaterializeResult {
  readonly questions: readonly Question[];
  readonly materializedDir: string | null;
}

export const materializeTemplates = (
  templates: readonly Template[],
  workdir: string,
  jobDir: string,
): MaterializeResult => {
  const materializedDir = resolve(jobDir, "materialized");
  let needsMaterialization = false;

  const result = templates.map<Question | null>((t) => {
    if (t.kind === "closed") {
      const body = t.body;
      if (body.kind !== "closed") return null;
      let goodPath = body.sourceGoodPath;
      let badPath = body.sourceBadPath;
      if (goodPath === undefined || badPath === undefined) {
        needsMaterialization = true;
        mkdirSync(materializedDir, { recursive: true });
        const goodFile = resolve(materializedDir, `${t.id}-good.txt`);
        const badFile = resolve(materializedDir, `${t.id}-bad.txt`);
        const good = body.options.filter((o) => o.correct).map((o) => o.text).join("\n");
        const bad = body.options.filter((o) => !o.correct).map((o) => o.text).join("\n");
        writeFileSync(goodFile, `${good}\n`, "utf8");
        writeFileSync(badFile, `${bad}\n`, "utf8");
        goodPath = relative(workdir, goodFile).split("\\").join("/");
        badPath = relative(workdir, badFile).split("\\").join("/");
      }
      const q: Question = {
        id: hashId(t.id),
        type: "closed",
        goodPath,
        badPath,
        ncase: body.ncase,
        nGood: body.nGood,
        before: `\\textbf{${t.title}}\\par{ENDL}`,
        promptText: t.title,
      };
      return q;
    }
    const body = t.body;
    if (body.kind !== "open") return null;
    let fnamePath = body.sourceFnamePath;
    if (fnamePath === undefined) {
      needsMaterialization = true;
      mkdirSync(materializedDir, { recursive: true });
      const codeFile = resolve(materializedDir, `${t.id}-f.txt`);
      writeFileSync(codeFile, body.code, "utf8");
      fnamePath = relative(workdir, codeFile).split("\\").join("/");
    }
    const q: Question = {
      id: hashId(t.id),
      type: "open",
      fabric: body.fabric,
      fnamePath,
      before: `\\textbf{${t.title}}\\par{ENDL}`,
      promptText: t.title,
      ...(body.imagePaths.length > 0 ? { imageDir: body.imagePaths[0] } : {}),
    };
    return q;
  }).filter((q): q is Question => q !== null);

  return { questions: result, materializedDir: needsMaterialization ? materializedDir : null };
};
