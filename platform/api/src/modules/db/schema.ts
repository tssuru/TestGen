export const SCHEMA_SQL = `
PRAGMA foreign_keys = ON;
PRAGMA journal_mode = WAL;

CREATE TABLE IF NOT EXISTS templates (
  id TEXT PRIMARY KEY,
  kind TEXT NOT NULL CHECK (kind IN ('closed','open')),
  title TEXT NOT NULL,
  body TEXT NOT NULL,
  version INTEGER NOT NULL DEFAULT 1,
  parent_id TEXT REFERENCES templates(id) ON DELETE SET NULL,
  source TEXT NOT NULL CHECK (source IN ('imported','user')),
  content_key TEXT,
  created_at TEXT NOT NULL,
  updated_at TEXT NOT NULL
);

CREATE INDEX IF NOT EXISTS idx_templates_kind ON templates(kind);
CREATE INDEX IF NOT EXISTS idx_templates_updated_at ON templates(updated_at DESC);
CREATE UNIQUE INDEX IF NOT EXISTS idx_templates_content_key ON templates(content_key) WHERE content_key IS NOT NULL;

CREATE TABLE IF NOT EXISTS themes (
  id TEXT PRIMARY KEY,
  name TEXT NOT NULL UNIQUE,
  description TEXT NOT NULL DEFAULT '',
  created_at TEXT NOT NULL
);

CREATE TABLE IF NOT EXISTS template_themes (
  template_id TEXT NOT NULL REFERENCES templates(id) ON DELETE CASCADE,
  theme_id TEXT NOT NULL REFERENCES themes(id) ON DELETE CASCADE,
  PRIMARY KEY (template_id, theme_id)
);

CREATE INDEX IF NOT EXISTS idx_template_themes_theme ON template_themes(theme_id);

CREATE TABLE IF NOT EXISTS template_versions (
  id TEXT PRIMARY KEY,
  template_id TEXT NOT NULL REFERENCES templates(id) ON DELETE CASCADE,
  version INTEGER NOT NULL,
  title TEXT NOT NULL,
  body TEXT NOT NULL,
  created_at TEXT NOT NULL,
  UNIQUE (template_id, version)
);

CREATE INDEX IF NOT EXISTS idx_template_versions_template ON template_versions(template_id, version DESC);

CREATE TABLE IF NOT EXISTS jobs (
  id TEXT PRIMARY KEY,
  status TEXT NOT NULL,
  progress INTEGER NOT NULL DEFAULT 0,
  config TEXT NOT NULL,
  errors TEXT NOT NULL DEFAULT '[]',
  diagnostics TEXT NOT NULL DEFAULT '[]',
  artifacts TEXT NOT NULL DEFAULT '[]',
  selected_template_ids TEXT NOT NULL DEFAULT '[]',
  parent_job_id TEXT REFERENCES jobs(id) ON DELETE SET NULL,
  created_at TEXT NOT NULL,
  updated_at TEXT NOT NULL
);

CREATE INDEX IF NOT EXISTS idx_jobs_status ON jobs(status);
CREATE INDEX IF NOT EXISTS idx_jobs_created_at ON jobs(created_at DESC);

CREATE TABLE IF NOT EXISTS meta (
  key TEXT PRIMARY KEY,
  value TEXT NOT NULL
);

CREATE TABLE IF NOT EXISTS quiz_presets (
  id TEXT PRIMARY KEY,
  name TEXT NOT NULL UNIQUE,
  description TEXT NOT NULL DEFAULT '',
  config TEXT NOT NULL,
  template_ids TEXT NOT NULL,
  created_at TEXT NOT NULL,
  updated_at TEXT NOT NULL
);

CREATE INDEX IF NOT EXISTS idx_quiz_presets_updated_at ON quiz_presets(updated_at DESC);
`;
