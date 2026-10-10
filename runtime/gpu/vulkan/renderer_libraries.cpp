// Shaders compiled when the title loads them, and pipelines linked from them.
//
// On the console a shader is ready the moment the title loads it: the GPU runs
// the microcode as it is, and whatever it is drawn with -- blend, depth test,
// target -- is register state that costs nothing to change. Here a shader has
// to be compiled for the host GPU, and a Vulkan pipeline is both shaders plus
// that state; built at the first draw, it was ~12 ms of the frame, a stutter
// every time something new came on screen.
//
// So the work is split the way VK_EXT_graphics_pipeline_library allows, and
// done when the console does it:
//   - every shader the title makes while loading a level (shader_preload.cpp
//     hooks D3D's shader objects) is translated and compiled on a worker
//     thread, as a library for its stage -- pre-rasterisation for a vertex
//     shader, fragment shader for a pixel one. Nothing in either depends on
//     how it will be drawn: the render target formats live in the output
//     library (dynamic rendering), culling and the depth and stencil tests
//     are dynamic state;
//   - the input assembly and the output stage are libraries of state alone,
//     one per topology and one per blend, mask, formats and sample count --
//     no shader in them, cheap to make;
//   - a draw links the four, which takes well under a millisecond, and the
//     same four are linked again with link-time optimisation on a thread of
//     its own, the result taking the fast link's place when it is ready.
// A device without pipeline libraries gets whole pipelines, compiled at the
// first draw as before (renderer_pipelines.cpp).
#include "renderer_state.h"
#include "../../crash.h"
#include "../../log.h"
#include "../../pacing_trace.h"

#include "../../platform.h"

#include <algorithm>
#include <condition_variable>
#include <deque>
#include <mutex>
#include <thread>
#include <unordered_map>
#include <unordered_set>

#ifdef MW2_HAVE_VULKAN

namespace
{
    using namespace vk::renderer::detail;

    constexpr VkPipelineCreateFlags kLibrary =
        VK_PIPELINE_CREATE_LIBRARY_BIT_KHR |
        VK_PIPELINE_CREATE_RETAIN_LINK_TIME_OPTIMIZATION_INFO_BIT_EXT;

    VkPipelineCache Cache() { return static_cast<VkPipelineCache>(vk::pipeline::Cache()); }
    VkPipelineLayout Layout() { return static_cast<VkPipelineLayout>(vk::pipeline::Layout()); }

    // A library of one part of a pipeline. `stage` is null for the parts that
    // hold only state.
    VkPipeline MakeLibrary(VkGraphicsPipelineLibraryFlagsEXT part,
                           const VkPipelineShaderStageCreateInfo* stage,
                           VkGraphicsPipelineCreateInfo info, void* next = nullptr)
    {
        VkGraphicsPipelineLibraryCreateInfoEXT library{
            VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_LIBRARY_CREATE_INFO_EXT };
        library.pNext = next;
        library.flags = part;
        info.sType = VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_CREATE_INFO;
        info.pNext = &library;
        info.flags = kLibrary;
        info.stageCount = stage ? 1 : 0;
        info.pStages = stage;
        info.layout = Layout();
        VkPipeline made = VK_NULL_HANDLE;
        VkResult res = VK_SUCCESS;
        {
            std::lock_guard cacheLock(vk::pipeline::CacheMutex());
            res = vkCreateGraphicsPipelines(g.device, Cache(), 1, &info, nullptr, &made);
        }
        if (res != VK_SUCCESS)
            return VK_NULL_HANDLE;
        return made;
    }

