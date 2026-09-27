#include "guest_memory.h"
#include <initializer_list>
#include "log.h"
#include <ppc_config.h>

#ifdef _WIN32
#  define WIN32_LEAN_AND_MEAN
#  include <windows.h>
// The placeholder flags, for headers that predate them.
#  ifndef MEM_RESERVE_PLACEHOLDER
#    define MEM_RESERVE_PLACEHOLDER 0x00040000
#  endif
#  ifndef MEM_REPLACE_PLACEHOLDER
#    define MEM_REPLACE_PLACEHOLDER 0x00004000
#  endif
#  ifndef MEM_PRESERVE_PLACEHOLDER
#    define MEM_PRESERVE_PLACEHOLDER 0x00000002
#  endif
#else
#  include <sys/mman.h>
#  include <unistd.h>
#  include <sys/syscall.h>
#  include <fcntl.h>
#  include <string>
#  ifdef MW2_ANDROID
#    include "android/android.h"
#  endif
#endif

namespace
{
    uint8_t* g_base = nullptr;
    constexpr uint64_t kSpace = 0x100000000ull;   // full 32-bit guest space
}

uint8_t* guest::Base() { return g_base; }

bool guest::Commit(uint32_t address, uint32_t size)
{
#ifdef _WIN32
    return VirtualAlloc(g_base + address, size, MEM_COMMIT, PAGE_READWRITE) != nullptr;
#else
    // The reservation is already mapped read/write; pages are backed on touch.
    (void)address; (void)size;
    return true;
#endif
}

// On Linux the whole space is mapped read/write and a page is backed the first
// time it is touched, wherever it is. Windows only backs what is committed, so
// the fault handler commits a reserved page the guest touches: the same
// memory, zeroed, on first use.
bool guest::CommitOnTouch(const void* address)
{
#ifdef _WIN32
    const auto* at = static_cast<const uint8_t*>(address);
    if (!g_base || at < g_base || at >= g_base + kSpace) return false;
    MEMORY_BASIC_INFORMATION info;
    if (!VirtualQuery(at, &info, sizeof(info)) || info.State != MEM_RESERVE) return false;
    constexpr uintptr_t kChunk = 0x10000;
    auto* chunk = reinterpret_cast<uint8_t*>(reinterpret_cast<uintptr_t>(at) & ~(kChunk - 1));
    return VirtualAlloc(chunk, kChunk, MEM_COMMIT, PAGE_READWRITE) != nullptr;
#else
    (void)address;
    return false;
#endif
}

namespace
{
    // The physical bank, seen through both of the windows the console gives it.
    //
    // D3D9 forms an address for the command processor as
    // (address & 0x1FFFFFFF) - 0x40000000 -- the same offset in the 0xC0000000
    // window -- and stores it in structures it later reads back itself, the chunk
    // list of a recorded command buffer among them. Here the two windows have to
    // be one piece of memory, or the second is a silent 512 MB of zeroes: the
    // reads succeed, return nothing, and the failure surfaces somewhere else
    // entirely as a count of zero or a null pointer.
    //
    // A shared memory object placed over the reservation twice. Nothing else has
    // to know: a guest pointer through either window is dereferenced as an
    // offset from the base and lands on the same page.
#ifdef _WIN32
    // Windows places a view only over a placeholder of exactly its size
    // (Windows 10 1803 and later), so the space is reserved as placeholders,
    // split at the two windows, the bank mapped into both, and the rest turned
    // into an ordinary reservation.
    using VirtualAlloc2Fn = PVOID(WINAPI*)(HANDLE, PVOID, SIZE_T, ULONG, ULONG, void*, ULONG);
    using MapViewOfFile3Fn = PVOID(WINAPI*)(HANDLE, HANDLE, PVOID, ULONG64, SIZE_T, ULONG, ULONG, void*, ULONG);
    VirtualAlloc2Fn g_virtualAlloc2 = nullptr;
    MapViewOfFile3Fn g_mapViewOfFile3 = nullptr;

    bool ReserveSpace()
    {
        HMODULE kernelBase = GetModuleHandleW(L"kernelbase.dll");
        g_virtualAlloc2 = reinterpret_cast<VirtualAlloc2Fn>(
            reinterpret_cast<void*>(GetProcAddress(kernelBase, "VirtualAlloc2")));
        g_mapViewOfFile3 = reinterpret_cast<MapViewOfFile3Fn>(
            reinterpret_cast<void*>(GetProcAddress(kernelBase, "MapViewOfFile3")));
        if (!g_virtualAlloc2 || !g_mapViewOfFile3)
        {
            LOGE("this version of Windows cannot map memory twice (Windows 10 1803 or later is needed)");
            return false;
        }
        g_base = static_cast<uint8_t*>(g_virtualAlloc2(nullptr, nullptr, kSpace, MEM_RESERVE | MEM_RESERVE_PLACEHOLDER,
                                                       PAGE_NOACCESS, nullptr, 0));
        return g_base != nullptr;
    }

