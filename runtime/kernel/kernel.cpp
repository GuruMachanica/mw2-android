#include "kernel.h"
#include "title.h"
#include "../guest.h"
#include "../diagnostics.h"
#include "../log.h"
#include <map>
#include <mutex>
#include <vector>
#include <chrono>
#include <atomic>
#include <algorithm>
#include <cstring>

namespace
{
    std::filesystem::path g_gameRoot;

    // A range of guest address space. Freed blocks are kept, merged with
    // their neighbours and handed out again first-fit, and zeroed when they
    // are, as the console's pages come; the rest is carved off the top, which
    // only rises, so what lies above it has never been used and is zero.
    struct Heap
    {
        const char* name;
        const uint32_t end;
        std::atomic<uint32_t> top;
        std::mutex lock;
        std::map<uint32_t, uint32_t> live, free;   // address -> size
        uint64_t allocations = 0, reused = 0, liveBytes = 0;

        Heap(const char* heapName, uint32_t base, uint32_t limit)
            : name(heapName), end(limit), top(base) {}

        uint32_t Alloc(uint32_t size, uint32_t align)
        {
            if (!size) return 0;
            std::lock_guard held(lock);
            allocations++;
            for (auto it = free.begin(); it != free.end(); ++it)
            {
                const uint32_t start = it->first, length = it->second;
                const uint32_t at = (start + align - 1) & ~(align - 1);
                if (uint64_t(at) + size > uint64_t(start) + length) continue;
                free.erase(it);
                if (at > start) free[start] = at - start;
                if (at + size < start + length) free[at + size] = start + length - (at + size);
                std::memset(guest::Base() + at, 0, size);
                reused++;
                return Took(at, size);
            }
            const uint32_t from = top.load(std::memory_order_relaxed);
            const uint32_t at = (from + align - 1) & ~(align - 1);
            if (uint64_t(at) + size > end) return 0;
            if (at > from) free[from] = at - from;
            top.store(at + size, std::memory_order_release);
            return Took(at, size);
        }

        uint32_t Took(uint32_t at, uint32_t size)
        {
            live[at] = size;
            liveBytes += size;
            return at;
        }

        bool Free(uint32_t address)
        {
            std::lock_guard held(lock);
            auto it = live.find(address);
            if (it == live.end()) return false;
            uint32_t start = address, length = it->second;
            liveBytes -= length;
            live.erase(it);
            if (auto after = free.find(start + length); after != free.end())
            {
                length += after->second;
                free.erase(after);
            }
            if (auto before = free.lower_bound(start); before != free.begin())
                if (--before; before->first + before->second == start)
                {
                    start = before->first;
                    length += before->second;
                    free.erase(before);
                }
            free[start] = length;
            return true;
        }

        uint32_t HighWater() const { return top.load(std::memory_order_acquire); }

        void Report()
        {
            std::lock_guard held(lock);
            uint64_t freeBytes = 0;
            for (const auto& [at, size] : free) freeBytes += size;
            LOGI("memory: %s heap %llu MB in use, %llu MB free below the high water of %08X;"
                 " %llu allocations, %llu of them into freed space",
                 name, (unsigned long long)(liveBytes >> 20), (unsigned long long)(freeBytes >> 20),
                 HighWater(), (unsigned long long)allocations, (unsigned long long)reused);
        }
    };

    Heap g_heap{ "virtual", guest::kHeapBase, guest::kHeapEnd };
    Heap g_phys{ "physical", guest::kPhysicalBase, guest::kPhysicalEnd };

    struct TlsTemplate { uint32_t address = 0, size = 0; };
    TlsTemplate g_tlsTemplate;

    std::mutex g_unimplLock;
    std::map<std::string, uint64_t> g_unimpl;
}

