import { useEffect, useState } from "react";
import type { GenerationConfig, GenerationJob, PoolStats, QuestionTypeFilter, RenderMode, Theme } from "@quiz/contracts";
import { createJob, createPresetFromConfig, getArtifactPreviewUrl, getJob, getPoolStats, listThemes } from "../api";
import { defaultConfig } from "../configurator";
import { cn } from "../lib/utils";
import {
  FileDown, Loader2, CheckCircle2, XCircle, Eye, RefreshCcw, Bookmark,
} from "lucide-react";
import { Label, Input, Select, Toggle, Alert, cardCls, btnPrimaryCls, btnSecondaryCls } from "../components/ui";
import { Link, useNavigate } from "react-router-dom";

const MODES: { value: RenderMode; label: string }[] = [
  { value: "OneOnLine", label: "Кожен варіант з нового рядку" },
  { value: "SpaceBetween", label: "Варіанти через пробіл" },
  { value: "TabBetween", label: "Варіанти через табуляцію" },
  { value: "TwoOnLine", label: "Два варіанти в рядку" },
];

const Q_TYPES: { value: QuestionTypeFilter; label: string }[] = [
  { value: "mixed", label: "Змішані (вибір + відкриті)" },
  { value: "closed", label: "Тільки вибір відповіді" },
  { value: "open", label: "Тільки відкриті" },
];

const ARTIFACT_LABELS: Record<string, string> = {
  pdf: "PDF",
  docx: "Word (DOCX)",
  md: "Markdown",
  answers_json: "Ключ відповідей (JSON)",
  answers_md: "Ключ відповідей (Markdown)",
};

const sleep = (ms: number): Promise<void> => new Promise((r) => setTimeout(r, ms));
const toMode = (v: string): RenderMode => (MODES.some((m) => m.value === v) ? (v as RenderMode) : "OneOnLine");
const toQType = (v: string): QuestionTypeFilter => (Q_TYPES.some((t) => t.value === v) ? (v as QuestionTypeFilter) : "mixed");

const NumberField = ({
  value, min, max, onCommit, id,
}: { value: number; min: number; max: number; onCommit: (n: number) => void; id?: string }) => {
  const [local, setLocal] = useState(String(value));
  useEffect(() => { setLocal(String(value)); }, [value]);
  const commit = (): void => {
    const n = Number(local.trim());
    if (!Number.isFinite(n) || Number.isNaN(n)) { setLocal(String(value)); return; }
    const clamped = Math.min(max, Math.max(min, Math.round(n)));
    setLocal(String(clamped));
    if (clamped !== value) onCommit(clamped);
  };
  return (
    <Input
      id={id}
      type="text"
      inputMode="numeric"
      value={local}
      onChange={(e) => setLocal(e.target.value.replace(/[^0-9]/g, ""))}
      onBlur={commit}
      onKeyDown={(e) => { if (e.key === "Enter") (e.target as HTMLInputElement).blur(); }}
    />
  );
};

