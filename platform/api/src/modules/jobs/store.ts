import type { ApiError, ArtifactInfo, BridgeDiagnostic, GenerationConfig, GenerationJob, JobStatus } from "@quiz/contracts";
import { getRepositories } from "../db";

const JOB_TTL_MS = 24 * 60 * 60 * 1000;

export const jobStore = {
  create(config: GenerationConfig, parentJobId: string | null = null): GenerationJob {
    const repos = getRepositories();
    repos.jobs.evictExpired(JOB_TTL_MS);
    const job = repos.jobs.create(config, parentJobId);
    console.info(`[job:create] id=${job.jobId}`);
    return job;
  },
  get(jobId: string): GenerationJob | null {
    return getRepositories().jobs.get(jobId);
  },
  list(limit = 50): GenerationJob[] {
    return getRepositories().jobs.list(limit);
  },
  updateStatus(jobId: string, status: JobStatus, progress: number): GenerationJob | null {
    const updated = getRepositories().jobs.updateStatus(jobId, status, progress);
    if (updated !== null) console.info(`[job:update] id=${jobId} status=${status} progress=${String(progress)}`);
    return updated;
  },
  fail(jobId: string, errors: readonly ApiError[], diagnostics: readonly BridgeDiagnostic[]): GenerationJob | null {
    const updated = getRepositories().jobs.fail(jobId, errors, diagnostics);
    if (updated !== null) console.error(`[job:failed] id=${jobId} errors=${String(errors.length)}`);
    return updated;
  },
  complete(jobId: string, artifacts: readonly ArtifactInfo[]): GenerationJob | null {
    const updated = getRepositories().jobs.complete(jobId, artifacts);
    if (updated !== null) console.info(`[job:complete] id=${jobId} artifacts=${String(artifacts.length)}`);
    return updated;
  },
  setSelectedTemplateIds(jobId: string, ids: readonly string[]): void {
    getRepositories().jobs.setSelectedTemplateIds(jobId, ids);
  },
  getSelectedTemplateIds(jobId: string): readonly string[] {
    return getRepositories().jobs.getSelectedTemplateIds(jobId);
  },
};
