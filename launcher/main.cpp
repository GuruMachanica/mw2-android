// The launcher: what a player opens. It installs the game from their disc,
// starts the campaign and the multiplayer, and is where the tools that work on
// an install go (maps, the profile, updates of this program).
//
//     mw2-launcher                                  the window
//     mw2-launcher --install [<disc>] [--update <package or folder>]
//                                                   the install, in a terminal
//
// With no <disc>, --install brings the install already in game/ up to date.
#include "disc.h"
#include "fonts.h"
#include "setup.h"
#include "ui.h"

#ifdef _WIN32
#include <windows.h>
#include <shellapi.h>
#endif
#include <SDL3/SDL.h>
#include <imgui.h>
#include <imgui_impl_sdl3.h>
#include <imgui_impl_sdlrenderer3.h>

#include <algorithm>
#include <atomic>
#include <chrono>
#include <cstdio>
#include <cstring>
#include <memory>
#include <mutex>
#include <string>
#include <thread>
#include <tuple>
#include <vector>

namespace fs = std::filesystem;
using install::FromUtf8;
using install::Utf8;

namespace
{
#ifdef _WIN32
    constexpr const char* kCampaign = "mw2-sp.exe";
    constexpr const char* kMultiplayer = "mw2-mp.exe";
#else
    constexpr const char* kCampaign = "mw2-sp";
    constexpr const char* kMultiplayer = "mw2-mp";
#endif

    // An install running on its own thread.
    struct Job
    {
        fs::path disc, update;
        setup::Progress progress;
        std::atomic<bool> finished{ false };
        setup::Result result = setup::Result::Failed;
        std::string error;
        std::thread thread;

        void Start()
        {
            thread = std::thread([this] { result = setup::Run(disc, update, progress, error); finished = true; });
        }
        ~Job() { if (thread.joinable()) thread.join(); }
    };

    std::string Amount(uint64_t done, uint64_t total)
    {
        char text[64];
        std::snprintf(text, sizeof(text), "%.1f of %.1f GB", done / 1e9, total / 1e9);
        return total ? text : "";
    }

    int InstallInTerminal(const fs::path& disc, const fs::path& update)
    {
        Job job;
        job.disc = disc;
        job.update = update;
        job.Start();
        std::string shown;
        while (!job.finished)
        {
            std::this_thread::sleep_for(std::chrono::milliseconds(250));
            std::lock_guard lock(job.progress.lock);
            char line[200];
            std::snprintf(line, sizeof(line), "\r  %d/%d  %-28s %-18s %-28s", job.progress.step, job.progress.steps,
                          job.progress.title.c_str(), Amount(job.progress.done, job.progress.total).c_str(),
                          job.progress.detail.c_str());
            if (line != shown) { std::fputs(line, stdout); std::fflush(stdout); shown = line; }
        }
        job.thread.join();
        if (!shown.empty()) std::fputs("\n", stdout);
        if (job.result != setup::Result::Done)
        {
            std::fprintf(stderr, "Not installed: %s\n", job.error.c_str());
            if (job.result == setup::Result::NoUpdate)
                std::fprintf(stderr, "Download it from\n  %s\nand give it with --update <file>.\n", setup::UpdateUrl());
            return 1;
        }
        std::printf("Installed into %s.\n", Utf8(fs::absolute(setup::GameFolder())).c_str());
        return 0;
    }

    // Starts a program beside the launcher and leaves it running.
    bool Start(const char* program)
    {
        std::error_code ec;
        const std::string path = Utf8(fs::absolute(program, ec));
        const char* const args[] = { path.c_str(), nullptr };
        SDL_Process* process = SDL_CreateProcess(args, false);
        if (!process) return false;
        SDL_DestroyProcess(process);
        return true;
    }

    // What an entry does.
    enum class Action { None, PlayCampaign, PlayMultiplayer, Install, ChooseUpdate, Cancel, Quit };

    struct Entry
    {
        ui::Entry shown;
        Action action = Action::None;
        std::string heading, text;      // the pane, while the entry is the chosen one
    };

