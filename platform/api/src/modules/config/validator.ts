import type { GenerationConfig, QuestionTypeFilter, RenderMode } from "@quiz/contracts";

const MODES: readonly RenderMode[] = ["OneOnLine", "TabBetween", "TwoOnLine", "SpaceBetween"];
const FILTERS: readonly QuestionTypeFilter[] = ["closed", "open", "mixed"];

const isRecord = (v: unknown): v is Record<string, unknown> => typeof v === "object" && v !== null;

const str = (v: unknown, field: string): string => {
  if (typeof v !== "string" || v.trim().length === 0) throw new Error(`Invalid field: ${field}`);
  return v.trim();
};

const posInt = (v: unknown, field: string, max: number): number => {
  if (typeof v !== "number" || !Number.isInteger(v) || v <= 0 || v > max) throw new Error(`Invalid field: ${field}`);
  return v;
};

const num01 = (v: unknown, field: string, fallback: number): number => {
  if (v === undefined) return fallback;
  if (typeof v !== "number" || Number.isNaN(v) || v < 0 || v > 1) throw new Error(`Invalid field: ${field}`);
  return v;
};

export const validateGenerationConfig = (payload: unknown): GenerationConfig => {
  if (!isRecord(payload)) throw new Error("Invalid payload");

  const title = str(payload["title"], "title");
  const variantCount = posInt(payload["variantCount"], "variantCount", 100);
  const questionsPerVariant = posInt(payload["questionsPerVariant"], "questionsPerVariant", 500);

  const mode = str(payload["mode"], "mode") as RenderMode;
  if (!MODES.includes(mode)) throw new Error("Invalid field: mode");

  const filter = (typeof payload["questionTypeFilter"] === "string" ? payload["questionTypeFilter"] : "mixed") as QuestionTypeFilter;
  if (!FILTERS.includes(filter)) throw new Error("Invalid field: questionTypeFilter");

  const shuffleQuestions = payload["shuffleQuestions"] !== false;
  const includeAnswerKey = payload["includeAnswerKey"] !== false;
  const closedShare = num01(payload["closedShare"], "closedShare", 0.25);

  const seed = payload["seed"];
  if (seed !== undefined && (typeof seed !== "number" || !Number.isInteger(seed))) throw new Error("Invalid field: seed");

  const parseIdArray = (v: unknown, field: string): readonly string[] | undefined => {
    if (v === undefined || v === null) return undefined;
    if (!Array.isArray(v)) throw new Error(`Invalid field: ${field}`);
    return v.map((x, i) => {
      if (typeof x !== "string" || x.length === 0) throw new Error(`Invalid field: ${field}[${String(i)}]`);
      return x;
    });
  };

  const themeIds = parseIdArray(payload["themeIds"], "themeIds");
  const templateIds = parseIdArray(payload["templateIds"], "templateIds");

  const base: GenerationConfig = {
    title, variantCount, questionsPerVariant, questionTypeFilter: filter, mode,
    shuffleQuestions, includeAnswerKey, closedShare,
    ...(seed !== undefined ? { seed } : {}),
    ...(themeIds !== undefined ? { themeIds } : {}),
    ...(templateIds !== undefined ? { templateIds } : {}),
  };
  return base;
};
