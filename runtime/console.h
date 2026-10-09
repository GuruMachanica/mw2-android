#pragma once
struct PPCContext;

// Queues commands from MW2_CONSOLE into the title's command buffer. Call from
// a hook that runs on a guest thread every frame; it does nothing until one of
// the scripted times has passed, and nothing at all without MW2_CONSOLE.
namespace console
{
    void Pump(PPCContext& ctx, unsigned char* base);
    // Queues one command for the next pump, from any thread -- a key press.
    void RunNow(const char* text);
    // The same for a command sent every frame, a camera being moved: the one
    // waiting is replaced instead of queued behind, and none of them is logged.
    void Place(const char* text);
}
