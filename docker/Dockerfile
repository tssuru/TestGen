FROM node:22-bookworm AS build

RUN apt-get update && apt-get install -y --no-install-recommends \
    g++ python3 make \
  && rm -rf /var/lib/apt/lists/*

COPY Quiz /app/Quiz

RUN mkdir -p /app/Quiz/bin/release && g++ -std=c++17 -O2 -w \
  /app/Quiz/Quest/*.cpp \
  /app/Quiz/Quest/QFabrics/*.cpp \
  /app/Quiz/Quest/Questions/*.cpp \
  /app/Quiz/Quest/Sources/*.cpp \
  /app/Quiz/Container/*.cpp \
  /app/Quiz/LexStream/*.cpp \
  -I /app/Quiz/Quest \
  -I /app/Quiz/Quest/QFabrics \
  -I /app/Quiz/Quest/Questions \
  -I /app/Quiz/Quest/Sources \
  -I /app/Quiz/Container \
  -I /app/Quiz/LexStream \
  -o /app/Quiz/bin/release/quest

WORKDIR /app/platform

COPY platform/package.json /app/platform/package.json
COPY platform/tsconfig.base.json /app/platform/tsconfig.base.json
COPY platform/contracts/package.json /app/platform/contracts/package.json
COPY platform/api/package.json /app/platform/api/package.json
COPY platform/web/package.json /app/platform/web/package.json

RUN npm install

COPY platform /app/platform

RUN npm run build:contracts && npm run build:api && npm run build:web

FROM node:22-bookworm AS runtime

RUN apt-get update && apt-get install -y --no-install-recommends \
    curl \
    pandoc \
    texlive-latex-base \
    texlive-latex-extra \
    texlive-lang-cyrillic \
    texlive-fonts-extra \
    texlive-fonts-recommended \
    zip \
    ca-certificates \
  && rm -rf /var/lib/apt/lists/*

COPY --from=build /app/Quiz /app/Quiz
COPY --from=build /app/platform /app/platform

WORKDIR /app/platform/api

RUN mkdir -p /app/data

ENV NODE_ENV=production
ENV PORT=3010
ENV QUIZ_ENGINE_WORKDIR=/app/Quiz
ENV QUIZ_ENGINE_BINARY=/app/Quiz/bin/release/quest
ENV TESTGEN_DB_PATH=/app/data/testgen.db

VOLUME ["/app/data"]

EXPOSE 3010

CMD ["node", "dist/app/server.js"]