namespace
{
    // IMAGE_TLS_DIRECTORY32, big-endian, located through the PE data directory.
    void ReadTlsDirectory()
    {
        const uint8_t* image = guest::Base() + PPC_IMAGE_BASE;
        uint32_t peOffset;
        std::memcpy(&peOffset, image + 0x3C, 4);          // e_lfanew, little-endian
        if (peOffset + 0x100 > PPC_IMAGE_SIZE) return;

        uint16_t optionalMagic;
        std::memcpy(&optionalMagic, image + peOffset + 24, 2);
        const uint32_t directories = peOffset + 24 + (optionalMagic == 0x10B ? 96 : 112);

        uint32_t tlsRva, tlsSize;
        std::memcpy(&tlsRva, image + directories + 9 * 8, 4);
        std::memcpy(&tlsSize, image + directories + 9 * 8 + 4, 4);
        if (!tlsRva || tlsSize < 24) return;

        // Guest-endian: raw data start/end, then index.
        const be32* entry = reinterpret_cast<const be32*>(image + tlsRva);
        uint32_t rawStart = entry[0], rawEnd = entry[1], zeroFill = entry[4];
        if (rawEnd <= rawStart) return;

        g_tlsTemplate.address = rawStart;
        g_tlsTemplate.size = (rawEnd - rawStart) + zeroFill;
    }
}

const TlsTemplate& ImageTlsTemplate() { return g_tlsTemplate; }

void kernel::Initialise(const std::filesystem::path& gameRoot)
{
    ReadTlsDirectory();
    InstallTimeStampBundle();
    InstallDebugMonitorData();
    g_gameRoot = gameRoot;
    LOGI("game root: %s%s", gameRoot.string().c_str(),
         std::filesystem::exists(gameRoot) ? "" : "  (does not exist)");
}

const std::filesystem::path& kernel::GameRoot() { return g_gameRoot; }

uint32_t kernel::AllocateGuest(uint32_t size, uint32_t alignment) { return g_heap.Alloc(size, alignment); }
uint32_t kernel::AllocatePhysical(uint32_t size, uint32_t alignment) { return g_phys.Alloc(size, alignment); }
bool     kernel::FreeGuest(uint32_t address) { return g_heap.Free(address); }
bool     kernel::FreePhysical(uint32_t address) { return g_phys.Free(address); }

void kernel::ReportMemory()
{
    if constexpr (!diag::kOn) return;
    g_heap.Report();
    g_phys.Report();
}

namespace
{
    // X_TIME_STAMP_BUNDLE: interrupt time, system time, millisecond tick count.
    // GetTickCount loads the pointer and reads the third field, so an unresolved
    // pointer freezes the title's clock and every timeout built on it.
    struct TimeStampBundle
    {
        be64 interruptTime;
        be64 systemTime;
        be32 tickCount;
        be32 padding;
    };

    uint32_t g_timeStampBundle = 0;
    std::chrono::steady_clock::time_point g_bootTime;

    // The image word that holds the pointer is an unresolved import record rather
    // than an address, which is how it is recognised: the low half is an ordinal
    // and the high half a small type tag, so a real pointer cannot be mistaken
    // for one.
    constexpr uint32_t kTimeStampBundlePointer = T_DATA_TimeStampBundlePtr;

    bool LooksLikeUnresolvedImport(uint32_t value)
    {
        return (value >> 24) == 0 && (value & 0xFFFF) != 0 && value < 0x01000000;
    }
}

void kernel::InstallTimeStampBundle()
{
    uint32_t existing = *GuestPtr<be32>(kTimeStampBundlePointer);
    if (!LooksLikeUnresolvedImport(existing))
    {
        LOGW("time stamp bundle: %08X already holds %08X, not an unresolved import -- leaving it alone",
             kTimeStampBundlePointer, existing);
        return;
    }

    g_timeStampBundle = AllocateGuest(sizeof(TimeStampBundle), 16);
    if (!g_timeStampBundle) { LOGE("could not allocate the time stamp bundle"); return; }
    std::memset(guest::Base() + g_timeStampBundle, 0, sizeof(TimeStampBundle));
    *GuestPtr<be32>(kTimeStampBundlePointer) = g_timeStampBundle;
    g_bootTime = std::chrono::steady_clock::now();
    UpdateTimeStampBundle();
}

