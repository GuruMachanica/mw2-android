#pragma once
#include <cstdint>
#include <condition_variable>
#include <memory>
#include <mutex>
#include <vector>

// Kernel objects and the waits on them.
//
// Nt* calls name an object by handle and Ke* calls by the address of its
// dispatcher header in guest memory. On the console the two are one object --
// ObReferenceObjectByHandle turns a handle into that address -- and here too:
// every object lives in the handle table, and a header in guest memory names
// its object by writing the handle and a signature into its wait list, as
// Xenia does. A header the title initialises (or initialises again) inline has
// its own wait list there instead, and is taken up as a new object with the
// type and signal state it holds.
//
// Waits follow NT's dispatcher: one lock guards every object's state, a wait
// on several objects is satisfied atomically, and a waiting thread sleeps
// until something it waits on is signalled rather than polling.
namespace kernel
{
    // The pseudo-handles the kernel defines for "the caller".
    inline constexpr uint32_t kCurrentThreadHandle  = 0xFFFFFFFFu;
    inline constexpr uint32_t kCurrentProcessHandle = 0xFFFFFFFEu;

    struct Object
    {
        virtual ~Object() = default;
        virtual const char* TypeName() const { return "object"; }
        uint32_t handle = 0;
        uint32_t guestHeader = 0;   // the dispatcher header, once it has one
    };

    struct WaitBlock;

    // An object a thread can wait on. Its state is guarded by the dispatcher
    // lock, which every member below expects to be held.
    struct Dispatcher : Object
    {
        virtual bool Signalled(uintptr_t thread) const = 0;
        // What satisfying a wait does: an auto-reset event resets, a semaphore
        // counts down, a mutant is taken.
        virtual void Satisfy(uintptr_t) {}
        // Wakes every thread waiting on this object to look again.
        void Wake();
        std::vector<WaitBlock*> waiters;
    };

    struct Event : Dispatcher
    {
        bool signalled = false;
        bool manualReset = true;   // a notification event; false is synchronization
        const char* TypeName() const override { return "event"; }
        bool Signalled(uintptr_t) const override { return signalled; }
        void Satisfy(uintptr_t) override { if (!manualReset) signalled = false; }
        // Return the previous state. Take the dispatcher lock themselves.
        bool Set();
        bool Reset();
    };

    struct Semaphore : Dispatcher
    {
        int32_t count = 0;
        int32_t limit = 0x7FFFFFFF;
        const char* TypeName() const override { return "semaphore"; }
        bool Signalled(uintptr_t) const override { return count > 0; }
        void Satisfy(uintptr_t) override { count--; }
        // Returns the previous count. Takes the dispatcher lock itself.
        int32_t Release(int32_t delta);
    };

    // Owned by one thread at a time, which may take it again as often as it
    // likes and has to release it as often.
    struct Mutant : Dispatcher
    {
        uintptr_t owner = 0;
        uint32_t depth = 0;
        const char* TypeName() const override { return "mutant"; }
        bool Signalled(uintptr_t thread) const override { return !owner || owner == thread; }
        void Satisfy(uintptr_t thread) override { owner = thread; depth++; }
        // Returns the previous depth. Takes the dispatcher lock itself.
        int32_t Release();
    };

    // Signalled when it falls due, and again every period after if it has one.
    struct Timer : Event
    {
        uint64_t generation = 0;   // a later Set or Cancel overrides an earlier one
        bool running = false;
        const char* TypeName() const override { return "timer"; }
    };

    // The caller's identity for mutant ownership: stable for the thread's life.
    uintptr_t CurrentThread();

    // The dispatcher lock. Held while reading or changing a Dispatcher's state.
    std::mutex& DispatcherLock();

    // X_STATUS_WAIT_0 + the index of the object that satisfied a wait for any
    // of them, X_STATUS_SUCCESS when a wait for all is satisfied, or
    // X_STATUS_TIMEOUT. `timeout100ns` is NT's: null waits for ever, negative
    // is relative and positive is an absolute system time.
    uint32_t Wait(Dispatcher* const* objects, uint32_t count, bool all,
                  const int64_t* timeout100ns);

    uint32_t InsertHandle(std::shared_ptr<Object> object);
    std::shared_ptr<Object> LookupHandle(uint32_t handle);
    bool CloseHandle(uint32_t handle);
    template <typename T>
    std::shared_ptr<T> LookupHandleAs(uint32_t handle)
    {
        return std::dynamic_pointer_cast<T>(LookupHandle(handle));
    }

    // The object whose dispatcher header is at `guestAddress`, taken up from
    // the header if it does not name one yet. Null if the header's type is not
    // a dispatcher object this kernel knows.
    std::shared_ptr<Dispatcher> ObjectAt(uint32_t guestAddress);
    template <typename T>
    std::shared_ptr<T> ObjectAtAs(uint32_t guestAddress)
    {
        return std::dynamic_pointer_cast<T>(ObjectAt(guestAddress));
    }
    // Gives `object` the header at `guestAddress`, writing its type there.
    void AttachHeader(const std::shared_ptr<Object>& object, uint32_t guestAddress,
                      uint8_t type);
    // The object's dispatcher header, made in guest memory if it has none:
    // what ObReferenceObjectByHandle hands back.
    uint32_t HeaderOf(const std::shared_ptr<Object>& object);

    // Schedules a timer: due after `due100ns` (NT's sign convention), then
    // every `periodMs` if that is not zero. Returns whether it was running.
    bool SetTimer(const std::shared_ptr<Timer>& timer, int64_t due100ns, uint32_t periodMs);
    bool CancelTimer(const std::shared_ptr<Timer>& timer);
}
