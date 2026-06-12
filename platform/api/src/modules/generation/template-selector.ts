import type { GenerationConfig, Template } from "@quiz/contracts";
import { getRepositories } from "../db";

const rng = (seed: number): (() => number) => {
  let s = seed >>> 0;
  return () => {
    s = (s + 0x6d2b79f5) >>> 0;
    let t = Math.imul(s ^ (s >>> 15), 1 | s);
    t ^= t + Math.imul(t ^ (t >>> 7), 61 | t);
    return ((t ^ (t >>> 14)) >>> 0) / 4294967296;
  };
};

const shuffled = <T>(arr: readonly T[], seed: number): T[] => {
  const out = [...arr];
  const r = rng(seed);
  for (let i = out.length - 1; i > 0; i--) {
    const j = Math.floor(r() * (i + 1));
    [out[i], out[j]] = [out[j] as T, out[i] as T];
  }
  return out;
};

export interface TemplateSelectionFilter {
  readonly themeIds?: readonly string[];
  readonly templateIds?: readonly string[];
}

export const selectTemplates = (
  config: GenerationConfig,
  extra: TemplateSelectionFilter = {},
): readonly Template[] => {
  const repos = getRepositories();

  if (extra.templateIds !== undefined && extra.templateIds.length > 0) {
    const list = extra.templateIds
      .map((id) => repos.templates.getById(id))
      .filter((t): t is Template => t !== null);
    return list;
  }

  const themeFilter = extra.themeIds ?? [];
  const fetchByTheme = (themeId: string | undefined): Template[] =>
    themeId === undefined
      ? repos.templates.listAll()
      : repos.templates.listAll({ themeId });

  const all: Template[] = themeFilter.length === 0
    ? fetchByTheme(undefined)
    : Array.from(new Map(themeFilter.flatMap(fetchByTheme).map((t) => [t.id, t])).values());

  const closed = all.filter((t) => t.kind === "closed");
  // Open templates without a source path are user-created with code that
  // the C++ engine can't compile directly — exclude from random selection.
  // (Caller can still pass templateIds explicitly to use a specific one.)
  const open = all.filter(
    (t) => t.kind === "open" && (t.body.kind === "open") && t.body.sourceFnamePath !== undefined,
  );
  const seed = config.seed ?? 42;
  const n = config.questionsPerVariant;

  if (config.questionTypeFilter === "closed") return shuffled(closed, seed).slice(0, n);
  if (config.questionTypeFilter === "open") return shuffled(open, seed).slice(0, n);

  const closedWanted = Math.min(Math.round(n * config.closedShare), closed.length);
  const openWanted = n - closedWanted;
  const pickedClosed = shuffled(closed, seed).slice(0, closedWanted);
  const pickedOpen = shuffled(open, seed + 1).slice(0, openWanted);
  // Closed questions first, then open — preserves group ordering for easier
  // student navigation (multiple-choice section, then open-ended section).
  return [...pickedClosed, ...pickedOpen];
};
