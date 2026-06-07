import { useEffect, useState } from "react";
import { useNavigate, useParams } from "react-router-dom";
import { Check, Plus, Save, Trash2, X } from "lucide-react";
import type {
  ClosedTemplateBody, Template, TemplateBody, TemplateOption, TemplateVersion, Theme,
} from "@quiz/contracts";
import {
  createTemplate, deleteTemplate, getTemplate, listTemplateVersions, listThemes, updateTemplate,
} from "../api";
import { Alert, Badge, Input, Label, Textarea, btnPrimaryCls, btnSecondaryCls, btnDangerCls, cardCls } from "../components/ui";
import { cn } from "../lib/utils";

type Kind = "closed" | "open";

interface EditorState {
  readonly kind: Kind;
  readonly title: string;
  readonly themeIds: readonly string[];
  readonly options: readonly TemplateOption[];
  readonly ncase: number;
  readonly nGood: number;
  readonly code: string;
  readonly fabric: "template_answer" | "file_answer";
  readonly imagePaths: readonly string[];
}

const emptyClosed = (): EditorState => ({
  kind: "closed", title: "", themeIds: [],
  options: [{ text: "", correct: true }, { text: "", correct: false }],
  ncase: 4, nGood: 2,
  code: "", fabric: "template_answer", imagePaths: [],
});

const fromTemplate = (t: Template): EditorState => {
  if (t.body.kind === "closed") {
    return {
      kind: "closed", title: t.title, themeIds: t.themeIds,
      options: t.body.options, ncase: t.body.ncase, nGood: t.body.nGood,
      code: "", fabric: "template_answer", imagePaths: t.body.imagePaths,
    };
  }
  return {
    kind: "open", title: t.title, themeIds: t.themeIds,
    options: [], ncase: 0, nGood: 0,
    code: t.body.code, fabric: t.body.fabric, imagePaths: t.body.imagePaths,
  };
};

const buildBody = (s: EditorState): TemplateBody =>
  s.kind === "closed"
    ? { kind: "closed", options: s.options, ncase: s.ncase, nGood: s.nGood, imagePaths: s.imagePaths } as ClosedTemplateBody
    : { kind: "open", fabric: s.fabric, code: s.code, imagePaths: s.imagePaths };

