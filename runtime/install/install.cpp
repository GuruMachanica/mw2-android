#include "install.h"
#include "crypto.h"
#include "xex.h"
#include "../log.h"

#include <cstdio>
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

bool install::Prepare(int, char**, Launch& launch, int& exitCode)
{
    exitCode = 1;
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
