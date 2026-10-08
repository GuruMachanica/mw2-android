#include "install.h"
#include "crypto.h"
#include "xex.h"
#include "../log.h"

#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <fstream>
#include <string>

#ifdef _WIN32
#include <windows.h>
#endif
#ifdef MW2_USE_SDL
#include <SDL3/SDL.h>
#endif

namespace fs = std::filesystem;

// The executable this build was recompiled from, by its SHA-256, which CMake
// reads from mw2/ at configure time. Any other -- another region, another
// version -- has other code at other addresses, so it is not run.
namespace
{
#ifdef MW2_TITLE_MP
    constexpr const char* kXex = "default_mp.xex";
    constexpr const char* kSha256 = MW2_XEX_SHA256_MP;
#else
    constexpr const char* kXex = "default.xex";
    constexpr const char* kSha256 = MW2_XEX_SHA256_SP;
#endif
    constexpr const char* kGameFolder = "game";
#ifdef _WIN32
    constexpr const char* kLauncher = "mw2-launcher.exe";
#else
    constexpr const char* kLauncher = "mw2-launcher";
#endif

    // Paths as UTF-8, which SDL and the log take, whatever the system's code page.
    std::string Utf8(const fs::path& path)
    {
        const auto text = path.u8string();
        return std::string(text.begin(), text.end());
    }

    fs::path ExecutableFolder()
    {
#ifdef _WIN32
        wchar_t path[MAX_PATH * 4];
        const DWORD length = GetModuleFileNameW(nullptr, path, DWORD(std::size(path)));
        return fs::path(std::wstring(path, length)).parent_path();
#else
        std::error_code ec;
        return fs::read_symlink("/proc/self/exe", ec).parent_path();
#endif
    }

    void ShowError(const std::string& text)
    {
        LOGE("%s", text.c_str());
        std::fprintf(stderr, "%s\n", text.c_str());
#ifdef MW2_USE_SDL
        SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_ERROR, "Modern Warfare 2", text.c_str(), nullptr);
#endif
    }

    // The launcher beside this executable, left running on its own.
    bool StartLauncher()
    {
#ifdef MW2_USE_SDL
        std::error_code ec;
        const fs::path launcher = fs::absolute(kLauncher, ec);
        if (!fs::is_regular_file(launcher, ec)) return false;
        const std::string path = Utf8(launcher);
        const char* const args[] = { path.c_str(), nullptr };
        SDL_Process* process = SDL_CreateProcess(args, false);
        if (!process) { LOGE("cannot start %s: %s", path.c_str(), SDL_GetError()); return false; }
        SDL_DestroyProcess(process);    // forgets it; the launcher keeps running
        return true;
#else
        return false;
#endif
    }

    // The program of each of the title's executables, beside this one.
    const char* ProgramFor(const std::string& xex)
    {
#ifdef _WIN32
        if (xex == "default.xex") return "mw2-sp.exe";
        if (xex == "default_mp.xex") return "mw2-mp.exe";
#else
        if (xex == "default.xex") return "mw2-sp";
        if (xex == "default_mp.xex") return "mw2-mp";
#endif
        return nullptr;
    }

    constexpr const char* kLaunchDataVariable = "MW2_LAUNCH_DATA";
    bool g_playerStart = false;
    std::string g_nextTitle;

    enum class Installed { Yes, No, Unreadable };

    // The title's image from game/, if the executable there is the one this
    // build was made from.
    Installed LoadInstalled(std::vector<uint8_t>& image, std::string& error)
    {
        const fs::path path = fs::path(kGameFolder) / kXex;
        std::vector<uint8_t> file;
        {
            std::ifstream in(path, std::ios::binary);
            file.assign(std::istreambuf_iterator<char>(in), {});
        }
        if (file.empty()) return Installed::No;
        install::crypto::Sha256 hash;
        hash.Update(file.data(), file.size());
        if (hash.FinalHex() != kSha256) return Installed::No;
        if (!install::xex::Image(file, image, error))
        {
            error = Utf8(path) + ": " + error;
            return Installed::Unreadable;
        }
        return Installed::Yes;
    }
}

bool install::PlayerStart(int argc, char**)
{
    return argc == 1;
}

fs::path install::Folder(int argc, char** argv)
{
    return PlayerStart(argc, argv) ? ExecutableFolder() : fs::path();
}

