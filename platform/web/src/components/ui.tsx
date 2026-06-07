import type { InputHTMLAttributes, ReactNode, SelectHTMLAttributes, TextareaHTMLAttributes } from "react";
import { cn } from "../lib/utils";

export const cardCls = "rounded-xl border border-gray-200 bg-white p-6 shadow-sm";
export const inputCls = "h-9 rounded-md border border-gray-300 bg-white px-3 text-sm shadow-sm focus:outline-none focus:ring-2 focus:ring-gray-900 focus:border-transparent w-full";
export const selectCls = cn(inputCls, "appearance-none cursor-pointer");
export const textareaCls = "min-h-[120px] rounded-md border border-gray-300 bg-white px-3 py-2 text-sm font-mono shadow-sm focus:outline-none focus:ring-2 focus:ring-gray-900 focus:border-transparent w-full";
export const btnPrimaryCls = "inline-flex items-center justify-center gap-2 h-10 px-6 rounded-md bg-gray-900 text-white text-sm font-medium shadow hover:bg-gray-800 disabled:opacity-50 disabled:cursor-not-allowed transition-colors";
export const btnSecondaryCls = "inline-flex items-center justify-center gap-2 h-9 px-4 rounded-md border border-gray-300 bg-white text-gray-700 text-sm hover:bg-gray-50 transition-colors";
export const btnDangerCls = "inline-flex items-center justify-center gap-2 h-9 px-4 rounded-md border border-red-200 bg-red-50 text-red-700 text-sm hover:bg-red-100 transition-colors";

export const Label = ({ text, hint, children }: { text: string; hint?: string; children: ReactNode }) => (
  <label className="flex flex-col gap-1.5">
    <span className="text-sm font-medium text-gray-700">{text}</span>
    {children}
    {hint !== undefined && <span className="text-xs text-gray-400">{hint}</span>}
  </label>
);

export const Input = (props: InputHTMLAttributes<HTMLInputElement>) => (
  <input {...props} className={cn(inputCls, props.className)} />
);

export const Select = (props: SelectHTMLAttributes<HTMLSelectElement> & { children: ReactNode }) => (
  <select {...props} className={cn(selectCls, props.className)} />
);

export const Textarea = (props: TextareaHTMLAttributes<HTMLTextAreaElement>) => (
  <textarea {...props} className={cn(textareaCls, props.className)} />
);

export const Toggle = ({
  checked, onChange, label, hint,
}: { checked: boolean; onChange: () => void; label: string; hint?: string }) => (
  <div className="flex items-center justify-between py-3">
    <div>
      <p className="text-sm font-medium text-gray-700">{label}</p>
      {hint !== undefined && <p className="text-xs text-gray-500">{hint}</p>}
    </div>
    <button
      type="button" role="switch" aria-checked={checked}
      className={cn(
        "relative inline-flex h-5 w-9 shrink-0 cursor-pointer rounded-full border-2 border-transparent transition-colors",
        checked ? "bg-gray-900" : "bg-gray-300",
      )}
      onClick={onChange}
    >
      <span className={cn(
        "pointer-events-none inline-block h-4 w-4 rounded-full bg-white shadow transform transition-transform",
        checked ? "translate-x-4" : "translate-x-0",
      )} />
    </button>
  </div>
);

export const Alert = ({ kind, children }: { kind: "error" | "info" | "success"; children: ReactNode }) => {
  const cls = kind === "error"
    ? "border-red-200 bg-red-50 text-red-800"
    : kind === "success"
    ? "border-green-200 bg-green-50 text-green-800"
    : "border-blue-200 bg-blue-50 text-blue-800";
  return <div className={cn("rounded-lg border p-3 text-sm", cls)}>{children}</div>;
};

export const Badge = ({ children, tone = "gray" }: { children: ReactNode; tone?: "gray" | "green" | "amber" | "red" }) => {
  const tones: Record<string, string> = {
    gray: "bg-gray-100 text-gray-700",
    green: "bg-green-100 text-green-700",
    amber: "bg-amber-100 text-amber-800",
    red: "bg-red-100 text-red-700",
  };
  return <span className={cn("inline-flex items-center px-2 py-0.5 rounded text-xs font-medium", tones[tone])}>{children}</span>;
};
