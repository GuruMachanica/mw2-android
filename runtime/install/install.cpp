#include "install.h"
#include "crypto.h"
#include "xex.h"
#include "../log.h"

#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <fstream>
#include <string>
#include <atomic>
#include <chrono>
#include <thread>
#include <mutex>
#include <algorithm>

#ifdef _WIN32
#include <windows.h>
#endif
#ifdef MW2_USE_SDL
#include <SDL3/SDL.h>
#endif
#ifdef MW2_ANDROID
#include "../android/android.h"
#include "../../launcher/disc.h"
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
    std::filesystem::path g_gameFolder = "game";
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
#ifdef MW2_ANDROID
        android::SetStatus(text.c_str());
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
        const fs::path path = fs::path(g_gameFolder) / kXex;
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

#ifdef MW2_ANDROID
    constexpr uint32_t kTitleId = 0x41560817;

    struct Title { const char* xex; const char* sha256; };
    constexpr Title kTitles[] = {
        { "default.xex", MW2_XEX_SHA256_SP },
        { "default_mp.xex", MW2_XEX_SHA256_MP },
    };

    std::string Sha256(const std::vector<uint8_t>& bytes)
    {
        install::crypto::Sha256 hash;
        hash.Update(bytes.data(), bytes.size());
        return hash.FinalHex();
    }

    std::string WrongDisc(const std::string& name, const std::vector<uint8_t>& file)
    {
        install::xex::Info info;
        if (!install::xex::ReadInfo(file, info))
            return name + " is not an Xbox 360 executable.";
        char text[256];
        if (info.titleId != kTitleId)
            std::snprintf(text, sizeof(text), "This is not Modern Warfare 2 (title %08X).", info.titleId);
        else
            std::snprintf(text, sizeof(text),
                          "This is Modern Warfare 2, but not the version this build was made from "
                          "(executable version %u, expected the disc's 10). A title update cannot be "
                          "used: install from an image of the disc itself.", info.version);
        return text;
    }

    bool IsGameFile(const std::string& name)
    {
        std::string lower = name;
        for (char& c : lower) c = char(std::tolower(uint8_t(c)));
        auto endsWith = [&](const char* suffix) {
            const size_t n = std::strlen(suffix);
            return lower.size() >= n && lower.compare(lower.size() - n, n, suffix) == 0;
        };
        return endsWith(".ff") || endsWith(".pak") || endsWith(".bik") || lower == "nxeart";
    }

    struct Progress
    {
        std::mutex lock;
        std::string file;
        uint64_t done = 0, total = 0;
        std::atomic<bool> cancel{ false };
    };

    bool Install(const fs::path& from, Progress& progress, std::string& error)
    {
        auto source = install::Source::Open(from, error);
        if (!source) return false;

        std::vector<const install::Source::File*> files;
        for (const Title& title : kTitles)
        {
            const auto* file = source->Find(title.xex);
            if (!file)
            {
                if (std::string(title.xex) == kXex)
                {
                    error = std::string("There is no ") + title.xex + " in " + Utf8(from) +
                            ": it is not a Modern Warfare 2 disc.";
                    return false;
                }
                continue;
            }
            std::vector<uint8_t> bytes;
            if (!source->ReadAll(*file, bytes))
            {
                error = std::string("Could not read ") + title.xex + " from " + Utf8(from);
                return false;
            }
            if (Sha256(bytes) != title.sha256) { error = WrongDisc(title.xex, bytes); return false; }
        }
        for (const auto& file : source->Files())
            if (IsGameFile(file.name)) files.push_back(&file);
        for (const Title& title : kTitles)
            if (const auto* file = source->Find(title.xex)) files.push_back(file);

        const fs::path folder = g_gameFolder;
        std::error_code ec;
        fs::create_directories(folder, ec);
        if (ec) { error = "Cannot create " + Utf8(fs::absolute(folder)) + ": " + ec.message(); return false; }

        uint64_t needed = 0;
        std::vector<const install::Source::File*> copy;
        const fs::path canonicalFolder = folder.lexically_normal();
        for (const auto* file : files)
        {
            if (file->name.empty() || file->name == "." || file->name == ".." ||
                file->name.find('/') != std::string::npos || file->name.find('\\') != std::string::npos)
                continue;
            const fs::path to = (folder / install::FromUtf8(file->name)).lexically_normal();
            if (to.parent_path() != canonicalFolder) continue;

            if (fs::is_regular_file(to, ec) && fs::file_size(to, ec) == file->size)
            {
                if (file->size > 0)
                {
                    char headDisk[64] = {}, headSrc[64] = {};
                    const size_t checkLen = std::min<size_t>(64, size_t(file->size));
                    std::ifstream in(to, std::ios::binary);
                    if (in.read(headDisk, checkLen) && size_t(in.gcount()) == checkLen &&
                        source->Read(*file, 0, headSrc, checkLen) &&
                        std::memcmp(headDisk, headSrc, checkLen) == 0)
                    {
                        continue;
                    }
                }
                else
                {
                    continue;
                }
            }
            copy.push_back(file);
            needed += file->size;
        }
        {
            std::lock_guard lock(progress.lock);
            progress.total = needed;
        }
        const auto space = fs::space(folder, ec);
        if (!ec && space.available < needed)
        {
            char text[160];
            std::snprintf(text, sizeof(text), "Not enough disk space: %.1f GB needed, %.1f GB free.",
                          needed / 1e9, space.available / 1e9);
            error = text;
            return false;
        }

        std::vector<uint8_t> buffer(8 << 20);
        for (const auto* file : copy)
        {
            {
                std::lock_guard lock(progress.lock);
                progress.file = file->name;
            }
            const fs::path to = folder / install::FromUtf8(file->name), partial = fs::path(to) += ".part";
            std::ofstream out(partial, std::ios::binary | std::ios::trunc);
            if (!out) { error = "Cannot write " + Utf8(fs::absolute(partial)); return false; }
            for (uint64_t at = 0; at < file->size;)
            {
                if (progress.cancel) { out.close(); fs::remove(partial, ec); error = "cancelled"; return false; }
                const size_t take = size_t(std::min<uint64_t>(buffer.size(), file->size - at));
                if (!source->Read(*file, at, buffer.data(), take))
                {
                    error = "Could not read " + file->name + " from " + Utf8(from) + ".";
                    return false;
                }
                out.write(reinterpret_cast<const char*>(buffer.data()), std::streamsize(take));
                if (!out) { error = "Could not write " + Utf8(fs::absolute(partial)) + " (disk full?)."; return false; }
                at += take;
                std::lock_guard lock(progress.lock);
                progress.done += take;
            }
            out.close();
            fs::rename(partial, to, ec);
            if (ec) { error = "Cannot rename " + Utf8(partial) + ": " + ec.message(); return false; }
        }
        return true;
    }

    std::mutex g_installLock;
    Progress* g_installing = nullptr;
