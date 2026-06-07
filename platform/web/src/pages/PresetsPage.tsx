import { useEffect, useState } from "react";
import { useNavigate } from "react-router-dom";
import { Play, Trash2, Pencil, Bookmark, Check, X } from "lucide-react";
import type { QuizPreset } from "@quiz/contracts";
import { createJob, deletePreset, getJob, listPresets, updatePreset } from "../api";
import { Alert, Badge, Input, btnPrimaryCls, btnSecondaryCls, btnDangerCls, cardCls } from "../components/ui";
import { cn } from "../lib/utils";

export const PresetsPage = () => {
  const nav = useNavigate();
  const [presets, setPresets] = useState<QuizPreset[]>([]);
  const [error, setError] = useState("");
  const [editingId, setEditingId] = useState<string | null>(null);
  const [editName, setEditName] = useState("");
  const [runningId, setRunningId] = useState<string | null>(null);

  const reload = async (): Promise<void> => {
    try { setPresets(await listPresets()); }
    catch (e) { setError(e instanceof Error ? e.message : "error"); }
  };
  useEffect(() => { void reload(); }, []);

  const onRun = async (p: QuizPreset): Promise<void> => {
    setRunningId(p.id); setError("");
    try {
      // Strip seed so each run from a preset produces a fresh randomization
      const { seed: _, ...cfgNoSeed } = p.config;
      void _;
      const cfg = p.templateIds.length > 0
        ? { ...cfgNoSeed, templateIds: p.templateIds, shuffleQuestions: false }
        : cfgNoSeed;
      const created = await createJob(cfg);
      // Poll to completion, then go to detail
      let done = false;
      while (!done) {
        const j = await getJob(created.jobId);
        done = j.status === "completed" || j.status === "failed";
        if (!done) await new Promise((r) => setTimeout(r, 800));
      }
      nav(`/jobs/${created.jobId}`);
    } catch (e) {
      setError(e instanceof Error ? e.message : "run failed");
    } finally {
      setRunningId(null);
    }
  };

  const onDelete = async (id: string): Promise<void> => {
    if (!confirm("Видалити пресет?")) return;
    await deletePreset(id);
    await reload();
  };

  const startEdit = (p: QuizPreset): void => { setEditingId(p.id); setEditName(p.name); };
  const saveEdit = async (): Promise<void> => {
    if (editingId === null) return;
    await updatePreset(editingId, { name: editName.trim() });
    setEditingId(null);
    await reload();
  };

  return (
    <div className="flex flex-col gap-5">
      {error.length > 0 && <Alert kind="error">{error}</Alert>}

      <div className="flex items-center gap-2">
        <Bookmark className="h-5 w-5 text-gray-700" />
        <h1 className="text-2xl font-semibold">Пресети контрольних</h1>
      </div>

      <div className={cardCls}>
        {presets.length === 0 ? (
          <p className="text-sm text-gray-500 text-center py-8">
            Жодного пресету ще не збережено. Створіть конфіг у <button className="underline" onClick={() => nav("/")}>генераторі</button> і натисніть «Зберегти пресет».
          </p>
        ) : (
          <div className="divide-y divide-gray-100">
            {presets.map((p) => {
              const editing = editingId === p.id;
              const isFull = p.templateIds.length > 0;
              return (
                <div key={p.id} className="py-3 flex items-center gap-3 flex-wrap">
                  {editing ? (
                    <>
                      <Input value={editName} onChange={(e) => setEditName(e.target.value)} className="flex-1 min-w-[200px]" />
                      <button className={cn(btnPrimaryCls, "h-9 px-3")} onClick={() => void saveEdit()}>
                        <Check className="h-4 w-4" />
                      </button>
                      <button className={cn(btnSecondaryCls, "h-9 px-3")} onClick={() => setEditingId(null)}>
                        <X className="h-4 w-4" />
                      </button>
                    </>
                  ) : (
                    <>
                      <div className="flex-1 min-w-0">
                        <div className="flex items-center gap-2 flex-wrap">
                          <p className="font-medium text-gray-900">{p.name}</p>
                          <Badge tone={isFull ? "green" : "gray"}>{isFull ? "Фіксована вибірка" : "Конфіг"}</Badge>
                        </div>
                        <p className="text-xs text-gray-500 mt-0.5">
                          «{p.config.title}» · {String(p.config.variantCount)} вар. · {String(p.config.questionsPerVariant)} пит. ·
                          {" "}{p.config.questionTypeFilter === "closed" ? "Вибір" : p.config.questionTypeFilter === "open" ? "Відкриті" : "Змішаний"}
                          {isFull && ` · ${String(p.templateIds.length)} фіксованих шаблонів`}
                        </p>
                      </div>
                      <button className={cn(btnPrimaryCls, "h-9 px-4")} onClick={() => void onRun(p)} disabled={runningId !== null}>
                        <Play className="h-3.5 w-3.5" />
                        {runningId === p.id ? "Генерація…" : "Запустити"}
                      </button>
                      <button className={cn(btnSecondaryCls, "h-8 px-2")} onClick={() => startEdit(p)}>
                        <Pencil className="h-3.5 w-3.5" />
                      </button>
                      <button className={cn(btnDangerCls, "h-8 px-2")} onClick={() => void onDelete(p.id)}>
                        <Trash2 className="h-3.5 w-3.5" />
                      </button>
                    </>
                  )}
                </div>
              );
            })}
          </div>
        )}
      </div>
    </div>
  );
};
