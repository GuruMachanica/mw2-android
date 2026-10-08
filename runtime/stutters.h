#pragma once
// MW2_STUTTERS=1: a stutter detector for play.
//
// The console shows a new world frame at every blank. A stutter is a blank
// that shows the same picture again, and it can be lost in two places: the
// renderer finishes a world frame late (the title presented late, or our
// consumer took too long over it), or the display holds a frame for more than
// one blank although the next was due. Both are watched,
// from the first 30 world frames in a row onward, and each stutter is logged
// with what the time went on in between: the costs below are timed wherever
// the renderer does something that only happens now and then.
//
// The pad's Y and F7 put a mark in the log, so a hitch someone felt can be
// matched to the stutter logged just before it. A report at exit sums it up.
// Off, every call here is one load of a flag; without diagnostics, nothing.
#include <chrono>
#include <cstdint>
#include "diagnostics.h"

namespace stutters
{
    enum Cost
    {
        kShaders,           // translating a shader the title has not used before
        kPipelines,         // vkCreateGraphicsPipelines for a new state combination
        kNewTextures,       // reading and uploading a texture seen for the first time
        kRefreshedTextures, // signing a written texture again, and re-reading it if it changed
        kGpuWaits,          // the consumer waiting on a frame slot's fence
        kQueryReads,        // reading occlusion query results back
        kRingBatches,       // the ring consumer executing what the title submitted
        kCostCount
    };

#if MW2_DIAGNOSTICS
    bool On();
    void Add(Cost cost, uint64_t nanoseconds);

    class Timed
    {
    public:
        explicit Timed(Cost cost) : m_cost(cost), m_on(On())
        {
            if (m_on) m_from = std::chrono::steady_clock::now();
        }
        ~Timed()
        {
            if (m_on)
                Add(m_cost, uint64_t(std::chrono::duration_cast<std::chrono::nanoseconds>(
                                         std::chrono::steady_clock::now() - m_from).count()));
        }
        Timed(const Timed&) = delete;
        Timed& operator=(const Timed&) = delete;

    private:
        Cost m_cost;
        bool m_on;
        std::chrono::steady_clock::time_point m_from;
    };

    // The title's D3D present returned (a guest thread).
    void TitlePresented();
    // The renderer finished frame `serial` (the ring consumer).
    void Finished(uint64_t serial, bool world);
    // The window copied frame `serial` into a present (the window thread).
    void Shown(uint64_t serial);
    // Frame `serial` reached the screen `extraBlanks` blanks later than one
    // a frame, `gapMs` after the frame before it (the present wait thread).
    void Displayed(uint64_t serial, uint32_t extraBlanks, double gapMs);
    // Somebody felt a hitch: Y on the pad, or F7.
    void Mark(const char* how);
    // The run is ending: a frame that never comes is no stall now.
    void Ending();
    void Report();
#else
    inline bool On() { return false; }
    struct Timed { explicit Timed(Cost) {} };
    inline void TitlePresented() {}
    inline void Finished(uint64_t, bool) {}
    inline void Shown(uint64_t) {}
    inline void Displayed(uint64_t, uint32_t, double) {}
    inline void Mark(const char*) {}
    inline void Ending() {}
    inline void Report() {}
#endif
}
