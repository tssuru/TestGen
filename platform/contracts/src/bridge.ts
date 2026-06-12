export type BridgeStatus = "success" | "error" | "timeout";

export type DiagnosticSeverity = "error" | "warning";

export interface BridgeDiagnostic {
  readonly code: string;
  readonly message: string;
  readonly severity: DiagnosticSeverity;
  readonly hint?: string;
}

export interface BridgeGenerateRequest {
  readonly jobId: string;
  readonly workdir: string;
  readonly scriptPath: string;
  readonly destinationPath: string;
  readonly seed?: number;
  readonly timeoutMs: number;
  readonly engineBinaryPath: string;
  readonly environment: Record<string, string>;
}

export interface BridgeGenerateResponse {
  readonly jobId: string;
  readonly status: BridgeStatus;
  readonly exitCode: number | null;
  readonly durationMs: number;
  readonly stdout: string;
  readonly stderr: string;
  readonly generatedMainPath?: string;
  readonly diagnostics: readonly BridgeDiagnostic[];
}
