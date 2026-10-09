// Making a phone hold 60 frames a second, and not run out of memory doing it.
//
// Three things matter on a handset and on nothing else:
//
//   * which cores the hot threads run on. A big.LITTLE scheduler will happily
//     leave the guest's main thread on a 1.8 GHz little core while four
//     performance cores idle, and the frame time doubles. The threads that
//     must not be late say so.
//   * how much memory the renderer is allowed to hold. The desktop default --
//     half the device's memory, up to 2 GB -- is most of a 4 GB phone, and the
//     kernel kills the process rather than the cache evicting.
//   * what to give back when Android asks. onTrimMemory is the only warning
//     before the low-memory killer, and a texture cache that answers it lives.
#ifdef MW2_ANDROID

#include "android.h"
#include "../env.h"
#include "../log.h"
#include "../gpu/vulkan/texture_cache.h"

#include <malloc.h>
#include <pthread.h>
#include <sched.h>
#include <sys/resource.h>
#include <sys/syscall.h>
#include <unistd.h>

#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <mutex>
#include <string>
#include <vector>

namespace
{
    std::once_flag g_cpusOnce;
    cpu_set_t g_bigCores;
    cpu_set_t g_allCores;
    uint32_t g_bigCoreCount = 0;
    uint32_t g_coreCount = 0;

    uint64_t ReadNumber(const char* path)
    {
        FILE* file = std::fopen(path, "r");
        if (!file) return 0;
        unsigned long long value = 0;
        if (std::fscanf(file, "%llu", &value) != 1) value = 0;
        std::fclose(file);
        return uint64_t(value);
    }

    // The cores that clock highest. Within 15% of the fastest counts as big,
    // which puts a 2+2+4 cluster's prime and performance cores together and
    // leaves the little ones out.
    void FindCores()
    {
        CPU_ZERO(&g_bigCores);
        CPU_ZERO(&g_allCores);
        const long configured = sysconf(_SC_NPROCESSORS_CONF);
        g_coreCount = uint32_t(std::clamp<long>(configured, 1, CPU_SETSIZE));

        std::vector<uint64_t> maximum(g_coreCount, 0);
        uint64_t fastest = 0;
        for (uint32_t cpu = 0; cpu < g_coreCount; cpu++)
        {
            CPU_SET(int(cpu), &g_allCores);
            char path[128];
            std::snprintf(path, sizeof path,
                          "/sys/devices/system/cpu/cpu%u/cpufreq/cpuinfo_max_freq", cpu);
            maximum[cpu] = ReadNumber(path);
            fastest = std::max(fastest, maximum[cpu]);
        }
        if (!fastest)
        {
            // No cpufreq to read (an emulator, a locked-down kernel): every
            // core is as good as the next.
            g_bigCores = g_allCores;
            g_bigCoreCount = g_coreCount;
            return;
        }
        // Within ~30% captures both prime and performance/mid cores on tri-cluster
        // SoCs (such as Google Tensor 2+2+4 or Snapdragon 1+3+4), while excluding
        // low-frequency efficiency cores (Cortex-A55/A510).
        const uint64_t threshold = fastest - fastest / 3;
        for (uint32_t cpu = 0; cpu < g_coreCount; cpu++)
            if (maximum[cpu] >= threshold) { CPU_SET(int(cpu), &g_bigCores); g_bigCoreCount++; }

        // If we found at least 2 fast cores, keep them; otherwise (e.g. single-core
        // or uniform cluster) use all cores.
        if (g_bigCoreCount < 2)
        {
            g_bigCores = g_allCores;
            g_bigCoreCount = g_coreCount;
        }
        LOGI("perf: %u cores, %u of them fast (%llu kHz)", g_coreCount, g_bigCoreCount,
             (unsigned long long)fastest);
    }

    uint64_t MemInfoKB(const char* key)
    {
        FILE* file = std::fopen("/proc/meminfo", "r");
        if (!file) return 0;
        char line[256];
        const size_t length = std::strlen(key);
        uint64_t value = 0;
        while (std::fgets(line, sizeof line, file))
        {
            if (std::strncmp(line, key, length) != 0) continue;
            const char* at = line + length;
            while (*at == ':' || *at == ' ' || *at == '\t') at++;
            value = std::strtoull(at, nullptr, 10);
            break;
        }
        std::fclose(file);
        return value;
    }

    uint64_t g_fullTextureBudget = 0;
}

void android::perf::PinToBigCores()
{
    std::call_once(g_cpusOnce, FindCores);
    if (g_bigCoreCount == g_coreCount) return;   // nothing to gain
    if (sched_setaffinity(0, sizeof(cpu_set_t), &g_bigCores) != 0)
        LOGW("perf: this thread could not be pinned to the fast cores");
}

void android::perf::PinToAllCores()
{
    std::call_once(g_cpusOnce, FindCores);
    sched_setaffinity(0, sizeof(cpu_set_t), &g_allCores);
}

void android::perf::RaiseThreadPriority()
{
    // -8 is what Android calls URGENT_DISPLAY: above everything the app does
    // and below the audio pipeline. An app is allowed this for its own
    // threads; where it is not, the failure is harmless.
    const int tid = int(syscall(SYS_gettid));
    if (setpriority(PRIO_PROCESS, id_t(tid), -8) != 0)
        setpriority(PRIO_PROCESS, id_t(tid), -4);
}

