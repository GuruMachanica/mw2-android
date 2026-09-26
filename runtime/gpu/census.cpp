// What the command stream holds, counted: draws and primitives, presents and
// draws per second, a frame's surfaces and resolves in order -- and the texture
// dumps, which are taken where the draws are. Diagnostics only.
#include <ppc_recomp_shared.h>
#include "internal.h"
#include "gpu.h"
#include "texture.h"
#include "../diagnostics.h"
#include "../guest.h"
#include "../log.h"
#include "../kernel/kernel.h"

#if MW2_DIAGNOSTICS
#include <algorithm>
#include <atomic>
#include <cstdio>
#include <string>
#include <unordered_set>

namespace
{
    using namespace gpu::detail;

    constexpr int kSecondsTracked = 400;

    struct State
    {
        Counter draws, drawsIndexed, drawsAuto, drawIndices;
        Counter primitiveCount[64];

        // Draws are counted beside presents because a run that presents 60 times
        // a second over a menu and one that presents 60 times a second over a
        // level are the same number and not the same measurement.
        std::atomic<uint64_t> presentsBySecond[kSecondsTracked]{};
        std::atomic<uint64_t> drawsBySecond[kSecondsTracked]{};
        uint64_t drawsThisFrame = 0;
        std::atomic<uint64_t> presents{ 0 };
        std::atomic<int64_t> lastPresentMs{ -1 };

        // The render target set-up the frame trace last printed.
        uint32_t lastSurface[4]{};
    };
    State g;

    int SecondNow()
    {
        const double seconds = Seconds();
        return seconds >= 0 && seconds < kSecondsTracked ? int(seconds) : -1;
    }

    // MW2_TRACE_FRAME=<n>: n frames' surfaces and resolves, in order, from
    // MW2_TRACE_DRAWS_AFTER presents on: what shape the frame graph has.
    bool TracingFrame()
    {
        static const uint64_t frames = diag::Number("MW2_TRACE_FRAME");
        static const uint64_t after = diag::Number("MW2_TRACE_DRAWS_AFTER");
        const uint64_t presents = g.presents.load(std::memory_order_relaxed);
        return frames && presents >= after && presents < after + frames;
    }

    void ScissorExtent(const gpu::RegisterFile& r, uint32_t& width, uint32_t& height)
    {
        const gpu::ScissorCorner topLeft{ r[gpu::PA_SC_WINDOW_SCISSOR_TL] };
        const gpu::ScissorCorner bottomRight{ r[gpu::PA_SC_WINDOW_SCISSOR_BR] };
        width  = bottomRight.X() > topLeft.X() ? bottomRight.X() - topLeft.X() : 0;
        height = bottomRight.Y() > topLeft.Y() ? bottomRight.Y() - topLeft.Y() : 0;
    }

    void TraceSurface(const gpu::RegisterFile& r, gpu::EdramMode mode)
    {
        const uint32_t key[4] = { r[gpu::RB_SURFACE_INFO], r[gpu::RB_COLOR_INFO],
                                  r[gpu::RB_DEPTH_INFO], uint32_t(mode) };
        if (std::equal(key, key + 4, g.lastSurface)) return;
        std::copy(key, key + 4, g.lastSurface);
        const gpu::SurfaceInfo surface{ key[0] };
        const gpu::ColorInfo colour{ key[1] };
        const gpu::DepthInfo depth{ key[2] };
        uint32_t width = 0, height = 0;
        ScissorExtent(r, width, height);
        const char* colourName = gpu::ColorTargetFormatName(colour.Format());
        LOGK("surface: pitch %u, %ux MSAA, colour %s at tile %u, depth %s at tile %u,"
             " %s, scissor %ux%u", surface.Pitch(), 1u << surface.MsaaSamples(),
             colourName ? colourName : "unknown", colour.BaseTile(),
             gpu::DepthTargetFormatName(depth.Format()), depth.BaseTile(),
             gpu::EdramModeName(mode), width, height);
    }

