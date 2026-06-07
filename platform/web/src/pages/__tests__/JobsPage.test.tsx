import { describe, it, expect, vi, beforeEach } from "vitest";
import { render, screen } from "@testing-library/react";
import { MemoryRouter } from "react-router-dom";
import { JobsPage } from "../JobsPage";

const mockJobs = [
  {
    jobId: "11111111-1111-1111-1111-111111111111",
    status: "completed" as const, progress: 100,
    config: {
      title: "Тест A", variantCount: 2, questionsPerVariant: 5,
      questionTypeFilter: "mixed" as const, mode: "OneOnLine" as const,
      shuffleQuestions: true, includeAnswerKey: true, closedShare: 0.5,
    },
    errors: [], diagnostics: [], artifacts: [],
    createdAt: "2026-04-15T10:00:00Z", updatedAt: "2026-04-15T10:00:30Z",
  },
  {
    jobId: "22222222-2222-2222-2222-222222222222",
    status: "failed" as const, progress: 100,
    config: {
      title: "Тест B", variantCount: 1, questionsPerVariant: 3,
      questionTypeFilter: "closed" as const, mode: "OneOnLine" as const,
      shuffleQuestions: true, includeAnswerKey: false, closedShare: 1,
    },
    errors: [{ code: "X", message: "err" }], diagnostics: [], artifacts: [],
    createdAt: "2026-04-15T11:00:00Z", updatedAt: "2026-04-15T11:00:10Z",
  },
];

vi.mock("../../api", () => ({
  listJobs: vi.fn(async () => mockJobs),
}));

describe("JobsPage", () => {
  beforeEach(() => { vi.clearAllMocks(); });

  it("renders jobs with titles and status badges", async () => {
    render(<MemoryRouter><JobsPage /></MemoryRouter>);
    expect(await screen.findByText("Тест A")).toBeInTheDocument();
    expect(await screen.findByText("Тест B")).toBeInTheDocument();
    expect(await screen.findByText("Готово")).toBeInTheDocument();
    expect(await screen.findByText("Помилка")).toBeInTheDocument();
  });

  it("links each job row to its detail page", async () => {
    render(<MemoryRouter><JobsPage /></MemoryRouter>);
    const link = (await screen.findByText("Тест A")).closest("a");
    expect(link).toHaveAttribute("href", `/jobs/${mockJobs[0]!.jobId}`);
  });

  it("shows config summary in subline", async () => {
    render(<MemoryRouter><JobsPage /></MemoryRouter>);
    expect(await screen.findByText(/2 варіантів · 5 питань/)).toBeInTheDocument();
  });
});
