import { describe, it, expect, vi, beforeEach } from "vitest";
import { render, screen, waitFor } from "@testing-library/react";
import userEvent from "@testing-library/user-event";
import { MemoryRouter } from "react-router-dom";
import { ThemesPage } from "../ThemesPage";

const mockThemes = [
  { id: "a", name: "Графи", description: "про графи", templateCount: 4, createdAt: "2026-04-01T00:00:00Z" },
  { id: "b", name: "Цикли", description: "", templateCount: 0, createdAt: "2026-04-01T00:00:00Z" },
];

vi.mock("../../api", () => ({
  listThemes: vi.fn(async () => mockThemes),
  createTheme: vi.fn(async (input: { name: string }) =>
    ({ id: "new", name: input.name, description: "", templateCount: 0, createdAt: new Date().toISOString() })),
  updateTheme: vi.fn(),
  deleteTheme: vi.fn(),
}));

describe("ThemesPage", () => {
  beforeEach(() => { vi.clearAllMocks(); });

  it("renders all existing themes from API", async () => {
    render(<MemoryRouter><ThemesPage /></MemoryRouter>);
    expect(await screen.findByText("Графи")).toBeInTheDocument();
    expect(await screen.findByText("Цикли")).toBeInTheDocument();
  });

  it("creates a new theme when form is submitted", async () => {
    const { createTheme } = await import("../../api");
    render(<MemoryRouter><ThemesPage /></MemoryRouter>);
    const user = userEvent.setup();

    const nameField = screen.getByPlaceholderText(/Назва/i);
    await user.type(nameField, "Нова тема");
    await user.click(screen.getByRole("button", { name: /Додати/i }));

    await waitFor(() => expect(createTheme).toHaveBeenCalled());
    const call = (createTheme as ReturnType<typeof vi.fn>).mock.calls[0]![0] as { name: string };
    expect(call.name).toBe("Нова тема");
  });

  it("shows error when attempting to create with empty name", async () => {
    render(<MemoryRouter><ThemesPage /></MemoryRouter>);
    const user = userEvent.setup();
    await user.click(screen.getByRole("button", { name: /Додати/i }));
    expect(await screen.findByText(/Вкажіть назву/i)).toBeInTheDocument();
  });

  it("shows template count badges", async () => {
    render(<MemoryRouter><ThemesPage /></MemoryRouter>);
    expect(await screen.findByText("4 шаблонів")).toBeInTheDocument();
    expect(await screen.findByText("0 шаблонів")).toBeInTheDocument();
  });
});
