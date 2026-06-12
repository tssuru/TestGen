import { useEffect, useState, type ReactNode } from "react";
import { Link, useSearchParams } from "react-router-dom";
import { Plus, Filter, Copy, Trash2, Pencil } from "lucide-react";
import type { TemplateSummary, Theme, TemplateKind } from "@quiz/contracts";
import { deleteTemplate, forkTemplate, listTemplates, listThemes } from "../api";
import { Alert, Badge, Input, Select, btnPrimaryCls, btnSecondaryCls, btnDangerCls, cardCls } from "../components/ui";
import { cn } from "../lib/utils";

export const TemplatesPage = () => {
  const [params, setParams] = useSearchParams();
  const kind = (params.get("kind") ?? "") as TemplateKind | "";
  const themeId = params.get("themeId") ?? "";
  const search = params.get("search") ?? "";
  const [templates, setTemplates] = useState<TemplateSummary[]>([]);
  const [themes, setThemes] = useState<Theme[]>([]);
  const [error, setError] = useState("");

  const reload = async (): Promise<void> => {
    try {
      const f: { kind?: TemplateKind; themeId?: string; search?: string } = {};
      if (kind === "closed" || kind === "open") f.kind = kind;
      if (themeId.length > 0) f.themeId = themeId;
      if (search.length > 0) f.search = search;
      const [list, t] = await Promise.all([listTemplates(f), listThemes()]);
      setTemplates(list);
      setThemes(t);
    } catch (e) {
      setError(e instanceof Error ? e.message : "error");
    }
  };

  useEffect(() => { void reload(); }, [kind, themeId, search]);

  const setParam = (key: string, value: string): void => {
    const next = new URLSearchParams(params);
    if (value.length === 0) next.delete(key); else next.set(key, value);
    setParams(next);
  };

  const onFork = async (id: string): Promise<void> => {
    try {
      await forkTemplate(id);
      await reload();
    } catch (e) { setError(e instanceof Error ? e.message : "fork failed"); }
  };

  const onDelete = async (id: string): Promise<void> => {
    if (!confirm("Видалити шаблон?")) return;
    try {
      await deleteTemplate(id);
      await reload();
    } catch (e) { setError(e instanceof Error ? e.message : "delete failed"); }
  };

  return (
    <div className="flex flex-col gap-5">
      {error.length > 0 && <Alert kind="error">{error}</Alert>}

      <div className="flex items-center justify-between">
        <h1 className="text-2xl font-semibold">Шаблони</h1>
        <Link to="/templates/new" className={btnPrimaryCls}>
          <Plus className="h-4 w-4" /> Новий шаблон
        </Link>
      </div>

      <div className={cn(cardCls, "flex gap-3 flex-wrap items-end")}>
        <div className="flex-1 min-w-[200px]">
          <label className="text-xs text-gray-600">Пошук за назвою</label>
          <Input value={search} onChange={(e) => setParam("search", e.target.value)} placeholder="графи, цикли..." />
        </div>
        <div className="w-[200px]">
          <label className="text-xs text-gray-600">Тип</label>
          <Select value={kind} onChange={(e) => setParam("kind", e.target.value)}>
            <option value="">Усі</option>
            <option value="closed">З вибором</option>
            <option value="open">Відкриті</option>
          </Select>
        </div>
        <div className="w-[220px]">
          <label className="text-xs text-gray-600">Тема</label>
          <Select value={themeId} onChange={(e) => setParam("themeId", e.target.value)}>
            <option value="">Усі</option>
            {themes.map((t) => <option key={t.id} value={t.id}>{t.name} ({String(t.templateCount)})</option>)}
          </Select>
        </div>
        {(search.length > 0 || kind.length > 0 || themeId.length > 0) && (
          <button className={btnSecondaryCls} onClick={() => setParams(new URLSearchParams())}>
            <Filter className="h-3.5 w-3.5" /> Очистити
          </button>
        )}
      </div>

      {templates.length === 0 ? (
        <div className={cardCls}>
          <p className="text-sm text-gray-500 text-center py-8">Немає шаблонів за заданими фільтрами</p>
        </div>
      ) : (
        <TemplateGroups
          templates={templates}
          themes={themes}
          groupByTheme={themeId.length === 0 && kind.length === 0 && search.length === 0}
          onFork={(id) => void onFork(id)}
          onDelete={(id) => void onDelete(id)}
        />
      )}
    </div>
  );
};

