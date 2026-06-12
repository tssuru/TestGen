import { describe, it, expect, vi, beforeEach } from "vitest";
import { render, screen, waitFor, within } from "@testing-library/react";
import userEvent from "@testing-library/user-event";
import { MemoryRouter, Route, Routes } from "react-router-dom";
import { TemplateEditorPage } from "../TemplateEditorPage";

const existingTemplate = {
  id: "t1", kind: "closed" as const, title: "Існуюче питання",
  body: {
    kind: "closed" as const,
    options: [{ text: "a", correct: true }, { text: "b", correct: false }],
    ncase: 4, nGood: 1, imagePaths: [],
  },
  version: 1, parentId: null, source: "user" as const,
  themeIds: [], createdAt: "2026-06-01T00:00:00Z", updatedAt: "2026-06-01T00:00:00Z",
};

vi.mock("../../api", () => ({
  listThemes: vi.fn(async () => []),
  getTemplate: vi.fn(async () => existingTemplate),
  createTemplate: vi.fn(async (input: unknown) => ({ id: "new-id", ...input as object, version: 1 })),
  updateTemplate: vi.fn(async () => ({ ...existingTemplate, version: 2 })),
  deleteTemplate: vi.fn(),
  listTemplateVersions: vi.fn(async () => []),
  createPreviewJob: vi.fn(async () => ({ jobId: "job-test-1", status: "queued" })),
  getJob: vi.fn(async () => ({
    jobId: "job-test-1", status: "completed", config: { title: "Тест" },
    artifacts: [
      { format: "pdf", name: "quiz.pdf", sha256: "abc", sizeBytes: 1024, path: "" },
      { format: "answers_md", name: "answers.md", sha256: "def", sizeBytes: 256, path: "" },
    ],
    errors: [], createdAt: "2026-06-11T00:00:00Z",
  })),
  getArtifactPreviewUrl: (jobId: string, name: string) =>
    `/api/generation/jobs/${jobId}/artifacts/${name}`,
}));

const renderNew = () =>
  render(
    <MemoryRouter initialEntries={["/templates/new"]}>
      <Routes>
        <Route path="/templates/:id" element={<TemplateEditorPage />} />
      </Routes>
    </MemoryRouter>,
  );

describe("TemplateEditorPage (new closed template)", () => {
  beforeEach(() => { vi.clearAllMocks(); });

  it("renders form with two default options and a correct toggle", () => {
    renderNew();
    expect(screen.getByText(/Новий шаблон/i)).toBeInTheDocument();
    const inputs = screen.getAllByPlaceholderText(/Варіант \d/i);
    expect(inputs).toHaveLength(2);
  });

  it("adds a new option row when clicking «Додати»", async () => {
    renderNew();
    const user = userEvent.setup();
    await user.click(screen.getByRole("button", { name: /Додати/i }));
    expect(screen.getAllByPlaceholderText(/Варіант \d/i)).toHaveLength(3);
  });

  it("toggles an option's correctness", async () => {
    renderNew();
    const user = userEvent.setup();
    const buttons = screen.getAllByTitle(/правильна|неправильна/i);
    // First is correct by default, second is not
    expect(buttons[0]).toHaveAttribute("title", "Правильна");
    expect(buttons[1]).toHaveAttribute("title", "Неправильна");
    await user.click(buttons[1]!);
    expect(buttons[1]).toHaveAttribute("title", "Правильна");
  });

  it("shows error when saving with empty title", async () => {
    renderNew();
    const user = userEvent.setup();
    await user.click(screen.getByRole("button", { name: /Створити/i }));
    expect(await screen.findByText(/Вкажіть заголовок/i)).toBeInTheDocument();
  });

  it("shows error when saving with no correct option", async () => {
    renderNew();
    const user = userEvent.setup();
    const labels = screen.getAllByText(/Заголовок/i);
    const titleField = labels[0]!.parentElement!.querySelector("input")!;
    await user.type(titleField, "Test");
    // Fill option texts so we pass that check
    const opts = screen.getAllByPlaceholderText(/Варіант \d/i);
    await user.type(opts[0]!, "a");
    await user.type(opts[1]!, "b");
    // Uncheck the first (default-correct) option
    const correctToggles = screen.getAllByTitle(/Правильна/i);
    await user.click(correctToggles[0]!);
    await user.click(screen.getByRole("button", { name: /Створити/i }));
    expect(await screen.findByText(/хоча б одну правильну/i)).toBeInTheDocument();
  });

  it("submits a valid form", async () => {
    const { createTemplate } = await import("../../api");
    renderNew();
    const user = userEvent.setup();
    const titleLabels = screen.getAllByText(/Заголовок/i);
    const titleField = titleLabels[0]!.parentElement!.querySelector("input")!;
    await user.type(titleField, "Питання");
    const opts = screen.getAllByPlaceholderText(/Варіант \d/i);
    await user.type(opts[0]!, "Правильна");
    await user.type(opts[1]!, "Неправильна");
    await user.click(screen.getByRole("button", { name: /Створити/i }));
    expect(createTemplate).toHaveBeenCalledTimes(1);
    const call = (createTemplate as ReturnType<typeof vi.fn>).mock.calls[0]![0] as { title: string };
    expect(call.title).toBe("Питання");
  });

  it("shows the test generation card even for a new template", () => {
    renderNew();
    expect(screen.getByText(/Тестова генерація/i)).toBeInTheDocument();
  });
});

