import { getDb, openDb, closeDb, setDbForTests, type DbClient } from "./client";
import { createTemplatesRepo, type TemplatesRepo } from "./templates-repo";
import { createThemesRepo, type ThemesRepo } from "./themes-repo";
import { createJobsRepo, type JobsRepo } from "./jobs-repo";
import { createPresetsRepo, type PresetsRepo } from "./presets-repo";

export { openDb, closeDb, setDbForTests, type DbClient };
export { createTemplatesRepo, type TemplatesRepo };
export { createThemesRepo, type ThemesRepo };
export { createJobsRepo, type JobsRepo };
export { createPresetsRepo, type PresetsRepo };

export interface Repositories {
  readonly db: DbClient;
  readonly templates: TemplatesRepo;
  readonly themes: ThemesRepo;
  readonly jobs: JobsRepo;
  readonly presets: PresetsRepo;
}

export const createRepositories = (db: DbClient): Repositories => ({
  db,
  templates: createTemplatesRepo(db),
  themes: createThemesRepo(db),
  jobs: createJobsRepo(db),
  presets: createPresetsRepo(db),
});

let cached: Repositories | null = null;

export const getRepositories = (): Repositories => {
  if (cached === null) cached = createRepositories(getDb());
  return cached;
};

export const resetRepositoriesForTests = (): void => {
  cached = null;
};
