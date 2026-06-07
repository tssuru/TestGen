import type { GenerationConfig } from "@quiz/contracts";

export const defaultConfig = (): GenerationConfig => ({
  title: "Контрольна робота",
  variantCount: 4,
  questionsPerVariant: 10,
  questionTypeFilter: "mixed",
  shuffleQuestions: true,
  mode: "OneOnLine",
  includeAnswerKey: true,
  closedShare: 0.25,
});