    // The file dialog answers on a thread of its own choosing.
    struct Picked
    {
        std::mutex lock;
        bool answered = false, failed = false;
        Action forAction = Action::None;
        std::string path;
    };

    struct App
    {
        SDL_Window* window = nullptr;
        setup::State state = setup::State::NotInstalled;
        std::unique_ptr<Job> job;
        Picked picked;
        fs::path disc;                  // kept across a failed download, for the second attempt
        bool needsUpdateFile = false;   // the download failed: Install asks for the file
        std::string message;            // what the last job or action came to
        bool messageIsError = false;
        int focus = 0;
        bool focusPlaced = false;
        bool quit = false;

        void Ask(Action forAction, const char* what, const char* pattern)
        {
            {
                std::lock_guard lock(picked.lock);
                picked.answered = false;
                picked.forAction = forAction;
            }
            static SDL_DialogFileFilter filters[2];
            filters[0] = { what, pattern };
            filters[1] = { "All files", "*" };
            SDL_ShowOpenFileDialog(
                [](void* data, const char* const* list, int) {
                    auto* p = static_cast<Picked*>(data);
                    std::lock_guard lock(p->lock);
                    p->failed = !list;
                    p->path = (list && *list) ? *list : "";
                    p->answered = true;
                },
                &picked, window, filters, 2, nullptr, false);
        }

        void Install(const fs::path& from, const fs::path& update)
        {
            message.clear();
            job = std::make_unique<Job>();
            job->disc = from;
            job->update = update;
            job->Start();
            focus = 0;
        }

        void Do(Action action)
        {
            switch (action)
            {
            case Action::PlayCampaign:
            case Action::PlayMultiplayer:
            {
                const char* program = action == Action::PlayCampaign ? kCampaign : kMultiplayer;
                if (Start(program)) quit = true;
                else { message = std::string(program) + " could not be started: " + SDL_GetError(); messageIsError = true; }
                break;
            }
            case Action::Install:
                // The disc's files are there already: the update is all that is missing.
                if (state == setup::State::NeedsUpdate) Install({}, {});
                else Ask(Action::Install, "Disc image", "iso");
                break;
            case Action::ChooseUpdate:
                Ask(Action::ChooseUpdate, "Title update", "*");
                break;
            case Action::Cancel:
                if (job) job->progress.cancel = true;
                break;
            case Action::Quit:
                quit = true;
                break;
            case Action::None:
                break;
            }
        }

        // A file the dialog returned, or one dropped on the window.
        void Take(Action forAction, const std::string& path)
        {
            if (job || path.empty()) return;
            if (forAction == Action::ChooseUpdate) Install(state == setup::State::NeedsUpdate ? fs::path() : disc, FromUtf8(path));
            else { disc = FromUtf8(path); Install(disc, {}); }
        }

        void Poll()
        {
            std::string path;
            Action forAction = Action::None;
            {
                std::lock_guard lock(picked.lock);
                if (picked.answered)
                {
                    picked.answered = false;
                    forAction = picked.forAction;
                    path = picked.path;
                    if (picked.failed)
                    {
                        message = std::string("No file dialog could be opened (") + SDL_GetError() +
                                  "). Drop the file on this window, or install from a terminal:\n"
                                  "mw2-launcher --install path/to/disc.iso";
                        messageIsError = true;
                    }
                }
            }
            if (forAction != Action::None) Take(forAction, path);

            if (job && job->finished)
            {
                job->thread.join();
                const setup::Result result = job->result;
                needsUpdateFile = result == setup::Result::NoUpdate;
                messageIsError = result == setup::Result::Failed || result == setup::Result::NoUpdate;
                if (result == setup::Result::Done) message = "The game is installed.";
                else if (result == setup::Result::Cancelled) message = "The install was stopped. Starting it again carries on where it left off.";
                else message = job->error;
                if (needsUpdateFile)
                    message += std::string("\n\nDownload it yourself from\n") + setup::UpdateUrl() +
                               "\nthen choose the file with CHOOSE UPDATE FILE.";
                job.reset();
                state = setup::Detect();
                focusPlaced = false;
            }
        }

