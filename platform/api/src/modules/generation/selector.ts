import type { GenerationConfig } from "@quiz/contracts";
import { loadPool, type Question } from "./pool";

const rng = (seed: number): (() => number) => {
  let s = seed >>> 0;
  return () => {
    s = (s + 0x6d2b79f5) >>> 0;
    let t = Math.imul(s ^ (s >>> 15), 1 | s);
    t ^= t + Math.imul(t ^ (t >>> 7), 61 | t);
    return ((t ^ (t >>> 14)) >>> 0) / 4294967296;
  };
};

const shuffled = <T>(arr: readonly T[], seed: number): T[] => {
  const out = [...arr];
  const r = rng(seed);
  for (let i = out.length - 1; i > 0; i--) {
    const j = Math.floor(r() * (i + 1));
    [out[i], out[j]] = [out[j] as T, out[i] as T];
  }
  return out;
};

export const selectQuestions = (config: GenerationConfig): readonly Question[] => {
  const pool = loadPool();
  const closed = pool.filter((q): q is Extract<Question, { type: "closed" }> => q.type === "closed");
  const open = pool.filter((q): q is Extract<Question, { type: "open" }> => q.type === "open");
  const seed = config.seed ?? 42;

  const n = config.questionsPerVariant;
  if (config.questionTypeFilter === "closed") return shuffled(closed, seed).slice(0, n);
  if (config.questionTypeFilter === "open") return shuffled(open, seed).slice(0, n);

  const closedWanted = Math.min(Math.round(n * config.closedShare), closed.length);
  const openWanted = n - closedWanted;
  const pickedClosed = shuffled(closed, seed).slice(0, closedWanted);
  const pickedOpen = shuffled(open, seed + 1).slice(0, openWanted);
  return shuffled([...pickedClosed, ...pickedOpen], seed + 2);
};
