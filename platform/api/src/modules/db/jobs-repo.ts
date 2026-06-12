import { randomUUID } from "node:crypto";
import type {
  ApiError, ArtifactInfo, BridgeDiagnostic, GenerationConfig, GenerationJob, JobStatus,
} from "@quiz/contracts";
import type { DbClient } from "./client";

interface JobRow {
  readonly id: string;
  readonly status: JobStatus;
  readonly progress: number;
  readonly config: string;
  readonly errors: string;
  readonly diagnostics: string;
  readonly artifacts: string;
  readonly selected_template_ids: string;
  readonly parent_job_id: string | null;
  readonly created_at: string;
  readonly updated_at: string;
}

const nowIso = (): string => new Date().toISOString();

const rowToJob = (row: JobRow): GenerationJob => ({
  jobId: row.id,
  status: row.status,
  progress: row.progress,
  config: JSON.parse(row.config) as GenerationConfig,
  errors: JSON.parse(row.errors) as readonly ApiError[],
  diagnostics: JSON.parse(row.diagnostics) as readonly BridgeDiagnostic[],
  artifacts: JSON.parse(row.artifacts) as readonly ArtifactInfo[],
  createdAt: row.created_at,
  updatedAt: row.updated_at,
});

export interface JobListItem extends GenerationJob {
  readonly parentJobId: string | null;
  readonly selectedTemplateIds: readonly string[];
}

export const createJobsRepo = (db: DbClient) => {
  return {
    create(config: GenerationConfig, parentJobId: string | null = null): GenerationJob {
      const id = randomUUID();
      const now = nowIso();
      db.prepare(
        `INSERT INTO jobs (id, status, progress, config, errors, diagnostics, artifacts,
         selected_template_ids, parent_job_id, created_at, updated_at)
         VALUES (?,?,?,?,?,?,?,?,?,?,?)`,
      ).run(id, "queued", 0, JSON.stringify(config), "[]", "[]", "[]", "[]", parentJobId, now, now);
      return this.get(id)!;
    },

    get(jobId: string): GenerationJob | null {
      const row = db.prepare<[string], JobRow>("SELECT * FROM jobs WHERE id = ?").get(jobId);
      return row === undefined ? null : rowToJob(row);
    },

    getRow(jobId: string): JobRow | null {
      const row = db.prepare<[string], JobRow>("SELECT * FROM jobs WHERE id = ?").get(jobId);
      return row ?? null;
    },

    list(limit = 50): GenerationJob[] {
      const rows = db
        .prepare<[number], JobRow>("SELECT * FROM jobs ORDER BY created_at DESC LIMIT ?")
        .all(limit);
      return rows.map(rowToJob);
    },

    setSelectedTemplateIds(jobId: string, ids: readonly string[]): void {
      db.prepare("UPDATE jobs SET selected_template_ids = ?, updated_at = ? WHERE id = ?").run(
        JSON.stringify(ids), nowIso(), jobId,
      );
    },

    getSelectedTemplateIds(jobId: string): readonly string[] {
      const row = this.getRow(jobId);
      if (row === null) return [];
      return JSON.parse(row.selected_template_ids) as readonly string[];
    },

    updateStatus(jobId: string, status: JobStatus, progress: number): GenerationJob | null {
      const result = db.prepare(
        "UPDATE jobs SET status = ?, progress = ?, updated_at = ? WHERE id = ?",
      ).run(status, progress, nowIso(), jobId);
      if (result.changes === 0) return null;
      return this.get(jobId);
    },

    fail(jobId: string, errors: readonly ApiError[], diagnostics: readonly BridgeDiagnostic[]): GenerationJob | null {
      const result = db.prepare(
        `UPDATE jobs SET status = 'failed', progress = 100, errors = ?, diagnostics = ?, updated_at = ?
         WHERE id = ?`,
      ).run(JSON.stringify(errors), JSON.stringify(diagnostics), nowIso(), jobId);
      if (result.changes === 0) return null;
      return this.get(jobId);
    },

    complete(jobId: string, artifacts: readonly ArtifactInfo[]): GenerationJob | null {
      const result = db.prepare(
        "UPDATE jobs SET status = 'completed', progress = 100, artifacts = ?, updated_at = ? WHERE id = ?",
      ).run(JSON.stringify(artifacts), nowIso(), jobId);
      if (result.changes === 0) return null;
      return this.get(jobId);
    },

    remove(jobId: string): boolean {
      const result = db.prepare("DELETE FROM jobs WHERE id = ?").run(jobId);
      return result.changes > 0;
    },

    evictExpired(ttlMs: number): number {
      const cutoff = new Date(Date.now() - ttlMs).toISOString();
      const result = db.prepare(
        "DELETE FROM jobs WHERE (status = 'completed' OR status = 'failed') AND updated_at < ?",
      ).run(cutoff);
      return result.changes;
    },
  };
};

export type JobsRepo = ReturnType<typeof createJobsRepo>;
