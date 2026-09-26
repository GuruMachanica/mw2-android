// See pacing_trace.h.
#include "pacing_trace.h"
#include "diagnostics.h"
#include "log.h"
#include "guest.h"

#include "platform.h"
#ifndef _WIN32
#include <dirent.h>
#endif

#include <cstring>

#include <atomic>
#include <chrono>
#include <cstdio>
#include <vector>

namespace
{
    struct Entry { int64_t at; uint32_t value; uint32_t thread; char event; };
    constexpr size_t kEntries = 16u << 20;
    std::vector<Entry> g_entries;
    std::atomic<size_t> g_next{ 0 };
    const std::chrono::steady_clock::time_point g_began = std::chrono::steady_clock::now();

    const char* Path()
    {
        static const char* path = diag::Text("MW2_TRACE_PACING");
        return path;
    }
}

int64_t pacing::Microseconds()
{
    return std::chrono::duration_cast<std::chrono::microseconds>(
               std::chrono::steady_clock::now() - g_began).count();
}

#if MW2_DIAGNOSTICS
bool pacing::On() { return Path() != nullptr; }

void pacing::Note(Event event, uint32_t value)
{
    if (!On()) return;
    static const bool sized = (g_entries.resize(kEntries), true);
    (void)sized;
    const size_t at = g_next.fetch_add(1, std::memory_order_relaxed);
    if (at >= kEntries) return;
    g_entries[at] = { Microseconds(), value, platform::ThreadId(), char(event) };
}

void pacing::Write()
{
    if (!On()) return;
    FILE* f = std::fopen(Path(), "w");
    if (!f) return;
    // The threads by name, for the thread column.
#ifndef _WIN32
    if (DIR* tasks = opendir("/proc/self/task"))
    {
        while (dirent* task = readdir(tasks))
        {
            if (task->d_name[0] == '.') continue;
            char path[64], name[32] = "";
            std::snprintf(path, sizeof path, "/proc/self/task/%s/comm", task->d_name);
            if (FILE* comm = std::fopen(path, "r"))
            {
                if (std::fgets(name, sizeof name, comm)) name[std::strcspn(name, "\n")] = 0;
                std::fclose(comm);
            }
            std::fprintf(f, "# %s %s\n", task->d_name, name);
        }
        closedir(tasks);
    }
#endif
    const size_t count = std::min(g_next.load(), kEntries);
    for (size_t i = 0; i < count; i++)
        std::fprintf(f, "%lld %c %u %u\n", (long long)g_entries[i].at, g_entries[i].event,
                     g_entries[i].value, g_entries[i].thread);
    std::fclose(f);
    LOGI("pacing: %zu events written to %s", count, Path());
}

void pacing::NoteCallers(uint32_t r1)
{
    if (!On()) return;
    // Each frame's back chain is at 0(r1); a function saves its return
    // address at -8 from its caller's stack pointer.
    uint32_t frame = r1;
    for (int level = 0; level < 3 && frame; level++)
    {
        const uint32_t caller = uint32_t(*GuestPtr<be32>(frame));
        if (!caller) break;
        Note(kCaller, uint32_t(*GuestPtr<be32>(caller - 8)));
        frame = caller;
    }
}
#endif
