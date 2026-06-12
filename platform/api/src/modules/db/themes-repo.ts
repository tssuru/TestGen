import { randomUUID } from "node:crypto";
import type { Theme, ThemeCreateInput, ThemeUpdateInput } from "@quiz/contracts";
import type { DbClient } from "./client";

interface ThemeRow {
  readonly id: string;
  readonly name: string;
  readonly description: string;
  readonly created_at: string;
}

const nowIso = (): string => new Date().toISOString();

const rowToTheme = (row: ThemeRow, count: number): Theme => ({
  id: row.id,
  name: row.name,
  description: row.description,
  templateCount: count,
  createdAt: row.created_at,
});

export const createThemesRepo = (db: DbClient) => {
  const countForTheme = (themeId: string): number => {
    const r = db
      .prepare<[string], { c: number }>("SELECT COUNT(*) AS c FROM template_themes WHERE theme_id = ?")
      .get(themeId);
    return r?.c ?? 0;
  };

  return {
    list(): Theme[] {
      const rows = db.prepare<[], ThemeRow>("SELECT * FROM themes ORDER BY name ASC").all();
      return rows.map((row) => rowToTheme(row, countForTheme(row.id)));
    },

    getById(id: string): Theme | null {
      const row = db.prepare<[string], ThemeRow>("SELECT * FROM themes WHERE id = ?").get(id);
      if (row === undefined) return null;
      return rowToTheme(row, countForTheme(id));
    },

    getByName(name: string): Theme | null {
      const row = db.prepare<[string], ThemeRow>("SELECT * FROM themes WHERE name = ?").get(name);
      if (row === undefined) return null;
      return rowToTheme(row, countForTheme(row.id));
    },

    create(input: ThemeCreateInput): Theme {
      const existing = this.getByName(input.name);
      if (existing !== null) return existing;
      const id = randomUUID();
      const now = nowIso();
      db.prepare("INSERT INTO themes (id, name, description, created_at) VALUES (?,?,?,?)").run(
        id, input.name, input.description ?? "", now,
      );
      return this.getById(id)!;
    },

    update(id: string, patch: ThemeUpdateInput): Theme | null {
      const current = this.getById(id);
      if (current === null) return null;
      const nextName = patch.name ?? current.name;
      const nextDesc = patch.description ?? current.description;
      db.prepare("UPDATE themes SET name = ?, description = ? WHERE id = ?").run(nextName, nextDesc, id);
      return this.getById(id);
    },

    remove(id: string): boolean {
      const result = db.prepare("DELETE FROM themes WHERE id = ?").run(id);
      return result.changes > 0;
    },

    assignTemplates(themeId: string, templateIds: readonly string[]): void {
      const insert = db.prepare("INSERT OR IGNORE INTO template_themes (theme_id, template_id) VALUES (?, ?)");
      for (const tid of templateIds) insert.run(themeId, tid);
    },

    unassignTemplates(themeId: string, templateIds: readonly string[]): void {
      const del = db.prepare("DELETE FROM template_themes WHERE theme_id = ? AND template_id = ?");
      for (const tid of templateIds) del.run(themeId, tid);
    },
  };
};

export type ThemesRepo = ReturnType<typeof createThemesRepo>;
