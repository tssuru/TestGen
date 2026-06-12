import { defineConfig } from "vitest/config";

export default defineConfig({
  test: {
    include: ["src/**/__tests__/**/*.test.ts", "src/**/*.test.ts"],
    exclude: ["src/tests/e2e.test.ts", "src/tests/functional.test.ts", "node_modules/**", "dist/**"],
    environment: "node",
    globals: false,
  },
});
