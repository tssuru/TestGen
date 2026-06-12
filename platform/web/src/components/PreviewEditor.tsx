import { useEffect, useMemo, useRef, useState } from "react";
import { useNavigate } from "react-router-dom";
import { Check, Dices, Loader2, RefreshCcw, Replace, Sparkles, X } from "lucide-react";
import type { GenerationConfig, GenerationJob, TemplateSummary } from "@quiz/contracts";
import { createJob, getJob, getJobTemplates, listTemplates, regenerateItem, type JobTemplateItem } from "../api";
import { Alert, Badge, Input, btnPrimaryCls, btnSecondaryCls, cardCls } from "./ui";
import { cn } from "../lib/utils";

interface ClosedBody { kind: "closed"; options: { text: string; correct: boolean }[] }
interface OpenBody { kind: "open"; code: string }

const preview = (body: unknown): string => {
  if (body === null || typeof body !== "object") return "";
  const b = body as ClosedBody | OpenBody;
  if (b.kind === "closed") {
    return b.options.slice(0, 3).map((o) => `${o.correct ? "✓" : "◦"} ${o.text}`).join("  ·  ");
  }
  if (b.kind === "open") {
    return b.code.split("\n").slice(0, 2).join(" ↵ ").slice(0, 120);
  }
  return "";
};

interface PickerProps {
  initialKind: "closed" | "open";
  currentId: string;
  excludeIds: readonly string[];
  onPick: (id: string) => void;
  onClose: () => void;
}

const TemplatePicker = ({ initialKind, currentId, excludeIds, onPick, onClose }: PickerProps) => {
  const [kind, setKind] = useState<"closed" | "open">(initialKind);
  const [list, setList] = useState<TemplateSummary[]>([]);
  const [search, setSearch] = useState("");
  useEffect(() => {
    void listTemplates({ kind, ...(search.length > 0 ? { search } : {}) }).then(setList);
  }, [kind, search]);
  const filtered = useMemo(() => {
    const exclude = new Set(excludeIds);
    return list.filter((t) => !exclude.has(t.id) && t.id !== currentId).slice(0, 50);
  }, [list, excludeIds, currentId]);

  const KindButton = ({ value, label }: { value: "closed" | "open"; label: string }) => (
    <button
      type="button"
      data-testid={`pe-picker-kind-${value}`}
      className={cn(
        "flex-1 h-8 text-xs rounded-md border transition-colors",
        kind === value
          ? "bg-gray-900 text-white border-gray-900"
          : "bg-white text-gray-700 border-gray-300 hover:bg-gray-50",
      )}
      onClick={() => setKind(value)}>
      {label}
    </button>
  );

  return (
    <div className="fixed inset-0 bg-black/40 flex items-center justify-center z-50 p-4" onClick={onClose}>
      <div className="bg-white rounded-xl shadow-xl max-w-2xl w-full max-h-[70vh] flex flex-col" onClick={(e) => e.stopPropagation()}>
        <div className="flex items-center justify-between px-5 py-3 border-b border-gray-200">
          <h3 className="font-semibold">Обрати шаблон</h3>
          <button className="text-gray-400 hover:text-gray-700" onClick={onClose}><X className="h-4 w-4" /></button>
        </div>
        <div className="px-5 py-3 border-b border-gray-100 space-y-2">
          <div className="flex gap-2">
            <KindButton value="closed" label="З вибором відповіді" />
            <KindButton value="open" label="Відкрите" />
          </div>
          <Input placeholder="Пошук за назвою…" value={search} onChange={(e) => setSearch(e.target.value)} />
        </div>
        <div className="flex-1 overflow-y-auto divide-y divide-gray-100">
          {filtered.length === 0 && <p className="text-sm text-gray-400 text-center py-6">Не знайдено</p>}
          {filtered.map((t) => (
            <button key={t.id} onClick={() => onPick(t.id)}
              className="w-full text-left px-5 py-3 hover:bg-gray-50 transition-colors flex items-start gap-3">
              <div className="flex-1 min-w-0">
                <p className="text-sm font-medium text-gray-900 truncate">{t.title}</p>
                {t.sourcePath !== undefined && <p className="text-xs text-gray-400 truncate">{t.sourcePath}</p>}
              </div>
              <Badge tone={t.source === "user" ? "green" : "gray"}>{t.source === "user" ? "Кор." : "Імп."}</Badge>
            </button>
          ))}
        </div>
      </div>
    </div>
  );
};

