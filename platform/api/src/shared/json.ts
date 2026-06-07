import { IncomingMessage } from "node:http";

export const readJsonBody = async (request: IncomingMessage): Promise<unknown> => {
  const chunks: Buffer[] = [];
  for await (const chunk of request) {
    chunks.push(Buffer.isBuffer(chunk) ? chunk : Buffer.from(chunk));
  }
  const body = Buffer.concat(chunks).toString("utf8").trim();
  if (body.length === 0) {
    return {};
  }
  return JSON.parse(body) as unknown;
};

export const writeJson = (statusCode: number, payload: unknown): { statusCode: number; body: string } => {
  return {
    statusCode,
    body: JSON.stringify(payload)
  };
};