        std::vector<Entry> Entries() const
        {
            std::vector<Entry> entries;
            auto add = [&](Action action, const char* label, bool enabled, const char* heading, std::string text) {
                Entry entry;
                entry.shown.label = label;
                entry.shown.enabled = enabled;
                entry.action = enabled ? action : Action::None;
                entry.heading = heading;
                entry.text = std::move(text);
                entries.push_back(std::move(entry));
                return &entries.back();
            };
            if (job)
            {
                add(Action::Cancel, "CANCEL", true, "INSTALLING", "");
                return entries;
            }
            const bool installed = state == setup::State::Installed;
            std::error_code ec;
            const bool campaign = fs::is_regular_file(kCampaign, ec), multiplayer = fs::is_regular_file(kMultiplayer, ec);
            auto play = [&](bool present, const char* program, const char* what) {
                if (!installed) return std::string("Install the game first.");
                if (!present) return std::string(program) + " is not beside the launcher.";
                return std::string(what);
            };
            add(Action::PlayCampaign, "PLAY CAMPAIGN", installed && campaign, "CAMPAIGN",
                play(campaign, kCampaign, "The campaign and Special Ops, alone or in split screen."));
            add(Action::PlayMultiplayer, "PLAY MULTIPLAYER", installed && multiplayer, "MULTIPLAYER",
                play(multiplayer, kMultiplayer, "Multiplayer: split screen, system link and private matches."));

            Entry* install = nullptr;
            if (needsUpdateFile)
                install = add(Action::ChooseUpdate, "CHOOSE UPDATE FILE", true, "TITLE UPDATE 6",
                              "The update could not be downloaded. Choose the file you downloaded yourself.");
            else if (state == setup::State::NeedsUpdate)
                install = add(Action::Install, "UPDATE GAME", true, "UPDATE",
                              "The game is installed from the disc, and this version plays title update 6.\n\n"
                              "The update is downloaded (2 MB) and applied to the installed game. Your disc is not needed.");
            else
                install = add(Action::Install, installed ? "REINSTALL" : "INSTALL GAME", true, "INSTALL",
                              std::string("Choose the image of your Xbox 360 disc (.iso), or drop it on this window.\n\n"
                                          "Its files, about 7 GB, are copied into the game folder beside the launcher") +
                                  (setup::UsesUpdate() ? ", and title update 6 is downloaded (2 MB) and applied." : ".") +
                                  "\n\nThe disc is the USA/Europe one, version 1.0.557.");
            install->shown.ruleAbove = true;

            // What an install is for, once there is more than playing it.
            for (const auto& [label, heading, text] : {
                     std::tuple{ "MAPS", "MAPS", "Add and remove custom maps." },
                     std::tuple{ "PROFILE", "PROFILE", "Edit the multiplayer rank and unlocks, and the campaign's progress." },
                     std::tuple{ "CHECK FOR UPDATES", "UPDATES", "Look for a newer version of this program." } })
            {
                Entry* soon = add(Action::None, label, false, heading, std::string(text) + "\n\nNot available yet.");
                soon->shown.tag = "SOON";
            }
            add(Action::Quit, "QUIT", true, "", "")->shown.ruleAbove = true;
            return entries;
        }
    };

    int Window()
    {
        if (!SDL_Init(SDL_INIT_VIDEO | SDL_INIT_GAMEPAD))
        {
            std::fprintf(stderr, "No window could be opened (%s). Install from a terminal: mw2-launcher --install <disc>\n", SDL_GetError());
            return 1;
        }
        // The design is 1280x720; a smaller desktop gets it scaled down.
        float scale = 1.0f;
        SDL_Rect bounds;
        if (SDL_GetDisplayUsableBounds(SDL_GetPrimaryDisplay(), &bounds))
            scale = std::min(1.0f, std::min(bounds.w / 1320.0f, bounds.h / 780.0f));
        App app;
        SDL_Renderer* renderer = nullptr;
        if (!SDL_CreateWindowAndRenderer("Modern Warfare 2", int(1280 * scale), int(720 * scale), 0, &app.window, &renderer))
        {
            SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_ERROR, "Modern Warfare 2", SDL_GetError(), nullptr);
            return 1;
        }
        if (SDL_Surface* icon = SDL_LoadBMP_IO(SDL_IOFromConstMem(kIcon, kIconSize), true))
        {
            SDL_SetWindowIcon(app.window, icon);
            SDL_DestroySurface(icon);
        }
        SDL_SetRenderVSync(renderer, 1);

