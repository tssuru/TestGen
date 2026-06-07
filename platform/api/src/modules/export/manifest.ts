import { stat, writeFile } from "node:fs/promises";
import { resolve } from "node:path";
import type { ArtifactInfo } from "@quiz/contracts";
import { fileSha256 } from "./hash";

interface ManifestArtifact {
  readonly name: string;
  readonly path: string;
  readonly size: number;
  readonly sha256: string;
}

interface Manifest {
  readonly jobId: string;
  readonly createdAt: string;
  readonly artifacts: readonly ManifestArtifact[];
  readonly status: "completed";
}

export const writeManifest = async (
  jobDir: string,
  jobId: string,
  artifacts: readonly ArtifactInfo[]
): Promise<string> => {
  const manifestArtifacts: ManifestArtifact[] = [];
  for (const artifact of artifacts) {
    const fileStats = await stat(artifact.path);
    manifestArtifacts.push({
      name: artifact.name,
      path: artifact.path,
      size: fileStats.size,
      sha256: await fileSha256(artifact.path)
    });
  }
  const manifest: Manifest = {
    jobId,
    createdAt: new Date().toISOString(),
    artifacts: manifestArtifacts,
    status: "completed"
  };
  const manifestPath = resolve(jobDir, "manifest.json");
  await writeFile(manifestPath, JSON.stringify(manifest, null, 2), "utf8");
  return manifestPath;
};
