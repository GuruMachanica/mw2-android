// Offline driver for the shader translator.
//
// The translator lives in the runtime, because the title hands the GPU
// microcode while it runs. But iterating on it by launching the game is slow,
// and the output wants checking with spirv-val, so the same code is also built
// as a small tool:
//
//     translate-shader [--compile] <file.ucode> [out.spv]
//
// The shader type comes from the file name, which is how MW2_DUMP_SHADERS
// writes them (vertex_*.ucode / pixel_*.ucode).
//
// --compile also hands the module to a real Vulkan driver. spirv-val checks the
// binary against the specification; the driver checks it against what it will
// actually compile, which is a stronger and less forgiving statement.
#include "../runtime/gpu/vulkan/shader_translator.h"
#include "../runtime/gpu/vulkan/pipeline.h"

#include <cstdio>
#include <cstring>
#include <string>
#include <vector>

int main(int argc, char** argv)
{
    bool compile = false;
    int arg = 1;
    if (argc > 1 && std::strcmp(argv[1], "--compile") == 0) { compile = true; arg = 2; }
    if (argc <= arg)
    {
        std::fprintf(stderr, "usage: translate-shader [--compile] <file.ucode> [out.spv]\n");
        return 2;
    }

    const std::string path = argv[arg];
    std::FILE* file = std::fopen(path.c_str(), "rb");
    if (!file) { std::perror(path.c_str()); return 2; }
    std::fseek(file, 0, SEEK_END);
    const long size = std::ftell(file);
    std::fseek(file, 0, SEEK_SET);
    std::vector<uint32_t> words(size_t(size) / 4);
    if (std::fread(words.data(), 4, words.size(), file) != words.size())
    {
        std::fclose(file);
        std::fprintf(stderr, "%s: short read\n", path.c_str());
        return 2;
    }
    std::fclose(file);

    // The capture is written big-endian, the way the guest holds it.
    for (uint32_t& w : words) w = __builtin_bswap32(w);

    // MW2_DUMP_SHADERS writes pixel_*.ucode; the fastfile extractor writes
    // ps_*.xsh. Both are pixel shaders, and translating one as a vertex shader
    // fails in ways that look like translator bugs.
    const bool pixel = path.find("pixel") != std::string::npos ||
                       path.find("ps_") != std::string::npos;
    auto result = shader::Translate(pixel ? shader::Type::Pixel : shader::Type::Vertex,
                                    words.data(), words.size());

    std::printf("%-40s %s\n", path.c_str(), shader::Describe(result).c_str());
    if (!result.ok) return 1;

    if (compile)
    {
        if (!vk::pipeline::Initialise())
        {
            std::fprintf(stderr, "no Vulkan device to compile against\n");
            return 3;
        }
        const char* error = nullptr;
        const bool accepted = vk::pipeline::CreateModule(result.spirv.data(),
                                                         result.spirv.size(), &error);
        std::printf("%-40s driver: %s\n", "", accepted ? "accepted" : error);
        vk::pipeline::Shutdown();
        if (!accepted) return 1;
    }

    if (argc >= arg + 2)
    {
        // A glob in the wrong place turns argv[2] into another input file, and
        // writing over it destroys a capture that cannot be reproduced without
        // another run of the game.
        const std::string out_path = argv[arg + 1];
        if (out_path.size() >= 6 && out_path.compare(out_path.size() - 6, 6, ".ucode") == 0)
        {
            std::fprintf(stderr, "refusing to write over %s: that is an input\n", out_path.c_str());
            return 2;
        }
        std::FILE* out = std::fopen(out_path.c_str(), "wb");
        if (!out) { std::perror(out_path.c_str()); return 2; }
        std::fwrite(result.spirv.data(), 4, result.spirv.size(), out);
        std::fclose(out);
    }
    return 0;
}
