#pragma once
namespace crash
{
    void Install();

    // Every guest thread registers itself so the watchdog can show where all of
    // them are, not just the one that happened to be running. A stall is nearly
    // always one thread waiting on another.
    void RegisterThread(const char* name);
    // The label this thread registered, or null.
    const char* CurrentThreadName();
    void UnregisterThread();

    // Defined by the runtime; called before aborting, so a run that ends on a
    // fault still prints the end-of-run reports.
    void OnFault();

    // The guest never returns, so nothing else can end the process tidily.
    // Safe to call from any thread, including one the shutdown will join.
    void RequestExit(const char* why);
}
