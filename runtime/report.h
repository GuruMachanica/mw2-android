#pragma once
// MW2_REPORT=1: what a bug report needs to say about a run, in every build.
//
// The launcher's REPORT A BUG starts the game with it. The log then names the
// graphics driver, and ends -- at exit or at a fault -- with how the run
// went: the frame rate, how the frame times spread, and what the renderer
// compiled in the middle of play. Off, every call here is one load of a flag.
#include "env.h"
#include <cstdint>

namespace report
{
    inline bool On()
    {
        static const bool on = env::Flag("MW2_REPORT");
        return on;
    }
    // The renderer finished a frame; `world` when it drew the world and not
    // only a menu or a loading screen.
    void Frame(bool world);
    // Work done at a draw that play had to wait for.
    enum Cost { kShader, kPipeline, kCostCount };
    void Add(Cost cost, uint64_t microseconds);
    void Write();
}
