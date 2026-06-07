import { describe, it, expect, vi, beforeEach } from "vitest";
import { render, screen, within, waitFor } from "@testing-library/react";
import userEvent from "@testing-library/user-event";
import { MemoryRouter } from "react-router-dom";
import { PreviewEditor } from "../PreviewEditor";
import type { GenerationJob } from "@quiz/contracts";

// --- Mocks ---------------------------------------------------------------
const mockNavigate = vi.fn();
vi.mock("react-router-dom", async () => {
  const real = await vi.importActual<typeof import("react-router-dom")>("react-router-dom");
  return { ...real, useNavigate: () => mockNavigate };
});

const mockItems = [
  {
    index: 1, templateId: "t1", kind: "closed" as const,
    title: "Обрати правильні твердження",
    body: {
      kind: "closed",
      options: [
        { text: "Правильна A", correct: true }, { text: "Неправильна B", correct: false },
        { text: "Правильна C", correct: true }, { text: "Неправильна D", correct: false },
      ],
    },
    source: "imported" as const, themeIds: ["th1"],
  },
  {
    index: 2, templateId: "t2", kind: "open" as const,
    title: "Що виведе код?",
    body: { kind: "open", fabric: "template_answer", code: "print(42)\nfor i in range(3):\n    print(i)" },
    source: "user" as const, themeIds: [],
  },
  {
    index: 3, templateId: "t3", kind: "closed" as const,
    title: "Ще одне закрите",
    body: { kind: "closed", options: [{ text: "ok", correct: true }, { text: "no", correct: false }] },
    source: "imported" as const, themeIds: [],
  },
];

const mockClosedTemplates = [
  { id: "t1", kind: "closed" as const, title: "Обрати правильні твердження", version: 1,
    source: "imported" as const, themeIds: [], updatedAt: "2026-04-01T00:00:00Z" },
  { id: "t3", kind: "closed" as const, title: "Ще одне закрите", version: 1,
    source: "imported" as const, themeIds: [], updatedAt: "2026-04-01T00:00:00Z" },
  { id: "t-new", kind: "closed" as const, title: "Новий закритий шаблон", version: 1,
    source: "user" as const, themeIds: [], updatedAt: "2026-04-01T00:00:00Z" },
  { id: "t-alt", kind: "closed" as const, title: "Альтернативний закритий", version: 1,
    source: "imported" as const, themeIds: [], updatedAt: "2026-04-01T00:00:00Z" },
];

const mockOpenTemplates = [
  { id: "t2", kind: "open" as const, title: "Що виведе код?", version: 1,
    source: "user" as const, themeIds: [], updatedAt: "2026-04-01T00:00:00Z" },
  { id: "t-open-alt", kind: "open" as const, title: "Інше відкрите", version: 1,
    source: "imported" as const, themeIds: [], updatedAt: "2026-04-01T00:00:00Z" },
];

vi.mock("../../api", () => ({
  getJobTemplates: vi.fn(async () => ({
    jobId: "job-1", templateIds: mockItems.map((i) => i.templateId), items: mockItems,
  })),
  listTemplates: vi.fn(async (filter?: { kind?: "closed" | "open" }) =>
    filter?.kind === "open" ? mockOpenTemplates : mockClosedTemplates),
  createJob: vi.fn(async (cfg: { templateIds: string[] }) => ({ jobId: "child-1", status: "queued" })),
  getJob: vi.fn(async () => ({
    jobId: "child-1", status: "completed", progress: 100,
    config: {}, errors: [], diagnostics: [], artifacts: [],
    createdAt: "", updatedAt: "",
  })),
}));

const mockJob: GenerationJob = {
  jobId: "job-1", status: "completed", progress: 100,
  config: {
    title: "T", variantCount: 1, questionsPerVariant: 3,
    questionTypeFilter: "mixed", mode: "OneOnLine",
    shuffleQuestions: true, includeAnswerKey: true, closedShare: 0.5,
  },
  errors: [], diagnostics: [], artifacts: [],
  createdAt: "", updatedAt: "",
};

const renderEditor = () =>
  render(<MemoryRouter><PreviewEditor job={mockJob} /></MemoryRouter>);

