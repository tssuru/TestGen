import { randomUUID, createHash } from "node:crypto";
import type {
  Template,
  TemplateBody,
  TemplateCreateInput,
  TemplateKind,
  TemplateListFilter,
  TemplateSource,
  TemplateSummary,
  TemplateUpdateInput,
  TemplateVersion,
} from "@quiz/contracts";
import type { DbClient } from "./client";

interface TemplateRow {
  readonly id: string;
  readonly kind: TemplateKind;
  readonly title: string;
  readonly body: string;
  readonly version: number;
  readonly parent_id: string | null;
  readonly source: TemplateSource;
  readonly content_key: string | null;
  readonly created_at: string;
  readonly updated_at: string;
}

interface VersionRow {
  readonly id: string;
  readonly template_id: string;
  readonly version: number;
  readonly title: string;
  readonly body: string;
  readonly created_at: string;
}

const nowIso = (): string => new Date().toISOString();

const computeContentKey = (kind: TemplateKind, body: TemplateBody): string => {
  const payload = JSON.stringify({ kind, body });
  return createHash("sha256").update(payload).digest("hex").slice(0, 24);
};

const rowToTemplate = (row: TemplateRow, themeIds: readonly string[]): Template => ({
  id: row.id,
  kind: row.kind,
  title: row.title,
  body: JSON.parse(row.body) as TemplateBody,
  version: row.version,
  parentId: row.parent_id,
  source: row.source,
  themeIds,
  createdAt: row.created_at,
  updatedAt: row.updated_at,
});

const extractSourcePath = (body: TemplateBody): string | undefined => {
  if (body.kind === "closed" && body.sourceGoodPath !== undefined) return body.sourceGoodPath;
  if (body.kind === "open" && body.sourceFnamePath !== undefined) return body.sourceFnamePath;
  return undefined;
};

const rowToSummary = (row: TemplateRow, themeIds: readonly string[]): TemplateSummary => {
  const body = JSON.parse(row.body) as TemplateBody;
  const sourcePath = extractSourcePath(body);
  const base = {
    id: row.id,
    kind: row.kind,
    title: row.title,
    version: row.version,
    source: row.source,
    themeIds,
    updatedAt: row.updated_at,
  };
  return sourcePath === undefined ? base : { ...base, sourcePath };
};