    // A draw in copy mode is a resolve: the rectangle says which part of EDRAM to
    // copy out, RB_COPY_* where it lands.
    void TraceResolve(const gpu::RegisterFile& r)
    {
        const gpu::CopyControl control{ r[gpu::RB_COPY_CONTROL] };
        const gpu::CopyDestInfo info{ r[gpu::RB_COPY_DEST_INFO] };
        const gpu::CopyDestPitch pitch{ r[gpu::RB_COPY_DEST_PITCH] };
        uint32_t width = 0, height = 0;
        ScissorExtent(r, width, height);
        const uint32_t destination = r[gpu::RB_COPY_DEST_BASE];
        const uint32_t command = control.Command();
        LOGK("resolve: %s -> %08X (%08X), %ux%u of a %ux%u surface, format %u,"
             " endian %u, %s%s%s", control.FromDepth() ? "depth" : "colour", destination,
             kernel::FromPhysical(destination), width, height, pitch.Pitch(), pitch.Height(),
             info.Format(), info.Endian(),
             command == 0 ? "raw" : (command == 1 ? "converting" : "other"),
             control.ClearsColor() ? ", clears colour" : "",
             control.ClearsDepth() ? ", clears depth" : "");
    }

    // MW2_DUMP_TEXTURES=<dir>: the only way to confirm by eye that untiling,
    // endianness, format and addressing are all right at once -- a wrong tiling
    // function still produces a plausible buffer, but not a picture.
    const char* DumpTextureDirectory()
    {
        static const char* dir = diag::Text("MW2_DUMP_TEXTURES");
        return dir;
    }

