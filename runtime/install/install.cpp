#include "install.h"
#include "crypto.h"
#include "disc.h"
#include "xex.h"
#include "../log.h"

#include <atomic>
#include <chrono>
#include <cstdio>
#include <cstring>
#include <fstream>
#include <functional>
#include <mutex>
#include <string>
#include <thread>

#ifdef _WIN32
#include <windows.h>
#endif
#ifdef MW2_USE_SDL
#include <SDL3/SDL.h>
#endif

#ifdef MW2_ANDROID
#include "../android/android.h"
#endif

namespace fs = std::filesystem;
using install::Utf8;
using install::FromUtf8;

// The two executables on the disc, and the SHA-256 of each this build was
// recompiled from, which CMake reads from mw2/ at configure time. Any other
// executable -- another region, a title update -- has other code at other
// addresses, so it is refused rather than run.
namespace
{
    struct Title { const char* xex; const char* sha256; };
    constexpr Title kTitles[] = {
        { "default.xex", MW2_XEX_SHA256_SP },
        { "default_mp.xex", MW2_XEX_SHA256_MP },
    };
#ifdef MW2_TITLE_MP
    constexpr const Title& kThisTitle = kTitles[1];
#else
    constexpr const Title& kThisTitle = kTitles[0];
#endif
    constexpr uint32_t kTitleId = 0x41560817;
    // Where the game's files are kept: "game" beside the executable, unless
    // the caller named another folder. Android puts it in the app's own
    // storage, which is not a place a current directory can reach.
    std::filesystem::path g_gameFolder = "game";

    std::string ProgramName = "mw2";

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

    std::string Sha256(const std::vector<uint8_t>& bytes)
    {
        install::crypto::Sha256 hash;
        hash.Update(bytes.data(), bytes.size());
        return hash.FinalHex();
    }

