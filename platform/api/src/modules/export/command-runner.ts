import { spawn } from "node:child_process";

export interface CommandResult {
  readonly code: number | null;
  readonly stdout: string;
  readonly stderr: string;
}

export const runCommand = async (
  command: string,
  args: readonly string[],
  cwd: string
): Promise<CommandResult> => {
  return new Promise<CommandResult>((resolve) => {
    let stdout = "";
    let stderr = "";
    const child = spawn(command, args, { cwd });
    child.stdout.on("data", (chunk: Buffer | string) => {
      stdout += chunk.toString();
    });
    child.stderr.on("data", (chunk: Buffer | string) => {
      stderr += chunk.toString();
    });
    child.on("error", (error: Error) => {
      resolve({
        code: null,
        stdout,
        stderr: `${stderr}\n${error.message}`
      });
    });
    child.on("close", (code: number | null) => {
      resolve({ code, stdout, stderr });
    });
  });
};
