#pragma once
// The frame's Vulkan commands, recorded on a thread of their own.
//
// The ring consumer parses the title's command stream and turns each draw into
// Vulkan calls, and it is what holds the frame rate down: the driver's work in
// those calls was a fifth of its time. What has to stay where the stream is --
// reading guest memory, the register state, choosing targets and pipelines,
// writing the arena -- stays; the calls themselves are queued, each with its
// arguments copied, and a second thread makes them in the order they were
// queued. The submission is queued the same way, and so is everything that has
// to follow it: handing the frame to the window, a RenderDoc boundary.
//
// MW2_RECORD_THREAD=0 makes every call where it is queued, on the consumer, as
// before.
//
// What a queued call names has to outlive it. Everything that destroys a
// Vulkan object the frame may use, or waits for a submission's fence, first
// waits for the recorder to get that far: Drain, or WaitFor a position.
#include <cstdint>
#include <new>
#include <type_traits>
#include <utility>

#include <vulkan/vulkan.h>

namespace vk::record
{
    // At the renderer's start and end. Stop runs what is queued first.
    void Start();
    void Stop();
    bool Threaded();

    // The command buffer the calls queued from here on go into.
    void Into(VkCommandBuffer command);

    // Where the queue has got to: the position just past the last call queued.
    // Done says whether the recorder has made every call before a position,
    // WaitFor waits until it has, Drain until it has made them all. Positions
    // are all 0, and everything done, when there is no thread.
    uint64_t Position();
    bool Done(uint64_t position);
    void WaitFor(uint64_t position);
    void Drain();

    void Report();

    namespace detail
    {
        struct alignas(32) Header
        {
            void (*run)(void* self, VkCommandBuffer command);   // null: skip to the start
            VkCommandBuffer command;
            uint32_t bytes;     // the header's and the call's, to the next header
        };
        static_assert(sizeof(Header) == 32);
        extern bool threaded;
        extern VkCommandBuffer into;
        // Room for `bytes` at the end of the queue, and making it visible.
        void* Reserve(uint32_t bytes);
        void Publish();
    }

    // `call(VkCommandBuffer)` with the buffer Into last named, on the recorder
    // thread, after every call queued before it. It must copy what it uses: it
    // runs later, and nothing it points at may be changed or freed until then.
    template <class Call> void Command(Call&& call)
    {
        using T = std::decay_t<Call>;
        if (!detail::threaded) { call(detail::into); return; }
        static_assert(alignof(T) <= alignof(detail::Header));
        constexpr uint32_t bytes =
            uint32_t((sizeof(detail::Header) + sizeof(T) + sizeof(detail::Header) - 1) &
                     ~(sizeof(detail::Header) - 1));
        void* at = detail::Reserve(bytes);
        auto* header = new (at) detail::Header{
            [](void* self, VkCommandBuffer command) {
                T* made = static_cast<T*>(self);
                (*made)(command);
                made->~T();
            },
            detail::into, bytes };
        new (header + 1) T(std::forward<Call>(call));
        detail::Publish();
    }

    // Work that is not a command but has to come after the ones before it: a
    // submission, the frame handed to the window.
    template <class Call> void Host(Call&& call)
    {
        Command([call = std::forward<Call>(call)](VkCommandBuffer) mutable { call(); });
    }
}
