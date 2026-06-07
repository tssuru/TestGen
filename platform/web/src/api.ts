import type {
  GenerationConfig, GenerationJob, PoolStats,
  Template, TemplateCreateInput, TemplateListFilter, TemplateSummary, TemplateUpdateInput, TemplateVersion,
  Theme, ThemeCreateInput, ThemeUpdateInput,
  QuizPreset, QuizPresetUpdateInput,
} from "@quiz/contracts";

const BASE = "/api";

interface JobCreateResponse {
  readonly jobId: string;
  readonly status: string;
}

const request = async <T>(url: string, init?: RequestInit): Promise<T> => {
  const response = await fetch(url, init);
  const text = await response.text();
  if (!response.ok) {
    let message = `Request failed (${response.status})`;
    try {
      const parsed = JSON.parse(text) as { message?: string };
      if (typeof parsed.message === "string") message = parsed.message;
    } catch { /* noop */ }
    throw new Error(message);
  }
  try { return JSON.parse(text) as T; }
  catch { throw new Error(`Non-JSON response: ${text.slice(0, 80)}`); }
};

const jsonBody = (method: string, body: unknown): RequestInit => ({
  method,
  headers: { "content-type": "application/json" },
  body: JSON.stringify(body),
});

// --- Generation ---
export const createJob = (config: GenerationConfig): Promise<JobCreateResponse> =>
  request(`${BASE}/generation/jobs`, jsonBody("POST", config));

export const getJob = (jobId: string): Promise<GenerationJob> =>
  request(`${BASE}/generation/jobs/${jobId}`);

export const listJobs = (limit = 50): Promise<GenerationJob[]> =>
  request(`${BASE}/generation/jobs?limit=${String(limit)}`);

export const regenerateItem = (
  jobId: string, index: number, replacementTemplateId?: string,
): Promise<JobCreateResponse & { parentJobId: string; replacedIndex: number }> =>
  request(`${BASE}/generation/jobs/${jobId}/regenerate-item`, jsonBody("POST", { index, replacementTemplateId }));

export interface JobTemplateItem {
  readonly index: number;
  readonly templateId: string;
  readonly kind: "closed" | "open" | null;
  readonly title: string;
  readonly body: unknown;
  readonly source?: "imported" | "user";
  readonly themeIds?: readonly string[];
}
export const getJobTemplates = (jobId: string): Promise<{ jobId: string; templateIds: string[]; items: JobTemplateItem[] }> =>
  request(`${BASE}/generation/jobs/${jobId}/templates`);

export const getArtifactPreviewUrl = (jobId: string, artifactName: string): string =>
  `${BASE}/generation/jobs/${encodeURIComponent(jobId)}/artifacts/${encodeURIComponent(artifactName)}`;

export const getBundleDownloadUrl = (jobId: string): string =>
  `${BASE}/generation/jobs/${encodeURIComponent(jobId)}/download`;

export const getPoolStats = (): Promise<PoolStats> => request(`${BASE}/pool`);

// --- Templates ---
export const listTemplates = (filter: TemplateListFilter = {}): Promise<TemplateSummary[]> => {
  const params = new URLSearchParams();
  if (filter.kind !== undefined) params.set("kind", filter.kind);
  if (filter.themeId !== undefined) params.set("themeId", filter.themeId);
  if (filter.search !== undefined) params.set("search", filter.search);
  const qs = params.toString();
  return request(`${BASE}/templates${qs.length > 0 ? `?${qs}` : ""}`);
};

export const getTemplate = (id: string): Promise<Template> => request(`${BASE}/templates/${id}`);
export const createTemplate = (input: TemplateCreateInput): Promise<Template> =>
  request(`${BASE}/templates`, jsonBody("POST", input));
export const updateTemplate = (id: string, patch: TemplateUpdateInput): Promise<Template> =>
  request(`${BASE}/templates/${id}`, jsonBody("PATCH", patch));
export const deleteTemplate = (id: string): Promise<{ deleted: boolean }> =>
  request(`${BASE}/templates/${id}`, { method: "DELETE" });
export const forkTemplate = (id: string): Promise<Template> =>
  request(`${BASE}/templates/${id}/fork`, { method: "POST" });
export const listTemplateVersions = (id: string): Promise<TemplateVersion[]> =>
  request(`${BASE}/templates/${id}/versions`);

// --- Themes ---
export const listThemes = (): Promise<Theme[]> => request(`${BASE}/themes`);
export const createTheme = (input: ThemeCreateInput): Promise<Theme> =>
  request(`${BASE}/themes`, jsonBody("POST", input));
export const updateTheme = (id: string, patch: ThemeUpdateInput): Promise<Theme> =>
  request(`${BASE}/themes/${id}`, jsonBody("PATCH", patch));
export const deleteTheme = (id: string): Promise<{ deleted: boolean }> =>
  request(`${BASE}/themes/${id}`, { method: "DELETE" });
export const assignThemeTemplates = (themeId: string, templateIds: readonly string[], detach = false): Promise<Theme> =>
  request(`${BASE}/themes/${themeId}/assign`, jsonBody("POST", { templateIds, detach }));

// --- Presets ---
export const listPresets = (): Promise<QuizPreset[]> => request(`${BASE}/presets`);
export const getPreset = (id: string): Promise<QuizPreset> => request(`${BASE}/presets/${id}`);
export const createPresetFromJob = (
  name: string, jobId: string, description?: string,
): Promise<QuizPreset> =>
  request(`${BASE}/presets`, jsonBody("POST", { name, description, jobId }));
export const createPresetFromConfig = (
  name: string, config: GenerationConfig, description?: string,
): Promise<QuizPreset> =>
  request(`${BASE}/presets`, jsonBody("POST", { name, description, config, templateIds: [] }));
export const updatePreset = (id: string, patch: QuizPresetUpdateInput): Promise<QuizPreset> =>
  request(`${BASE}/presets/${id}`, jsonBody("PATCH", patch));
export const deletePreset = (id: string): Promise<{ deleted: boolean }> =>
  request(`${BASE}/presets/${id}`, { method: "DELETE" });
