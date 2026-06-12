import { describe, it, expect, vi, beforeEach } from "vitest";
import { render, screen, waitFor } from "@testing-library/react";
import userEvent from "@testing-library/user-event";
import { MemoryRouter } from "react-router-dom";
import { TemplatesPage } from "../TemplatesPage";

const mockTemplates = [
  {
    id: "t1", kind: "closed" as const, title: "Графовий обхід",
    version: 1, source: "imported" as const, themeIds: ["theme1"], updatedAt: "2026-04-01T00:00:00Z",
  },
  {
    id: "t2", kind: "open" as const, title: "Цикл while",
    version: 1, source: "user" as const, themeIds: [], updatedAt: "2026-04-01T00:00:00Z",
  },
];

vi.mock("../../api", () => ({
  listTemplates: vi.fn(async () => mockTemplates),
  listThemes: vi.fn(async () => [
    { id: "theme1", name: "Графи", description: "", templateCount: 1, createdAt: "2026-04-01T00:00:00Z" },
  ]),
  deleteTemplate: vi.fn(async () => ({ deleted: true })),
  forkTemplate: vi.fn(),
}));

describe("TemplatesPage", () => {
  beforeEach(() => { vi.clearAllMocks(); });

  it("renders templates from API with source badges", async () => {
    render(<MemoryRouter><TemplatesPage /></MemoryRouter>);
    expect(await screen.findByText("Графовий обхід")).toBeInTheDocument();
    expect(await screen.findByText("Цикл while")).toBeInTheDocument();
    expect(screen.getByText(/Імпортований/)).toBeInTheDocument();
    expect(screen.getByText(/Користувацький/)).toBeInTheDocument();
  });

  it("groups templates by theme — theme name appears as a group heading", async () => {
    render(<MemoryRouter><TemplatesPage /></MemoryRouter>);
    // Wait for templates to render first
    await screen.findByText("Графовий обхід");
    // Then theme name should appear (either as chip or group heading)
    const matches = await screen.findAllByText("Графи");
    expect(matches.length).toBeGreaterThan(0);
  });

  it("templates without themes fall under «Без теми» group", async () => {
    render(<MemoryRouter><TemplatesPage /></MemoryRouter>);
    await screen.findByText("Цикл while");
    expect(await screen.findByText("Без теми")).toBeInTheDocument();
  });

  it("calls listTemplates with filter params when kind select changes", async () => {
    const { listTemplates } = await import("../../api");
    render(<MemoryRouter><TemplatesPage /></MemoryRouter>);
    const user = userEvent.setup();

    const kindSelect = screen.getAllByRole("combobox")[0]!;
    await user.selectOptions(kindSelect, "closed");
    await waitFor(() => {
      const calls = (listTemplates as ReturnType<typeof vi.fn>).mock.calls;
      expect(calls.some((c) => (c[0] as { kind?: string })?.kind === "closed")).toBe(true);
    });
  });

  it("has a «Новий шаблон» button linking to /templates/new", async () => {
    render(<MemoryRouter><TemplatesPage /></MemoryRouter>);
    const link = await screen.findByRole("link", { name: /Новий шаблон/i });
    expect(link).toHaveAttribute("href", "/templates/new");
  });
});
