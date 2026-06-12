import { basename, resolve } from "node:path";
import { access } from "node:fs/promises";
import { constants } from "node:fs";
import { runCommand } from "./command-runner";

export interface PdfExportResult {
  readonly path: string | null;
  readonly error: string | null;
}

export const exportPdf = async (jobDir: string, texPath: string): Promise<PdfExportResult> => {
  const texFileName = basename(texPath);
  const result = await runCommand("pdflatex", ["-interaction=nonstopmode", texFileName], jobDir);
  const pdfFileName = texFileName.replace(/\.tex$/u, ".pdf");
  const pdfPath = resolve(jobDir, pdfFileName);
  try {
    await access(pdfPath, constants.R_OK);
    return { path: pdfPath, error: null };
  } catch {
  }
  if (result.code !== 0) {
    const details = [result.stderr, result.stdout].filter((value) => value.trim().length > 0).join("\n").trim();
    return { path: null, error: details.length > 0 ? details : "pdflatex failed" };
  }
  return { path: null, error: "pdflatex finished without creating PDF" };
};