export const GeneratorPage = () => {
  const nav = useNavigate();
  const [config, setConfig] = useState<GenerationConfig>(defaultConfig());
  const [pool, setPool] = useState<PoolStats | null>(null);
  const [themes, setThemes] = useState<Theme[]>([]);
  const [job, setJob] = useState<GenerationJob | null>(null);
  const [jobId, setJobId] = useState("");
  const [error, setError] = useState("");
  const [running, setRunning] = useState(false);

  const set = <K extends keyof GenerationConfig>(key: K, value: GenerationConfig[K]) =>
    setConfig((prev) => ({ ...prev, [key]: value }));

  useEffect(() => {
    void getPoolStats().then(setPool).catch(() => setPool(null));
    void listThemes().then(setThemes).catch(() => setThemes([]));
  }, []);

  const generate = async (): Promise<void> => {
    if (running) return;
    setError(""); setJob(null); setRunning(true);
    try {
      const created = await createJob(config);
      setJobId(created.jobId);
      let done = false;
      let final: GenerationJob | null = null;
      while (!done) {
        const current = await getJob(created.jobId);
        setJob(current);
        final = current;
        done = current.status === "completed" || current.status === "failed";
        if (!done) await sleep(1000);
      }
      if (final !== null && final.status === "completed") {
        nav(`/jobs/${created.jobId}`);
      }
    } catch (e) {
      setError(e instanceof Error ? e.message : "Помилка генерації");
    } finally {
      setRunning(false);
    }
  };

  const toggleTheme = (id: string): void => {
    const next = new Set(config.themeIds ?? []);
    if (next.has(id)) next.delete(id); else next.add(id);
    set("themeIds", Array.from(next));
  };

  const openPreview = (name: string): void => {
    if (jobId.length === 0) return;
    window.open(getArtifactPreviewUrl(jobId, name), "_blank", "noopener,noreferrer");
  };

  const visibleArtifacts =
    job?.artifacts.filter((a) => a.format !== "config" && a.format !== "manifest" && a.format !== "zip") ?? [];
  const isMixed = config.questionTypeFilter === "mixed";
  const poolHint = pool === null
    ? "Зчитую пул питань..."
    : `Пул: ${String(pool.openCount)} відкритих · ${String(pool.closedCount)} з вибором відповіді`;

  return (
    <div className="flex flex-col gap-6">
      {error.length > 0 && (
        <Alert kind="error">
          <span className="inline-flex items-start gap-2">
            <XCircle className="h-4 w-4 mt-0.5 shrink-0" />
            {error}
          </span>
        </Alert>
      )}

      <div className={cardCls}>
        <h2 className="text-lg font-semibold mb-5">Параметри тесту</h2>

        <div className="grid grid-cols-1 sm:grid-cols-2 gap-4">
          <div className="sm:col-span-2">
            <Label text="Назва роботи">
              <Input value={config.title} onChange={(e) => set("title", e.target.value)} />
            </Label>
          </div>

          <Label text="Кількість варіантів">
            <NumberField value={config.variantCount} min={1} max={100}
              onCommit={(n) => set("variantCount", n)} />
          </Label>

          <Label text="Питань у варіанті" hint={poolHint}>
            <NumberField value={config.questionsPerVariant} min={1} max={500}
              onCommit={(n) => set("questionsPerVariant", n)} />
          </Label>

          <Label text="Тип питань">
            <Select value={config.questionTypeFilter} onChange={(e) => set("questionTypeFilter", toQType(e.target.value))}>
              {Q_TYPES.map((t) => <option key={t.value} value={t.value}>{t.label}</option>)}
            </Select>
          </Label>

          <Label text="Розміщення варіантів відповіді">
            <Select value={config.mode} onChange={(e) => set("mode", toMode(e.target.value))}>
              {MODES.map((m) => <option key={m.value} value={m.value}>{m.label}</option>)}
            </Select>
          </Label>

          {isMixed && (
            <Label text="Частка питань з вибором (%)">
              <Input type="number" min={0} max={100} step={5}
                value={Math.round(config.closedShare * 100)}
                onChange={(e) => set("closedShare", Math.max(0, Math.min(100, Number(e.target.value) || 0)) / 100)} />
            </Label>
          )}

          {themes.length > 0 && (
            <div className="sm:col-span-2">
              <Label text="Теми (якщо не вибрано — всі)">
                <div className="flex flex-wrap gap-2">
                  {themes.map((t) => {
                    const active = (config.themeIds ?? []).includes(t.id);
                    return (
                      <button key={t.id} type="button" onClick={() => toggleTheme(t.id)}
                        className={cn(
                          "px-3 py-1 rounded-full text-xs border transition-colors",
                          active ? "bg-gray-900 text-white border-gray-900" : "bg-white text-gray-700 border-gray-300 hover:bg-gray-50",
                        )}>
                        {t.name} <span className="opacity-60">({String(t.templateCount)})</span>
                      </button>
                    );
                  })}
                </div>
              </Label>
            </div>
          )}
        </div>

        <div className="mt-4 divide-y divide-gray-100">
          <Toggle checked={config.shuffleQuestions} onChange={() => set("shuffleQuestions", !config.shuffleQuestions)}
            label="Перемішувати питання" hint="Різний порядок питань у кожному варіанті" />
          <Toggle checked={config.includeAnswerKey} onChange={() => set("includeAnswerKey", !config.includeAnswerKey)}
            label="Ключ відповідей" hint="Генерувати файли answers.json та answers.md" />
        </div>

        <div className="mt-4 flex gap-2">
          <button className={cn(btnPrimaryCls, "flex-1")} disabled={running} onClick={() => void generate()}>
            {running ? <><Loader2 className="h-4 w-4 animate-spin" /> Генерація...</> : "Згенерувати тест"}
          </button>
          <button
            className={btnSecondaryCls}
            type="button"
            disabled={running}
            title="Зберегти поточні налаштування як пресет"
            onClick={() => {
              const name = prompt("Назва пресету:", config.title);
              if (name === null || name.trim().length === 0) return;
              void createPresetFromConfig(name.trim(), config)
                .then(() => setError(""))
                .catch((e: unknown) => {
                  const msg = e instanceof Error ? e.message : "Помилка";
                  setError(msg.includes("already exists")
                    ? `Пресет з назвою «${name.trim()}» вже існує. Оберіть іншу назву.`
                    : msg);
                });
            }}
          >
            <Bookmark className="h-4 w-4" /> Зберегти пресет
          </button>
        </div>
      </div>

      {job !== null && (
        <div className={cardCls}>
          <div className="flex items-center justify-between mb-4">
            <div className="flex items-center gap-2">
              {job.status === "completed" ? <CheckCircle2 className="h-5 w-5 text-green-600" />
                : job.status === "failed" ? <XCircle className="h-5 w-5 text-red-500" />
                : <Loader2 className="h-5 w-5 animate-spin text-gray-500" />}
              <h2 className="text-lg font-semibold">
                {job.status === "completed" ? "Готово" : job.status === "failed" ? "Помилка" : "Генерація..."}
              </h2>
            </div>
            {job.status === "completed" && (
              <Link to={`/jobs/${jobId}`} className="text-sm text-gray-600 hover:text-gray-900 inline-flex items-center gap-1">
                <RefreshCcw className="h-3.5 w-3.5" /> Перегенерувати питання
              </Link>
            )}
          </div>

          {job.status === "failed" && job.errors.length > 0 && (
            <div className="rounded-md bg-red-50 border border-red-200 p-3 text-sm text-red-700 mb-4 space-y-1">
              {job.errors.map((err, i) => (
                <p key={i}>
                  {err.message}
                  {err.hint !== undefined && <span className="text-red-400"> — {err.hint}</span>}
                </p>
              ))}
            </div>
          )}

          {job.status === "completed" && (
            <>
              <div className="divide-y divide-gray-100 mb-4">
                {visibleArtifacts.map((a) => (
                  <div key={a.sha256} className="flex items-center justify-between py-2 text-sm gap-2">
                    <div className="min-w-0 flex items-center gap-2">
                      <span className="text-gray-800">{ARTIFACT_LABELS[a.format] ?? a.name}</span>
                      <span className="text-xs text-gray-400">{(a.sizeBytes / 1024).toFixed(0)} KB</span>
                    </div>
                    <button type="button"
                      className="inline-flex items-center gap-1 rounded border border-gray-200 px-2.5 py-1 text-xs text-gray-700 hover:bg-gray-50 shrink-0"
                      onClick={() => openPreview(a.name)}>
                      <Eye className="h-3.5 w-3.5" /> Відкрити
                    </button>
                  </div>
                ))}
              </div>
              <a href={`/api/generation/jobs/${jobId}/download`} className={cn(btnPrimaryCls, "w-full no-underline")}>
                <FileDown className="h-4 w-4" /> Завантажити всі файли
              </a>
            </>
          )}
        </div>
      )}
    </div>
  );
};
