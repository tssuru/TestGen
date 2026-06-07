import { useEffect, useState } from "react";
import { Link, useParams } from "react-router-dom";
import { Bookmark, Eye, FileDown, Loader2, RefreshCcw, CheckCircle2, XCircle } from "lucide-react";
import type { GenerationJob } from "@quiz/contracts";
import { createPresetFromJob, getArtifactPreviewUrl, getJob, regenerateItem } from "../api";
import { Alert, Badge, btnPrimaryCls, btnSecondaryCls, cardCls } from "../components/ui";
import { PreviewEditor } from "../components/PreviewEditor";
import { cn } from "../lib/utils";

const ARTIFACT_LABELS: Record<string, string> = {
  pdf: "PDF", docx: "Word (DOCX)", md: "Markdown",
  answers_json: "Ключ відповідей (JSON)", answers_md: "Ключ відповідей (Markdown)",
};

export const JobDetailPage = () => {
  const { id = "" } = useParams();
  const [job, setJob] = useState<GenerationJob | null>(null);
  const [error, setError] = useState("");
  const [regenerating, setRegenerating] = useState<number | null>(null);
  const [pending, setPending] = useState<GenerationJob | null>(null);

  const load = async (jobId: string): Promise<GenerationJob> => {
    const j = await getJob(jobId);
    setJob(j);
    return j;
  };

  useEffect(() => {
    void load(id).catch((e) => setError(e instanceof Error ? e.message : "error"));
  }, [id]);

  const onRegenerate = async (index: number): Promise<void> => {
    setRegenerating(index); setPending(null);
    try {
      const child = await regenerateItem(id, index);
      // poll child until done
      let done = false;
      while (!done) {
        const cur = await getJob(child.jobId);
        setPending(cur);
        done = cur.status === "completed" || cur.status === "failed";
        if (!done) await new Promise((r) => setTimeout(r, 800));
      }
    } catch (e) {
      setError(e instanceof Error ? e.message : "regenerate failed");
    } finally {
      setRegenerating(null);
    }
  };

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
        <>
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

          <div className={cardCls}>
            <h2 className="text-lg font-semibold mb-1">Перегенерація окремого питання</h2>
            <p className="text-xs text-gray-500 mb-3">
              Замінити конкретне питання в пулі на нове того самого типу. Буде створено новий job —
              оригінальний залишиться в історії.
            </p>
            <div className="flex flex-wrap gap-2">
              {Array.from({ length: job.config.questionsPerVariant }, (_, i) => i + 1).map((n) => (
                <button key={n} className={cn(btnSecondaryCls, "h-8 px-3")}
                  onClick={() => void onRegenerate(n)}
                  disabled={regenerating !== null}>
                  {regenerating === n ? <Loader2 className="h-3.5 w-3.5 animate-spin" /> : <RefreshCcw className="h-3.5 w-3.5" />}
                  Питання {String(n)}
                </button>
              ))}
            </div>

            {pending !== null && (
              <div className="mt-4 flex items-center gap-2 text-sm">
                {pending.status === "completed" ? <CheckCircle2 className="h-4 w-4 text-green-600" />
                  : pending.status === "failed" ? <XCircle className="h-4 w-4 text-red-500" />
                  : <Loader2 className="h-4 w-4 animate-spin text-gray-400" />}
                <span>
                  {pending.status === "completed" ? "Новий варіант готовий" : pending.status === "failed" ? "Помилка" : "Генерація..."}
                </span>
                {pending.status === "completed" && (
                  <Link to={`/jobs/${pending.jobId}`} className="ml-auto">
                    <Badge tone="green">Відкрити результат</Badge>
                  </Link>
                )}
              </div>
            )}
          </div>
        </>
      )}
    </div>
  );
};
