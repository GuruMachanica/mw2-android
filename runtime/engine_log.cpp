// Surfaces IW4's own diagnostics. The engine funnels them through Com_Error and
// Com_Printf, both printf-style, so hooking them turns the title's internal
// reasons for giving up into runtime output. Com_Error is always reported; the
// chattier print goes behind MW2_ENGINE_LOG.
#include <ppc_recomp_shared.h>
#include "title.h"
#include "diagnostics.h"
#include "guest.h"
#include "log.h"
#include "crash.h"
#include "platform.h"

#include <bit>
#include <cstdio>
#include <cstring>
#include <string>

namespace
{
    // PowerPC passes the first eight integer arguments in r3..r10, so a format
    // with up to six varargs needs no guest stack walking.
    struct Args
    {
        const PPCContext& ctx;
        int next = 5;                       // r5 is the first vararg
        uint64_t Next()
        {
            switch (next++)
            {
            case 5:  return ctx.r5.u64;
            case 6:  return ctx.r6.u64;
            case 7:  return ctx.r7.u64;
            case 8:  return ctx.r8.u64;
            case 9:  return ctx.r9.u64;
            case 10: return ctx.r10.u64;
            default: return 0;              // spilled to the stack; not rendered
            }
        }
        bool Exhausted() const { return next > 10; }
    };

    std::string Format(const PPCContext& ctx, uint32_t formatAddress)
    {
        if (!formatAddress) return "(null format)";
        const char* f = reinterpret_cast<const char*>(guest::Base() + formatAddress);
        Args args{ ctx };
        std::string out;
        char scratch[64];

        for (const char* p = f; *p; p++)
        {
            if (*p != '%') { out += *p; continue; }
            p++;
            if (*p == '%') { out += '%'; continue; }
            // The engine's messages do not use flags, width or precision.
            while (*p && !std::strchr("diuxXcsfgeEp", *p)) p++;
            if (!*p) break;
            if (args.Exhausted()) { out += "<arg spilled>"; continue; }

            const uint64_t raw = args.Next();
            const uint32_t v = uint32_t(raw);
            switch (*p)
            {
            case 's': out += v ? GuestAnsi(v) : std::string("(null)"); break;
            case 'c': out += char(v); break;
            case 'd': case 'i': std::snprintf(scratch, sizeof scratch, "%d", int32_t(v)); out += scratch; break;
            case 'u':           std::snprintf(scratch, sizeof scratch, "%u", v);          out += scratch; break;
            case 'x':           std::snprintf(scratch, sizeof scratch, "%x", v);          out += scratch; break;
            case 'X': case 'p': std::snprintf(scratch, sizeof scratch, "%X", v);          out += scratch; break;
            // A variadic double travels in the next GPR, whole: viewpos stores
            // each one and loads it back with ld before the call.
            default:  std::snprintf(scratch, sizeof scratch, "%g", std::bit_cast<double>(raw)); out += scratch; break;
            }
        }
        while (!out.empty() && (out.back() == '\n' || out.back() == '\r')) out.pop_back();
        return out;
    }
}

GUEST_HOOK(T_Com_Error)
{
    // The caller's address: the same message is raised from several places, and
    // which one gave up is half the answer.
    LOGE("Com_Error(%u) from %08X: %s", ctx.r3.u32, (uint32_t)ctx.lr,
         Format(ctx, ctx.r4.u32).c_str());
    static const bool stack = diag::Flag("MW2_TRACE_ERRORS");
    if (stack)
    {
        platform::PrintBacktrace("the call stack that gave up");
    }
    GUEST_ORIG(T_Com_Error)(ctx, base);
}

#if MW2_DIAGNOSTICS
// Com_Printf(channel, format, ...): viewpos answers through it, so it is the
// general print and not only the error one.
GUEST_HOOK(T_Com_Printf)
{
    static const bool verbose = diag::Flag("MW2_ENGINE_LOG");
    if (verbose) LOGK("Com_Printf(%u): %s", ctx.r3.u32, Format(ctx, ctx.r4.u32).c_str());
    GUEST_ORIG(T_Com_Printf)(ctx, base);
}

// Cbuf_AddText(localClientNum, text): what the menus and the title's own code
// queue for the console. MW2_TRACE_CBUF shows the commands a menu runs, so a
// flow the player clicks through can be typed instead.
GUEST_HOOK(T_Cbuf_AddText)
{
    static const bool traced = diag::Flag("MW2_TRACE_CBUF");
    if (traced) LOGI("cbuf(%u): %s", ctx.r3.u32, GuestAnsi(ctx.r4.u32).c_str());
    GUEST_ORIG(T_Cbuf_AddText)(ctx, base);
}
#endif

// DB_FindXAssetHeader gives up here when a lookup fails and the loader is not
// running: DB_MissingAsset(type, name).
#ifdef T_DB_MissingAsset
GUEST_HOOK(T_DB_MissingAsset)
{
    const char* name = ctx.r4.u32 ? reinterpret_cast<const char*>(base + ctx.r4.u32) : "(null)";
    const char* thread = crash::CurrentThreadName();
    LOGE("db: missing asset type %u '%s' on %s", ctx.r3.u32, name, thread ? thread : "?");
    GUEST_ORIG(T_DB_MissingAsset)(ctx, base);
}
#endif

