// The launcher: what a player opens. It installs the game from their disc,
// starts the campaign and the multiplayer, and is where the tools that work on
// an install go (maps, the profile, updates of this program).
//
//     mw2-launcher                                  the window
//     mw2-launcher --install [<disc>] [--update <package or folder>]
//                                                   the install, in a terminal
//     mw2-launcher --upgrade                        a newer release, in a terminal
//
// With no <disc>, --install brings the install already in game/ up to date.
#include "disc.h"
#include "fonts.h"
#include "profile.h"
#include "report.h"
#include "settings.h"
#include "setup.h"
#include "ui.h"
#include "update.h"
#include "../runtime/install/spawn.h"

#ifdef _WIN32
#include <windows.h>
#include <shellapi.h>
#include <tlhelp32.h>
#endif
#include <SDL3/SDL.h>
#include <imgui.h>
#include <imgui_impl_sdl3.h>
#include <imgui_impl_sdlrenderer3.h>

#include <algorithm>
#include <cctype>
#include <atomic>
#include <chrono>
#include <cstdio>
#include <cstring>
#include <functional>
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
    constexpr const char* kLauncher = "mw2-launcher.exe";
#else
    constexpr const char* kCampaign = "mw2-sp";
    constexpr const char* kMultiplayer = "mw2-mp";
    constexpr const char* kLauncher = "mw2-launcher";
