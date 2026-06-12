import { randomUUID } from "node:crypto";
import type {
  GenerationConfig, QuizPreset, QuizPresetCreateInput, QuizPresetUpdateInput,
} from "@quiz/contracts";
import type { DbClient } from "./client";

interface PresetRow {
  readonly id: string;
  readonly name: string;
  readonly description: string;
  readonly config: string;
  readonly template_ids: string;
  readonly created_at: string;
  readonly updated_at: string;
}

const nowIso = (): string => new Date().toISOString();

const rowToPreset = (row: PresetRow): QuizPreset => ({
  id: row.id,
  name: row.name,
  description: row.description,
  config: JSON.parse(row.config) as GenerationConfig,
  templateIds: JSON.parse(row.template_ids) as readonly string[],
  createdAt: row.created_at,
  updatedAt: row.updated_at,
});

export class DuplicatePresetNameError extends Error {
  constructor(name: string) { super(`Preset with name "${name}" already exists`); this.name = "DuplicatePresetNameError"; }
}

export const createPresetsRepo = (db: DbClient) => ({
  create(input: QuizPresetCreateInput): QuizPreset {
    const id = randomUUID();
    const now = nowIso();
    try {
      db.prepare(
        `INSERT INTO quiz_presets (id, name, description, config, template_ids, created_at, updated_at)
         VALUES (?,?,?,?,?,?,?)`,
      ).run(
        id, input.name, input.description ?? "",
        JSON.stringify(input.config),
        JSON.stringify(input.templateIds ?? []),
        now, now,
      );
    } catch (e) {
      const msg = e instanceof Error ? e.message : String(e);
      if (msg.includes("UNIQUE") && msg.includes("name")) throw new DuplicatePresetNameError(input.name);
      throw e;
    }
    return this.getById(id)!;
  },

  getById(id: string): QuizPreset | null {
    const row = db.prepare<[string], PresetRow>("SELECT * FROM quiz_presets WHERE id = ?").get(id);
    return row === undefined ? null : rowToPreset(row);
  },

  list(): QuizPreset[] {
    const rows = db.prepare<[], PresetRow>("SELECT * FROM quiz_presets ORDER BY updated_at DESC").all();
    return rows.map(rowToPreset);
  },

  update(id: string, patch: QuizPresetUpdateInput): QuizPreset | null {
    const current = this.getById(id);
    if (current === null) return null;
    const nextName = patch.name ?? current.name;
    const nextDesc = patch.description ?? current.description;
    const nextConfig = patch.config ?? current.config;
    const nextIds = patch.templateIds ?? current.templateIds;
    try {
      db.prepare(
        `UPDATE quiz_presets SET name = ?, description = ?, config = ?, template_ids = ?, updated_at = ?
         WHERE id = ?`,
      ).run(nextName, nextDesc, JSON.stringify(nextConfig), JSON.stringify(nextIds), nowIso(), id);
    } catch (e) {
      const msg = e instanceof Error ? e.message : String(e);
      if (msg.includes("UNIQUE") && msg.includes("name")) throw new DuplicatePresetNameError(nextName);
      throw e;
    }
    return this.getById(id);
  },

  remove(id: string): boolean {
    const r = db.prepare("DELETE FROM quiz_presets WHERE id = ?").run(id);
    return r.changes > 0;
  },
});

export type PresetsRepo = ReturnType<typeof createPresetsRepo>;
