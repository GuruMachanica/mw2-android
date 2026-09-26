#pragma once
#include <csignal>
#include <cstdint>
#include "diagnostics.h"

// A write watchpoint on guest memory, for "what writes this word?" when nothing
// in the recompiled code forms its address in a way a static scan can find.
//
// MW2_WATCH=<hex guest address>[:<bytes>] arms it: the page is made read-only,
// writes inside the range are reported with the host call stack, the first
// MW2_WATCH_REPORTS of them (20 by default), and the rest are stepped over.
// Diagnostics only.
namespace watchpoint
{
#if MW2_DIAGNOSTICS && !defined(_WIN32)
    void Install();

    // Around a write this runtime makes itself. Without it the first memmove
    // over a watched block spends the whole report budget on our own copy, one
    // single-stepped byte at a time, and the question -- does the *game* ever
    // write this block? -- goes unanswered.
    void Suspend();
    void Resume();

    // Called from the fault handler before it decides the process is dying.
    // Return true when the fault was ours and has been dealt with.
    bool HandleWrite(siginfo_t* info, void* uctx);
    bool HandleStep(void* uctx);
#else
    inline void Install() {}
    inline void Suspend() {}
    inline void Resume() {}
    inline bool HandleWrite(void*, void*) { return false; }
    inline bool HandleStep(void*) { return false; }
#endif
}