interface PreviewEditorProps {
  job: GenerationJob;
}

export const PreviewEditor = ({ job }: PreviewEditorProps) => {
  const nav = useNavigate();
  const [items, setItems] = useState<JobTemplateItem[]>([]);
  const [overrides, setOverrides] = useState<Record<number, string>>({});
  const [picking, setPicking] = useState<JobTemplateItem | null>(null);
  const [applying, setApplying] = useState(false);
  const [regenIndex, setRegenIndex] = useState<number | null>(null);
  const [error, setError] = useState("");
  const [childJob, setChildJob] = useState<GenerationJob | null>(null);
  const unmountedRef = useRef(false);
  useEffect(() => () => { unmountedRef.current = true; }, []);

  useEffect(() => {
    void getJobTemplates(job.jobId).then((r) => setItems(r.items)).catch((e) => setError(e instanceof Error ? e.message : "error"));
  }, [job.jobId]);

  const hasChanges = Object.keys(overrides).length > 0;

  const applyChanges = async (): Promise<void> => {
    if (applying) return;
    setApplying(true); setError(""); setChildJob(null);
    try {
      const finalIds = items.map((it) => overrides[it.index] ?? it.templateId);
      const cfg: GenerationConfig = { ...job.config, templateIds: finalIds, shuffleQuestions: false };
      const created = await createJob(cfg);
      let final: GenerationJob | null = null;
      while (final === null || (final.status !== "completed" && final.status !== "failed")) {
        if (unmountedRef.current) return;
        final = await getJob(created.jobId);
        setChildJob(final);
        if (final.status !== "completed" && final.status !== "failed")
          await new Promise((r) => setTimeout(r, 800));
      }
      if (unmountedRef.current) return;
      if (final.status === "completed") {
        nav(`/jobs/${created.jobId}`);
      } else {
        setError(final.errors[0]?.message ?? "Генерація завершилася з помилкою");
      }
    } catch (e) {
      setError(e instanceof Error ? e.message : "failed");
    } finally {
      setApplying(false);
    }
  };

  // Replace one pool slot with a random template of the same kind (server picks),
  // then jump to the regenerated job. The row title shows exactly which question goes.
  const randomSwap = async (index: number): Promise<void> => {
    if (regenIndex !== null || applying) return;
    setRegenIndex(index); setError(""); setChildJob(null);
    try {
      const child = await regenerateItem(job.jobId, index);
      let final: GenerationJob | null = null;
      while (final === null || (final.status !== "completed" && final.status !== "failed")) {
        if (unmountedRef.current) return;
        final = await getJob(child.jobId);
        setChildJob(final);
        if (final.status !== "completed" && final.status !== "failed")
          await new Promise((r) => setTimeout(r, 800));
      }
      if (unmountedRef.current) return;
      if (final.status === "completed") {
        nav(`/jobs/${child.jobId}`);
      } else {
        // single error alert — the childJob "bundle failed" banner is for applyChanges
        setChildJob(null);
        setError(final.errors[0]?.message ?? "Перегенерація завершилася з помилкою");
      }
    } catch (e) {
      setError(e instanceof Error ? e.message : "regenerate failed");
    } finally {
      setRegenIndex(null);
    }
  };

  if (items.length === 0 && error.length === 0) {
    return <p className="text-sm text-gray-500">Завантаження вибірки…</p>;
  }

  const currentIds = items.map((it) => overrides[it.index] ?? it.templateId);

  return (
    <div className={cardCls}>
      <div className="flex items-start justify-between gap-3 mb-4 flex-wrap">
        <div className="min-w-0 flex-1">
          <h2 className="text-lg font-semibold inline-flex items-center gap-2">
            <Sparkles className="h-4 w-4 text-amber-500" />
            Редактор питань
          </h2>
          <p className="text-xs text-gray-500 mt-1">
            Перегляньте підібрані питання. «Змінити» — обрати інший шаблон вручну,
            кубик — випадкова заміна того самого типу (одразу створює новий результат).
            Після ручних замін натисніть «Створити фінальний бандл».
          </p>
        </div>
        {hasChanges && (
          <button className={btnPrimaryCls} onClick={() => void applyChanges()} disabled={applying}
            data-testid="pe-apply">
            {applying
              ? <><Loader2 className="h-4 w-4 animate-spin" /> Генерація…</>
              : <><RefreshCcw className="h-4 w-4" /> Створити фінальний бандл ({String(Object.keys(overrides).length)})</>}
          </button>
        )}
      </div>

      {error.length > 0 && <Alert kind="error">{error}</Alert>}

      <div className="grid gap-3">
        {items.map((it) => {
          const effectiveId = overrides[it.index] ?? it.templateId;
          const modified = effectiveId !== it.templateId;
          const displayTitle = modified ? "(новий шаблон — застосуйте для перегляду)" : it.title;
          const displayPreview = modified ? "" : preview(it.body);
          const kind = it.kind ?? "closed";
          return (
            <div key={it.index} className={cn(
              "border rounded-lg px-4 py-3 transition-colors overflow-hidden w-full max-w-full",
              modified ? "border-amber-300 bg-amber-50/40" : "border-gray-200",
            )} data-testid={`pe-item-${String(it.index)}`}>
              <div className="flex items-start gap-3 w-full min-w-0">
                <span className="font-mono text-xs text-gray-400 pt-0.5 w-6 shrink-0">{String(it.index)}.</span>
                <div className="flex-1 min-w-0 max-w-full">
                  <div className="flex items-start gap-2 flex-wrap">
                    <p
                      className="text-sm font-medium text-gray-900 min-w-0 flex-1"
                      style={{ overflowWrap: "anywhere", wordBreak: "break-word" }}
                    >{displayTitle}</p>
                    <div className="flex items-center gap-1 shrink-0">
                      <Badge tone={kind === "closed" ? "amber" : "gray"}>{kind === "closed" ? "Вибір" : "Відкрите"}</Badge>
                      {modified && <Badge tone="green">Змінено</Badge>}
                    </div>
                  </div>
                  {displayPreview.length > 0 && (
                    <p
                      className="text-xs text-gray-500 mt-1"
                      style={{
                        overflowWrap: "anywhere",
                        wordBreak: "break-word",
                        display: "-webkit-box",
                        WebkitBoxOrient: "vertical",
                        WebkitLineClamp: 3,
                        overflow: "hidden",
                      }}
                      data-testid={`pe-preview-${String(it.index)}`}>
                      {displayPreview}
                    </p>
                  )}
                </div>
                <div className="flex gap-1 shrink-0">
                  {modified && (
                    <button className={cn(btnSecondaryCls, "h-8 px-2")}
                      title="Скасувати заміну"
                      data-testid={`pe-revert-${String(it.index)}`}
                      onClick={() => setOverrides((o) => { const n = { ...o }; delete n[it.index]; return n; })}>
                      <X className="h-3.5 w-3.5" />
                    </button>
                  )}
                  <button
                    className={cn(btnSecondaryCls, "h-8 px-3")}
                    data-testid={`pe-change-${String(it.index)}`}
                    onClick={() => setPicking(it)}
                    disabled={kind === null}>
                    <Replace className="h-3.5 w-3.5" />
                    <span className="hidden sm:inline">Змінити</span>
                  </button>
                  <button
                    className={cn(btnSecondaryCls, "h-8 px-2")}
                    title="Замінити випадковим питанням того самого типу"
                    data-testid={`pe-random-${String(it.index)}`}
                    onClick={() => void randomSwap(it.index)}
                    disabled={kind === null || regenIndex !== null || applying}>
                    {regenIndex === it.index
                      ? <Loader2 className="h-3.5 w-3.5 animate-spin" />
                      : <Dices className="h-3.5 w-3.5" />}
                  </button>
                </div>
              </div>
            </div>
          );
        })}
      </div>

      {picking !== null && picking.kind !== null && (
        <TemplatePicker
          initialKind={picking.kind}
          currentId={overrides[picking.index] ?? picking.templateId}
          excludeIds={currentIds}
          onClose={() => setPicking(null)}
          onPick={(id) => {
            setOverrides((o) => ({ ...o, [picking.index]: id }));
            setPicking(null);
          }}
        />
      )}

      {childJob !== null && childJob.status === "failed" && (
        <div className="mt-4">
          <Alert kind="error">
            Помилка при генерації фінального бандлу: {childJob.errors.map((e) => e.message).join("; ")}
          </Alert>
        </div>
      )}
      {childJob !== null && childJob.status === "completed" && (
        <div className="mt-4">
          <Alert kind="success"><span className="inline-flex items-center gap-1"><Check className="h-4 w-4" /> Бандл готовий</span></Alert>
        </div>
      )}
    </div>
  );
};