    VkPipeline ShaderLibrary(shader::Type type, VkShaderModule module)
    {
        // Without a render pass, the shader stages learn from their own
        // rendering info whether there is a depth and stencil attachment:
        // one format for every target here, so the libraries still fit all.
        PipelineKey formats;
        formats.depthFormat = uint32_t(g.depthFormat);
        PipelineState state(formats);
        state.rendering.colorAttachmentCount = 0;
        VkPipelineShaderStageCreateInfo stage{ VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO };
        stage.module = module;
        stage.pName = "main";
        VkGraphicsPipelineCreateInfo info{};
        info.pDynamicState = &state.dynamic;
        if (type == shader::Type::Vertex)
        {
            stage.stage = VK_SHADER_STAGE_VERTEX_BIT;
            info.pViewportState = &state.viewport;
            info.pRasterizationState = &state.raster;
            return MakeLibrary(VK_GRAPHICS_PIPELINE_LIBRARY_PRE_RASTERIZATION_SHADERS_BIT_EXT,
                               &stage, info, &state.rendering);
        }
        stage.stage = VK_SHADER_STAGE_FRAGMENT_BIT;
        info.pDepthStencilState = &state.depth;
        return MakeLibrary(VK_GRAPHICS_PIPELINE_LIBRARY_FRAGMENT_SHADER_BIT_EXT, &stage, info,
                           &state.rendering);
    }

    VkPipeline InputLibrary(uint32_t topology)
    {
        auto found = g.inputLibraries.find(topology);
        if (found != g.inputLibraries.end()) return found->second;
        PipelineKey key;
        key.topology = topology;
        const PipelineState state(key);
        VkGraphicsPipelineCreateInfo info{};
        info.pVertexInputState = &state.input;
        info.pInputAssemblyState = &state.assembly;
        info.pDynamicState = &state.dynamic;
        return g.inputLibraries[topology] =
                   MakeLibrary(VK_GRAPHICS_PIPELINE_LIBRARY_VERTEX_INPUT_INTERFACE_BIT_EXT,
                               nullptr, info);
    }

    VkPipeline OutputLibrary(const PipelineKey& key)
    {
        const OutputKey output{ key.blendControl, key.colourMask, key.colourFormat,
                                key.depthFormat, key.samples };
        auto found = g.outputLibraries.find(output);
        if (found != g.outputLibraries.end()) return found->second;
        PipelineState state(key);
        VkGraphicsPipelineCreateInfo info{};
        info.pColorBlendState = &state.blending;
        info.pMultisampleState = &state.multisample;
        info.pDynamicState = &state.dynamic;
        return g.outputLibraries[output] =
                   MakeLibrary(VK_GRAPHICS_PIPELINE_LIBRARY_FRAGMENT_OUTPUT_INTERFACE_BIT_EXT,
                               nullptr, info, &state.rendering);
    }

    VkPipeline Link(const VkPipeline (&libraries)[4], bool optimise)
    {
        VkPipelineLibraryCreateInfoKHR linked{ VK_STRUCTURE_TYPE_PIPELINE_LIBRARY_CREATE_INFO_KHR };
        linked.libraryCount = 4;
        linked.pLibraries = libraries;
        VkGraphicsPipelineCreateInfo info{ VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_CREATE_INFO };
        info.pNext = &linked;
        info.flags = optimise ? VK_PIPELINE_CREATE_LINK_TIME_OPTIMIZATION_BIT_EXT : 0;
        info.layout = Layout();
        VkPipeline made = VK_NULL_HANDLE;
        if (vkCreateGraphicsPipelines(g.device, Cache(), 1, &info, nullptr, &made) != VK_SUCCESS)
            return VK_NULL_HANDLE;
        return made;
    }

