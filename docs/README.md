# TestGen — система автоматизованої генерації тестових завдань

## Огляд

Веб-застосунок для редагування банку питань і генерації варіантів контрольних робіт. Інтегрується з C++ двигуном Quiz (`quest`), який виконує рандомізацію варіантів, підстановку параметрів у шаблони і компонування TeX-документу. Банк питань зберігається у SQLite-базі даних та адмініструється через UI-редактор.

**Технологічний стек:**
- **Backend:** Node.js 22, TypeScript, SQLite (better-sqlite3)
- **Frontend:** React 19, React Router 7, Vite, Tailwind CSS 4
- **Двигун генерації:** C++ (quest binary)
- **Рендеринг:** pdfLaTeX, Pandoc
- **Тести:** Vitest (unit + UI), TSX (e2e HTTP)
- **Розгортання:** Docker (multi-stage build), SQLite-файл на volume

**Структура монорепозиторію:**

```
testgen/
├── Quiz/                       # C++ двигун та історичний банк (seed для DB)
│   ├── Quest/                  # C++ вихідний код двигуна
│   ├── Container/ LexStream/   # Допоміжні C++ модулі
│   └── Scripts/                # Фабрики для імпорту при першому запуску
├── platform/
│   ├── contracts/              # Спільні TypeScript типи (Template, Theme, Job, GenerationConfig...)
│   ├── api/                    # HTTP сервер + бізнес-логіка
│   │   └── src/
│   │       ├── app/            # server.ts + routes.ts + routes-regenerate.ts
│   │       ├── modules/
│   │       │   ├── db/         # SQLite client + templates/themes/jobs repos + seed
│   │       │   ├── generation/ # template-selector, template-materializer, spec-composer
│   │       │   ├── bridge/     # runner.ts — виклик C++ двигуна
│   │       │   ├── jobs/       # executor.ts, store.ts (facade над db)
│   │       │   ├── export/     # pdf, docx, markdown, tex-normalizer, zip
│   │       │   ├── answers/    # key.ts — ключ відповідей
│   │       │   ├── config/     # validator.ts, template-validator.ts
│   │       │   └── health/
│   │       └── tests/          # e2e.test.ts (47 HTTP тестів)
│   └── web/
│       └── src/
│           ├── pages/          # GeneratorPage, TemplatesPage, TemplateEditorPage,
│           │                   # ThemesPage, JobsPage, JobDetailPage
│           ├── components/     # Layout, ui.tsx (shared primitives)
│           └── api.ts          # HTTP клієнт
├── docker/
│   └── Dockerfile              # Multi-stage build
├── docs/                       # Документація
└── setup.sh                    # Автоматичне розгортання Ubuntu
```

---

## Розгортання

### Вимоги
- Ubuntu 22.04+ або macOS
- Docker Engine 24+

### Швидкий старт

```bash
mkdir -p testgen && cd testgen
tar -xzf ~/testgen-ubuntu.tar.gz
./setup.sh
```

Сервер доступний на `http://localhost:3010`. База даних автоматично ініціалізується і засіюється з файлової системи при першому запуску (`seedIfEmpty` у [db/seed.ts](../platform/api/src/modules/db/seed.ts)).

### Docker вручну

```bash
docker build -f docker/Dockerfile -t quiz-testgen .
docker run -d --name quiz-testgen \
  -v quiz-testgen-data:/app/data \
  -p 3010:3010 quiz-testgen
```

**Volume `/app/data`** зберігає `testgen.db` — стан пережив контейнер-рестарти.

### Змінні середовища

| Змінна | Значення за замовч. | Опис |
|--------|---------------------|------|
| `PORT` | `3010` | HTTP порт |
| `QUIZ_ENGINE_WORKDIR` | `../../Quiz` | Коренева директорія Quiz |
| `QUIZ_ENGINE_BINARY` | `../../Quiz/bin/release/quest` | Бінарник C++ двигуна |
| `TESTGEN_DB_PATH` | `./data/testgen.db` | Шлях до SQLite |

---

## Архітектура

### Шар даних (SQLite)

```
┌─────────────┐      ┌──────────────────┐      ┌──────────────────┐
│  templates  │──┬───│ template_themes  │──────│     themes       │
│  id         │  │   │ template_id,     │      │  id              │
│  kind       │  │   │ theme_id         │      │  name (unique)   │
│  title      │  │   └──────────────────┘      │  description     │
│  body (JSON)│  │                              │  created_at      │
│  version    │  │                              └──────────────────┘
│  parent_id  │  │
│  source     │  │   ┌──────────────────┐
│  content_key│  └──►│ template_versions│
│  timestamps │      │  id, version,    │
└─────────────┘      │  title, body     │
                     └──────────────────┘

┌─────────────┐
│    jobs     │
│  id         │
│  status     │
│  progress   │
│  config     │
│  errors     │
│  artifacts  │
│  selected_  │
│   template_ │
│   ids       │
│  parent_    │
│   job_id    │
└─────────────┘
```