export const TemplateEditorPage = () => {
  const nav = useNavigate();
  const { id } = useParams();
  const isNew = id === "new" || id === undefined;

  const [state, setState] = useState<EditorState>(emptyClosed());
  const [template, setTemplate] = useState<Template | null>(null);
  const [versions, setVersions] = useState<TemplateVersion[]>([]);
  const [themes, setThemes] = useState<Theme[]>([]);
  const [error, setError] = useState("");
  const [saving, setSaving] = useState(false);
  const [notice, setNotice] = useState("");

  useEffect(() => {
    void listThemes().then(setThemes).catch(() => setThemes([]));
    if (!isNew) {
      void (async (): Promise<void> => {
        try {
          const t = await getTemplate(id!);
          setTemplate(t);
          setState(fromTemplate(t));
          setVersions(await listTemplateVersions(id!));
        } catch (e) {
          setError(e instanceof Error ? e.message : "Not found");
        }
      })();
    }
  }, [id, isNew]);

  const isImported = template?.source === "imported";
  const isOpen = state.kind === "open";
  const readOnlyBody = isOpen && isImported; // open imported templates lock the code

  const setField = <K extends keyof EditorState>(key: K, value: EditorState[K]): void =>
    setState((prev) => ({ ...prev, [key]: value }));

  const toggleTheme = (tid: string): void => {
    const s = new Set(state.themeIds);
    if (s.has(tid)) s.delete(tid); else s.add(tid);
    setField("themeIds", Array.from(s));
  };

  const setOption = (i: number, patch: Partial<TemplateOption>): void => {
    const next = state.options.map((o, idx) => idx === i ? { ...o, ...patch } : o);
    setField("options", next);
  };

  const addOption = (): void =>
    setField("options", [...state.options, { text: "", correct: false }]);

  const removeOption = (i: number): void =>
    setField("options", state.options.filter((_, idx) => idx !== i));

  const save = async (): Promise<void> => {
    setSaving(true); setError(""); setNotice("");
    try {
      if (state.title.trim().length === 0) throw new Error("Вкажіть заголовок");
      if (state.kind === "closed" && state.options.length < 2) throw new Error("Додайте щонайменше 2 варіанти");
      if (state.kind === "closed" && !state.options.some((o) => o.correct)) throw new Error("Позначте хоча б одну правильну відповідь");
      if (state.kind === "closed" && state.options.some((o) => o.text.trim().length === 0))
        throw new Error("Всі варіанти мають бути непорожніми");
      const body = buildBody(state);
      if (isNew) {
        const created = await createTemplate({ kind: state.kind, title: state.title, body, themeIds: state.themeIds });
        nav(`/templates/${created.id}`, { replace: true });
      } else {
        const patch: { title?: string; body?: TemplateBody; themeIds?: readonly string[] } = {
          title: state.title,
          themeIds: state.themeIds,
        };
        if (!readOnlyBody) patch.body = body;
        const updated = await updateTemplate(id!, patch);
        setTemplate(updated);
        setVersions(await listTemplateVersions(id!));
        setNotice(`Збережено (v${String(updated.version)})`);
      }
    } catch (e) {
      setError(e instanceof Error ? e.message : "save failed");
    } finally {
      setSaving(false);
    }
  };

  const onDelete = async (): Promise<void> => {
    if (!confirm("Видалити шаблон?")) return;
    await deleteTemplate(id!);
    nav("/templates");
  };

  return (
    <div className="flex flex-col gap-5">
      {error.length > 0 && <Alert kind="error">{error}</Alert>}
      {notice.length > 0 && <Alert kind="success">{notice}</Alert>}

      <div className="flex items-center justify-between">
        <h1 className="text-2xl font-semibold">
          {isNew ? "Новий шаблон" : "Редагування шаблону"}
        </h1>
        <div className="flex items-center gap-2">
          {!isNew && <Badge tone={isImported ? "gray" : "green"}>{isImported ? "Імпортований" : "Користувацький"}</Badge>}
          {template !== null && <Badge>v{String(template.version)}</Badge>}
        </div>
      </div>

      <div className={cardCls}>
        <div className="grid grid-cols-1 sm:grid-cols-2 gap-4">
          {isNew && (
            <Label text="Тип">
              <div className="flex gap-2">
                <button type="button"
                  className={cn("flex-1 h-9 rounded-md border text-sm", state.kind === "closed" ? "bg-gray-900 text-white border-gray-900" : "bg-white text-gray-700 border-gray-300")}
                  onClick={() => setState(emptyClosed())}>
                  З вибором відповіді
                </button>
                <button type="button"
                  className={cn("flex-1 h-9 rounded-md border text-sm", state.kind === "open" ? "bg-gray-900 text-white border-gray-900" : "bg-white text-gray-700 border-gray-300")}
                  onClick={() => setState({ ...emptyClosed(), kind: "open" })}>
                  Відкрите
                </button>
              </div>
            </Label>
          )}

          <div className="sm:col-span-2">
            <Label text="Заголовок / Питання">
              <Input value={state.title} onChange={(e) => setField("title", e.target.value)} />
            </Label>
          </div>

          {themes.length > 0 && (
            <div className="sm:col-span-2">
              <Label text="Теми">
                <div className="flex flex-wrap gap-2">
                  {themes.map((t) => {
                    const active = state.themeIds.includes(t.id);
                    return (
                      <button key={t.id} type="button" onClick={() => toggleTheme(t.id)}
                        className={cn(
                          "px-3 py-1 rounded-full text-xs border transition-colors",
                          active ? "bg-gray-900 text-white border-gray-900" : "bg-white text-gray-700 border-gray-300 hover:bg-gray-50",
                        )}>
                        {t.name}
                      </button>
                    );
                  })}
                </div>
              </Label>
            </div>
          )}
        </div>
      </div>

      {state.kind === "closed" && (
        <div className={cardCls}>
          <div className="flex items-center justify-between mb-3">
            <h2 className="text-lg font-semibold">Варіанти відповіді</h2>
            <button className={btnSecondaryCls} onClick={addOption}>
              <Plus className="h-4 w-4" /> Додати
            </button>
          </div>

          <div className="space-y-2">
            {state.options.map((opt, i) => (
              <div key={i} className="flex items-center gap-2">
                <button type="button" onClick={() => setOption(i, { correct: !opt.correct })}
                  className={cn(
                    "h-9 w-9 flex items-center justify-center rounded-md border",
                    opt.correct ? "bg-green-50 border-green-400 text-green-700" : "bg-white border-gray-300 text-gray-400 hover:border-gray-500",
                  )}
                  title={opt.correct ? "Правильна" : "Неправильна"}>
                  <Check className="h-4 w-4" />
                </button>
                <Input value={opt.text} onChange={(e) => setOption(i, { text: e.target.value })}
                  placeholder={`Варіант ${String(i + 1)}`} />
                <button className={cn(btnDangerCls, "h-9 px-2")} onClick={() => removeOption(i)}>
                  <X className="h-4 w-4" />
                </button>
              </div>
            ))}
          </div>

          <div className="grid grid-cols-2 gap-3 mt-4">
            <Label text="ncase (скільки варіантів показувати)" hint="Обмеження у генерації">
              <Input type="number" min={2} max={50} value={state.ncase}
                onChange={(e) => setField("ncase", Math.max(2, Math.min(50, Number(e.target.value) || 4)))} />
            </Label>
            <Label text="nGood (скільки правильних у вибірці)">
              <Input type="number" min={0} max={state.ncase} value={state.nGood}
                onChange={(e) => setField("nGood", Math.max(0, Math.min(state.ncase, Number(e.target.value) || 0)))} />
            </Label>
          </div>
        </div>
      )}

      {state.kind === "open" && (
        <div className={cardCls}>
          <h2 className="text-lg font-semibold mb-3">Шаблон (код)</h2>
          {readOnlyBody && (
            <Alert kind="info">
              Шаблони відкритих питань імпортовані з двигуна Quiz і містять параметризовані Python/C++ фрагменти.
              Редагування коду через UI недоступне — натомість можна змінити назву, теми, теги зображень,
              або видалити шаблон і створити новий.
            </Alert>
          )}
          <div className="mt-3">
            <Textarea value={state.code} readOnly={readOnlyBody} rows={14}
              onChange={(e) => setField("code", e.target.value)} />
          </div>
        </div>
      )}

      <div className="flex items-center justify-between gap-3">
        {!isNew && (
          <button className={btnDangerCls} onClick={() => void onDelete()}>
            <Trash2 className="h-4 w-4" /> Видалити
          </button>
        )}
        <div className="ml-auto flex items-center gap-2">
          <button className={btnSecondaryCls} onClick={() => nav(-1)}>Скасувати</button>
          <button className={btnPrimaryCls} disabled={saving} onClick={() => void save()}>
            <Save className="h-4 w-4" /> {isNew ? "Створити" : "Зберегти"}
          </button>
        </div>
      </div>

      {!isNew && versions.length > 0 && (
        <div className={cardCls}>
          <h3 className="text-sm font-semibold text-gray-600 mb-2">Історія версій</h3>
          <div className="divide-y divide-gray-100">
            {versions.map((v) => (
              <div key={v.id} className="py-2 flex items-center justify-between text-sm">
                <span>v{String(v.version)} · {v.title}</span>
                <span className="text-xs text-gray-400">{new Date(v.createdAt).toLocaleString()}</span>
              </div>
            ))}
          </div>
        </div>
      )}
    </div>
  );
};