    bool MapPhysicalAperture()
    {
        const size_t size = size_t(guest::kPhysicalEnd - guest::kPhysicalBase);
        HANDLE bank = CreateFileMappingW(INVALID_HANDLE_VALUE, nullptr, PAGE_READWRITE,
                                         DWORD(uint64_t(size) >> 32), DWORD(size), nullptr);
        if (!bank) { LOGE("CreateFileMapping failed (%lu)", GetLastError()); return false; }
        bool ok = true;
        for (uint32_t window : { guest::kPhysicalBase, guest::kApertureBase })
        {
            ok = ok && VirtualFree(g_base + window, size, MEM_RELEASE | MEM_PRESERVE_PLACEHOLDER);
            ok = ok && g_mapViewOfFile3(bank, GetCurrentProcess(), g_base + window, 0, size,
                                        MEM_REPLACE_PLACEHOLDER, PAGE_READWRITE, nullptr, 0);
        }
        // The views keep the memory alive; the handle is not needed.
        CloseHandle(bank);
        if (!ok) { LOGE("mapping the physical bank failed (%lu)", GetLastError()); return false; }
        // What is left of the placeholder, below the bank and above the second
        // window, becomes an ordinary reservation to commit from.
        const uint32_t apertureEnd = guest::kApertureBase + uint32_t(size);
        return g_virtualAlloc2(nullptr, g_base, guest::kPhysicalBase, MEM_RESERVE | MEM_REPLACE_PLACEHOLDER,
                               PAGE_NOACCESS, nullptr, 0) &&
               g_virtualAlloc2(nullptr, g_base + apertureEnd, size_t(kSpace - apertureEnd),
                               MEM_RESERVE | MEM_REPLACE_PLACEHOLDER, PAGE_NOACCESS, nullptr, 0);
    }
#else
    bool ReserveSpace()
    {
        // MAP_NORESERVE: address space only, pages allocated on touch.
        g_base = (uint8_t*)mmap(nullptr, kSpace, PROT_READ | PROT_WRITE,
                                MAP_PRIVATE | MAP_ANONYMOUS | MAP_NORESERVE, -1, 0);
        if (g_base == MAP_FAILED) g_base = nullptr;
        return g_base != nullptr;
    }

    // A file descriptor for the physical bank. memfd_create everywhere it is
    // allowed; on an Android device whose seccomp policy refuses it, an
    // unlinked file in the app's own cache does the same job -- what the two
    // windows need is a descriptor two mappings can share, not a memfd.
    int OpenBankDescriptor()
    {
        const int fd = int(syscall(SYS_memfd_create, "mw2-physical", 0));
        if (fd >= 0) return fd;
#ifdef MW2_ANDROID
        const std::string path = android::Paths().cache + "/physical.bank";
        const int file = open(path.c_str(), O_RDWR | O_CREAT | O_TRUNC, 0600);
        if (file >= 0)
        {
            // Unlinked at once: the mappings keep it, and nothing is left on
            // disk if the process dies.
            unlink(path.c_str());
            LOGW("memfd_create refused; the physical bank is an unlinked cache file");
            return file;
        }
#endif
        return -1;
    }

    bool MapPhysicalAperture()
    {
        const size_t size = size_t(guest::kPhysicalEnd - guest::kPhysicalBase);
        const int fd = OpenBankDescriptor();
        if (fd < 0) { LOGE("no descriptor for the physical bank"); return false; }
        bool ok = ftruncate(fd, off_t(size)) == 0;
        for (uint32_t window : { guest::kPhysicalBase, guest::kApertureBase })
        {
            if (!ok) break;
            ok = mmap(g_base + window, size, PROT_READ | PROT_WRITE,
                      MAP_SHARED | MAP_FIXED | MAP_NORESERVE, fd, 0) != MAP_FAILED;
        }
        // The mappings keep the memory alive; the descriptor is not needed.
        close(fd);
        return ok;
    }
#endif
}

uint8_t* guest::Initialise()
{
    if (!ReserveSpace())
    {
        LOGE("could not reserve %llu bytes of address space", (unsigned long long)kSpace);
        return nullptr;
    }
    // The bank first: on Windows the rest of the space is only reserved once
    // the views are in place.
    if (!MapPhysicalAperture())
    {
        LOGE("could not alias the physical aperture at %08X", kApertureBase);
        return nullptr;
    }

    const uint32_t funcTableBase = uint32_t(PPC_IMAGE_BASE + PPC_IMAGE_SIZE);
    const uint32_t funcTableSize = uint32_t(PPC_CODE_SIZE * 2);

    // The physical bank is a mapping, committed whole already.
    if (!Commit(uint32_t(PPC_IMAGE_BASE), uint32_t(PPC_IMAGE_SIZE)) ||
        !Commit(funcTableBase, funcTableSize) ||
        !Commit(kHeapBase, kHeapEnd - kHeapBase))
    {
        LOGE("failed to commit guest regions");
        return nullptr;
    }

    LOGI("guest space at host %p", (void*)g_base);
    LOGI("  image      %08X..%08X  (%.1f MB)", uint32_t(PPC_IMAGE_BASE), funcTableBase, PPC_IMAGE_SIZE / 1048576.0);
    LOGI("  func table %08X..%08X  (%.1f MB)", funcTableBase, funcTableBase + funcTableSize, funcTableSize / 1048576.0);
    LOGI("  heap       %08X..%08X  (%.1f MB)", kHeapBase, kHeapEnd, (kHeapEnd - kHeapBase) / 1048576.0);
    LOGI("  physical   %08X..%08X  (%.1f MB)", kPhysicalBase, kPhysicalEnd, (kPhysicalEnd - kPhysicalBase) / 1048576.0);
    LOGI("  aperture   %08X..%08X  (the same memory, second window)",
         kApertureBase, uint32_t(kApertureBase + (kPhysicalEnd - kPhysicalBase)));
    return g_base;
}