        IMGUI_CHECKVERSION();
        ImGui::CreateContext();
        ImGuiIO& io = ImGui::GetIO();
        io.IniFilename = nullptr;       // nothing is kept between runs
        io.ConfigFlags |= ImGuiConfigFlags_NavEnableKeyboard | ImGuiConfigFlags_NavEnableGamepad;
        ImGui_ImplSDL3_InitForSDLRenderer(app.window, renderer);
        ImGui_ImplSDLRenderer3_Init(renderer);
        const ui::Fonts fonts = ui::LoadFonts(scale);
        SDL_Texture* backdrop = ui::MakeBackdrop(renderer);

        app.state = setup::Detect();
        while (!app.quit)
        {
            SDL_Event event;
            while (SDL_PollEvent(&event))
            {
                ImGui_ImplSDL3_ProcessEvent(&event);
                if (event.type == SDL_EVENT_QUIT || event.type == SDL_EVENT_WINDOW_CLOSE_REQUESTED)
                {
                    if (app.job) app.job->progress.cancel = true;
                    app.quit = true;
                }
                // A disc image dropped on the window installs from it; while
                // the update is what is asked for, the file is the update.
                if (event.type == SDL_EVENT_DROP_FILE && event.drop.data)
                    app.Take(app.needsUpdateFile ? Action::ChooseUpdate : Action::Install, event.drop.data);
            }
            app.Poll();

            ImGui_ImplSDLRenderer3_NewFrame();
            ImGui_ImplSDL3_NewFrame();
            ImGui::NewFrame();

            const std::vector<Entry> entries = app.Entries();
            const int count = int(entries.size());
            if (!app.focusPlaced)
            {
                // The first thing a player can do.
                app.focus = 0;
                for (int i = 0; i < count; i++)
                    if (entries[i].shown.enabled) { app.focus = i; break; }
                app.focusPlaced = true;
            }
            auto pressed = [](std::initializer_list<ImGuiKey> keys, bool repeat) {
                for (ImGuiKey key : keys)
                    if (ImGui::IsKeyPressed(key, repeat)) return true;
                return false;
            };
            if (pressed({ ImGuiKey_DownArrow, ImGuiKey_GamepadDpadDown, ImGuiKey_GamepadLStickDown }, true)) app.focus = (app.focus + 1) % count;
            if (pressed({ ImGuiKey_UpArrow, ImGuiKey_GamepadDpadUp, ImGuiKey_GamepadLStickUp }, true)) app.focus = (app.focus + count - 1) % count;
            app.focus = std::clamp(app.focus, 0, count - 1);
            int chosen = pressed({ ImGuiKey_Enter, ImGuiKey_KeypadEnter, ImGuiKey_Space, ImGuiKey_GamepadFaceDown }, false) ? app.focus : -1;
            if (app.job && pressed({ ImGuiKey_Escape, ImGuiKey_GamepadFaceRight }, false)) app.job->progress.cancel = true;

            ui::Frame frame;
            for (const Entry& entry : entries) frame.entries.push_back(entry.shown);
            frame.focus = app.focus;
            const Entry& current = entries[app.focus];
            frame.heading = current.heading;
            if (app.job)
            {
                std::lock_guard lock(app.job->progress.lock);
                const setup::Progress& progress = app.job->progress;
                frame.busy = progress.steps > 0;
                frame.step = progress.step;
                frame.steps = progress.steps;
                frame.stepTitle = progress.title;
                frame.detail = progress.detail;
                frame.amount = Amount(progress.done, progress.total);
                frame.fraction = progress.total ? float(double(progress.done) / double(progress.total)) : -1.0f;
                frame.text = progress.cancel ? "Stopping..." : "Stopping and starting again later carries on where it left off.";
            }
            else if (!app.message.empty() && (current.action == Action::Install || current.action == Action::ChooseUpdate || app.messageIsError))
            {
                frame.text = app.message;
                frame.error = app.messageIsError;
            }
            else frame.text = current.text;
            frame.status = app.state == setup::State::Installed     ? "The game is installed."
                           : app.state == setup::State::NeedsUpdate ? "The game is installed from the disc and needs title update 6."
                                                                    : "The game is not installed.";
            frame.corner = setup::UsesUpdate() ? "TITLE UPDATE 6" : "DISC VERSION 1.0.557";
            frame.hint = "ENTER OR (A) TO CHOOSE";

            const int pointed = ui::Draw(fonts, frame, scale, app.focus);
            if (pointed >= 0) chosen = pointed;
            // Reading a message dismisses it: the next move shows the entries' own text again.
            if (chosen >= 0 && !app.messageIsError) app.message.clear();
            if (chosen >= 0) app.Do(entries[chosen].action);

            ImGui::Render();
            SDL_SetRenderDrawColor(renderer, 40, 40, 38, 255);
            SDL_RenderClear(renderer);
            if (backdrop) SDL_RenderTexture(renderer, backdrop, nullptr, nullptr);
            ImGui_ImplSDLRenderer3_RenderDrawData(ImGui::GetDrawData(), renderer);
            SDL_RenderPresent(renderer);
        }
        app.job.reset();    // waits for a job that was told to stop

