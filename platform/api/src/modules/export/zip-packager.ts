import { basename, resolve } from "node:path";
import { runCommand } from "./command-runner";

export const createBundleZip = async (jobDir: string, files: readonly string[]): Promise<string | null> => {
  const zipPath = resolve(jobDir, "bundle.zip");
  const names = files.map((file) => basename(file));
  const result = await runCommand("zip", ["-j", zipPath, ...names], jobDir);
  if (result.code !== 0) {
    return null;
  }
  return zipPath;
};
