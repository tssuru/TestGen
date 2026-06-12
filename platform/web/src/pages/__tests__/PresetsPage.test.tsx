import { describe, it, expect, vi, beforeEach } from "vitest";
import { render, screen, waitFor } from "@testing-library/react";
import userEvent from "@testing-library/user-event";
import { MemoryRouter } from "react-router-dom";
import { PresetsPage } from "../PresetsPage";

const mockPreset = {
  id: "p1",
  name: "Мій пресет",
  description: "",
  config: {
    title: "Контрольна робота", variantCount: 2, questionsPerVariant: 5,
    questionTypeFilter: "mixed" as const, mode: "OneOnLine" as const,
    shuffleQuestions: true, includeAnswerKey: true, closedShare: 0.5,
  },
  templateIds: [],
  createdAt: "2026-06-01T00:00:00Z",
  updatedAt: "2026-06-01T00:00:00Z",
};

vi.mock("../../api", () => ({
  listPresets: vi.fn(async () => [mockPreset]),
  updatePreset: vi.fn(async () => mockPreset),
  deletePreset: vi.fn(),
  createJob: vi.fn(),
  getJob: vi.fn(),
}));

vi.mock("../../lib/pool-validation", () => ({
  checkPoolSize: vi.fn(async () => null),
}));

const renderPage = () => render(<MemoryRouter><PresetsPage /></MemoryRouter>);

describe("PresetsPage — редагування назви роботи", () => {
  beforeEach(() => { vi.clearAllMocks(); });

  it("shows preset name and work title", async () => {
    renderPage();
    expect(await screen.findByText("Мій пресет")).toBeInTheDocument();
    expect(screen.getByText(/«Контрольна робота»/)).toBeInTheDocument();
  });

  it("edit mode has fields for both preset name and work title", async () => {
    renderPage();
    const user = userEvent.setup();
    await screen.findByText("Мій пресет");
    // pencil button (the only icon-button between Запустити and Видалити)
    const buttons = screen.getAllByRole("button");
    const pencil = buttons.find((b) => b.querySelector("svg.lucide-pencil") !== null)!;
    await user.click(pencil);
    expect(screen.getByText(/Назва пресета/)).toBeInTheDocument();
    expect(screen.getByText(/Назва роботи/)).toBeInTheDocument();
  });

  it("saving sends updated config.title while preserving the rest of the config", async () => {
    const { updatePreset } = await import("../../api");
    renderPage();
    const user = userEvent.setup();
    await screen.findByText("Мій пресет");
    const buttons = screen.getAllByRole("button");
    const pencil = buttons.find((b) => b.querySelector("svg.lucide-pencil") !== null)!;
    await user.click(pencil);

    const titleInput = screen.getByText(/Назва роботи/).querySelector("input")!;
    await user.clear(titleInput);
    await user.type(titleInput, "Модульна робота №2");

    const save = screen.getAllByRole("button").find((b) => b.querySelector("svg.lucide-check") !== null)!;
    await user.click(save);

    await waitFor(() => { expect(updatePreset).toHaveBeenCalledTimes(1); });
    const [id, patch] = (updatePreset as ReturnType<typeof vi.fn>).mock.calls[0]! as
      [string, { name: string; config: { title: string; variantCount: number } }];
    expect(id).toBe("p1");
    expect(patch.name).toBe("Мій пресет");
    expect(patch.config.title).toBe("Модульна робота №2");
    expect(patch.config.variantCount).toBe(2);
  });

  it("rejects empty work title with an error", async () => {
    const { updatePreset } = await import("../../api");
    renderPage();
    const user = userEvent.setup();
    await screen.findByText("Мій пресет");
    const buttons = screen.getAllByRole("button");
    const pencil = buttons.find((b) => b.querySelector("svg.lucide-pencil") !== null)!;
    await user.click(pencil);

    const titleInput = screen.getByText(/Назва роботи/).querySelector("input")!;
    await user.clear(titleInput);
    const save = screen.getAllByRole("button").find((b) => b.querySelector("svg.lucide-check") !== null)!;
    await user.click(save);

    expect(await screen.findByText(/Вкажіть назву роботи/)).toBeInTheDocument();
    expect(updatePreset).not.toHaveBeenCalled();
  });
});