bool install::Prepare(int, char**, Launch& launch, int& exitCode)
{
    exitCode = 1;
    g_playerStart = true;
    // Everything a player's copy keeps -- game/, saves/ -- is beside the executable.
    std::error_code ec;
    if (const fs::path folder = ExecutableFolder(); !folder.empty()) fs::current_path(folder, ec);

    std::string error;
    switch (LoadInstalled(launch.image, error))
    {
    case Installed::Yes:
        launch.gameRoot = kGameFolder;
        return true;
    case Installed::Unreadable:
        ShowError(error);
        return false;
    case Installed::No:
        break;
    }
    // Not installed, or installed for another version of this build: both are
    // the launcher's to put right.
    if (StartLauncher()) { exitCode = 0; return false; }
    ShowError(std::string("The game is not installed here, and ") + kLauncher +
              " is not beside this program to install it.");
    return false;
}

bool install::LoadImageFile(const fs::path& path, std::vector<uint8_t>& image)
{
    std::ifstream in(path, std::ios::binary);
    if (!in) { LOGE("cannot open image %s", Utf8(path).c_str()); return false; }
    std::vector<uint8_t> file(std::istreambuf_iterator<char>(in), {});
    if (file.size() >= 4 && std::memcmp(file.data(), "XEX2", 4) == 0)
    {
        std::string error;
        if (!xex::Image(file, image, error)) { LOGE("%s: %s", Utf8(path).c_str(), error.c_str()); return false; }
        return true;
    }
    image = std::move(file);
    return true;
}

std::vector<uint8_t>& install::LaunchData()
{
    static std::vector<uint8_t> data = [] {
        std::vector<uint8_t> bytes;
        const char* hex = std::getenv(kLaunchDataVariable);
        for (; hex && hex[0] && hex[1]; hex += 2)
        {
            unsigned value = 0;
            if (std::sscanf(hex, "%2x", &value) != 1) return std::vector<uint8_t>{};
            bytes.push_back(uint8_t(value));
        }
        return bytes;
    }();
    return data;
}

void install::SetNextTitle(const std::string& xex) { g_nextTitle = xex; }

void install::StartNextTitle()
{
    if (g_nextTitle.empty()) return;
    const char* program = ProgramFor(g_nextTitle);
    if (!program) { LOGE("the title asked for %s, which is not one of its executables", g_nextTitle.c_str()); return; }
    // A development run was given its image and game folder by hand, and
    // nothing says where the other title's are.
    if (!g_playerStart)
    {
        LOGW("the title asked for %s: start that build yourself, a development run does not", g_nextTitle.c_str());
        return;
    }
#ifdef MW2_USE_SDL
    std::error_code ec;
    const fs::path file = fs::absolute(program, ec);
    if (!fs::is_regular_file(file, ec)) { ShowError(std::string(program) + " is not beside this program."); return; }
    std::string hex;
    for (const uint8_t byte : LaunchData())
    {
        char text[3];
        std::snprintf(text, sizeof(text), "%02x", byte);
        hex += text;
    }
    SDL_Environment* environment = SDL_GetEnvironment();
    if (hex.empty()) SDL_UnsetEnvironmentVariable(environment, kLaunchDataVariable);
    else SDL_SetEnvironmentVariable(environment, kLaunchDataVariable, hex.c_str(), true);
    // It writes on in this run's log, where there is one (main.cpp).
    SDL_SetEnvironmentVariable(environment, "MW2_LOG_APPEND", "1", true);
    const std::string path = Utf8(file);
    const char* const args[] = { path.c_str(), nullptr };
    SDL_PropertiesID properties = SDL_CreateProperties();
    SDL_SetPointerProperty(properties, SDL_PROP_PROCESS_CREATE_ARGS_POINTER, const_cast<char**>(args));
    SDL_SetPointerProperty(properties, SDL_PROP_PROCESS_CREATE_ENVIRONMENT_POINTER, environment);
    SDL_Process* process = SDL_CreateProcessWithProperties(properties);
    SDL_DestroyProperties(properties);
    if (!process) { ShowError("cannot start " + path + ": " + SDL_GetError()); return; }
    SDL_DestroyProcess(process);
    LOGI("started %s", path.c_str());
#else
    LOGE("this build cannot start %s", program);
#endif
}
