import { BrowserRouter, Route, Routes } from "react-router-dom";
import { Layout } from "./components/Layout";
import { GeneratorPage } from "./pages/GeneratorPage";
import { TemplatesPage } from "./pages/TemplatesPage";
import { TemplateEditorPage } from "./pages/TemplateEditorPage";
import { ThemesPage } from "./pages/ThemesPage";
import { JobsPage } from "./pages/JobsPage";
import { JobDetailPage } from "./pages/JobDetailPage";
import { PresetsPage } from "./pages/PresetsPage";

export const App = () => (
  <BrowserRouter>
    <Routes>
      <Route element={<Layout />}>
        <Route path="/" element={<GeneratorPage />} />
        <Route path="/templates" element={<TemplatesPage />} />
        <Route path="/templates/new" element={<TemplateEditorPage />} />
        <Route path="/templates/:id" element={<TemplateEditorPage />} />
        <Route path="/themes" element={<ThemesPage />} />
        <Route path="/presets" element={<PresetsPage />} />
        <Route path="/jobs" element={<JobsPage />} />
        <Route path="/jobs/:id" element={<JobDetailPage />} />
      </Route>
    </Routes>
  </BrowserRouter>
);
