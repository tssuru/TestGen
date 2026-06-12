import { runCommand } from "./command-runner";
import { resolve } from "node:path";

export const exportDocx = async (jobDir: string): Promise<string | null> => {
  const result = await runCommand("pandoc", ["test.md", "-o", "test.docx"], jobDir);
  if (result.code !== 0) {
    return null;
  }
  return resolve(jobDir, "test.docx");
};
