import { describe, it, expect, vi, beforeEach } from "vitest";
import { render, screen, within } from "@testing-library/react";
import userEvent from "@testing-library/user-event";
import { MemoryRouter, Route, Routes } from "react-router-dom";
import { TemplateEditorPage } from "../TemplateEditorPage";

vi.mock("../../api", () => ({
  listThemes: vi.fn(async () => []),
  getTemplate: vi.fn(),
  createTemplate: vi.fn(async (input: unknown) => ({ id: "new-id", ...input as object, version: 1 })),
  updateTemplate: vi.fn(),
  deleteTemplate: vi.fn(),
  listTemplateVersions: vi.fn(async () => []),
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
});
