import { describe, it, expect, vi, beforeEach } from "vitest";
import type { GenerationConfig } from "@quiz/contracts";
import { checkPoolSize } from "../pool-validation";
import { getPoolStats } from "../../api";

vi.mock("../../api", () => ({
  getPoolStats: vi.fn(async () => ({ closedCount: 5, openCount: 10 })),
}));

const cfg = (over: Partial<GenerationConfig> = {}): GenerationConfig => ({
  title: "T", variantCount: 1, questionsPerVariant: 10,
  questionTypeFilter: "mixed", mode: "OneOnLine",
  shuffleQuestions: true, includeAnswerKey: true, closedShare: 0.5,
  ...over,
});

describe("checkPoolSize", () => {
  beforeEach(() => { vi.clearAllMocks(); });

  it("passes when mixed pool covers the request", async () => {
    expect(await checkPoolSize(cfg({ questionsPerVariant: 15 }))).toBeNull();
  });

  it("fails when mixed pool is too small", async () => {
    const msg = await checkPoolSize(cfg({ questionsPerVariant: 16 }));
    expect(msg).toMatch(/доступно 15/);
    expect(msg).toMatch(/потрібно 16/);
  });

  it("uses only closed count for closed filter", async () => {
    const msg = await checkPoolSize(cfg({ questionTypeFilter: "closed", questionsPerVariant: 6 }));
    expect(msg).toMatch(/доступно 5/);
    expect(await checkPoolSize(cfg({ questionTypeFilter: "closed", questionsPerVariant: 5 }))).toBeNull();
  });

  it("uses only open count for open filter", async () => {
    const msg = await checkPoolSize(cfg({ questionTypeFilter: "open", questionsPerVariant: 11 }));
    expect(msg).toMatch(/доступно 10/);
    expect(await checkPoolSize(cfg({ questionTypeFilter: "open", questionsPerVariant: 10 }))).toBeNull();
  });

  it("passes themeIds through to getPoolStats", async () => {
    await checkPoolSize(cfg({ themeIds: ["th1", "th2"] }));
    expect(getPoolStats).toHaveBeenCalledWith(["th1", "th2"]);
  });

  it("explicit template count short-circuits the pool query", async () => {
    const msg = await checkPoolSize(cfg({ questionsPerVariant: 10 }), 5);
    expect(msg).toMatch(/у пресеті збережено 5/);
    expect(getPoolStats).not.toHaveBeenCalled();
  });

  it("explicit template count equal to request passes", async () => {
    expect(await checkPoolSize(cfg({ questionsPerVariant: 5 }), 5)).toBeNull();
  });
});
