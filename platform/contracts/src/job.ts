import type { BridgeDiagnostic } from "./bridge";
import type { GenerationConfig } from "./generation";

export type JobStatus = "queued" | "running" | "completed" | "failed";

export interface ApiError {
  readonly code: string;
  readonly message: string;
  readonly hint?: string;
}

export type ArtifactFormat = "pdf" | "docx" | "md" | "zip" | "answers_json" | "answers_md" | "config" | "manifest";

export interface ArtifactInfo {
  readonly name: string;
  readonly path: string;
  readonly format: ArtifactFormat;
  readonly sizeBytes: number;
  readonly sha256: string;
}

export interface GenerationJob {
  readonly jobId: string;
  readonly status: JobStatus;
  readonly progress: number;
  readonly config: GenerationConfig;
  readonly errors: readonly ApiError[];
  readonly diagnostics: readonly BridgeDiagnostic[];
  readonly artifacts: readonly ArtifactInfo[];
  readonly createdAt: string;
  readonly updatedAt: string;
}
