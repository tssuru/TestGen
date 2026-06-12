import { access } from "node:fs/promises";
import { constants } from "node:fs";
import { runCommand } from "../export/command-runner";

interface HealthDependency {
  readonly name: string;
  readonly ok: boolean;
  readonly details: string;
}

interface HealthResult {
  readonly status: "ok" | "degraded";
  readonly dependencies: readonly HealthDependency[];
}

const checkCommand = async (command: string, args: readonly string[]): Promise<HealthDependency> => {
  const result = await runCommand(command, args, process.cwd());
  return {
    name: command,
    ok: result.code === 0,
    details: result.code === 0 ? "available" : result.stderr || "not available"
  };
};

const checkEngineBinary = async (path: string): Promise<HealthDependency> => {
  try {
    await access(path, constants.X_OK);
    return {
      name: "quiz-engine-binary",
      ok: true,
      details: path
    };
  } catch {
    return {
      name: "quiz-engine-binary",
      ok: false,
      details: path
    };
  }
};

export const getHealth = async (): Promise<HealthResult> => {
  const enginePath = process.env["QUIZ_ENGINE_BINARY"] ?? "";
  const dependencies = await Promise.all([
    checkCommand("pdflatex", ["--version"]),
    checkCommand("pandoc", ["--version"]),
    checkCommand("zip", ["-v"]),
    checkEngineBinary(enginePath)
  ]);
  const status = dependencies.every((dependency) => dependency.ok) ? "ok" : "degraded";
  return { status, dependencies };
};