    void DumpTexture(const gpu::TextureFetch& fetch)
    {
        const char* name = gpu::TextureFormatName(fetch.Format());
        if (!name) name = "unknown";
        const uint32_t va = kernel::FromPhysical(fetch.BaseAddress());
        if (!va)
        {
            LOGW("texture: %s %ux%u at physical %08X does not resolve",
                 name, fetch.Width(), fetch.Height(), fetch.BaseAddress());
            return;
        }
        // MW2_DUMP_TEXTURES_RAW=1: the bytes as the guest holds them, before any
        // untiling, so a layout can be tried offline instead of costing a run per
        // guess. Always for a volume.
        static const bool raw = diag::Flag("MW2_DUMP_TEXTURES_RAW");
        if (fetch.Dimension() == gpu::TextureDimension::D3 || raw)
        {
            char path[512];
            static uint32_t sequence = 0;
            std::snprintf(path, sizeof path, "%s/raw_%s_%ux%ux%u_at_%08X_%03u.bin",
                          DumpTextureDirectory(), name, fetch.Width(), fetch.Height(),
                          fetch.Depth(), fetch.BaseAddress(), sequence++);
            const gpu::TextureFormatInfo info = gpu::TextureFormatOf(fetch.Format());
            const uint32_t blockWidth = info.blockWidth ? info.blockWidth : 1;
            const uint32_t blockHeight = info.blockHeight ? info.blockHeight : 1;
            const size_t bytes =
                fetch.Dimension() == gpu::TextureDimension::D3
                    ? size_t(fetch.Pitch()) * ((fetch.Height() + 31) & ~31u) * fetch.Depth() * 4
                    : size_t((fetch.Pitch() / blockWidth + 31) & ~31u) *
                          ((((fetch.Height() + blockHeight - 1) / blockHeight) + 31) & ~31u) *
                          (info.bitsPerBlock / 8);
            if (std::FILE* f = std::fopen(path, "wb"))
            {
                std::fwrite(guest::Base() + va, 1, bytes, f);
                std::fclose(f);
                LOGI("texture: wrote %s (%zu bytes, tiled as the guest holds them)", path, bytes);
            }
        }
        const gpu::TextureExtents extents = gpu::ExtentsOf(fetch);
        const uint32_t mipVa = extents.mipAddress ? kernel::FromPhysical(extents.mipAddress) : 0;
        const gpu::TextureData data = gpu::ReadTexture(fetch, guest::Base() + va,
                                                       mipVa ? guest::Base() + mipVa : nullptr);
        if (!data.ok)
        {
            LOGW("texture: %s %ux%u not read: %s", name, fetch.Width(), fetch.Height(), data.error);
            return;
        }
        std::vector<uint8_t> rgba;
        if (!gpu::DecodeToRgba(data, fetch.Format(), rgba))
        {
            LOGI("texture: %s %ux%u read (%zu bytes) but not decodable for display",
                 name, data.width, data.height, data.bytes.size());
            return;
        }
        // Blank in guest memory means the title has not filled it, which no
        // untiling changes -- worth distinguishing from a bad read.
        size_t nonZero = 0;
        for (uint8_t b : data.bytes) nonZero += (b != 0);
        static const char* kDimensions[] = { "1D", "2D", "3D", "cube" };
        LOGI("texture: %s %ux%u %s at physical %08X (%08X), pitch %u, %s, %zu%% of %zu bytes"
             " non-zero, %u layers", name, data.width, data.height,
             kDimensions[uint32_t(fetch.Dimension()) & 3], fetch.BaseAddress(), va,
             fetch.Pitch(), fetch.Tiled() ? "tiled" : "linear",
             data.bytes.empty() ? 0 : nonZero * 100 / data.bytes.size(), data.bytes.size(),
             data.layers);
        // A streamed texture fills its small levels first and says so with a min
        // mip above zero and a separate address for the chain.
        LOGI("texture:   mips %u..%u, chain at %08X%s; its six fetch dwords: %08X %08X %08X"
             " %08X %08X %08X", fetch.MinMipLevel(), fetch.MaxMipLevel(), fetch.MipAddress(),
             fetch.PackedMips() ? ", packed" : "", fetch.d[0], fetch.d[1], fetch.d[2],
             fetch.d[3], fetch.d[4], fetch.d[5]);
        // Every slice, stacked: a volume whose first slice is blank and whose
        // rest is not looks exactly like a volume that read as nothing. Each
        // level of a chain after the first goes in a file of its own.
        for (uint32_t level = 0; level < data.levels.size(); level++)
        {
            if (level && !gpu::DecodeToRgba(data, fetch.Format(), rgba, level)) break;
            const gpu::TextureData::Level& l = data.levels[level];
            char path[512];
            if (level)
                std::snprintf(path, sizeof path, "%s/%s_%ux%u_at_%08X_level%u.pnm",
                              DumpTextureDirectory(), name, data.width, data.height,
                              fetch.BaseAddress(), level);
            else
                std::snprintf(path, sizeof path, "%s/%s_%ux%u_at_%08X.pnm",
                              DumpTextureDirectory(), name, data.width, data.height,
                              fetch.BaseAddress());
            std::FILE* f = std::fopen(path, "wb");
            if (!f) break;
            std::fprintf(f, "P6\n%u %u\n255\n", l.width, l.height * l.layers);
            for (size_t i = 0; i < rgba.size(); i += 4) std::fwrite(rgba.data() + i, 1, 3, f);
            std::fclose(f);
            if (!level) LOGI("texture: wrote %s", path);
        }
    }
}

void gpu::detail::CensusDraw(const RegisterFile& r, uint32_t primitive, uint32_t indexCount,
                             bool indexed, EdramMode mode)
{
    g.draws++;
    g.drawsThisFrame++;
    g.primitiveCount[primitive & 63]++;
    g.drawIndices += indexCount;
    (indexed ? g.drawsIndexed : g.drawsAuto)++;
    if (TracingFrame())
    {
        if (mode == EdramMode::Copy) TraceResolve(r); else TraceSurface(r, mode);
    }
}

void gpu::detail::CensusSwap()
{
    const int second = SecondNow();
    if (second >= 0) g.drawsBySecond[second].fetch_add(g.drawsThisFrame, std::memory_order_relaxed);
    g.drawsThisFrame = 0;
}

