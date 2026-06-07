import { beforeEach, describe, expect, it } from "vitest";
import { openDb, createRepositories, type Repositories } from "../index";
import type { ClosedTemplateBody } from "@quiz/contracts";

const body: ClosedTemplateBody = {
  kind: "closed", ncase: 2, nGood: 1, imagePaths: [],
  options: [{ text: "a", correct: true }, { text: "b", correct: false }],
};

describe("ThemesRepo", () => {
  let repos: Repositories;
  beforeEach(() => {
    repos = createRepositories(openDb(":memory:"));
  });

  it("creates a theme and assigns count=0", () => {
    const t = repos.themes.create({ name: "Графи", description: "про графи" });
    expect(t.name).toBe("Графи");
    expect(t.templateCount).toBe(0);
  });

  it("create is idempotent on name", () => {
    const a = repos.themes.create({ name: "X" });
    const b = repos.themes.create({ name: "X" });
    expect(a.id).toBe(b.id);
  });

  it("list returns themes sorted by name", () => {
    repos.themes.create({ name: "Бета" });
    repos.themes.create({ name: "Альфа" });
    const list = repos.themes.list();
    expect(list.map((x) => x.name)).toEqual(["Альфа", "Бета"]);
  });

  it("templateCount tracks assignments via template update", () => {
    const th = repos.themes.create({ name: "Y" });
    const t = repos.templates.create({ kind: "closed", title: "t", body });
    expect(repos.themes.getById(th.id)?.templateCount).toBe(0);
    repos.templates.update(t.id, { themeIds: [th.id] });
    expect(repos.themes.getById(th.id)?.templateCount).toBe(1);
  });

  it("update renames theme", () => {
    const t = repos.themes.create({ name: "Old" });
    const u = repos.themes.update(t.id, { name: "New" });
    expect(u?.name).toBe("New");
  });

  it("remove cascades template_themes", () => {
    const th = repos.themes.create({ name: "Z" });
    const t = repos.templates.create({ kind: "closed", title: "x", body, themeIds: [th.id] });
    repos.themes.remove(th.id);
    expect(repos.templates.getById(t.id)?.themeIds).toEqual([]);
  });

  it("assignTemplates links multiple templates", () => {
    const th = repos.themes.create({ name: "Q" });
    const a = repos.templates.create({ kind: "closed", title: "a", body });
    const b = repos.templates.create({ kind: "closed", title: "b", body: { ...body, ncase: 3 } });
    repos.themes.assignTemplates(th.id, [a.id, b.id]);
    expect(repos.themes.getById(th.id)?.templateCount).toBe(2);
  });

  it("unassignTemplates detaches selectively", () => {
    const th = repos.themes.create({ name: "W" });
    const a = repos.templates.create({ kind: "closed", title: "a", body });
    const b = repos.templates.create({ kind: "closed", title: "b", body: { ...body, ncase: 3 } });
    repos.themes.assignTemplates(th.id, [a.id, b.id]);
    repos.themes.unassignTemplates(th.id, [a.id]);
    expect(repos.themes.getById(th.id)?.templateCount).toBe(1);
    expect(repos.templates.getById(a.id)?.themeIds).toEqual([]);
    expect(repos.templates.getById(b.id)?.themeIds).toEqual([th.id]);
  });
});