// --- Tests ---------------------------------------------------------------
describe("PreviewEditor", () => {
  beforeEach(() => { vi.clearAllMocks(); });

  it("renders a header and description", async () => {
    renderEditor();
    expect(await screen.findByText(/Редактор питань/i)).toBeInTheDocument();
    expect(screen.getByText(/Перегляньте підібрані/i)).toBeInTheDocument();
  });

  it("renders all items returned by getJobTemplates", async () => {
    renderEditor();
    expect(await screen.findByText("Обрати правильні твердження")).toBeInTheDocument();
    expect(screen.getByText("Що виведе код?")).toBeInTheDocument();
    expect(screen.getByText("Ще одне закрите")).toBeInTheDocument();
  });

  it("shows a closed-kind badge on closed items", async () => {
    renderEditor();
    await screen.findByTestId("pe-item-1");
    const item1 = screen.getByTestId("pe-item-1");
    expect(within(item1).getByText("Вибір")).toBeInTheDocument();
  });

  it("shows open-kind badge on open items", async () => {
    renderEditor();
    await screen.findByTestId("pe-item-2");
    const item2 = screen.getByTestId("pe-item-2");
    expect(within(item2).getByText("Відкрите")).toBeInTheDocument();
  });

  it("renders option preview with correctness marks for closed items", async () => {
    renderEditor();
    const preview = await screen.findByTestId("pe-preview-1");
    expect(preview.textContent).toMatch(/✓ Правильна A/);
    expect(preview.textContent).toMatch(/◦ Неправильна B/);
  });

  it("renders code preview for open items", async () => {
    renderEditor();
    const preview = await screen.findByTestId("pe-preview-2");
    expect(preview.textContent).toMatch(/print\(42\)/);
  });

  it("does NOT show the «apply» button when there are no overrides", async () => {
    renderEditor();
    await screen.findByText("Обрати правильні твердження");
    expect(screen.queryByTestId("pe-apply")).toBeNull();
  });

  it("opens the template picker modal when «Замінити» is clicked", async () => {
    renderEditor();
    const user = userEvent.setup();
    const btn = await screen.findByTestId("pe-change-1");
    await user.click(btn);
    expect(await screen.findByText(/Обрати шаблон/i)).toBeInTheDocument();
  });

  it("picker shows only closed templates when closed item is being replaced", async () => {
    renderEditor();
    const user = userEvent.setup();
    await user.click(await screen.findByTestId("pe-change-1"));
    // The current item (t1) is excluded; t3 is excluded because it's already used in item 3
    // Should see t-new, t-alt but not t1 or t3
    expect(await screen.findByText("Новий закритий шаблон")).toBeInTheDocument();
    expect(screen.getByText("Альтернативний закритий")).toBeInTheDocument();
    expect(screen.queryByText("Інше відкрите")).toBeNull(); // open template not shown
  });

  it("picker shows only open templates when open item is being replaced", async () => {
    renderEditor();
    const user = userEvent.setup();
    await user.click(await screen.findByTestId("pe-change-2"));
    expect(await screen.findByText("Інше відкрите")).toBeInTheDocument();
    expect(screen.queryByText("Новий закритий шаблон")).toBeNull();
  });

  it("selecting a template marks item as «Змінено» and shows apply button", async () => {
    renderEditor();
    const user = userEvent.setup();
    await user.click(await screen.findByTestId("pe-change-1"));
    await user.click(await screen.findByText("Новий закритий шаблон"));
    // Modal closed, item 1 is now modified
    const item1 = await screen.findByTestId("pe-item-1");
    expect(within(item1).getByText("Змінено")).toBeInTheDocument();
    expect(await screen.findByTestId("pe-apply")).toBeInTheDocument();
  });

  it("apply button label shows the count of overrides", async () => {
    renderEditor();
    const user = userEvent.setup();
    // Change item 1
    await user.click(await screen.findByTestId("pe-change-1"));
    await user.click(await screen.findByText("Новий закритий шаблон"));
    let apply = await screen.findByTestId("pe-apply");
    expect(apply.textContent).toMatch(/\(1\)/);
    // Change item 3 too
    await user.click(screen.getByTestId("pe-change-3"));
    await user.click(await screen.findByText("Альтернативний закритий"));
    apply = screen.getByTestId("pe-apply");
    expect(apply.textContent).toMatch(/\(2\)/);
  });

  it("revert button (X) clears the override and hides apply when no changes left", async () => {
    renderEditor();
    const user = userEvent.setup();
    await user.click(await screen.findByTestId("pe-change-1"));
    await user.click(await screen.findByText("Новий закритий шаблон"));
    expect(await screen.findByTestId("pe-apply")).toBeInTheDocument();
    await user.click(screen.getByTestId("pe-revert-1"));
    await waitFor(() => expect(screen.queryByTestId("pe-apply")).toBeNull());
    // Badge «Змінено» gone
    expect(screen.queryByText("Змінено")).toBeNull();
  });

  it("clicking apply creates a new job with overridden templateIds and shuffleQuestions=false", async () => {
    const { createJob } = await import("../../api");
    renderEditor();
    const user = userEvent.setup();
    await user.click(await screen.findByTestId("pe-change-1"));
    await user.click(await screen.findByText("Новий закритий шаблон"));
    await user.click(await screen.findByTestId("pe-apply"));
    await waitFor(() => expect(createJob).toHaveBeenCalled());
    const call = (createJob as ReturnType<typeof vi.fn>).mock.calls[0]![0] as { templateIds: string[]; shuffleQuestions: boolean };
    expect(call.shuffleQuestions).toBe(false);
    expect(call.templateIds).toEqual(["t-new", "t2", "t3"]); // item 1 replaced
  });

  it("after apply completes navigates to the child job detail", async () => {
    renderEditor();
    const user = userEvent.setup();
    await user.click(await screen.findByTestId("pe-change-1"));
    await user.click(await screen.findByText("Новий закритий шаблон"));
    await user.click(await screen.findByTestId("pe-apply"));
    await waitFor(() => expect(mockNavigate).toHaveBeenCalledWith("/jobs/child-1"));
  });

  it("picker supports search by title", async () => {
    const { listTemplates } = await import("../../api");
    renderEditor();
    const user = userEvent.setup();
    await user.click(await screen.findByTestId("pe-change-1"));
    const searchInput = await screen.findByPlaceholderText(/Пошук/i);
    await user.type(searchInput, "Альт");
    await waitFor(() => {
      const calls = (listTemplates as ReturnType<typeof vi.fn>).mock.calls;
      expect(calls.some((c) => (c[0] as { search?: string })?.search === "Альт")).toBe(true);
    });
  });

  it("picker close button dismisses modal without changes", async () => {
    renderEditor();
    const user = userEvent.setup();
    await user.click(await screen.findByTestId("pe-change-1"));
    const modal = await screen.findByText(/Обрати шаблон/i);
    expect(modal).toBeInTheDocument();
    // Close by clicking the X button (first one in the modal header)
    const closeButtons = document.querySelectorAll("button");
    // Find the close button in the modal (has X svg, no text)
    const modalContainer = modal.closest('div[class*="fixed"]');
    expect(modalContainer).not.toBeNull();
    const closeBtn = modalContainer!.querySelector("button");
    await user.click(closeBtn!);
    await waitFor(() => expect(screen.queryByText(/Обрати шаблон/i)).toBeNull());
    expect(screen.queryByTestId("pe-apply")).toBeNull();
    void closeButtons;
  });

  it("excludes already-selected templates from picker (avoids duplicates)", async () => {
    renderEditor();
    const user = userEvent.setup();
    await user.click(await screen.findByTestId("pe-change-1"));
    // t3 is used in item 3 → should NOT appear WITHIN the picker modal
    const heading = await screen.findByText(/Обрати шаблон/i);
    const modal = heading.closest("div[class*=\"fixed\"]") as HTMLElement;
    expect(modal).not.toBeNull();
    expect(within(modal).queryByText("Ще одне закрите")).toBeNull();
    // But the replacement candidates ARE present in the modal
    expect(within(modal).getByText("Новий закритий шаблон")).toBeInTheDocument();
  });

  it("shows loading text before templates arrive", async () => {
    // Force getJobTemplates to never resolve for this test only
    const api = await import("../../api");
    const spy = vi.spyOn(api, "getJobTemplates").mockImplementationOnce(
      () => new Promise(() => undefined),
    );
    renderEditor();
    expect(await screen.findByText(/Завантаження вибірки/i)).toBeInTheDocument();
    spy.mockRestore();
  });
});
