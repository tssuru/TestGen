import { useEffect, useState } from "react";
import { Plus, Trash2, Pencil, X, Check } from "lucide-react";
import type { Theme } from "@quiz/contracts";
import { createTheme, deleteTheme, listThemes, updateTheme } from "../api";
import { Alert, Badge, Input, btnPrimaryCls, btnSecondaryCls, btnDangerCls, cardCls } from "../components/ui";
import { cn } from "../lib/utils";

export const ThemesPage = () => {
  const [themes, setThemes] = useState<Theme[]>([]);
  const [name, setName] = useState("");
  const [desc, setDesc] = useState("");
  const [editingId, setEditingId] = useState<string | null>(null);
  const [editName, setEditName] = useState("");
  const [editDesc, setEditDesc] = useState("");
  const [error, setError] = useState("");

  const reload = async (): Promise<void> => {
    try { setThemes(await listThemes()); }
    catch (e) { setError(e instanceof Error ? e.message : "error"); }
  };

  useEffect(() => { void reload(); }, []);

  const onCreate = async (): Promise<void> => {
    setError("");
    if (name.trim().length === 0) { setError("Вкажіть назву"); return; }
    try {
      await createTheme({ name: name.trim(), description: desc.trim() });
      setName(""); setDesc("");
      await reload();
    } catch (e) { setError(e instanceof Error ? e.message : "error"); }
  };

  const onDelete = async (id: string): Promise<void> => {
    if (!confirm("Видалити тему? Призначення на шаблонах будуть знято.")) return;
    await deleteTheme(id);
    await reload();
  };

  const startEdit = (t: Theme): void => {
    setEditingId(t.id); setEditName(t.name); setEditDesc(t.description);
  };

  const saveEdit = async (): Promise<void> => {
    if (editingId === null) return;
    await updateTheme(editingId, { name: editName.trim(), description: editDesc.trim() });
    setEditingId(null);
    await reload();
  };

  return (
    <div className="flex flex-col gap-5">
      {error.length > 0 && <Alert kind="error">{error}</Alert>}

      <h1 className="text-2xl font-semibold">Теми</h1>

      <div className={cardCls}>
        <h2 className="text-sm font-semibold text-gray-600 mb-3">Створити нову тему</h2>
        <div className="flex gap-2 flex-wrap">
          <Input value={name} onChange={(e) => setName(e.target.value)} placeholder="Назва (напр. «Рекурсія»)"
            className="flex-1 min-w-[180px]" />
          <Input value={desc} onChange={(e) => setDesc(e.target.value)} placeholder="Опис (необов'язково)"
            className="flex-[2] min-w-[240px]" />
          <button className={btnPrimaryCls} onClick={() => void onCreate()}>
            <Plus className="h-4 w-4" /> Додати
          </button>
        </div>
      </div>

      <div className={cardCls}>
        {themes.length === 0 ? (
          <p className="text-sm text-gray-500 text-center py-8">Жодної теми ще не створено</p>
        ) : (
          <div className="divide-y divide-gray-100">
            {themes.map((t) => {
              const editing = editingId === t.id;
              return (
                <div key={t.id} className="py-3 flex items-center gap-3">
                  {editing ? (
                    <>
                      <Input value={editName} onChange={(e) => setEditName(e.target.value)} className="flex-1" />
                      <Input value={editDesc} onChange={(e) => setEditDesc(e.target.value)} className="flex-[2]" />
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
                        <p className="font-medium text-gray-900">{t.name}</p>
                        {t.description.length > 0 && <p className="text-xs text-gray-500 truncate">{t.description}</p>}
                      </div>
                      <Badge>{String(t.templateCount)} шаблонів</Badge>
                      <button className={cn(btnSecondaryCls, "h-8 px-2")} onClick={() => startEdit(t)}>
                        <Pencil className="h-3.5 w-3.5" />
                      </button>
                      <button className={cn(btnDangerCls, "h-8 px-2")} onClick={() => void onDelete(t.id)}>
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