#endif
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
        launch.gameRoot = g_gameFolder;
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

void install::SetGameFolder(const fs::path& folder)
{
    g_gameFolder = folder;
    LOGI("install: the game folder is %s", Utf8(fs::absolute(folder)).c_str());
}

const fs::path& install::GameFolder() { return g_gameFolder; }

bool install::Installed()
{
    std::error_code ec;
    return fs::is_regular_file(g_gameFolder / kXex, ec);
}

void install::CancelInstall()
{
#ifdef MW2_ANDROID
    std::lock_guard lock(g_installLock);
    if (g_installing) g_installing->cancel = true;
#endif
}

bool install::InstallFrom(const fs::path& from, std::string& error, Report report, void* user)
{
#ifdef MW2_ANDROID
    Progress progress;
    {
        std::lock_guard lock(g_installLock);
        if (g_installing) { error = "An install is already running."; return false; }
        g_installing = &progress;
    }

    std::atomic<bool> finished{ false };
    std::thread reporter;
    if (report)
        reporter = std::thread([&] {
            while (!finished.load(std::memory_order_acquire))
            {
                {
                    std::lock_guard lock(progress.lock);
                    report(progress.file.c_str(), progress.done, progress.total, user);
                }
                std::this_thread::sleep_for(std::chrono::milliseconds(250));
            }
            std::lock_guard lock(progress.lock);
            report(progress.file.c_str(), progress.done, progress.total, user);
        });

    const bool ok = Install(from, progress, error);
    finished.store(true, std::memory_order_release);
    if (reporter.joinable()) reporter.join();
    {
        std::lock_guard lock(g_installLock);
        g_installing = nullptr;
    }
    if (!ok && error.empty()) error = "The game could not be installed.";
    if (ok) LOGI("install: done, into %s", Utf8(fs::absolute(g_gameFolder)).c_str());
    else    LOGE("install: %s", error.c_str());
    return ok;
#else
    error = "Not implemented on desktop";
    return false;
#endif
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