// KeDebugMonitorData: a pointer to the debug monitor's dispatch table, null on
// a retail console. XAudio2's mixer reads it on every pass and, when the word
// it points at is not zero, calls a method through it -- so left as an import
// record it points into the low guest space, and whatever the title happens
// to have written there (handles handed back as object pointers live there)
// becomes a call target.
void kernel::InstallDebugMonitorData()
{
    constexpr uint32_t kPointer = T_DATA_DebugMonitorPtr;
    constexpr uint32_t kOrdinal = 0x59;
    uint32_t existing = *GuestPtr<be32>(kPointer);
    if (!LooksLikeUnresolvedImport(existing) || (existing & 0xFFFF) != kOrdinal)
    {
        LOGW("debug monitor data: %08X holds %08X, not the import record -- leaving it alone", kPointer, existing);
        return;
    }
    uint32_t word = AllocateGuest(16, 16);
    if (!word) { LOGE("could not allocate the debug monitor word"); return; }
    *GuestPtr<be32>(word) = 0;
    *GuestPtr<be32>(kPointer) = word;
}

void kernel::UpdateTimeStampBundle()
{
    if (!g_timeStampBundle) return;
    auto* bundle = GuestPtr<TimeStampBundle>(g_timeStampBundle);
    const auto elapsed = std::chrono::steady_clock::now() - g_bootTime;
    const uint64_t hundredNanoseconds =
        uint64_t(std::chrono::duration_cast<std::chrono::nanoseconds>(elapsed).count() / 100);
    bundle->interruptTime = hundredNanoseconds;
    bundle->systemTime = SystemTime100ns();
    bundle->tickCount = uint32_t(
        std::chrono::duration_cast<std::chrono::milliseconds>(elapsed).count());
}

uint32_t kernel::PhysicalHighWater() { return g_phys.HighWater(); }

uint32_t kernel::ToPhysical(uint32_t va)
{
    // Exactly the sequence the title inlines around its Vd* calls:
    //   phys = (va & 0x1FFFFFFF) + (((va >> 20) + 0x200) & 0x1000)
    return (va & 0x1FFFFFFFu) + ((((va >> 20) + 0x200u) & 0x1000u));
}

uint32_t kernel::FromPhysical(uint32_t phys)
{
    // Ambiguous in principle -- on hardware 0x8xxxxxxx and 0xAxxxxxxx are two
    // views of the same RAM, while here they are separate arenas. Everything the
    // GPU is handed comes from the physical arena, so try that first.
    uint32_t arena = guest::kPhysicalBase + phys;
    if (phys < (g_phys.HighWater() - guest::kPhysicalBase)) return arena;
    uint32_t cached = 0x80000000u + phys;
    if (cached >= 0x82000000u && cached < guest::kHeapEnd) return cached;
    return 0;
}

uint32_t kernel::CreateThreadBlock(uint32_t threadId)
{
    // [block .. block+0x8000) is the KPCR, with r13 pointing 0x4000 in so the
    // negative r13-relative offsets the game uses stay inside it. The KTHREAD
    // follows, then this thread's copy of the image's TLS block.
    constexpr uint32_t kPcrSize     = 0x8000;
    constexpr uint32_t kPcrBias     = 0x4000;
    constexpr uint32_t kThreadSize  = 0x1000;
    constexpr uint32_t kTlsSize     = 0x200;
    constexpr uint32_t kTlsPointerOffset    = 0;     // KPCR.TlsData
    constexpr uint32_t kCurrentThreadOffset = 256;   // KPCR.CurrentThread
    constexpr uint32_t kThreadIdOffset      = 332;   // KTHREAD.ThreadId

    const uint32_t total = kPcrSize + kThreadSize + kTlsSize;
    uint32_t block = AllocateGuest(total, 0x1000);
    if (!block) return 0;
    std::memset(guest::Base() + block, 0, total);

    uint32_t pcr     = block + kPcrBias;
    uint32_t kthread = block + kPcrSize;
    uint32_t tls     = block + kPcrSize + kThreadSize;

    // The CRT hangs its per-thread scratch allocator off a slot in the TLS
    // template, reached as [[r13] + slot], so a null TlsData sends every thread to
    // the same imaginary pool at guest address 0 -- where they corrupt each other.
    const auto& tlsTemplate = ImageTlsTemplate();
    if (tlsTemplate.address && tlsTemplate.size && tlsTemplate.size <= kTlsSize)
        std::memcpy(guest::Base() + tls, guest::Base() + tlsTemplate.address, tlsTemplate.size);

    *GuestPtr<be32>(pcr + kTlsPointerOffset)    = tls;
    *GuestPtr<be32>(pcr + kCurrentThreadOffset) = kthread;
    *GuestPtr<be32>(kthread + kThreadIdOffset)  = threadId;
    return pcr;
}