uint32_t android::perf::TotalMemoryMB() { return uint32_t(MemInfoKB("MemTotal") / 1024); }

uint32_t android::perf::AvailableMemoryMB()
{
    const uint64_t available = MemInfoKB("MemAvailable");
    return uint32_t((available ? available : MemInfoKB("MemFree")) / 1024);
}

// The defaults the renderer reads out of the environment, sized for this
// device. Set with overwrite = 0, so anything the player chose in the app
// wins.
void android::perf::ApplyMemoryDefaults()
{
    const uint32_t totalMB = TotalMemoryMB();
    const Paths& paths = GetPaths();

    // The guest's own 512 MB bank, its 440 MB heap and the image are not
    // negotiable; what is left over is what the renderer may cache. A sixth of
    // the device's memory keeps a 4 GB phone alive with room for the system.
    uint32_t textureMB = std::clamp(totalMB / 6, 128u, 1024u);
    if (totalMB >= 12000) textureMB = 1536;
    char text[32];
    std::snprintf(text, sizeof text, "%u", textureMB);
    setenv("MW2_TEXTURE_BUDGET_MB", text, 0);

    // The upload arena is committed up front, so it is 512 MB of resident
    // memory on a device that does not have it to spare.
    const uint32_t arenaMB = totalMB >= 8000 ? 384u : totalMB >= 6000 ? 256u : 192u;
    std::snprintf(text, sizeof text, "%u", arenaMB);
    setenv("MW2_ARENA_MB", text, 0);

    // Multisampling is the single most expensive thing a mobile GPU can be
    // asked for, and the title asks for 2x and 4x by default.
    setenv("MW2_NO_MSAA", "1", 0);

    // Both caches live in the app's private folder. The pipeline cache is the
    // driver's; the shader cache is the list of pipelines this device has
    // needed, built at the next start-up so they are not compiled mid-fight.
    if (!paths.files.empty())
    {
        const std::string pipeline = paths.files + "/pipeline_cache.bin";
        const std::string shaders = paths.files + "/shader_cache.bin";
        setenv("MW2_PIPELINE_CACHE", pipeline.c_str(), 0);
        setenv("MW2_SHADER_CACHE", shaders.c_str(), 0);
    }

    LOGI("perf: %u MB of memory, %u MB free; textures %u MB, arena %u MB", totalMB,
         AvailableMemoryMB(), textureMB, arenaMB);
}

// ComponentCallbacks2: 5 RUNNING_MODERATE, 10 RUNNING_LOW, 15 RUNNING_CRITICAL,
// 20 UI_HIDDEN, 40 BACKGROUND, 60 MODERATE, 80 COMPLETE.
// Back to what the device was judged able to hold. Called when a run
// resumes: a budget cut under pressure has to be given back, or the cut is
// permanent and every texture is uploaded again on every draw.
void android::perf::RestoreMemory()
{
    if (!g_fullTextureBudget) return;
    if (vk::textures::Budget() >= g_fullTextureBudget) return;
    vk::textures::SetBudget(g_fullTextureBudget);
    LOGI("perf: the texture budget is back to %llu MB",
         (unsigned long long)(g_fullTextureBudget >> 20));
}

void android::perf::TrimMemory(int level)
{
    const uint64_t budget = vk::textures::Budget();
    if (budget && !g_fullTextureBudget) g_fullTextureBudget = budget;

    // TRIM_MEMORY_UI_HIDDEN is 20 and says the window went away, not that
    // memory is short -- and it arrives every time the player switches away
    // for a moment. Read as pressure, it quartered the texture cache on a
    // phone with four gigabytes free, and nothing put it back: the run came
    // out of the pause uploading every texture it drew, for ever. The levels
    // that mean pressure while running are 5, 10 and 15; the ones above are
    // about where the process sits in the list of things to kill.
    if (level == 20)
    {
        LOGI("perf: the window is hidden (level 20); that is not memory pressure,"
             " the texture budget is left alone");
        return;
    }

    if (level >= 15)
    {
        // The system is about to start killing processes. A quarter of the
        // budget is enough for what is on screen; the rest is uploaded again
        // when it is next drawn.
        if (g_fullTextureBudget) vk::textures::SetBudget(std::max<uint64_t>(g_fullTextureBudget / 4, 64ull << 20));
        LOGW("perf: the system asked for memory back (level %d); the texture budget is now %llu MB",
             level, (unsigned long long)(vk::textures::Budget() >> 20));
    }
    else if (level >= 10)
    {
        if (g_fullTextureBudget) vk::textures::SetBudget(std::max<uint64_t>(g_fullTextureBudget / 2, 96ull << 20));
        LOGI("perf: memory is short (level %d); the texture budget is now %llu MB", level,
             (unsigned long long)(vk::textures::Budget() >> 20));
    }
    else if (g_fullTextureBudget)
    {
        vk::textures::SetBudget(g_fullTextureBudget);
    }

    // Bionic keeps freed pages around rather than returning them to the
    // kernel; this hands them back. The option is bionic's own, so it is
    // asked for only where it exists.
#if defined(M_PURGE)
    mallopt(M_PURGE, 0);
#endif
}

#endif  // MW2_ANDROID
