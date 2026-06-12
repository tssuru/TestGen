import type { GenerationConfig } from "./generation";

export interface QuizPreset {
  readonly id: string;
  readonly name: string;
  readonly description: string;
  readonly config: GenerationConfig;
  readonly templateIds: readonly string[]; // [] = config-only preset
  readonly createdAt: string;
  readonly updatedAt: string;
}

export interface QuizPresetCreateInput {
  readonly name: string;
  readonly description?: string;
  readonly config: GenerationConfig;
  readonly templateIds?: readonly string[];
}

export interface QuizPresetUpdateInput {
  readonly name?: string;
  readonly description?: string;
  readonly config?: GenerationConfig;
  readonly templateIds?: readonly string[];
}