void kernel::Unimplemented(const char* name)
{
    std::lock_guard g(g_unimplLock);
    auto [it, inserted] = g_unimpl.try_emplace(name, 0);
    it->second++;
    if (inserted) LOGW("unimplemented: %s", name);
}

void kernel::ReportUnimplemented()
{
    if constexpr (!diag::kOn) return;
    std::lock_guard g(g_unimplLock);
    if (g_unimpl.empty()) { LOGI("no unimplemented imports were reached"); return; }
    std::vector<std::pair<std::string, uint64_t>> v(g_unimpl.begin(), g_unimpl.end());
    std::sort(v.begin(), v.end(), [](auto& a, auto& b){ return a.second > b.second; });
    LOGI("unimplemented imports actually reached (%zu distinct):", v.size());
    for (auto& [name, count] : v) LOGI("  %8llu  %s", (unsigned long long)count, name.c_str());
}

PPCFunc* kernel::GuestFunction(uint32_t address)
{
    if (address < PPC_CODE_BASE || address >= PPC_CODE_BASE + PPC_CODE_SIZE) return nullptr;
    return PPC_LOOKUP_FUNC(guest::Base(), address);
}

void kernel::CallGuest(const PPCContext& caller, uint32_t address,
                       uint32_t a0, uint32_t a1, uint32_t a2)
{
    PPCFunc* fn = GuestFunction(address);
    if (!fn) { LOGW("CallGuest: no recompiled function at %08X", address); return; }

    PPCContext ctx{};
    std::memset(&ctx, 0, sizeof(ctx));
    // Leave the caller's frame and its 64-byte red zone untouched.
    ctx.r1.u32  = (caller.r1.u32 - 0x400) & ~0xFu;
    ctx.r13.u32 = caller.r13.u32;
    ctx.r3.u32  = a0;
    ctx.r4.u32  = a1;
    ctx.r5.u32  = a2;
    // The caller's code keeps its own idea of the float mode (whether
    // denormals flush: on for vector code, off for scalar) and only switches
    // when it thinks the mode differs. The console keeps the two in separate
    // registers, FPSCR and VSCR; x86 has one, MXCSR, and the recompiled code
    // tracks which it last set. A routine run here in a context of its own can
    // leave MXCSR switched -- vector code turns flushing on -- and the caller,
    // believing it off, would flush every tiny value its scalar code makes from
    // then on. So the caller gets the register back as it left it.
    const uint32_t before = ctx.fpscr.getcsr();
    ctx.fpscr.loadFromHost();
    fn(ctx, guest::Base());
    if (ctx.fpscr.getcsr() != before) ctx.fpscr.setcsr(before);
}

namespace
{
    struct PendingApc
    {
        uint32_t routine, context, ioStatusBlock;
        std::function<void()> work;
    };
    thread_local std::vector<PendingApc> t_apcs;
}

void kernel::QueueUserApc(uint32_t routine, uint32_t context, uint32_t ioStatusBlock,
                          std::function<void()> work)
{
    if (!routine) { if (work) work(); return; }
    t_apcs.push_back({ routine, context, ioStatusBlock, std::move(work) });
}

bool kernel::DeliverUserApcs(const PPCContext& caller)
{
    if (t_apcs.empty()) return false;
    // An APC may queue more work, so drain rather than iterate.
    std::vector<PendingApc> batch;
    batch.swap(t_apcs);
    for (const auto& a : batch)
    {
        if (a.work) a.work();
        CallGuest(caller, a.routine, a.context, a.ioStatusBlock, 0);
    }
    return true;
}
