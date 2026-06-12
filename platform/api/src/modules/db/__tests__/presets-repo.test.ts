import { beforeEach, describe, expect, it } from "vitest";
import { openDb, createRepositories, type Repositories } from "../index";
import { DuplicatePresetNameError } from "../presets-repo";
import type { GenerationConfig } from "@quiz/contracts";

const cfg: GenerationConfig = {
  title: "Sample", variantCount: 2, questionsPerVariant: 3,
  questionTypeFilter: "mixed", mode: "OneOnLine",
  shuffleQuestions: true, includeAnswerKey: true, closedShare: 0.5,
};

describe("PresetsRepo", () => {
  let repos: Repositories;
  beforeEach(() => { repos = createRepositories(openDb(":memory:")); });

  it("creates a config-only preset with empty templateIds", () => {
    const p = repos.presets.create({ name: "Preset A", config: cfg });
    expect(p.name).toBe("Preset A");
    expect(p.templateIds).toEqual([]);
    expect(p.config).toEqual(cfg);
  });

  it("creates a preset with explicit templateIds", () => {
    const p = repos.presets.create({ name: "With Ids", config: cfg, templateIds: ["t1", "t2"] });
    expect(p.templateIds).toEqual(["t1", "t2"]);
  });

  it("getById returns null for missing preset", () => {
    expect(repos.presets.getById("none")).toBeNull();
  });

  it("list returns presets ordered by updatedAt desc", async () => {
    const a = repos.presets.create({ name: "A", config: cfg });
    await new Promise((r) => setTimeout(r, 5));
    const b = repos.presets.create({ name: "B", config: cfg });
    const list = repos.presets.list();
    expect(list[0]!.id).toBe(b.id);
    expect(list[1]!.id).toBe(a.id);
  });

  it("update renames preset and bumps updated_at", async () => {
    const p = repos.presets.create({ name: "Old", config: cfg });
    await new Promise((r) => setTimeout(r, 5));
    const u = repos.presets.update(p.id, { name: "New" });
    expect(u).not.toBeNull();
    expect(u!.name).toBe("New");
    expect(u!.updatedAt > p.updatedAt).toBe(true);
  });

  it("update can modify templateIds", () => {
    const p = repos.presets.create({ name: "N", config: cfg });
    const u = repos.presets.update(p.id, { templateIds: ["x"] });
    expect(u?.templateIds).toEqual(["x"]);
  });

  it("update can modify config", () => {
    const p = repos.presets.create({ name: "N", config: cfg });
    const newCfg: GenerationConfig = { ...cfg, variantCount: 5 };
    const u = repos.presets.update(p.id, { config: newCfg });
    expect(u?.config.variantCount).toBe(5);
  });

  it("remove deletes preset", () => {
    const p = repos.presets.create({ name: "X", config: cfg });
    expect(repos.presets.remove(p.id)).toBe(true);
    expect(repos.presets.getById(p.id)).toBeNull();
  });

  it("remove returns false for missing preset", () => {
    expect(repos.presets.remove("nope")).toBe(false);
  });

  it("create throws DuplicatePresetNameError on name collision", () => {
    repos.presets.create({ name: "SameName", config: cfg });
    expect(() => repos.presets.create({ name: "SameName", config: cfg })).toThrow(DuplicatePresetNameError);
  });

  it("update throws DuplicatePresetNameError when renaming to existing name", () => {
    repos.presets.create({ name: "Keep", config: cfg });
    const other = repos.presets.create({ name: "Rename-me", config: cfg });
    expect(() => repos.presets.update(other.id, { name: "Keep" })).toThrow(DuplicatePresetNameError);
  });
});