    // The workers compile while the title loads and stand still while it
    // plays. They compile far more than a level draws with -- all 2156
    // shaders mp_afghan loads, against the 278 its route draws -- and on a
    // cold driver cache that is 17 s of CPU. Running into play, even at idle
    // priority, it slowed the title itself (47 frames it presented late in a
    // minute; the cores, their clocks and caches are shared). A shader wanted
    // in play before a worker reached it is compiled at the draw, as it was
    // before; a warm cache makes the whole load's worth half a second.
    std::atomic<int64_t> g_lastWorldFrame{ 0 };
    std::atomic<uint32_t> g_worldRun{ 0 };
    int64_t Now()
    {
        return std::chrono::duration_cast<std::chrono::milliseconds>(
                   std::chrono::steady_clock::now().time_since_epoch()).count();
    }
    bool Playing()
    {
        return g_worldRun.load(std::memory_order_relaxed) >= 30 &&
               Now() - g_lastWorldFrame.load(std::memory_order_relaxed) < 500;
    }
    // Checked again this often while play holds the work back.
    constexpr auto kRecheck = std::chrono::milliseconds(100);

    void Lower() { platform::LowerThreadPriority(); }

    // The shaders handed over at load. The consumer thread takes them out;
    // the workers put them in; PrepareShader queues them from the title's
    // loader thread.
    struct Preparing
    {
        struct Job
        {
            shader::Type type;
            uint64_t hash;
            std::vector<uint32_t> code;
        };
        std::mutex lock;
        std::condition_variable work, done;
        std::deque<Job> jobs;
        std::unordered_set<uint64_t> known;      // every shader queued or built
        std::unordered_set<uint64_t> busy;       // being compiled now
        std::unordered_map<uint64_t, Shader> ready;
        std::vector<std::thread> workers;
        bool running = false, stopped = false;
        uint64_t handed = 0, compiled = 0, taken = 0, waited = 0, stolen = 0;
        uint64_t compileMicroseconds = 0, waitMicroseconds = 0;
        uint64_t compiledInPlay = 0;
        int64_t drainedAt = 0;
    } p;

    void Work()
    {
        crash::RegisterThread("shader compiler");
        Lower();
        std::unique_lock lock(p.lock);
        while (true)
        {
            p.work.wait_for(lock, kRecheck,
                            [] { return (!p.jobs.empty() && !Playing()) || !p.running; });
            if (!p.running) return;
            if (p.jobs.empty() || Playing()) continue;
            Preparing::Job job = std::move(p.jobs.front());
            p.jobs.pop_front();
            p.busy.insert(job.hash);
            lock.unlock();
            const auto from = std::chrono::steady_clock::now();
            Shader built = BuildShader(job.type, job.code.data(), job.code.size());
            const uint64_t took = uint64_t(std::chrono::duration_cast<std::chrono::microseconds>(
                std::chrono::steady_clock::now() - from).count());
            lock.lock();
            p.compileMicroseconds += took;
            p.compiled++;
            if (Playing()) p.compiledInPlay++;
            if (p.jobs.empty()) p.drainedAt = pacing::Microseconds();
            p.busy.erase(job.hash);
            p.ready.emplace(job.hash, std::move(built));
            p.done.notify_all();
        }
    }

    // The optimised links, made on a thread of their own and taken up by the
    // consumer between draws.
    struct Optimising
    {
        struct Job
        {
            PipelineKey key;
            VkPipeline libraries[4];
        };
        std::mutex lock;
        std::condition_variable work;
        std::deque<Job> jobs;
        std::vector<std::pair<PipelineKey, VkPipeline>> finished;
        std::atomic<bool> anyFinished{ false };
        std::thread worker;
        bool running = false;
    } o;

    void Optimise()
    {
        crash::RegisterThread("pipeline optimiser");
        // Unlike the shader workers it keeps going in play, one thread on the
        // CPU time nothing else wants: fast-linked pipelines draw as well as
        // optimised ones in the multiplayer, but cost the campaign's heavier
        // shaders enough GPU time to lose frames on trainer. It only has the
        // pipelines actually drawn with to do, a few hundred a level.
        platform::IdleThreadPriority();
        std::unique_lock lock(o.lock);
        while (true)
        {
            o.work.wait(lock, [] { return !o.jobs.empty() || !o.running; });
            if (!o.running) return;
            const Optimising::Job job = o.jobs.front();
            o.jobs.pop_front();
            lock.unlock();
            const VkPipeline optimised = Link(job.libraries, true);
            lock.lock();
            if (optimised)
            {
                o.finished.emplace_back(job.key, optimised);
                o.anyFinished.store(true, std::memory_order_release);
            }
        }
    }
}

