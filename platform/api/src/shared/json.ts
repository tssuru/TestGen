import { IncomingMessage } from "node:http";

const MAX_BODY_BYTES = 1024 * 1024; // 1 MB

export const readJsonBody = async (request: IncomingMessage): Promise<unknown> => {
  const chunks: Buffer[] = [];
  let total = 0;
  for await (const chunk of request) {
    const buf = Buffer.isBuffer(chunk) ? chunk : Buffer.from(chunk);
    total += buf.length;
    if (total > MAX_BODY_BYTES) {
      request.destroy();
      throw new Error("Request body too large");
    }
    chunks.push(buf);
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