        ImGui_ImplSDLRenderer3_Shutdown();
        ImGui_ImplSDL3_Shutdown();
        ImGui::DestroyContext();
        SDL_DestroyTexture(backdrop);
        SDL_DestroyRenderer(renderer);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        return 0;
    }
}

int main(int argc, char** argv)
{
    // The command line as paths. Windows hands main() the arguments in the
    // system's code page, which loses what it cannot spell; the wide command
    // line has them whole.
    std::vector<fs::path> arguments;
#ifdef _WIN32
    {
        int count = 0;
        if (wchar_t** wide = CommandLineToArgvW(GetCommandLineW(), &count))
        {
            for (int i = 1; i < count; i++) arguments.emplace_back(wide[i]);
            LocalFree(wide);
        }
        // A player's build has no console of its own; one it was started from
        // gets what the terminal mode prints.
        if (!arguments.empty() && AttachConsole(ATTACH_PARENT_PROCESS))
        {
            std::freopen("CONOUT$", "w", stdout);
            std::freopen("CONOUT$", "w", stderr);
        }
    }
#else
    for (int i = 1; i < argc; i++) arguments.push_back(FromUtf8(argv[i]));
#endif

    // The paths on the command line are the terminal's; everything a player's
    // copy keeps -- game/, saves/ -- is beside the launcher.
    std::error_code ec;
    fs::path disc, update;
    bool usage = !arguments.empty() && arguments[0] != "--install";
    for (size_t i = 1; i < arguments.size() && !usage; i++)
    {
        const std::string text = Utf8(arguments[i]);
        if (text == "--update" && i + 1 < arguments.size()) update = fs::absolute(arguments[++i], ec);
        else if (text[0] != '-' && disc.empty()) disc = fs::absolute(arguments[i], ec);
        else usage = true;
    }
    if (const char* base = SDL_GetBasePath()) fs::current_path(FromUtf8(base), ec);

    if (!arguments.empty())
    {
        if (usage)
        {
            std::fprintf(stderr, "usage: %s --install [<disc image or extracted disc folder>] [--update <package or folder>]\n", argv[0]);
            return 2;
        }
        return InstallInTerminal(disc, update);
    }
    return Window();
}