namespace vk::renderer::detail
{
    Shader BuildShader(shader::Type type, const uint32_t* code, size_t words)
    {
        Shader entry;
        entry.type = type;
        entry.code.assign(code, code + words);
        entry.translation = shader::Translate(type, code, words, g.scale);
        if (!entry.translation.ok) return entry;
        VkShaderModuleCreateInfo info{ VK_STRUCTURE_TYPE_SHADER_MODULE_CREATE_INFO };
        info.codeSize = entry.translation.spirv.size() * 4;
        info.pCode = entry.translation.spirv.data();
        if (vkCreateShaderModule(g.device, &info, nullptr, &entry.module) != VK_SUCCESS)
        {
            entry.module = VK_NULL_HANDLE;
            return entry;
        }
        if (vk::pipeline::PipelineLibraries()) entry.library = ShaderLibrary(type, entry.module);
        return entry;
    }

    bool TakePrepared(uint64_t hash, Shader& out)
    {
        std::unique_lock lock(p.lock);
        if (!p.known.insert(hash).second)
        {
            // Still in the queue: the draw needs it now, and compiling it here
            // is sooner than waiting for a worker to reach it.
            for (auto job = p.jobs.begin(); job != p.jobs.end(); ++job)
                if (job->hash == hash)
                {
                    p.jobs.erase(job);
                    p.stolen++;
                    return false;
                }
            if (p.busy.count(hash))
            {
                const auto from = std::chrono::steady_clock::now();
                p.done.wait(lock, [&] { return !p.busy.count(hash); });
                p.waitMicroseconds += uint64_t(std::chrono::duration_cast<std::chrono::microseconds>(
                    std::chrono::steady_clock::now() - from).count());
                p.waited++;
            }
        }
        auto found = p.ready.find(hash);
        if (found == p.ready.end()) return false;
        out = std::move(found->second);
        p.ready.erase(found);
        p.taken++;
        return true;
    }

    VkPipeline LinkPipeline(const PipelineKey& key, const Shader& vertex, const Shader& pixel)
    {
        const VkPipeline input = InputLibrary(key.topology);
        const VkPipeline output = OutputLibrary(key);
        if (!input || !output) return VK_NULL_HANDLE;
        const VkPipeline libraries[4] = { input, vertex.library, pixel.library, output };
        const VkPipeline linked = Link(libraries, false);
        if (!linked) return VK_NULL_HANDLE;
        g.pipelinesLinked++;
        std::lock_guard lock(o.lock);
        if (o.running)
        {
            Optimising::Job job{ key, {} };
            std::copy(std::begin(libraries), std::end(libraries), job.libraries);
            o.jobs.push_back(job);
            o.work.notify_one();
        }
        return linked;
    }

    void TakeOptimisedPipelines()
    {
        if (!o.anyFinished.load(std::memory_order_acquire)) return;
        std::vector<std::pair<PipelineKey, VkPipeline>> finished;
        {
            std::lock_guard lock(o.lock);
            finished.swap(o.finished);
            o.anyFinished.store(false, std::memory_order_relaxed);
        }
        for (auto& [key, optimised] : finished)
        {
            auto found = g.pipelines.find(key);
            if (found == g.pipelines.end() || !found->second)
            {
                g.replacedPipelines.push_back(optimised);
                continue;
            }
            g.replacedPipelines.push_back(found->second);
            found->second = optimised;
            g.pipelinesOptimised++;
        }
    }

    void NoteFrame(bool world)
    {
        if (!world) return;
        const int64_t now = Now();
        // Half a second without the world is a loading screen or a menu.
        if (now - g_lastWorldFrame.load(std::memory_order_relaxed) >= 500)
            g_worldRun.store(0, std::memory_order_relaxed);
        g_worldRun.fetch_add(1, std::memory_order_relaxed);
        g_lastWorldFrame.store(now, std::memory_order_relaxed);
    }