    // What to tell a player whose executable is not the one this build knows.
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
        // The fastfiles and the image archives. The Bink movies are left out:
        // nothing decodes them, and a level load waits forever on one playing.
        return endsWith(".ff") || endsWith(".pak");
    }

    struct Progress
    {
        std::mutex lock;
        std::string file;
        uint64_t done = 0, total = 0;
        std::atomic<bool> cancel{ false };
    };

    // Copies the game from `from` into game/. The executables go last, each
    // file through a temporary name, so an executable present means an
    // install that finished.
    bool Install(const fs::path& from, Progress& progress, std::string& error)
    {
        auto source = install::Source::Open(from, error);
        if (!source) return false;

        std::vector<const install::Source::File*> files;
        for (const Title& title : kTitles)
        {
            const auto* file = source->Find(title.xex);
            std::vector<uint8_t> bytes;
            if (!file || !source->ReadAll(*file, bytes))
            {
                error = std::string("There is no ") + title.xex + " in " + Utf8(from) +
                        ": it is not a Modern Warfare 2 disc.";
                return false;
            }
            if (Sha256(bytes) != title.sha256) { error = WrongDisc(title.xex, bytes); return false; }
        }
        for (const auto& file : source->Files())
            if (IsGameFile(file.name)) files.push_back(&file);
        for (const Title& title : kTitles) files.push_back(source->Find(title.xex));

        const fs::path folder = g_gameFolder;
        std::error_code ec;
        fs::create_directories(folder, ec);
        if (ec) { error = "Cannot create " + Utf8(fs::absolute(folder)) + ": " + ec.message(); return false; }

        // What is already there, whole, is kept: an install cut short resumes.
        uint64_t needed = 0;
        std::vector<const install::Source::File*> copy;
        for (const auto* file : files)
        {
            const fs::path to = folder / FromUtf8(file->name);
            if (fs::is_regular_file(to, ec) && fs::file_size(to, ec) == file->size) continue;
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
            const fs::path to = folder / FromUtf8(file->name), partial = fs::path(to) += ".part";
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

    void ShowError(const std::string& text)
    {
        LOGE("%s", text.c_str());
        std::fprintf(stderr, "%s\n", text.c_str());
#ifdef MW2_USE_SDL
        SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_ERROR, "Modern Warfare 2", text.c_str(), nullptr);
#endif
#ifdef MW2_ANDROID
        // There is no terminal and no message box: the app shows it.
        android::SetStatus(text.c_str());
#endif
    }

    int InstallFromTerminal(const fs::path& from)
    {
        Progress progress;
        std::string error;
        std::atomic<bool> finished{ false };
        bool ok = false;
        std::thread worker([&] { ok = Install(from, progress, error); finished = true; });
        std::string shown;
        while (!finished)
        {
            std::this_thread::sleep_for(std::chrono::milliseconds(250));
            std::lock_guard lock(progress.lock);
            if (!progress.total) continue;
            char line[160];
            std::snprintf(line, sizeof(line), "\r  %.1f of %.1f GB  %-28s", progress.done / 1e9,
                          progress.total / 1e9, progress.file.c_str());
            if (line != shown) { std::fputs(line, stdout); std::fflush(stdout); shown = line; }
        }
        worker.join();
        if (!shown.empty()) std::fputs("\n", stdout);
        if (!ok) { std::fprintf(stderr, "Not installed: %s\n", error.c_str()); return 1; }
        std::printf("Installed into %s. Start mw2-sp or mw2-mp to play.\n",
                    Utf8(fs::absolute(g_gameFolder)).c_str());
        return 0;
    }

#ifdef MW2_USE_SDL
    // The player picks the disc image in the desktop's own file dialog.
    bool ChooseSource(fs::path& chosen)
    {
        const std::string question =
            "Modern Warfare 2 needs the game's files from your Xbox 360 disc.\n\n"
            "Choose your disc image (.iso). Its files, about 5.6 GB, are copied into\n" +
            Utf8(fs::absolute(g_gameFolder)) + ".";
        const SDL_MessageBoxButtonData buttons[] = {
            { SDL_MESSAGEBOX_BUTTON_RETURNKEY_DEFAULT, 1, "Choose the disc image" },
            { SDL_MESSAGEBOX_BUTTON_ESCAPEKEY_DEFAULT, 0, "Quit" },
        };
        const SDL_MessageBoxData box{ SDL_MESSAGEBOX_INFORMATION, nullptr, "Modern Warfare 2",
                                      question.c_str(), 2, buttons, nullptr };
        int pressed = 0;
        if (!SDL_ShowMessageBox(&box, &pressed) || pressed != 1) return false;

        struct Answer { std::atomic<bool> done{ false }; bool failed = false; std::string path; } answer;
        static const SDL_DialogFileFilter filters[] = { { "Disc image", "iso" } };
        SDL_ShowOpenFileDialog(
            [](void* data, const char* const* list, int) {
                auto* a = static_cast<Answer*>(data);
                if (!list) a->failed = true;
                else if (*list) a->path = *list;
                a->done = true;
            },
            &answer, nullptr, filters, 1, nullptr, false);
        while (!answer.done) SDL_WaitEventTimeout(nullptr, 50);
        if (answer.failed)
        {
            ShowError(std::string("No file dialog could be opened (") + SDL_GetError() +
                      ").\n\nInstall from a terminal instead:\n    " + ProgramName +
                      " --install path/to/disc.iso");
            return false;
        }
        if (answer.path.empty()) return false;
        chosen = FromUtf8(answer.path);
        return true;
    }

    // A small window with a progress bar while the files are copied; closing
    // it cancels.
    bool InstallWithWindow(const fs::path& from)
    {
        SDL_Window* window = nullptr;
        SDL_Renderer* renderer = nullptr;
        if (!SDL_CreateWindowAndRenderer("Installing Modern Warfare 2", 640, 160, 0, &window, &renderer))
        {
            LOGW("install: no progress window (%s)", SDL_GetError());
            return InstallFromTerminal(from) == 0;
        }
        SDL_SetRenderVSync(renderer, 1);

        Progress progress;
        std::string error;
        std::atomic<bool> finished{ false };
        bool ok = false;
        std::thread worker([&] { ok = Install(from, progress, error); finished = true; });
        while (!finished)
        {
            SDL_Event event;
            while (SDL_PollEvent(&event))
                if (event.type == SDL_EVENT_QUIT || event.type == SDL_EVENT_WINDOW_CLOSE_REQUESTED)
                    progress.cancel = true;
            std::string file, amount;
            float fraction = 0;
            {
                std::lock_guard lock(progress.lock);
                file = progress.file;
                char text[64];
                std::snprintf(text, sizeof(text), "%.1f of %.1f GB", progress.done / 1e9, progress.total / 1e9);
                amount = progress.total ? text : "Checking the disc...";
                if (progress.total) fraction = float(double(progress.done) / double(progress.total));
            }
            SDL_SetRenderDrawColor(renderer, 24, 24, 24, 255);
            SDL_RenderClear(renderer);
            SDL_SetRenderScale(renderer, 2, 2);
            SDL_SetRenderDrawColor(renderer, 230, 230, 230, 255);
            SDL_RenderDebugText(renderer, 12, 10, "Copying the game files");
            SDL_RenderDebugText(renderer, 12, 26, amount.c_str());
            SDL_RenderDebugText(renderer, 12, 42, file.c_str());
            SDL_SetRenderScale(renderer, 1, 1);
            const SDL_FRect bar{ 24, 116, 592, 20 }, filled{ 24, 116, 592 * fraction, 20 };
            SDL_SetRenderDrawColor(renderer, 70, 70, 70, 255);
            SDL_RenderFillRect(renderer, &bar);
            SDL_SetRenderDrawColor(renderer, 120, 200, 90, 255);
            SDL_RenderFillRect(renderer, &filled);
            SDL_RenderPresent(renderer);
        }
        worker.join();
        SDL_DestroyRenderer(renderer);
        SDL_DestroyWindow(window);
        if (!ok && error != "cancelled") ShowError("The game could not be installed.\n\n" + error);
        return ok;
    }
#endif

    // The title's image from game/, refused unless it is the executable this
    // build was made from.
    bool LoadInstalled(std::vector<uint8_t>& image)
    {
        const fs::path path = g_gameFolder / kThisTitle.xex;
        std::vector<uint8_t> file;
        {
            std::ifstream in(path, std::ios::binary);
            file.assign(std::istreambuf_iterator<char>(in), {});
        }
        if (file.empty()) { ShowError("Cannot read " + Utf8(fs::absolute(path)) + "."); return false; }
        if (Sha256(file) != kThisTitle.sha256)
        {
            ShowError(WrongDisc(kThisTitle.xex, file) + "\n\nInstall again: " + ProgramName +
                      " --install path/to/disc.iso");
            return false;
        }
        std::string error;
        if (!install::xex::Image(file, image, error)) { ShowError(Utf8(path) + ": " + error); return false; }
        return true;
    }
}

