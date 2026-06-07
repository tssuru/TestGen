import { beforeEach, describe, expect, it } from "vitest";
import { openDb, createRepositories, type Repositories } from "../index";
import type { ClosedTemplateBody, OpenTemplateBody } from "@quiz/contracts";

const closedBody: ClosedTemplateBody = {
  kind: "closed",
  ncase: 4,
  nGood: 2,
  imagePaths: [],
  options: [
    { text: "Правильна 1", correct: true },
    { text: "Правильна 2", correct: true },
    { text: "Неправильна 1", correct: false },
    { text: "Неправильна 2", correct: false },
  ],
};

const openBody: OpenTemplateBody = {
  kind: "open",
  fabric: "template_answer",
  code: "print(42)",
  imagePaths: [],
};

describe("TemplatesRepo", () => {
  let repos: Repositories;

  beforeEach(() => {
    const db = openDb(":memory:");
    repos = createRepositories(db);
  });

  it("creates a closed template with version 1", () => {
    const t = repos.templates.create({ kind: "closed", title: "Тест", body: closedBody });
    expect(t.id).toBeTruthy();
    expect(t.kind).toBe("closed");
    expect(t.version).toBe(1);
    expect(t.source).toBe("user");
    expect(t.parentId).toBeNull();
    expect(t.themeIds).toEqual([]);
  });

  it("getById returns null for missing id", () => {
    expect(repos.templates.getById("none")).toBeNull();
  });

  it("update bumps version when body changes", () => {
    const t = repos.templates.create({ kind: "closed", title: "Тест", body: closedBody });
    const updated = repos.templates.update(t.id, { title: "Тест2" });
    expect(updated?.version).toBe(2);
    expect(updated?.title).toBe("Тест2");
    const versions = repos.templates.listVersions(t.id);
    expect(versions.map((v) => v.version).sort()).toEqual([1, 2]);
  });

  it("update does not bump version if nothing changes", () => {
    const t = repos.templates.create({ kind: "open", title: "A", body: openBody });
    const updated = repos.templates.update(t.id, {});
    expect(updated?.version).toBe(1);
  });

  it("fork creates a copy with parent_id and version 1", () => {
    const t = repos.templates.create({ kind: "closed", title: "Orig", body: closedBody });
    const f = repos.templates.fork(t.id);
    expect(f).not.toBeNull();
    expect(f!.parentId).toBe(t.id);
    expect(f!.id).not.toBe(t.id);
    expect(f!.version).toBe(1);
    expect(f!.title).toBe("Orig (копія)");
  });

  it("list filters by kind", () => {
    repos.templates.create({ kind: "closed", title: "A", body: closedBody });
    repos.templates.create({ kind: "open", title: "B", body: openBody });
    expect(repos.templates.list({ kind: "closed" })).toHaveLength(1);
    expect(repos.templates.list({ kind: "open" })).toHaveLength(1);
    expect(repos.templates.list()).toHaveLength(2);
  });

  it("list filters by themeId", () => {
    const theme = repos.themes.create({ name: "Цикли" });
    const a = repos.templates.create({ kind: "closed", title: "A", body: closedBody, themeIds: [theme.id] });
    repos.templates.create({ kind: "closed", title: "B", body: { ...closedBody, options: [...closedBody.options, { text: "X", correct: false }] } });
    const result = repos.templates.list({ themeId: theme.id });
    expect(result).toHaveLength(1);
    expect(result[0]!.id).toBe(a.id);
  });

  it("list filters by search (title LIKE)", () => {
    repos.templates.create({ kind: "closed", title: "Graph traversal", body: closedBody });
    repos.templates.create({ kind: "closed", title: "Binary tree", body: { ...closedBody, ncase: 3 } });
    const res = repos.templates.list({ search: "Graph" });
    expect(res).toHaveLength(1);
    expect(res[0]!.title).toContain("Graph");
  });

  it("remove deletes the template and its versions", () => {
    const t = repos.templates.create({ kind: "closed", title: "X", body: closedBody });
    expect(repos.templates.remove(t.id)).toBe(true);
    expect(repos.templates.getById(t.id)).toBeNull();
    expect(repos.templates.listVersions(t.id)).toEqual([]);
  });

  it("remove returns false for missing id", () => {
    expect(repos.templates.remove("nope")).toBe(false);
  });

  it("imported source dedupes by content_key", () => {
    const a = repos.templates.create({ kind: "closed", title: "X", body: closedBody }, "imported");
    const b = repos.templates.create({ kind: "closed", title: "X", body: closedBody }, "imported");
    expect(a.id).toBe(b.id);
    expect(repos.templates.count()).toBe(1);
  });

  it("countByKind returns correct counts", () => {
    repos.templates.create({ kind: "closed", title: "A", body: closedBody });
    repos.templates.create({ kind: "closed", title: "B", body: { ...closedBody, ncase: 5 } });
    repos.templates.create({ kind: "open", title: "C", body: openBody });
    expect(repos.templates.countByKind()).toEqual({ closed: 2, open: 1 });
  });

  it("assignThemes persists theme ids on update", () => {
    const t = repos.themes.create({ name: "Графи" });
    const tmpl = repos.templates.create({ kind: "closed", title: "G", body: closedBody });
    repos.templates.update(tmpl.id, { themeIds: [t.id] });
    expect(repos.templates.getById(tmpl.id)?.themeIds).toEqual([t.id]);
    repos.templates.update(tmpl.id, { themeIds: [] });
    expect(repos.templates.getById(tmpl.id)?.themeIds).toEqual([]);
  });
});
