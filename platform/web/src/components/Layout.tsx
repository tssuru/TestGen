import { NavLink, Outlet } from "react-router-dom";
import { FileText, Sparkles, Tags, History, LayoutDashboard, Bookmark } from "lucide-react";
import { cn } from "../lib/utils";

const navItems: ReadonlyArray<{ to: string; label: string; icon: typeof Sparkles; end: boolean }> = [
  { to: "/", label: "Генератор", icon: Sparkles, end: true },
  { to: "/templates", label: "Шаблони", icon: FileText, end: false },
  { to: "/themes", label: "Теми", icon: Tags, end: false },
  { to: "/presets", label: "Пресети", icon: Bookmark, end: false },
  { to: "/jobs", label: "Історія", icon: History, end: false },
];

export const Layout = () => (
  <div className="min-h-screen bg-gray-50">
    <header className="border-b border-gray-200 bg-white">
      <div className="mx-auto max-w-6xl px-4 py-3 flex items-center gap-6">
        <div className="flex items-center gap-2">
          <LayoutDashboard className="h-5 w-5 text-gray-900" />
          <span className="font-semibold tracking-tight">TestGen</span>
        </div>
        <nav className="flex items-center gap-1">
          {navItems.map((item) => {
            const Icon = item.icon;
            return (
              <NavLink
                key={item.to}
                to={item.to}
                end={item.end}
                className={({ isActive }) =>
                  cn(
                    "inline-flex items-center gap-1.5 px-3 py-1.5 rounded-md text-sm font-medium transition-colors",
                    isActive ? "bg-gray-900 text-white" : "text-gray-700 hover:bg-gray-100",
                  )
                }
              >
                <Icon className="h-4 w-4" />
                {item.label}
              </NavLink>
            );
          })}
        </nav>
      </div>
    </header>
    <main className="mx-auto max-w-6xl px-4 py-8">
      <Outlet />
    </main>
  </div>
);
