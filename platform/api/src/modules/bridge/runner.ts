import { spawn } from "node:child_process";
import type { BridgeDiagnostic, BridgeGenerateRequest, BridgeGenerateResponse } from "@quiz/contracts";

const toErrorDiagnostic = (code: string, message: string, hint?: string): BridgeDiagnostic => {
  if (hint === undefined) {
    return { code, message, severity: "error" };
  }
  return { code, message, severity: "error", hint };
};

export const runBridge = async (request: BridgeGenerateRequest): Promise<BridgeGenerateResponse> => {
  const startedAt = Date.now();
  const args = [request.destinationPath, request.scriptPath, request.workdir];
  if (request.seed !== undefined) {
    args.push("-seed", String(request.seed));
  }
  console.info(`[bridge:start] job=${request.jobId} cmd=${request.engineBinaryPath} args=${args.join(" ")}`);

  return new Promise<BridgeGenerateResponse>((resolve) => {
    let stdout = "";
    let stderr = "";
    let finished = false;

    const child = spawn(request.engineBinaryPath, args, {
      env: { ...process.env, ...request.environment }
    });

    const timeout = setTimeout(() => {
      if (finished) {
        return;
      }
      finished = true;
      child.kill("SIGKILL");
      resolve({
        jobId: request.jobId,
        status: "timeout",
        exitCode: null,
        durationMs: Date.now() - startedAt,
        stdout,
        stderr,
        diagnostics: [toErrorDiagnostic("PROCESS_TIMEOUT", "Engine execution timed out")]
      });
      console.error(`[bridge:timeout] job=${request.jobId}`);
    }, request.timeoutMs);

    child.stdout.on("data", (chunk: Buffer | string) => {
      stdout += chunk.toString();
    });

    child.stderr.on("data", (chunk: Buffer | string) => {
      stderr += chunk.toString();
    });

    child.on("error", (error: Error) => {
      if (finished) {
        return;
      }
      finished = true;
      clearTimeout(timeout);
      resolve({
        jobId: request.jobId,
        status: "error",
        exitCode: null,
        durationMs: Date.now() - startedAt,
        stdout,
        stderr: `${stderr}\n${error.message}`,
        diagnostics: [toErrorDiagnostic("ENGINE_RUNTIME_ERROR", error.message)]
      });
      console.error(`[bridge:error] job=${request.jobId} error=${error.message}`);
    });

    child.on("close", (code: number | null) => {
      if (finished) {
        return;
      }
      finished = true;
      clearTimeout(timeout);
      if (code === 0) {
        console.info(`[bridge:success] job=${request.jobId} duration_ms=${Date.now() - startedAt}`);
        resolve({
          jobId: request.jobId,
          status: "success",
          exitCode: 0,
          durationMs: Date.now() - startedAt,
          stdout,
          stderr,
          generatedMainPath: request.destinationPath,
          diagnostics: []
        });
        return;
      }
      resolve({
        jobId: request.jobId,
        status: "error",
        exitCode: code,
        durationMs: Date.now() - startedAt,
        stdout,
        stderr,
        diagnostics: [toErrorDiagnostic("ENGINE_RUNTIME_ERROR", `Engine exited with code ${String(code)}`, stderr.trim() || undefined)]
      });
      console.error(`[bridge:exit] job=${request.jobId} code=${String(code)}`);
    });
  });
};