const renderExisting = () =>
  render(
    <MemoryRouter initialEntries={["/templates/t1"]}>
      <Routes>
        <Route path="/templates/:id" element={<TemplateEditorPage />} />
      </Routes>
    </MemoryRouter>,
  );

describe("TemplateEditorPage (existing template, test generation)", () => {
  beforeEach(() => { vi.clearAllMocks(); });

  it("shows the test generation card with the run button", async () => {
    renderExisting();
    expect(await screen.findByText(/Тестова генерація/i)).toBeInTheDocument();
    expect(screen.getByRole("button", { name: /Згенерувати тест/i })).toBeInTheDocument();
  });

  it("creates an ephemeral preview job WITHOUT saving and shows artifact links", async () => {
    const { updateTemplate, createPreviewJob } = await import("../../api");
    renderExisting();
    const user = userEvent.setup();
    const runBtn = await screen.findByRole("button", { name: /Згенерувати тест/i });
    await user.click(runBtn);

    await waitFor(() => { expect(createPreviewJob).toHaveBeenCalledTimes(1); });
    // no save, no version bump
    expect(updateTemplate).not.toHaveBeenCalled();
    const arg = (createPreviewJob as ReturnType<typeof vi.fn>).mock.calls[0]![0] as {
      kind: string; title: string; body: { kind: string };
    };
    expect(arg.kind).toBe("closed");
    expect(arg.title).toBe("Існуюче питання");
    expect(arg.body.kind).toBe("closed");

    // completed job renders PDF and answers links
    expect(await screen.findByText("PDF")).toBeInTheDocument();
    expect(screen.getByText(/Ключ відповідей/i)).toBeInTheDocument();
    const pdfLink = screen.getByText("PDF").closest("a");
    expect(pdfLink).toHaveAttribute("href", "/api/generation/jobs/job-test-1/artifacts/quiz.pdf");
  });

  it("shows job errors when test generation fails", async () => {
    const { getJob } = await import("../../api");
    (getJob as ReturnType<typeof vi.fn>).mockResolvedValue({
      jobId: "job-test-1", status: "failed", config: { title: "Тест" },
      artifacts: [], createdAt: "2026-06-11T00:00:00Z",
      errors: [{ code: "ENGINE_ERROR", message: "BaseContainer is empty" }],
    });
    renderExisting();
    const user = userEvent.setup();
    const runBtn = await screen.findByRole("button", { name: /Згенерувати тест/i });
    await user.click(runBtn);
    expect(await screen.findByText(/завершилася з помилкою/i)).toBeInTheDocument();
    expect(await screen.findByText(/BaseContainer is empty/i)).toBeInTheDocument();
  });

  it("tests unsaved editor changes — edited title goes into the preview body", async () => {
    const { createPreviewJob, updateTemplate } = await import("../../api");
    renderExisting();
    const user = userEvent.setup();
    await screen.findByText(/Тестова генерація/i);
    const titleLabels = screen.getAllByText(/Заголовок/i);
    const titleField = titleLabels[0]!.parentElement!.querySelector("input")!;
    await user.clear(titleField);
    await user.type(titleField, "Змінений без збереження");
    await user.click(screen.getByRole("button", { name: /Згенерувати тест/i }));

    await waitFor(() => { expect(createPreviewJob).toHaveBeenCalledTimes(1); });
    const arg = (createPreviewJob as ReturnType<typeof vi.fn>).mock.calls[0]![0] as { title: string };
    expect(arg.title).toBe("Змінений без збереження");
    expect(updateTemplate).not.toHaveBeenCalled();
  });
});
