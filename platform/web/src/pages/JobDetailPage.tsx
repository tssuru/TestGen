import { useEffect, useState } from "react";
import { Link, useParams } from "react-router-dom";
import { Bookmark, Eye, FileDown } from "lucide-react";
import type { GenerationJob } from "@quiz/contracts";
import { createPresetFromJob, getArtifactPreviewUrl, getJob } from "../api";
import { Alert, btnPrimaryCls, btnSecondaryCls, cardCls } from "../components/ui";
import { PreviewEditor } from "../components/PreviewEditor";

const ARTIFACT_LABELS: Record<string, string> = {
  pdf: "PDF", docx: "Word (DOCX)", md: "Markdown",
  answers_json: "Ключ відповідей (JSON)", answers_md: "Ключ відповідей (Markdown)",
};

export const JobDetailPage = () => {
  const { id = "" } = useParams();
  const [job, setJob] = useState<GenerationJob | null>(null);
  const [error, setError] = useState("");

  const load = async (jobId: string): Promise<GenerationJob> => {
    const j = await getJob(jobId);
    setJob(j);
    return j;
  };

  useEffect(() => {
    void load(id).catch((e) => setError(e instanceof Error ? e.message : "error"));
  }, [id]);

  if (error.length > 0 && job === null) return <Alert kind="error">{error}</Alert>;
  if (job === null) return <p className="text-sm text-gray-500">Завантаження…</p>;

  const artifacts = job.artifacts.filter((a) => a.format !== "config" && a.format !== "manifest" && a.format !== "zip");

  return (
    <div className="flex flex-col gap-5">
      {error.length > 0 && <Alert kind="error">{error}</Alert>}

      <div className="flex items-center justify-between">
        <div>
          <h1 className="text-2xl font-semibold">{job.config.title}</h1>
          <p className="text-xs text-gray-500">
            {String(job.config.variantCount)} варіантів · {String(job.config.questionsPerVariant)} питань · {new Date(job.createdAt).toLocaleString()}
          </p>
        </div>
        <div className="flex items-center gap-2 flex-wrap">
          <Link to="/jobs" className={btnSecondaryCls}>До списку</Link>
          {job.status === "completed" && (
            <>
              <button
                className={btnSecondaryCls}
                onClick={() => {
                  const name = prompt("Назва пресету:", job.config.title);
                  if (name === null || name.trim().length === 0) return;
                  void createPresetFromJob(name.trim(), id)
                    .then(() => setError(""))
                    .catch((e: unknown) => {
                      const msg = e instanceof Error ? e.message : "Помилка";
                      setError(msg.includes("already exists")
                        ? `Пресет з назвою «${name.trim()}» вже існує. Оберіть іншу назву.`
                        : msg);
                    });
                }}
              >
                <Bookmark className="h-4 w-4" /> Зберегти як пресет
              </button>
              <a href={`/api/generation/jobs/${id}/download`} className={btnPrimaryCls}>
                <FileDown className="h-4 w-4" /> Завантажити ZIP
              </a>
            </>
          )}
        </div>
      </div>

      {job.status === "failed" && (
        <Alert kind="error">
          <div className="space-y-1">
            {job.errors.map((e, i) => (
              <p key={i}><strong>{e.code}:</strong> {e.message}{e.hint !== undefined && <span className="opacity-70"> — {e.hint}</span>}</p>
            ))}
          </div>
        </Alert>
      )}

      {job.status === "completed" && <PreviewEditor job={job} />}

      {job.status === "completed" && (
        <div className={cardCls}>
          <h2 className="text-lg font-semibold mb-3">Артефакти</h2>
          <div className="divide-y divide-gray-100">
            {artifacts.map((a) => (
              <div key={a.sha256} className="flex items-center justify-between py-2 text-sm">
                <div>
                  <span className="text-gray-800">{ARTIFACT_LABELS[a.format] ?? a.name}</span>
                  <span className="ml-2 text-xs text-gray-400">{(a.sizeBytes / 1024).toFixed(0)} KB</span>
                </div>
                <a href={getArtifactPreviewUrl(id, a.name)} target="_blank" rel="noopener noreferrer"
                  className="inline-flex items-center gap-1 rounded border border-gray-200 px-2.5 py-1 text-xs text-gray-700 hover:bg-gray-50">
                  <Eye className="h-3.5 w-3.5" /> Відкрити
                </a>
              </div>
            ))}
          </div>
        </div>
      )}
    </div>
  );
};