    void StartPreparing()
    {
        if (!vk::pipeline::PipelineLibraries())
        {
            std::lock_guard lock(p.lock);
            p.stopped = true;
            p.jobs.clear();
            LOGI("renderer: no pipeline libraries on this device; shaders are compiled at"
                 " their first draw");
            return;
        }
        {
            std::lock_guard lock(p.lock);
            p.running = true;
        }
        const unsigned threads = std::clamp(std::thread::hardware_concurrency() / 4, 1u, 4u);
        for (unsigned i = 0; i < threads; i++) p.workers.emplace_back(Work);
        {
            std::lock_guard lock(o.lock);
            o.running = true;
        }
        o.worker = std::thread(Optimise);
        LOGI("renderer: shaders are compiled as the title loads them, on %u thread%s; pipelines"
             " are linked from them at the draw and optimised in the background", threads,
             threads == 1 ? "" : "s");
    }

    void StopPreparing()
    {
        {
            std::lock_guard lock(p.lock);
            p.running = false;
            p.stopped = true;
            p.jobs.clear();
            p.work.notify_all();
        }
        for (std::thread& worker : p.workers) worker.join();
        p.workers.clear();
        {
            std::lock_guard lock(o.lock);
            o.running = false;
            o.jobs.clear();
            o.work.notify_all();
        }
        if (o.worker.joinable()) o.worker.join();
        for (auto& [key, pipeline] : o.finished) g.replacedPipelines.push_back(pipeline);
        o.finished.clear();
        for (auto& [hash, shader] : p.ready)
        {
            if (shader.library) vkDestroyPipeline(g.device, shader.library, nullptr);
            if (shader.module) vkDestroyShaderModule(g.device, shader.module, nullptr);
        }
        p.ready.clear();
    }

    void ReportPreparing()
    {
        std::lock_guard lock(p.lock);
        if (!p.handed && !g.pipelinesLinked) return;
        LOGI("renderer: %llu shaders handed over at load, %llu compiled on the workers in %llu ms;"
             " %llu of them drawn with, %llu waited for (%llu ms), %llu compiled at the draw"
             " instead of in the queue, %llu never handed over",
             (unsigned long long)p.handed, (unsigned long long)p.compiled,
             (unsigned long long)(p.compileMicroseconds / 1000), (unsigned long long)p.taken,
             (unsigned long long)p.waited, (unsigned long long)(p.waitMicroseconds / 1000),
             (unsigned long long)p.stolen,
             (unsigned long long)(g.shadersBuiltAtDraw - p.stolen));
        LOGI("renderer: %llu of the workers' shaders finished during play; their queue last"
             " ran dry at %.1f s", (unsigned long long)p.compiledInPlay, double(p.drainedAt) / 1e6);
        LOGI("renderer: %llu pipelines linked from libraries, %llu replaced by an optimised link",
             (unsigned long long)g.pipelinesLinked, (unsigned long long)g.pipelinesOptimised);
    }
}

void vk::renderer::PrepareShader(bool pixel, const uint32_t* code, size_t words)
{
    if (!code || !words) return;
    const uint64_t hash = ShaderHash(code, words);
    std::lock_guard lock(p.lock);
    // Before the renderer is up the job waits in the queue: the title loads
    // its first zones -- the menus, the common materials -- before then.
    if (p.stopped || !p.known.insert(hash).second) return;
    p.jobs.push_back({ pixel ? shader::Type::Pixel : shader::Type::Vertex, hash,
                       std::vector<uint32_t>(code, code + words) });
    p.handed++;
    p.work.notify_one();
}

#else

void vk::renderer::PrepareShader(bool, const uint32_t*, size_t) {}

#endif  // MW2_HAVE_VULKAN
