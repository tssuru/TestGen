import { mkdir, readFile, stat, writeFile } from "node:fs/promises";
import { access, constants } from "node:fs";
import { basename, relative, resolve } from "node:path";
import { promisify } from "node:util";
import type { ApiError, ArtifactFormat, ArtifactInfo, BridgeGenerateRequest, GenerationConfig } from "@quiz/contracts";
import { runBridge } from "../bridge/runner";
import { selectTemplates } from "../generation/template-selector";
import { materializeTemplates } from "../generation/template-materializer";
import { composeScript } from "../generation/spec-composer";
import { buildAnswerKey } from "../answers/key";
import { normalizeTex } from "../export/tex-normalizer";
import { exportDocx } from "../export/docx-exporter";
import { exportPdf } from "../export/pdf-exporter";
import { exportMarkdown } from "../export/markdown-exporter";
import { createBundleZip } from "../export/zip-packager";
import { writeManifest } from "../export/manifest";
import { fileSha256 } from "../export/hash";
import { jobStore } from "./store";

const accessAsync = promisify(access);

const workdir = (): string =>
  process.env["QUIZ_ENGINE_WORKDIR"] ?? resolve(process.cwd(), "../../Quiz");

const binary = (): string =>
  process.env["QUIZ_ENGINE_BINARY"] ?? resolve(process.cwd(), "../../Quiz/bin/release/quest");

const buildRequest = (jobId: string, jobDir: string, config: GenerationConfig): BridgeGenerateRequest => {
  const wd = workdir();
  const absScript = resolve(jobDir, "quiz.txt");
  const base: Omit<BridgeGenerateRequest, "seed"> = {
    jobId,
    workdir: wd,
    scriptPath: relative(wd, absScript),
    destinationPath: resolve(jobDir, "quiz.tex"),
    timeoutMs: 120_000,
    engineBinaryPath: binary(),
    environment: {},
  };
  return config.seed === undefined ? base : { ...base, seed: config.seed };
};

const assertTex = async (path: string): Promise<void> => {
  await accessAsync(path, constants.R_OK);
  const tex = await readFile(path, "utf8");
  if (!tex.includes("\\end{document}")) {
    throw new Error("Engine produced incomplete TeX (missing \\end{document})");
  }
};

const addArtifact = async (artifacts: ArtifactInfo[], path: string, format: ArtifactFormat): Promise<void> => {
  const stats = await stat(path);
  artifacts.push({
    name: basename(path),
    path,
    format,
    sizeBytes: stats.size,
    sha256: await fileSha256(path),
  });
};

export const executeGenerationJob = async (jobId: string, config: GenerationConfig): Promise<void> => {
  try {
    jobStore.updateStatus(jobId, "running", 10);
    const jobDir = resolve(process.cwd(), "tmp", jobId);
    await mkdir(jobDir, { recursive: true });

    const extraFilter: { themeIds?: readonly string[]; templateIds?: readonly string[] } = {};
    if (config.themeIds !== undefined) extraFilter.themeIds = config.themeIds;
    if (config.templateIds !== undefined) extraFilter.templateIds = config.templateIds;
    const templates = selectTemplates(config, extraFilter);
    if (templates.length === 0) {
      throw new Error("No questions available for selected filter");
    }
    if (templates.length < config.questionsPerVariant) {
      throw new Error(
        `Pool too small: requested ${String(config.questionsPerVariant)} but only ${String(templates.length)} available`,
      );
    }
    jobStore.setSelectedTemplateIds(jobId, templates.map((t) => t.id));
    const { questions: selected } = materializeTemplates(templates, workdir(), jobDir);

    const dsl = composeScript(config, selected);
    await writeFile(resolve(jobDir, "quiz.txt"), dsl, "utf8");

    jobStore.updateStatus(jobId, "running", 30);
    const req = buildRequest(jobId, jobDir, config);
    const result = await runBridge(req);
    if (result.status !== "success") {
      const errors: readonly ApiError[] = result.diagnostics.map((d) =>
        d.hint === undefined ? { code: d.code, message: d.message } : { code: d.code, message: d.message, hint: d.hint },
      );
      jobStore.fail(jobId, errors, result.diagnostics);
      return;
    }
    await assertTex(req.destinationPath);

    jobStore.updateStatus(jobId, "running", 60);

    const artifacts: ArtifactInfo[] = [];
    await writeFile(resolve(jobDir, "config.json"), JSON.stringify(config, null, 2), "utf8");

    if (config.includeAnswerKey) {
      await buildAnswerKey(jobDir, workdir(), config, selected);
    }

    const mdPaths = await exportMarkdown(jobDir, "quiz.tex", config.title);

    await normalizeTex(req.destinationPath);
    const pdfResult = await exportPdf(jobDir, req.destinationPath);
    if (pdfResult.path === null) {
      const err: ApiError = pdfResult.error === null
        ? { code: "PDF_EXPORT_FAILED", message: "PDF generation failed" }
        : { code: "PDF_EXPORT_FAILED", message: "PDF generation failed", hint: pdfResult.error };
      jobStore.fail(jobId, [err], [{ code: "PDF_EXPORT_FAILED", message: pdfResult.error ?? "PDF generation failed", severity: "error" }]);
      return;
    }
    const docxPath = await exportDocx(jobDir);

    await addArtifact(artifacts, resolve(jobDir, "config.json"), "config");
    if (config.includeAnswerKey) {
      await addArtifact(artifacts, resolve(jobDir, "answers.json"), "answers_json");
      await addArtifact(artifacts, resolve(jobDir, "answers.md"), "answers_md");
    }
    for (const md of mdPaths) await addArtifact(artifacts, md, "md");
    await addArtifact(artifacts, pdfResult.path, "pdf");
    if (docxPath !== null) await addArtifact(artifacts, docxPath, "docx");

    const manifestPath = await writeManifest(jobDir, jobId, artifacts);
    await addArtifact(artifacts, manifestPath, "manifest");

    const zipFiles = artifacts
      .filter((a) => a.format !== "config" && a.format !== "manifest")
      .map((a) => a.path);
    const zipPath = await createBundleZip(jobDir, zipFiles);
    if (zipPath !== null) await addArtifact(artifacts, zipPath, "zip");

    jobStore.complete(jobId, artifacts);
  } catch (error) {
    const message = error instanceof Error ? error.message : "Unexpected executor failure";
    const err: ApiError = { code: "JOB_EXECUTION_FAILED", message };
    jobStore.fail(jobId, [err], [{ code: "JOB_EXECUTION_FAILED", message, severity: "error" }]);
  }
};
