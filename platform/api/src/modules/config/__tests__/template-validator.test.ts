import { describe, it, expect } from "vitest";
import {
  validateTemplateCreate, validateTemplateUpdate,
  validateThemeCreate, validateThemeUpdate,
} from "../template-validator";

describe("validateTemplateCreate", () => {
  it("accepts a valid closed template", () => {
    const res = validateTemplateCreate({
      kind: "closed",
      title: "Тест",
      body: { kind: "closed", options: [{ text: "a", correct: true }, { text: "b", correct: false }], ncase: 2, nGood: 1 },
    });
    expect(res.kind).toBe("closed");
    expect(res.body.kind).toBe("closed");
  });

  it("accepts a valid open template", () => {
    const res = validateTemplateCreate({
      kind: "open", title: "t",
      body: { kind: "open", fabric: "template_answer", code: "print(1)" },
    });
    expect(res.kind).toBe("open");
  });

  it("rejects unknown kind", () => {
    expect(() => validateTemplateCreate({ kind: "weird", title: "t", body: {} })).toThrow(/kind/);
  });

  it("rejects empty title", () => {
    expect(() => validateTemplateCreate({ kind: "closed", title: "", body: {} })).toThrow(/title/);
  });

  it("rejects closed with no correct option", () => {
    expect(() => validateTemplateCreate({
      kind: "closed", title: "t",
      body: { kind: "closed", options: [{ text: "a", correct: false }, { text: "b", correct: false }] },
    })).toThrow(/correct/);
  });

  it("rejects closed with less than 2 options", () => {
    expect(() => validateTemplateCreate({
      kind: "closed", title: "t",
      body: { kind: "closed", options: [{ text: "a", correct: true }] },
    })).toThrow(/at least 2/);
  });

  it("rejects open with missing code", () => {
    expect(() => validateTemplateCreate({
      kind: "open", title: "t", body: { kind: "open", fabric: "template_answer" },
    })).toThrow(/code/);
  });

  it("rejects open with bad fabric", () => {
    expect(() => validateTemplateCreate({
      kind: "open", title: "t", body: { kind: "open", fabric: "nope", code: "x" },
    })).toThrow(/fabric/);
  });

  it("accepts themeIds array", () => {
    const res = validateTemplateCreate({
      kind: "open", title: "t", themeIds: ["a", "b"],
      body: { kind: "open", fabric: "file_answer", code: "x" },
    });
    expect(res.themeIds).toEqual(["a", "b"]);
  });
});

describe("validateTemplateUpdate", () => {
  it("accepts partial update with only title", () => {
    const p = validateTemplateUpdate({ title: "new" }, "closed");
    expect(p).toEqual({ title: "new" });
  });

  it("validates body when provided", () => {
    expect(() => validateTemplateUpdate({ body: { kind: "closed" } }, "closed")).toThrow();
  });

  it("accepts empty patch", () => {
    expect(validateTemplateUpdate({}, "open")).toEqual({});
  });
});

describe("validateThemeCreate", () => {
  it("accepts name only", () => {
    expect(validateThemeCreate({ name: "Графи" })).toEqual({ name: "Графи" });
  });
  it("rejects empty name", () => {
    expect(() => validateThemeCreate({ name: "" })).toThrow(/name/);
  });
  it("allows description", () => {
    expect(validateThemeCreate({ name: "X", description: "d" })).toEqual({ name: "X", description: "d" });
  });
});

describe("validateThemeUpdate", () => {
  it("accepts partial rename", () => {
    expect(validateThemeUpdate({ name: "Y" })).toEqual({ name: "Y" });
  });
  it("accepts empty patch", () => {
    expect(validateThemeUpdate({})).toEqual({});
  });
});