interface GroupProps {
  templates: TemplateSummary[];
  themes: Theme[];
  groupByTheme: boolean;
  onFork: (id: string) => void;
  onDelete: (id: string) => void;
}

const TemplateGroups = ({ templates, themes, groupByTheme, onFork, onDelete }: GroupProps) => {
  const themeById = new Map(themes.map((t) => [t.id, t]));

  const renderRow = (t: TemplateSummary): ReactNode => (
    <tr key={t.id} className="border-b border-gray-100 last:border-0">
      <td className="py-2 pr-2">
        <div className="flex flex-col">
          <div>
            <Link to={`/templates/${t.id}`} className="text-gray-900 hover:underline">{t.title}</Link>
            <span className="ml-2">
              <Badge tone={t.source === "user" ? "green" : "gray"}>{t.source === "user" ? "Користувацький" : "Імпортований"}</Badge>
            </span>
          </div>
          {t.sourcePath !== undefined && (
            <span className="text-xs text-gray-400 font-mono truncate max-w-[520px]">{t.sourcePath}</span>
          )}
        </div>
      </td>
      <td className="py-2 pr-2">
        <Badge tone={t.kind === "closed" ? "amber" : "gray"}>{t.kind === "closed" ? "Вибір" : "Відкрите"}</Badge>
      </td>
      <td className="py-2 pr-2">v{String(t.version)}</td>
      <td className="py-2 pr-2">
        <div className="flex flex-wrap gap-1">
          {t.themeIds.map((id) => <Badge key={id}>{themeById.get(id)?.name ?? id}</Badge>)}
        </div>
      </td>
      <td className="py-2">
        <div className="flex gap-1 justify-end">
          <Link to={`/templates/${t.id}`} className={cn(btnSecondaryCls, "h-8 px-2")}>
            <Pencil className="h-3.5 w-3.5" />
          </Link>
          <button className={cn(btnSecondaryCls, "h-8 px-2")} onClick={() => onFork(t.id)}>
            <Copy className="h-3.5 w-3.5" />
          </button>
          <button className={cn(btnDangerCls, "h-8 px-2")} onClick={() => onDelete(t.id)}>
            <Trash2 className="h-3.5 w-3.5" />
          </button>
        </div>
      </td>
    </tr>
  );

  const header = (
    <thead>
      <tr className="text-left text-xs text-gray-500 border-b border-gray-200">
        <th className="py-2 pr-2">Назва</th>
        <th className="py-2 pr-2 w-24">Тип</th>
        <th className="py-2 pr-2 w-24">Версія</th>
        <th className="py-2 pr-2">Теми</th>
        <th className="py-2 w-44"></th>
      </tr>
    </thead>
  );

  if (!groupByTheme) {
    return (
      <div className={cardCls}>
        <table className="w-full text-sm">
          {header}
          <tbody>{templates.map(renderRow)}</tbody>
        </table>
      </div>
    );
  }

  // Group by theme; a template with multiple themes appears under each
  const themedGroups = themes.map((th) => ({
    theme: th,
    items: templates.filter((t) => t.themeIds.includes(th.id)),
  })).filter((g) => g.items.length > 0);
  const untagged = templates.filter((t) => t.themeIds.length === 0);

  return (
    <div className="flex flex-col gap-4">
      {themedGroups.map(({ theme, items }) => (
        <div key={theme.id} className={cardCls}>
          <div className="flex items-center justify-between mb-3">
            <div className="flex items-center gap-2">
              <h3 className="text-base font-semibold text-gray-900">{theme.name}</h3>
              <Badge>{String(items.length)}</Badge>
            </div>
            {theme.description.length > 0 && (
              <p className="text-xs text-gray-500 truncate max-w-[400px]">{theme.description}</p>
            )}
          </div>
          <table className="w-full text-sm">
            {header}
            <tbody>{items.map(renderRow)}</tbody>
          </table>
        </div>
      ))}
      {untagged.length > 0 && (
        <div className={cardCls}>
          <div className="flex items-center gap-2 mb-3">
            <h3 className="text-base font-semibold text-gray-500">Без теми</h3>
            <Badge tone="gray">{String(untagged.length)}</Badge>
          </div>
          <table className="w-full text-sm">
            {header}
            <tbody>{untagged.map(renderRow)}</tbody>
          </table>
        </div>
      )}
    </div>
  );
};