bool install::PlayerStart(int argc, char** argv)
{
    return argc == 1 || (argc >= 2 && std::strcmp(argv[1], "--install") == 0);
}

bool install::Prepare(int argc, char** argv, Launch& launch, int& exitCode)
{
    exitCode = 1;
    ProgramName = Utf8(fs::path(argv[0]).filename());
    // Everything a player's copy keeps -- game/, saves/ -- is beside the executable.
    std::error_code ec;
    if (const fs::path folder = ExecutableFolder(); !folder.empty()) fs::current_path(folder, ec);

    if (argc >= 2)   // --install
    {
        if (argc != 3)
        {
            std::fprintf(stderr, "usage: %s --install <disc image or extracted disc folder>\n", ProgramName.c_str());
            return false;
        }
        exitCode = InstallFromTerminal(fs::absolute(fs::path(argv[2]), ec));
        return false;
    }

    const bool installed = fs::is_regular_file(g_gameFolder / kThisTitle.xex, ec);
    if (!installed)
    {
#ifdef MW2_USE_SDL
        if (!SDL_InitSubSystem(SDL_INIT_VIDEO)) { ShowError(SDL_GetError()); return false; }
        fs::path from;
        const bool chosen = ChooseSource(from);
        const bool done = chosen && InstallWithWindow(from);
        // The presenter starts the video subsystem again on its own thread.
        SDL_QuitSubSystem(SDL_INIT_VIDEO);
        if (!done) { exitCode = chosen ? 1 : 0; return false; }
#else
        std::fprintf(stderr, "The game is not installed. Run: %s --install <disc image>\n", ProgramName.c_str());
        return false;
#endif
    }

    if (!LoadInstalled(launch.image)) return false;
    launch.gameRoot = g_gameFolder;
    return true;
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

// ---- the app's side of installing -----------------------------------------
// The same copy the terminal and the desktop window drive, called from an
// Android activity instead. It runs on the caller's thread -- the app already
// has one for it -- and reports through a callback, because there is no
// console to print over and no window of this runtime's to draw in.
namespace
{
    std::mutex g_installLock;
    Progress* g_installing = nullptr;
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
    return fs::is_regular_file(g_gameFolder / kThisTitle.xex, ec);
}

void install::CancelInstall()
{
    std::lock_guard lock(g_installLock);
    if (g_installing) g_installing->cancel = true;
}

bool install::InstallFrom(const fs::path& from, std::string& error, Report report, void* user)
{
    Progress progress;
    {
        std::lock_guard lock(g_installLock);
        if (g_installing) { error = "An install is already running."; return false; }
        g_installing = &progress;
    }

    // The copy runs here; a thread beside it reports, four times a second,
    // which is often enough for a progress bar and rare enough to cost
    // nothing.
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
}
