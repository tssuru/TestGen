import type { GenerationConfig } from "@quiz/contracts";
import { getPoolStats } from "../api";

// Pre-flight check before creating a generation job: is the pool big enough
// for questionsPerVariant? Returns a user-facing message or null when OK.
export const checkPoolSize = async (
  cfg: GenerationConfig,
  explicitTemplateCount = 0,
): Promise<string | null> => {
  const need = cfg.questionsPerVariant;
  if (explicitTemplateCount > 0) {
    return explicitTemplateCount < need
      ? `Недостатньо питань: у пресеті збережено ${String(explicitTemplateCount)}, а потрібно ${String(need)} на варіант. Зменшіть кількість питань у налаштуваннях пресета.`
      : null;
  }
  const stats = await getPoolStats(cfg.themeIds ?? []);
  const available = cfg.questionTypeFilter === "closed"
    ? stats.closedCount
    : cfg.questionTypeFilter === "open"
      ? stats.openCount
      : stats.closedCount + stats.openCount;
  return available < need
    ? `Недостатньо питань у пулі: доступно ${String(available)}, а потрібно ${String(need)} на варіант. Зменшіть кількість питань або розширте вибір тем.`
    : null;
};
