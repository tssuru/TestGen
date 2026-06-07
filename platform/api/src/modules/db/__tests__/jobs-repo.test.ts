import { beforeEach, describe, expect, it } from "vitest";
import { openDb, createRepositories, type Repositories } from "../index";
import type { GenerationConfig } from "@quiz/contracts";

const cfg: GenerationConfig = {
  title: "t", variantCount: 2, questionsPerVariant: 3,
  questionTypeFilter: "mixed", mode: "OneOnLine",
  shuffleQuestions: true, includeAnswerKey: true, closedShare: 0.5,
};

describe("JobsRepo", () => {
  let repos: Repositories;
  beforeEach(() => { repos = createRepositories(openDb(":memory:")); });

  it("create returns a queued job", () => {
    const j = repos.jobs.create(cfg);
    expect(j.status).toBe("queued");
    expect(j.progress).toBe(0);
    expect(j.config).toEqual(cfg);
    expect(j.artifacts).toEqual([]);
  });

  it("updateStatus transitions queued → running", () => {
    const j = repos.jobs.create(cfg);
    const u = repos.jobs.updateStatus(j.jobId, "running", 50);
    expect(u?.status).toBe("running");
    expect(u?.progress).toBe(50);
  });

  it("fail stores errors and diagnostics", () => {
    const j = repos.jobs.create(cfg);
    const err = { code: "X", message: "boom" };
    const failed = repos.jobs.fail(j.jobId, [err], []);
    expect(failed?.status).toBe("failed");
    expect(failed?.errors).toEqual([err]);
    expect(failed?.progress).toBe(100);
  });

  it("complete stores artifacts", () => {
    const j = repos.jobs.create(cfg);
    const art = { name: "x.pdf", path: "/x/x.pdf", format: "pdf" as const, sizeBytes: 100, sha256: "aa" };
    const c = repos.jobs.complete(j.jobId, [art]);
    expect(c?.status).toBe("completed");
    expect(c?.artifacts).toEqual([art]);
  });

  it("get returns null for unknown id", () => {
    expect(repos.jobs.get("nope")).toBeNull();
  });

  it("list returns jobs ordered by created_at desc", async () => {
    const a = repos.jobs.create(cfg);
    await new Promise((r) => setTimeout(r, 5));
    const b = repos.jobs.create(cfg);
    const list = repos.jobs.list();
    expect(list[0]!.jobId).toBe(b.jobId);
    expect(list[1]!.jobId).toBe(a.jobId);
  });

  it("remove deletes a job", () => {
    const j = repos.jobs.create(cfg);
    expect(repos.jobs.remove(j.jobId)).toBe(true);
    expect(repos.jobs.get(j.jobId)).toBeNull();
  });

  it("evictExpired removes only completed/failed jobs beyond TTL", () => {
    const keep = repos.jobs.create(cfg);
    const done = repos.jobs.create(cfg);
    repos.jobs.complete(done.jobId, []);
    const removed = repos.jobs.evictExpired(-1);
    expect(removed).toBe(1);
    expect(repos.jobs.get(keep.jobId)).not.toBeNull();
    expect(repos.jobs.get(done.jobId)).toBeNull();
  });

  it("setSelectedTemplateIds and getSelectedTemplateIds round-trip", () => {
    const j = repos.jobs.create(cfg);
    repos.jobs.setSelectedTemplateIds(j.jobId, ["a", "b", "c"]);
    expect(repos.jobs.getSelectedTemplateIds(j.jobId)).toEqual(["a", "b", "c"]);
  });

  it("parent_job_id is stored for regenerate flows", () => {
    const parent = repos.jobs.create(cfg);
    const child = repos.jobs.create(cfg, parent.jobId);
    const row = repos.jobs.getRow(child.jobId);
    expect(row?.parent_job_id).toBe(parent.jobId);
  });
});