#endif

    // An install running on its own thread, or with `work` given, a look for
    // a newer version of the launcher or its installation.
    struct Job
    {
        enum class Kind { Install, CheckUpdate, InstallUpdate } kind = Kind::Install;
        std::function<setup::Result(setup::Progress&, std::string&)> work;
        fs::path disc, update;
        setup::Progress progress;
        std::atomic<bool> finished{ false };
        setup::Result result = setup::Result::Failed;
        std::string error;
        std::thread thread;

        void Start()
        {
            thread = std::thread([this] {
                result = work ? work(progress, error) : setup::Run(disc, update, progress, error);
                finished = true;
            });
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

    // Looks for a newer version and installs it, from a terminal.
    int UpgradeInTerminal()
    {
        if (!*update::Current()) { std::fprintf(stderr, "This build was not made as a release, so there is no version to compare.\n"); return 1; }
        update::Release release;
        std::string error;
        switch (update::Look(release, error))
        {
        case update::Check::UpToDate:
            std::printf("This is the newest version, %s.\n", update::Current());
            return 0;
        case update::Check::Failed:
            std::fprintf(stderr, "%s\n", error.c_str());
            return 1;
        case update::Check::Newer:
            break;
        }
        std::printf("Version %s is out; this is %s. Installing it...\n", release.version.c_str(), update::Current());
        setup::Progress progress;
        if (update::Install(release, progress, error) != setup::Result::Done) { std::fprintf(stderr, "Not updated: %s\n", error.c_str()); return 1; }
        std::printf("Updated to %s.\n", release.version.c_str());
        return 0;
    }

    // Starts a program beside the launcher and leaves it running.
    bool Start(const char* program)
    {
        std::error_code ec;
        const std::string path = Utf8(fs::absolute(program, ec));
        const char* const args[] = { path.c_str(), nullptr };
        SDL_Process* process = spawn::Start(args);
        if (!process) return false;
        SDL_DestroyProcess(process);
        return true;
    }

    // Whether the campaign or the multiplayer is running: the profile is
    // theirs to write while they are, and they write it when they end.
    bool GameRunning()
    {
#ifdef _WIN32
        bool running = false;
        const HANDLE snapshot = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
        if (snapshot == INVALID_HANDLE_VALUE) return false;
        PROCESSENTRY32W process{};
        process.dwSize = sizeof(process);
        for (BOOL more = Process32FirstW(snapshot, &process); more && !running; more = Process32NextW(snapshot, &process))
            running = !_wcsicmp(process.szExeFile, L"mw2-sp.exe") || !_wcsicmp(process.szExeFile, L"mw2-mp.exe");
        CloseHandle(snapshot);
        return running;
#else
        // The two programs beside the launcher, by the file each process runs.
        std::error_code ec;
        const fs::path campaign = fs::weakly_canonical(kCampaign, ec), multiplayer = fs::weakly_canonical(kMultiplayer, ec);
        for (fs::directory_iterator it("/proc", ec), end; !ec && it != end; it.increment(ec))
        {
            const std::string name = it->path().filename().string();
            if (name.empty() || name.find_first_not_of("0123456789") != std::string::npos) continue;
            std::error_code ignored;
            const fs::path program = fs::read_symlink(it->path() / "exe", ignored);
            if (!ignored && (program == campaign || program == multiplayer)) return true;
        }
        return false;
#endif
    }

    // What an entry does.
    enum class Action
    {
        None, PlayCampaign, PlayMultiplayer, Install, ChooseUpdate, Cancel, Quit,
        // The profile screen and what it does.
        Profile, Back, NextPlayer, Rename, PlayAs, MaxRank, Prestige, UnlockEverything, UnlockMissions, AllStars,
        CheckUpdate, InstallUpdate,
        // The next of the sizes the game draws at.
        Resolution,
        // The bug report screen: a run of either game with its log kept.
        Report, ReportCampaign, ReportMultiplayer,
        // The question a start asks when a recorded run was never reported.
        SendPending, DiscardPending,
    };

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
        int messageFocus = -1;          // the profile screen's entry it belongs to
        bool profileScreen = false;
        std::vector<profile::Player> players;
        size_t player = 0;
        bool renaming = false;          // the keyboard types a profile's new name
        std::string newName;
        profile::Campaign campaign;
        update::Release release;        // the newer version a look found, if `newer`
        bool newer = false;
        std::string updated;            // the version this start is the first of
        bool gameRunning = false;       // looked up once a second while the profile screen shows
        bool reportScreen = false;
        bool recording = false;         // the reported run goes on
        bool pendingReport = false;     // a recorded run was never reported: the start asks about it
        std::chrono::steady_clock::time_point recordingSince{};
        std::chrono::steady_clock::time_point gameChecked{};
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
            case Action::CheckUpdate:
                message.clear();
                job = std::make_unique<Job>();
                job->kind = Job::Kind::CheckUpdate;
                job->work = [this](setup::Progress&, std::string& error) {
                    switch (update::Look(release, error))
                    {
                    case update::Check::Newer: return setup::Result::Done;
                    case update::Check::UpToDate: return setup::Result::Cancelled;
                    case update::Check::Failed: break;
                    }
                    return setup::Result::Failed;
                };
                job->Start();
                break;
            case Action::InstallUpdate:
                // Its programs cannot be replaced under it.
                if (GameRunning())
                {
                    message = "The game is running. Close it to update.";
                    messageIsError = true;
                    break;
                }
                message.clear();
                job = std::make_unique<Job>();
                job->kind = Job::Kind::InstallUpdate;
                job->work = [release = release](setup::Progress& progress, std::string& error) { return update::Install(release, progress, error); };
                job->Start();
                break;
            case Action::ReportCampaign:
            case Action::ReportMultiplayer:
                if (GameRunning())
                {
                    message = "The game is running. Close it first: the report is of a run started here.";
                    messageIsError = true;
                }
                else if (report::Start(action == Action::ReportCampaign ? kCampaign : kMultiplayer, message))
                {
                    recording = true;
                    recordingSince = std::chrono::steady_clock::now();
                    message.clear();
                    focusPlaced = false;
                }
                else messageIsError = true;
                messageFocus = focus;
                break;
            case Action::Profile:
            case Action::Report:
            case Action::Back:
                gameRunning = action == Action::Profile && GameRunning();
                gameChecked = std::chrono::steady_clock::now();
                profileScreen = action == Action::Profile;
                reportScreen = action == Action::Report;
                message.clear();
                messageIsError = false;
                focusPlaced = false;
                player = 0;
                ReadProfile();
                break;
            case Action::SendPending:
                pendingReport = false;
                reportScreen = true;
                FinishReport();
                break;
            case Action::DiscardPending:
                pendingReport = false;
                report::Discard();
                focusPlaced = false;
                break;
            case Action::NextPlayer:
                player = (player + 1) % players.size();
                break;
            case Action::Resolution:
                settings::SetScale(settings::Scale() % settings::kMaxScale + 1);
                break;
            case Action::Rename:
                renaming = true;
                newName = players[player].name;
                message.clear();
                SDL_StartTextInput(window);
                break;
            case Action::PlayAs:
            case Action::MaxRank:
            case Action::Prestige:
            case Action::UnlockEverything:
            case Action::UnlockMissions:
            case Action::AllStars:
                Edit(action);
                break;
            case Action::None:
                break;
            }
        }

        // The keyboard while a profile is renamed.
        void Type(const SDL_Event& event)
        {
            if (event.type == SDL_EVENT_TEXT_INPUT)
            {
                for (const char* c = event.text.text; *c; c++)
                    if (newName.size() < 15 && (std::isalnum(static_cast<unsigned char>(*c)) || *c == ' ')) newName += *c;
                return;
            }
            if (event.type != SDL_EVENT_KEY_DOWN) return;
            if (event.key.key == SDLK_BACKSPACE && !newName.empty()) newName.pop_back();
            const bool keep = event.key.key == SDLK_RETURN || event.key.key == SDLK_KP_ENTER;
            if (!keep && event.key.key != SDLK_ESCAPE) return;
            renaming = false;
            SDL_StopTextInput(window);
            if (!keep) return;
            std::string error;
            const uint64_t id = players[player].id;
            const bool done = profile::Rename(players[player], newName, error);
            message = done ? "The profile is now " + newName + "." : error;
            messageIsError = !done;
            messageFocus = focus;
            ReadProfile();
            for (size_t i = 0; i < players.size(); i++)
                if (players[i].id == id) player = i;
        }

        void ReadProfile()
        {
            players = profile::Players();
            player = std::min(player, players.empty() ? 0 : players.size() - 1);
            campaign = profile::ReadCampaign();
        }

        // One change to the profile, and what to say about it.
        void Edit(Action action)
        {
            std::string error;
            bool done = false;
            const profile::Player* who = players.empty() ? nullptr : &players[player];
            // The list is the newest first, and a change makes its file the
            // newest: the player is found again by the file.
            const fs::path file = who ? who->file : fs::path();
            const uint64_t id = who ? who->id : 0;
            switch (action)
            {
            case Action::PlayAs:
                done = who && profile::PlayAs(*who, error);
                message = who ? who->name + " plays at the first controller from the game's next start." : "";
                break;
            case Action::MaxRank:
                done = who && profile::MaxRank(*who, error);
                message = "The rank is now 70.";
                break;
            case Action::Prestige:
            {
                const int prestige = who ? (who->prestige + 1) % (profile::MaxPrestige() + 1) : 0;
                done = who && profile::SetPrestige(*who, prestige, error);
                message = "The prestige is now " + std::to_string(prestige) + ".";
                break;
            }
            case Action::UnlockEverything:
                done = who && profile::UnlockEverything(*who, error);
                message = "Every challenge is done, and every title, emblem and killstreak unlocked.";
                break;
            case Action::UnlockMissions:
                done = profile::UnlockMissions(error);
                message = "Every campaign mission is unlocked.";
                break;
            case Action::AllStars:
                done = profile::AllStars(error);
                message = "Every Special Ops mission has its three stars.";
                break;
            default:
                break;
            }
            if (!done) message = error;
            messageIsError = !done;
            messageFocus = focus;
            ReadProfile();
            for (size_t i = 0; i < players.size(); i++)
                if (id ? players[i].id == id : players[i].file == file) player = i;
        }

        std::vector<Entry> ReportEntries() const
        {
            std::vector<Entry> entries;
            auto add = [&](Action action, const char* label, const char* heading, std::string text) {
                Entry entry;
                entry.shown.label = label;
                entry.action = action;
                entry.heading = heading;
                entry.text = std::move(text);
                entries.push_back(std::move(entry));
                return &entries.back();
            };
            if (recording)
            {
                add(Action::None, "RECORDING", "THE GAME IS RUNNING",
                    "Play until the problem shows, then quit the game.\n\nThe report is made when the game has closed. "
                    "If the game closes by itself, that is recorded too.");
                return entries;
            }
            const std::string how =
                "The game starts and keeps a log of the run. Play until the problem shows, then quit the game.\n\n"
                "The launcher then writes one report file and opens the project's new-issue page on GitHub with your "
                "system's description filled in. You describe what happened, drag the file in, and submit. "
                "That needs a GitHub account.\n\n"
                "The report is public. Your name, network addresses and folder names are taken out of it.";
            std::error_code ec;
            const bool installed = state == setup::State::Installed;
            Entry* campaign = add(Action::ReportCampaign, "CAMPAIGN", "REPORT A BUG IN THE CAMPAIGN", how);
            campaign->shown.enabled = installed && fs::is_regular_file(kCampaign, ec);
            Entry* multiplayer = add(Action::ReportMultiplayer, "MULTIPLAYER", "REPORT A BUG IN THE MULTIPLAYER", how);
            multiplayer->shown.enabled = installed && fs::is_regular_file(kMultiplayer, ec);
            for (Entry* entry : { campaign, multiplayer })
                if (!entry->shown.enabled) { entry->action = Action::None; entry->text = "Install the game first."; }
            add(Action::Back, "BACK", "", "Reports are kept in the reports folder beside the launcher.")->shown.ruleAbove = true;
            return entries;
        }

        // The reported run has ended: the file, the page, and what to do with them.
        void FinishReport()
        {
            report::Made made;
            recording = false;
            focusPlaced = false;
            messageFocus = -1;
            messageIsError = !report::Make(made, message);
            if (messageIsError) return;
            const std::string file = Utf8(made.file);
            message = report::Open(made)
                ? "The report is\n" + file + "\n\nThe issue page has opened in your browser. Describe what happened, "
                  "drag that file into the text box, and submit."
                : "The report is\n" + file + "\n\nNo browser could be opened. Attach that file to a new issue at\n"
                  "github.com/PaulCombal/mw2-recompiled/issues";
        }

        std::vector<Entry> ProfileEntries() const
        {
            std::vector<Entry> entries;
            auto add = [&](Action action, std::string label, bool enabled, const char* heading, std::string text) {
                Entry entry;
                entry.shown.label = std::move(label);
                entry.shown.enabled = enabled;
                entry.action = enabled ? action : Action::None;
                entry.heading = heading;
                entry.text = std::move(text);
                entries.push_back(std::move(entry));
                return &entries.back();
            };
            // A profile made on the sign-in screen has no stats to change
            // until its first match has ended.
            const bool any = !players.empty() && !players[player].file.empty() && !gameRunning;
            std::string who = "No multiplayer profile yet: play the multiplayer once first.";
            int prestige = 0;
            bool named = false;
            if (!players.empty())
            {
                const profile::Player& p = players[player];
                prestige = p.prestige;
                named = p.id != 0;
                auto rank = [](bool offline, int level, int prestige, const std::string& played) {
                    return std::string(offline ? "Offline" : "Online") + ": rank " + std::to_string(level) + ", prestige " +
                           std::to_string(prestige) + ", last played " + played + ".";
                };
                who = named ? p.name + (p.first ? ", player 1." : ".") : std::string("Stats of no profile.");
                if (p.file.empty()) who += "\nNot played yet.";
                else who += "\n" + rank(p.offline, p.level, p.prestige, p.played);
                for (const profile::Player::Other& other : p.also)
                    who += "\n" + rank(other.offline, other.level, other.prestige, other.played);
            }
            // The game keeps the profile in memory and writes it when it ends,
            // over anything changed here meanwhile.
            const std::string close = gameRunning ? "\n\nTHE GAME IS RUNNING. Close it to change the profile." : "";
            if (players.size() > 1)
                add(Action::NextPlayer, "PLAYER " + std::to_string(player + 1) + " OF " + std::to_string(players.size()), true, "PLAYER",
                    who + "\n\nSeveral players have played here. Choose to go to the next one.");
            add(Action::Rename, "RENAME", named && !gameRunning, "NAME",
                renaming ? "New name: " + newName + "_\n\nENTER keeps it, ESC leaves the name as it was."
                         : who + "\n\n" + (named ? "Type a new name for this profile with the keyboard. On Steam, other players see the Steam name."
                                                  : "No profile owns these stats any more: they are from a version of the game before profiles, or from a profile since deleted.") + close);
            const bool isFirst = named && players[player].first;
            add(Action::PlayAs, isFirst ? "PLAYER 1" : "PLAY AS", named && !isFirst && !gameRunning, "PLAYER 1",
                who + "\n\n" + (isFirst ? "This profile plays at the first controller: the campaign's and the multiplayer's player. Choose another profile here to play as that one."
                                        : named ? "Puts this profile at the first controller, from the game's next start."
                                                : "Only a profile can be put at the first controller.") + close);
            add(Action::MaxRank, "MAX RANK", any, "MULTIPLAYER RANK", who + "\n\nSets the rank to 70, online and offline, which unlocks every weapon, perk and equipment." + close);
            add(Action::Prestige, "PRESTIGE " + std::to_string(prestige), any, "PRESTIGE",
                who + "\n\nEach choice is one prestige more; after " + std::to_string(profile::MaxPrestige()) + " it is 0 again. The rank stays." + close);
            add(Action::UnlockEverything, "UNLOCK EVERYTHING", any, "CHALLENGES AND UNLOCKS",
                who + "\n\nMarks every challenge as done, which gives every attachment and camouflage, and unlocks every title, emblem and killstreak." + close);

            const std::string progress = campaign.found
                ? "Special Ops: " + std::to_string(campaign.stars) + " of 69 stars."
                : std::string("No campaign profile yet: start the campaign once first.");
            add(Action::UnlockMissions, "UNLOCK ALL MISSIONS", campaign.found && !gameRunning, "CAMPAIGN",
                progress + "\n\nOpens every mission of the campaign in the mission list." + close)->shown.ruleAbove = true;
            add(Action::AllStars, "ALL SPEC OPS STARS", campaign.found && !gameRunning, "SPECIAL OPS",
                progress + "\n\nGives every Special Ops mission its three stars, which opens all of them." + close);
            add(Action::Back, "BACK", true, "", "A file is copied to <name>.backup, beside it under saves/, before its first change.")->shown.ruleAbove = true;
            return entries;
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

            // Two seconds in, the game has had time to appear among the processes;
            // the title one starts from its menus is running before it ends itself.
            if (recording && std::chrono::steady_clock::now() - gameChecked > std::chrono::seconds(1))
            {
                gameChecked = std::chrono::steady_clock::now();
                if (gameChecked - recordingSince > std::chrono::seconds(2) && !GameRunning()) FinishReport();
            }

            if (profileScreen && std::chrono::steady_clock::now() - gameChecked > std::chrono::seconds(1))
            {
                const bool was = gameRunning;
                gameRunning = GameRunning();
                gameChecked = std::chrono::steady_clock::now();
                // It has ended and written its files: read them again.
                if (was && !gameRunning) ReadProfile();
            }

            if (job && job->finished && job->kind != Job::Kind::Install)
            {
                job->thread.join();
                const setup::Result result = job->result;
                messageIsError = result == setup::Result::Failed;
                if (job->kind == Job::Kind::CheckUpdate)
                {
                    newer = result == setup::Result::Done;
                    message = newer                               ? ""
                              : result == setup::Result::Failed   ? job->error
                                                                  : std::string("This is the newest version, ") + update::Current() + ".";
                }
                else if (result == setup::Result::Done)
                {
                    // The new launcher takes over from here.
                    if (Start(kLauncher)) quit = true;
                    else message = "The new version is installed. Start the launcher again.";
                    newer = false;
                }
                else message = result == setup::Result::Cancelled ? "The update was stopped. Nothing was changed." : job->error;
                job.reset();
            }

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
            if (pendingReport)
            {
                // The launcher was ended with the game, as Steam's "Exit game" does.
                std::vector<Entry> entries(2);
                entries[0].shown.label = "YES";
                entries[0].action = Action::SendPending;
                entries[1].shown.label = "NO";
                entries[1].action = Action::DiscardPending;
                for (Entry& entry : entries)
                {
                    entry.heading = "A BUG REPORT WASN'T SENT";
                    entry.text = "The game was recorded for a bug report, and the report was not sent. Send it now?\n\n"
                                 "YES makes the report and opens the page to send it on. NO throws the recording away.";
                }
                return entries;
            }
            if (profileScreen) return ProfileEntries();
            if (reportScreen) return ReportEntries();
            std::vector<Entry> entries;
            auto add = [&](Action action, std::string label, bool enabled, const char* heading, std::string text) {
                Entry entry;
                entry.shown.label = std::move(label);
                entry.shown.enabled = enabled;
                entry.action = enabled ? action : Action::None;
                entry.heading = heading;
                entry.text = std::move(text);
                entries.push_back(std::move(entry));
                return &entries.back();
            };
            if (job)
            {
                add(Action::Cancel, "CANCEL", true, job->kind == Job::Kind::Install ? "INSTALLING" : "UPDATES", "");
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

            add(Action::Profile, "PROFILE", true, "PROFILE",
                "Set the multiplayer rank and prestige, unlock everything, and open the campaign's and Special Ops' missions.");
            {
                static const char* const kSizes[] = { "720P", "1440P", "4K" };
                const int scale = settings::Scale();
                add(Action::Resolution, std::string("RESOLUTION ") + kSizes[scale - 1], true, "RESOLUTION",
                    std::string("The size the game draws at, whatever the window's: now ") + std::to_string(1280 * scale) + "x" +
                    std::to_string(720 * scale) + (scale == 1 ? ", the console's own." : ".") +
                    "\n\nChoose to go to the next: 720p, 1440p, 4K. A larger one is sharper and needs a faster graphics card: "
                    "1440p draws four times the pixels and 4K nine times."
                    "\n\nIt applies to the campaign and the multiplayer, from the next time either is started.");
            }
            // What an install is for, once there is more than playing it.
            add(Action::None, "MAPS", false, "MAPS", "Add and remove custom maps.\n\nNot available yet.")->shown.tag = "SOON";
            // A build nobody released has no version to compare.
            const bool released = *update::Current() != 0;
            if (newer)
                add(Action::InstallUpdate, "UPDATE TO " + release.version, true, "UPDATES",
                    "Version " + release.version + " is out; this is " + update::Current() + ".\n\n"
                    "It is downloaded (" + std::to_string((release.size + 500000) / 1000000) + " MB) and put in place of this one, "
                    "and the launcher starts again. The game's files and your saves stay as they are.")->shown.ruleAbove = true;
            else
                add(Action::CheckUpdate, "CHECK FOR UPDATES", released, "UPDATES",
                    released ? std::string("Look for a newer version than this one, ") + update::Current() + "."
                             : std::string("This build was not made as a release, so there is no version to compare."))->shown.ruleAbove = true;
            add(Action::Report, "REPORT A BUG", true, "REPORT A BUG",
                "Something wrong with the game? Send the game's report data to GitHub.\n\nA GitHub account is required.");
            add(Action::Quit, "QUIT", true, "", "")->shown.ruleAbove = true;
            return entries;
        }
    };

    int Window(const std::string& updated)
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
        app.updated = updated;
        app.pendingReport = report::Pending() && !GameRunning();
        while (!app.quit)
        {
            SDL_Event event;
            const bool wasRenaming = app.renaming;
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
                // A profile's new name, typed.
                if (app.renaming) app.Type(event);
                if (event.type == SDL_EVENT_DROP_FILE && event.drop.data)
                    app.Take(app.needsUpdateFile ? Action::ChooseUpdate : Action::Install, event.drop.data);
            }
            app.Poll();
            // The key that ended the typing is not also a choice.
            const bool typed = wasRenaming && !app.renaming;

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
            const int focusBefore = app.focus;
            auto pressed = [](std::initializer_list<ImGuiKey> keys, bool repeat) {
                for (ImGuiKey key : keys)
                    if (ImGui::IsKeyPressed(key, repeat)) return true;
                return false;
            };
            if (pressed({ ImGuiKey_DownArrow, ImGuiKey_GamepadDpadDown, ImGuiKey_GamepadLStickDown }, true)) app.focus = (app.focus + 1) % count;
            if (pressed({ ImGuiKey_UpArrow, ImGuiKey_GamepadDpadUp, ImGuiKey_GamepadLStickUp }, true)) app.focus = (app.focus + count - 1) % count;
            app.focus = std::clamp(app.focus, 0, count - 1);
            int chosen = pressed({ ImGuiKey_Enter, ImGuiKey_KeypadEnter, ImGuiKey_Space, ImGuiKey_GamepadFaceDown }, false) ? app.focus : -1;
            // While a name is typed the keys are its letters, and the entry stays.
            if (app.renaming || typed) { app.focus = focusBefore; chosen = -1; }
            if (app.renaming || typed) {}
            else if (app.job && pressed({ ImGuiKey_Escape, ImGuiKey_GamepadFaceRight }, false)) app.job->progress.cancel = true;
            else if ((app.profileScreen || (app.reportScreen && !app.recording)) && pressed({ ImGuiKey_Escape, ImGuiKey_GamepadFaceRight }, false))
            {
                app.Do(Action::Back);
                ImGui::EndFrame();
                continue;
            }

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
                frame.text = progress.cancel                            ? "Stopping..."
                             : app.job->kind == Job::Kind::CheckUpdate ? "Looking for a newer version..."
                             : app.job->kind == Job::Kind::InstallUpdate ? "The launcher starts again when it is done."
                                                                         : "Stopping and starting again later carries on where it left off.";
            }
            else if (app.reportScreen ? !app.message.empty() && !app.recording && (app.messageFocus < 0 || app.focus == app.messageFocus)
                     : app.profileScreen ? !app.message.empty() && app.focus == app.messageFocus
                                       : !app.message.empty() && (current.action == Action::Install || current.action == Action::ChooseUpdate ||
                                                                  current.action == Action::CheckUpdate || current.action == Action::InstallUpdate || app.messageIsError))
            {
                frame.text = app.message;
                frame.error = app.messageIsError;
            }
            else frame.text = current.text;
            frame.status = app.state == setup::State::Installed     ? "The game is installed."
                           : app.state == setup::State::NeedsUpdate ? "The game is installed from the disc and needs title update 6."
                                                                    : "The game is not installed.";
            frame.corner = setup::UsesUpdate() ? "TITLE UPDATE 6" : "DISC VERSION 1.0.557";
            if (*update::Current()) frame.corner = std::string(update::Current()) + "   " + frame.corner;
            if (!app.updated.empty()) frame.status = "Updated to " + app.updated + ". " + frame.status;
            frame.hint = app.recording                          ? ""
                         : app.profileScreen || app.reportScreen ? "ENTER OR (A) TO CHOOSE, ESC OR (B) TO GO BACK"
                                                                 : "ENTER OR (A) TO CHOOSE";

            const int pointed = ui::Draw(fonts, frame, scale, app.focus);
            if (pointed >= 0) chosen = pointed;
            // Reading a message dismisses it: the next move shows the entries' own text again.
            if (chosen >= 0 && !app.messageIsError) app.message.clear();
            if (chosen >= 0 && chosen != app.focus) app.focus = chosen;
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
    const bool upgrade = arguments.size() == 1 && arguments[0] == "--upgrade";
    bool usage = !arguments.empty() && arguments[0] != "--install" && !upgrade;
    for (size_t i = 1; i < arguments.size() && !usage; i++)
    {
        const std::string text = Utf8(arguments[i]);
        if (text == "--update" && i + 1 < arguments.size()) update = fs::absolute(arguments[++i], ec);
        else if (text[0] != '-' && disc.empty()) disc = fs::absolute(arguments[i], ec);
        else usage = true;
    }
    if (const char* base = SDL_GetBasePath()) fs::current_path(FromUtf8(base), ec);

    // What the last update left behind goes, now that the launcher it
    // replaced has ended.
    const std::string updated = update::Finish();
    settings::Load();
    if (!arguments.empty())
    {
        if (usage)
        {
            std::fprintf(stderr, "usage: %s --install [<disc image or extracted disc folder>] [--update <package or folder>]\n"
                                 "       %s --upgrade\n", argv[0], argv[0]);
            return 2;
        }
        if (upgrade) return UpgradeInTerminal();
        return InstallInTerminal(disc, update);
    }
    return Window(updated);
}
