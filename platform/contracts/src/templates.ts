export type TemplateKind = "closed" | "open";
export type TemplateSource = "imported" | "user";

export interface TemplateOption {
  readonly text: string;
  readonly correct: boolean;
}

export interface ClosedTemplateBody {
  readonly kind: "closed";
  readonly options: readonly TemplateOption[];
  readonly ncase: number;
  readonly nGood: number;
  readonly imagePaths: readonly string[];
  readonly sourceGoodPath?: string;
  readonly sourceBadPath?: string;
}

export interface OpenTemplateBody {
  readonly kind: "open";
  readonly fabric: "template_answer" | "file_answer";
  readonly code: string;
  readonly imagePaths: readonly string[];
  readonly sourceFnamePath?: string;
}

export type TemplateBody = ClosedTemplateBody | OpenTemplateBody;

export interface Template {
  readonly id: string;
  readonly kind: TemplateKind;
  readonly title: string;
  readonly body: TemplateBody;
  readonly version: number;
  readonly parentId: string | null;
  readonly source: TemplateSource;
  readonly themeIds: readonly string[];
  readonly createdAt: string;
  readonly updatedAt: string;
}

export interface TemplateSummary {
  readonly id: string;
  readonly kind: TemplateKind;
  readonly title: string;
  readonly version: number;
  readonly source: TemplateSource;
  readonly themeIds: readonly string[];
  readonly updatedAt: string;
  readonly sourcePath?: string;
}

export interface TemplateVersion {
  readonly id: string;
  readonly templateId: string;
  readonly version: number;
  readonly title: string;
  readonly body: TemplateBody;
  readonly createdAt: string;
}

export interface TemplateCreateInput {
  readonly kind: TemplateKind;
  readonly title: string;
  readonly body: TemplateBody;
  readonly themeIds?: readonly string[];
}

export interface TemplateUpdateInput {
  readonly title?: string;
  readonly body?: TemplateBody;
  readonly themeIds?: readonly string[];
}

export interface TemplateListFilter {
  readonly kind?: TemplateKind;
  readonly themeId?: string;
  readonly search?: string;
}

export interface Theme {
  readonly id: string;
  readonly name: string;
  readonly description: string;
  readonly templateCount: number;
  readonly createdAt: string;
}

export interface ThemeCreateInput {
  readonly name: string;
  readonly description?: string;
}

export interface ThemeUpdateInput {
  readonly name?: string;
  readonly description?: string;
}
