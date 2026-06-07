import { useEffect, useState } from "react";
import { Link } from "react-router-dom";
import { ArrowRight, CheckCircle2, XCircle, Loader2 } from "lucide-react";
import type { GenerationJob } from "@quiz/contracts";
import { listJobs } from "../api";
import { Alert, Badge, cardCls } from "../components/ui";

const statusBadge = (status: GenerationJob["status"]): React.ReactNode => {
  if (status === "completed") return <Badge tone="green">Готово</Badge>;
  if (status === "failed") return <Badge tone="red">Помилка</Badge>;
  if (status === "running") return <Badge tone="amber">Виконується</Badge>;
  return <Badge>Очікує</Badge>;
};

const statusIcon = (status: GenerationJob["status"]): React.ReactNode => {
  if (status === "completed") return <CheckCircle2 className="h-4 w-4 text-green-600" />;
  if (status === "failed") return <XCircle className="h-4 w-4 text-red-500" />;
  return <Loader2 className="h-4 w-4 text-gray-400 animate-spin" />;
};

export const JobsPage = () => {
  const [jobs, setJobs] = useState<GenerationJob[]>([]);
  const [error, setError] = useState("");

  useEffect(() => {
    void listJobs(100).then(setJobs).catch((e) => setError(e instanceof Error ? e.message : "error"));
  }, []);

  return (
    <div className="flex flex-col gap-5">
      {error.length > 0 && <Alert kind="error">{error}</Alert>}
      <h1 className="text-2xl font-semibold">Історія генерацій</h1>

      <div className={cardCls}>
        {jobs.length === 0 ? (
          <p className="text-sm text-gray-500 text-center py-8">Жодної згенерованої контрольної</p>
        ) : (
          <div className="divide-y divide-gray-100">
            {jobs.map((j) => (
              <Link key={j.jobId} to={`/jobs/${j.jobId}`}
                className="py-3 flex items-center gap-3 hover:bg-gray-50 -mx-2 px-2 rounded transition-colors">
                {statusIcon(j.status)}
                <div className="flex-1 min-w-0">
                  <p className="font-medium text-gray-900 truncate">{j.config.title}</p>
                  <p className="text-xs text-gray-500">
                    {String(j.config.variantCount)} варіантів · {String(j.config.questionsPerVariant)} питань ·
                    {" "}{new Date(j.createdAt).toLocaleString()}
                  </p>
                </div>
                {statusBadge(j.status)}
                <ArrowRight className="h-4 w-4 text-gray-400" />
              </Link>
            ))}
          </div>
        )}
      </div>
    </div>
  );
};
