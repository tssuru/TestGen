export type RenderMode = "OneOnLine" | "TabBetween" | "TwoOnLine" | "SpaceBetween";
export type QuestionTypeFilter = "closed" | "open" | "mixed";

export interface GenerationConfig {
  readonly title: string;
  readonly variantCount: number;
  readonly questionsPerVariant: number;
  readonly questionTypeFilter: QuestionTypeFilter;
  readonly mode: RenderMode;
  readonly shuffleQuestions: boolean;
  readonly includeAnswerKey: boolean;
  readonly closedShare: number;
  readonly seed?: number;
  readonly themeIds?: readonly string[];
  readonly templateIds?: readonly string[];
}

export interface PoolStats {
  readonly openCount: number;
  readonly closedCount: number;
}