**Ключові властивості:**
- `templates.source` ∈ `{imported, user}` — імпортовані з файлової системи (seed) або створені через UI
- `templates.content_key` (hash SHA256 body) — унікальний для `imported`, `NULL` для `user` (щоб форк/копії не конфліктували)
- При UPDATE з модифікацією `body` або `title` — автоматично інкрементується `version` і створюється snapshot у `template_versions`
- `jobs.parent_job_id` — для regenerate-item flow (нащадок job'а вказує на батька)

**Репозиторії:** [db/templates-repo.ts](../platform/api/src/modules/db/templates-repo.ts), [db/themes-repo.ts](../platform/api/src/modules/db/themes-repo.ts), [db/jobs-repo.ts](../platform/api/src/modules/db/jobs-repo.ts) — чисті функції `createXxxRepo(db)` повертають типізовані CRUD-об'єкти.

### Шлях генерації

```
  UI (POST /api/generation/jobs)
       │
       ▼
  jobs-repo.create() → persisted job row
       │
       ▼
  template-selector.selectTemplates(config, extra)
       │  - фільтр по theme_ids
       │  - або explicit templateIds (regenerate-item)
       │  - seeded Fisher-Yates shuffle (config.seed)
       │  - Mixed: closedShare × N closed + rest open
       │  - Open-user без sourceFnamePath виключаються з випадкової вибірки
       ▼
  template-materializer.materializeTemplates(templates, workdir, jobDir)
       │  - imported: використовує sourceGoodPath/sourceBadPath/sourceFnamePath
       │  - user closed: генерує <jobDir>/materialized/{id}-good.txt + {id}-bad.txt
       │  - user open: генерує {id}-f.txt
       │  - повертає readonly Question[] для spec-composer
       ▼
  spec-composer.composeScript(config, questions)
       │  DSL для C++ двигуна
       ▼
  bridge.runBridge() → spawns `quest` → quiz.tex
       │
       ├──► buildAnswerKey() → answers.json, answers.md
       ├──► exportMarkdown() → test.md
       ├──► normalizeTex() → verbatim-обгортка коду
       ├──► exportPdf() → pdflatex → quiz.pdf
       ├──► exportDocx() → pandoc → test.docx
       ├──► writeManifest() → manifest.json (SHA256 хеші)
       └──► createBundleZip() → bundle.zip
       ▼
  jobs-repo.complete() → persisted artifacts
```

**Seed:** При першому запуску порожня БД заповнюється з `Quiz/Scripts/`. Імпортер читає фабричні `.txt` файли, вилучає параметри (`ncase`, `nGood`, `before`, `good/bad/fname`), завантажує опції закритих питань із `%good`/`%bad` маркерів, автоматично тегує теми за патернами шляху (`Graphs`→Графи, `BinTree`→Бінарні дерева і т.д.).

---

## API

Базовий URL: `http://localhost:3010`

### Здоров'я та статистика

- `GET /health` — статус залежностей (pdflatex, pandoc, zip, quest binary)
- `GET /api/pool` → `{ closedCount, openCount }` (з БД)

### Генерація

- `POST /api/generation/jobs` — створити job. Body: `GenerationConfig` (+ опційно `themeIds[]`, `templateIds[]`)
- `GET /api/generation/jobs` — список jobs (за замовч. 50)
- `GET /api/generation/jobs/:id` — деталі
- `GET /api/generation/jobs/:id/artifacts/:name` — окремий артефакт
- `GET /api/generation/jobs/:id/download` — bundle.zip
- `POST /api/generation/jobs/:id/regenerate-item` — перегенерувати **одне** питання. Body: `{ index: 1..questionsPerVariant, replacementTemplateId?: string }`

### Шаблони (CRUD)

- `GET /api/templates?kind=closed|open&themeId=<id>&search=<substr>` — список
- `GET /api/templates/:id` — окремий шаблон
- `POST /api/templates` — створити. Body:
  ```json
  {
    "kind": "closed",
    "title": "Питання",
    "themeIds": ["..."],
    "body": {
      "kind": "closed",
      "options": [{"text":"A","correct":true},{"text":"B","correct":false}],
      "ncase": 4, "nGood": 2
    }
  }
  ```
- `PATCH /api/templates/:id` — оновити (бампить version, додає snapshot)
- `DELETE /api/templates/:id` — видалити (каскад: versions, theme links)
- `POST /api/templates/:id/fork` — копія з `parent_id = :id`
- `GET /api/templates/:id/versions` — історія змін

### Теми

- `GET /api/themes` — список
- `GET /api/themes/:id`
- `POST /api/themes` — `{ name, description? }`
- `PATCH /api/themes/:id` — перейменувати
- `DELETE /api/themes/:id` — каскад відвʼязування
- `POST /api/themes/:id/assign` — `{ templateIds: string[], detach?: boolean }` — прив'язати чи відв'язати шаблони

---

## Веб-інтерфейс (SPA)

### Структура навігації

| Шлях | Сторінка | Призначення |
|------|----------|-------------|
| `/` | `GeneratorPage` | Форма + прогрес + артефакти. Фільтр по темах. |
| `/templates` | `TemplatesPage` | Список з пошуком, фільтром за типом і темою. Копіювати / редагувати / видаляти. |
| `/templates/new` | `TemplateEditorPage` | Нова закрита або відкрита. |
| `/templates/:id` | `TemplateEditorPage` | Редагувати. Для імпортованих open — body read-only. |
| `/themes` | `ThemesPage` | CRUD + кількість шаблонів per тема. |
| `/jobs` | `JobsPage` | Список усіх jobs (persistent). |
| `/jobs/:id` | `JobDetailPage` | Артефакти, помилки, кнопки перегенерації кожного питання. |

### Редактор закритих питань

- **Форма:** заголовок, теми (чіпи), список опцій з toggle `correct`, ncase/nGood
- **Валідація (frontend):** title непорожній, ≥2 опції, ≥1 правильна, всі заповнені
- **Save:** POST `/api/templates` або PATCH `/api/templates/:id` з bumped version

### Редактор відкритих питань

- **Body read-only для imported** — imported-шаблони містять параметризований Python/C++ код у форматі, який розуміє C++ двигун. Через UI можна змінити лише title + themes + imagePaths.
- **User-created open** не потрапляють у випадкову вибірку (їхній body-код не є engine-сумісним), але можна згенерувати явно через `templateIds`.

### Regenerate-item flow

На сторінці `/jobs/:id` у секції «Перегенерація окремого питання» — по кнопці на кожне питання. Клік → POST `/api/generation/jobs/:id/regenerate-item { index: N }` → новий job (child) з тими самими templateIds, крім N-го, яке замінюється на випадковий неіспользуваний шаблон того самого kind. Parent job залишається.

---

## Тести

| Тип | Інструмент | Файли | Покриття |
|-----|------------|-------|----------|
| Unit (repositories) | vitest + in-memory SQLite | `platform/api/src/modules/db/__tests__/*.test.ts` | 31 тест: CRUD, versioning, fork, themes, jobs TTL |
| Unit (validators) | vitest | `platform/api/src/modules/config/__tests__/*.test.ts` | 17 тестів |
| E2E (HTTP) | tsx + fetch | `platform/api/src/tests/e2e.test.ts` | 47 тестів: health, pool, CRUD, generate, regenerate, answers, determinism |
| UI | vitest + React Testing Library | `platform/web/src/pages/__tests__/*.test.tsx` | 17 тестів: editor, themes, templates, jobs |

**Запуск:**

```bash
# API: unit + validators (не потребують Docker)
cd platform/api && npm run test:unit    # 48 тестів

# API: e2e HTTP (потребує запущений контейнер на :3010)
docker run -d -p 3010:3010 quiz-testgen
cd platform/api && npm run test:e2e     # 47 тестів

# Web: UI тести
cd platform/web && npm test             # 17 тестів
```

**Усього: 112 тестів** (48 unit + 47 e2e + 17 UI).

---

## Роботизація та автоматизація

- `setup.sh` — idempotent-скрипт встановлення Docker + build + run на чистій Ubuntu
- `--restart unless-stopped` — контейнер авто-піднімається після ребуту
- SQLite WAL-режим — concurrent reads під час writes
- Job TTL (24h) — автоматичне evict старих completed/failed jobs при кожному create

---

## Коди помилок

| Код | HTTP | Опис |
|-----|------|------|
| `INVALID_CONFIG` | 400 | Валідація payload не пройшла |
| `NOT_FOUND` | 404 | Job/Template/Theme/Artifact не знайдено |
| `NOT_READY` | 404 | Bundle ZIP ще не готовий |
| `PDF_EXPORT_FAILED` | — | pdflatex провалився |
| `ENGINE_RUNTIME_ERROR` | — | C++ двигун завершився не-нулем |
| `PROCESS_TIMEOUT` | — | Двигун перевищив 120 сек |
| `JOB_EXECUTION_FAILED` | — | Непередбачена помилка executor |