void gpu::detail::CensusPresent()
{
    g.presents.fetch_add(1, std::memory_order_relaxed);
    g.lastPresentMs.store(int64_t(Seconds() * 1000.0), std::memory_order_relaxed);
    const int second = SecondNow();
    if (second >= 0) g.presentsBySecond[second].fetch_add(1, std::memory_order_relaxed);
}

bool gpu::detail::DumpingTextures() { return DumpTextureDirectory() != nullptr; }

// Each distinct texture shape the title binds, once. A texture the title
// streams in is empty at its first bind and full a second later, which dumping
// on first sight cannot tell from one that never arrives, so
// MW2_DUMP_TEXTURES_AFTER=<seconds> waits.
void gpu::detail::DumpBoundTextures(const RegisterFile& r)
{
    static const double after = diag::Real("MW2_DUMP_TEXTURES_AFTER");
    static std::unordered_set<uint64_t> dumped;
    if (Seconds() < after) return;
    for (uint32_t slot = 0; slot < 32; slot++)
    {
        TextureFetch fetch;
        for (uint32_t i = 0; i < 6; i++) fetch.d[i] = r[kConstantBaseFetch + slot * 6 + i];
        if (!fetch.IsTexture() || !fetch.BaseAddress()) continue;
        const uint64_t shape = (uint64_t(uint32_t(fetch.Sign(0))) << 46)
                             | (uint64_t(fetch.Format()) << 40)
                             | (uint64_t(uint32_t(fetch.Dimension())) << 38)
                             | (uint64_t(fetch.Tiled() ? 1 : 0) << 37)
                             | (uint64_t(uint32_t(fetch.Endian())) << 35)
                             | (uint64_t(fetch.Width() & 0x1FFF) << 22)
                             | (uint64_t(fetch.Height() & 0x1FFF) << 9)
                             | uint64_t(fetch.MaxMipLevel() & 0xF);
        if (dumped.insert(shape).second) DumpTexture(fetch);
    }
}

void gpu::detail::ReportCensus()
{
    LOGI("gpu: last present at %lld ms", (long long)g.lastPresentMs.load());
    int last = 0;
    for (int i = 0; i < kSecondsTracked; i++)
        if (g.presentsBySecond[i].load()) last = i;
    // Twenty seconds to a line, labelled, so a rate that changes partway through
    // a run can be read off against the wall clock that drove it.
    for (int from = 0; from <= last; from += 20)
    {
        char line[512]; int n = 0;
        for (int i = from; i < from + 20 && i <= last; i++)
            n += std::snprintf(line + n, sizeof line - n, "%3llu ",
                               (unsigned long long)g.presentsBySecond[i].load());
        LOGI("gpu: presents per second %3ds: %s", from, line);
    }
    for (int from = 0; from <= last; from += 20)
    {
        char line[512]; int n = 0;
        for (int i = from; i < from + 20 && i <= last; i++)
            n += std::snprintf(line + n, sizeof line - n, "%4llu ",
                               (unsigned long long)(g.drawsBySecond[i].load() / 1000));
        LOGI("gpu: thousands of draws per second %3ds: %s", from, line);
    }

    const uint64_t frames = std::max<uint64_t>(1, gpu::FrameCount());
    LOGI("gpu: %llu draws (%.1f per frame): %llu indexed, %llu auto, %llu indices total",
         (unsigned long long)g.draws.load(), double(g.draws.load()) / double(frames),
         (unsigned long long)g.drawsIndexed.load(), (unsigned long long)g.drawsAuto.load(),
         (unsigned long long)g.drawIndices.load());
    if (g.draws)
    {
        std::string line;
        for (uint32_t i = 0; i < 64; i++)
            if (const uint64_t v = g.primitiveCount[i].load())
            {
                char one[64];
                const char* name = gpu::PrimitiveName(i);
                if (name) std::snprintf(one, sizeof one, "%s %llu; ", name, (unsigned long long)v);
                else std::snprintf(one, sizeof one, "type %u (unknown) %llu; ", i, (unsigned long long)v);
                line += one;
            }
        LOGI("gpu: primitives: %s", line.c_str());
    }
}
#endif
