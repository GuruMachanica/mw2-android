#pragma once
#include <cstdint>

// RenderDoc, driven from inside the runtime.
//
// A capture has to be taken at a moment worth looking at, and the moments worth
// looking at here are frames that redraw the world -- fewer than half of the
// ones we present, at an unpredictable point in a level that takes a minute to
// load. RenderDoc's own trigger is a keypress, which a headless run does not
// have, so the frame is chosen here instead.
//
// Loading RenderDoc is not this file's job. Run the title under
//
//     renderdoccmd capture -c <prefix> -- ./build/mw2
//
// which injects `librenderdoc.so` before the Vulkan instance exists; this only
// finds the library already in the process and asks it for the frames wanted.
namespace vk::capture
{
    // Called once per present, after the frame has been submitted. `worldDrawn`
    // says whether this frame drew the world, so a capture is not spent on the
    // interface over what EDRAM already held.
    // `frame` is the renderer's frame count, the number its log lines carry, so
    // a capture can be matched to what the log said about that frame.
    void FrameBoundary(bool worldDrawn, uint64_t frame = 0);

    // Ask for the next frame that draws the world, whatever the timer says.
    // A defect that only shows in motion cannot be found by a capture taken at
    // a time chosen in advance -- somebody has to be watching. Bound to a key
    // in the presenter, and safe to call from that thread.
    void RequestNow(unsigned frames = 1);

    // Capture every frame that draws the world from now until the next call,
    // one file each, up to a limit that keeps the disk alive. For a defect that
    // flickers: the frames on both sides of the change are what is wanted.
    void ToggleStream();

    // For the shutdown report: how many captures were taken, and why none were
    // when none were.
    void Report();
}
