import Database from "better-sqlite3";
import { mkdirSync } from "node:fs";
import { dirname, resolve } from "node:path";
import { SCHEMA_SQL } from "./schema";

export type DbClient = Database.Database;

const resolveDbPath = (): string => {
  const explicit = process.env["TESTGEN_DB_PATH"];
  if (explicit !== undefined && explicit.length > 0) return explicit;
  return resolve(process.cwd(), "data", "testgen.db");
};

let instance: DbClient | null = null;

export const openDb = (path?: string): DbClient => {
  const target = path ?? resolveDbPath();
  if (target !== ":memory:") mkdirSync(dirname(target), { recursive: true });
  const db = new Database(target);
  db.exec(SCHEMA_SQL);
  return db;
};

export const getDb = (): DbClient => {
  if (instance === null) {
    instance = openDb();
    console.info(`[db] opened at ${resolveDbPath()}`);
  }
  return instance;
};

export const setDbForTests = (db: DbClient | null): void => {
  instance = db;
};

export const closeDb = (): void => {
  if (instance !== null) {
    instance.close();
    instance = null;
  }
};