export const createTemplatesRepo = (db: DbClient) => {
  const getThemeIdsFor = (templateId: string): string[] => {
    const rows = db
      .prepare<[string], { theme_id: string }>("SELECT theme_id FROM template_themes WHERE template_id = ?")
      .all(templateId);
    return rows.map((r) => r.theme_id);
  };

  const setThemes = (templateId: string, themeIds: readonly string[]): void => {
    db.prepare("DELETE FROM template_themes WHERE template_id = ?").run(templateId);
    const insert = db.prepare("INSERT OR IGNORE INTO template_themes (template_id, theme_id) VALUES (?, ?)");
    for (const themeId of themeIds) insert.run(templateId, themeId);
  };

  const insertVersionSnapshot = (templateId: string, version: number, title: string, body: TemplateBody): void => {
    db.prepare(
      "INSERT INTO template_versions (id, template_id, version, title, body, created_at) VALUES (?,?,?,?,?,?)",
    ).run(randomUUID(), templateId, version, title, JSON.stringify(body), nowIso());
  };

  return {
    create(input: TemplateCreateInput, source: TemplateSource = "user", parentId: string | null = null): Template {
      const id = randomUUID();
      const now = nowIso();
      // content_key used only for imported dedup; user-created rows leave it NULL to allow copies/forks
      const contentKey = source === "imported" ? computeContentKey(input.kind, input.body) : null;
      if (contentKey !== null) {
        const existing = db
          .prepare<[string], { id: string }>("SELECT id FROM templates WHERE content_key = ?")
          .get(contentKey);
        if (existing !== undefined) return this.getById(existing.id)!;
      }
      db.prepare(
        `INSERT INTO templates (id, kind, title, body, version, parent_id, source, content_key, created_at, updated_at)
         VALUES (?,?,?,?,1,?,?,?,?,?)`,
      ).run(id, input.kind, input.title, JSON.stringify(input.body), parentId, source, contentKey, now, now);
      insertVersionSnapshot(id, 1, input.title, input.body);
      if (input.themeIds && input.themeIds.length > 0) setThemes(id, input.themeIds);
      return this.getById(id)!;
    },

    getById(id: string): Template | null {
      const row = db.prepare<[string], TemplateRow>("SELECT * FROM templates WHERE id = ?").get(id);
      if (row === undefined) return null;
      return rowToTemplate(row, getThemeIdsFor(id));
    },

    list(filter: TemplateListFilter = {}): TemplateSummary[] {
      const clauses: string[] = [];
      const params: unknown[] = [];
      if (filter.kind !== undefined) { clauses.push("t.kind = ?"); params.push(filter.kind); }
      if (filter.themeId !== undefined) {
        clauses.push("t.id IN (SELECT template_id FROM template_themes WHERE theme_id = ?)");
        params.push(filter.themeId);
      }
      if (filter.search !== undefined && filter.search.length > 0) {
        clauses.push("t.title LIKE ?");
        params.push(`%${filter.search}%`);
      }
      const where = clauses.length > 0 ? `WHERE ${clauses.join(" AND ")}` : "";
      const rows = db
        .prepare<unknown[], TemplateRow>(`SELECT t.* FROM templates t ${where} ORDER BY t.updated_at DESC`)
        .all(...params);
      return rows.map((row) => rowToSummary(row, getThemeIdsFor(row.id)));
    },

    listAll(filter: TemplateListFilter = {}): Template[] {
      const summaries = this.list(filter);
      return summaries.map((s) => this.getById(s.id)!);
    },

    update(id: string, patch: TemplateUpdateInput): Template | null {
      const current = this.getById(id);
      if (current === null) return null;
      const nextTitle = patch.title ?? current.title;
      const nextBody = patch.body ?? current.body;
      const bodyChanged = JSON.stringify(nextBody) !== JSON.stringify(current.body);
      const titleChanged = nextTitle !== current.title;
      const bump = bodyChanged || titleChanged;
      const nextVersion = bump ? current.version + 1 : current.version;
      const now = nowIso();
      // Preserve NULL content_key for user edits (only imports carry dedup keys)
      db.prepare(
        `UPDATE templates SET title = ?, body = ?, version = ?, updated_at = ? WHERE id = ?`,
      ).run(nextTitle, JSON.stringify(nextBody), nextVersion, now, id);
      if (bump) insertVersionSnapshot(id, nextVersion, nextTitle, nextBody);
      if (patch.themeIds !== undefined) setThemes(id, patch.themeIds);
      return this.getById(id);
    },

    remove(id: string): boolean {
      const result = db.prepare("DELETE FROM templates WHERE id = ?").run(id);
      return result.changes > 0;
    },

    fork(id: string): Template | null {
      const current = this.getById(id);
      if (current === null) return null;
      const forked = this.create(
        { kind: current.kind, title: `${current.title} (копія)`, body: current.body, themeIds: current.themeIds },
        "user",
        current.id,
      );
      return forked;
    },

    listVersions(id: string): TemplateVersion[] {
      const rows = db
        .prepare<[string], VersionRow>("SELECT * FROM template_versions WHERE template_id = ? ORDER BY version DESC")
        .all(id);
      return rows.map((r) => ({
        id: r.id,
        templateId: r.template_id,
        version: r.version,
        title: r.title,
        body: JSON.parse(r.body) as TemplateBody,
        createdAt: r.created_at,
      }));
    },

    count(): number {
      const r = db.prepare<[], { c: number }>("SELECT COUNT(*) AS c FROM templates").get();
      return r?.c ?? 0;
    },

    countByKind(): { closed: number; open: number } {
      const r = db
        .prepare<[], { kind: TemplateKind; c: number }>(
          "SELECT kind, COUNT(*) AS c FROM templates GROUP BY kind",
        )
        .all();
      const out: { closed: number; open: number } = { closed: 0, open: 0 };
      for (const row of r) {
        if (row.kind === "closed") out.closed = row.c;
        else if (row.kind === "open") out.open = row.c;
      }
      return out;
    },
  };
};

export type TemplatesRepo = ReturnType<typeof createTemplatesRepo>;
