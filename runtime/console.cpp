// Feeds text into IW4's own console command buffer: the shortest path to a
// level, or to any setting, is to queue the command the menu would have
// queued.
//
//   MW2_CONSOLE="30:map af_caves"          one command, at 30 seconds
//   MW2_CONSOLE="30:map af_caves;45:god"   several, separated by ';'
//
// The time is wall-clock seconds since the runtime started, the same clock
// MW2_INPUT_SCRIPT uses, so the two can be interleaved.
//
// Cbuf_AddText copies the text, so the string only has to survive the call. It
// goes just below the guest stack pointer of whichever thread is pumping --
// memory below r1 belongs to nobody -- with the call made at a stack pointer
// pushed past it, so the callee's own frame cannot reach it.
#include <ppc_recomp_shared.h>
#include "title.h"
#include "guest.h"
#include "log.h"
#include "console.h"
#include "env.h"

#include <chrono>
#include <cstdlib>
#include <cstring>
#include <mutex>
#include <string>
#include <vector>

namespace
{
    struct Entry
    {
        double at;
        std::string text;
        bool done = false;
    };

    std::mutex g_lock;
    std::vector<Entry> g_script;
    std::string g_place;                    // console::Place, the latest only
    bool g_parsed = false;
    std::chrono::steady_clock::time_point g_start;

    // A command may contain spaces; only ';' separates entries and only the first
    // ':' separates the time.
    void Parse()
    {
        g_parsed = true;
        g_start = std::chrono::steady_clock::now();
        const char* spec = env::Text("MW2_CONSOLE");
        if (!spec) return;

        std::string s = spec;
        size_t pos = 0;
        while (pos <= s.size())
        {
            size_t end = s.find(';', pos);
            if (end == std::string::npos) end = s.size();
            std::string item = s.substr(pos, end - pos);
            pos = end + 1;

            size_t colon = item.find(':');
            if (colon == std::string::npos || colon == 0) continue;
            Entry e;
            e.at = std::strtod(item.substr(0, colon).c_str(), nullptr);
            e.text = item.substr(colon + 1);
            if (e.text.empty()) continue;
            g_script.push_back(std::move(e));
        }

        for (const Entry& e : g_script)
            LOGI("console: will run \"%s\" at %.2f s", e.text.c_str(), e.at);
    }

    double Elapsed()
    {
        return std::chrono::duration<double>(std::chrono::steady_clock::now() - g_start).count();
    }
}

void console::RunNow(const char* text)
{
    std::lock_guard g(g_lock);
    if (!g_parsed) Parse();
    Entry e;
    e.at = 0.0;
    e.text = text;
    g_script.push_back(std::move(e));
}

void console::Place(const char* text)
{
    std::lock_guard g(g_lock);
    g_place = text;
}

void console::Pump(PPCContext& ctx, uint8_t* base)
{
    std::string text;
    bool placing = false;
    {
        std::lock_guard g(g_lock);
        if (!g_parsed) Parse();
        if (g_script.empty() && g_place.empty()) return;

        const double now = Elapsed();
        for (Entry& e : g_script)
        {
            if (e.done || now < e.at) continue;
            e.done = true;
            text = e.text;
            break;                          // one per pump; they queue anyway
        }
        if (text.empty() && !g_place.empty())
        {
            text = std::move(g_place);
            g_place.clear();
            placing = true;
        }
    }
    if (text.empty()) return;

    // Cbuf_AddText wants a newline-terminated line, the way a .cfg supplies it.
    if (text.back() != '\n') text += '\n';
    if (text.size() > 192) { LOGW("console: \"%s\" is too long", text.c_str()); return; }

    const uint32_t sp = ctx.r1.u32;
    if (sp < 0x1000) { LOGW("console: no guest stack to borrow"); return; }

    const uint32_t scratch = (sp - 0x100) & ~0xFu;
    std::memcpy(base + scratch, text.c_str(), text.size() + 1);

    const PPCContext saved = ctx;
    ctx.r1.u64 = (sp - 0x200) & ~0xFull;
    ctx.r3.u64 = 0;                         // localClientNum
    ctx.r4.u64 = scratch;
    GUEST_FUNC(T_Cbuf_AddText)(ctx, base);
    ctx = saved;

    if (!placing) LOGI("console: queued \"%.*s\" at %.2f s", int(text.size()) - 1, text.c_str(), Elapsed());
}
