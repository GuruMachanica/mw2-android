#pragma once
// Installing the game: the files from the player's disc into game/ beside the
// launcher, and title update 6 applied to the two executables, which is the
// version the game executables are built from. (A build of the disc version,
// MW2_VERSION_TU0, installs the disc as it is.)
#include <atomic>
#include <cstdint>
#include <filesystem>
#include <mutex>
#include <string>

namespace setup
{
    enum class State
    {
        NotInstalled,
        NeedsUpdate,    // the disc's executables are in game/: the update is all that is missing
        Installed,
    };
    // What game/ holds, by the executables in it.
    State Detect();

    struct Progress
    {
        std::mutex lock;
        int step = 0, steps = 0;        // 1-based, of how many
        std::string title;              // what the step does
        std::string detail;             // the file being copied, when there is one
        uint64_t done = 0, total = 0;   // bytes, when the step has an amount
        std::atomic<bool> cancel{ false };
    };

    enum class Result
    {
        Done,
        Cancelled,
        Failed,
        NoUpdate,       // the update could not be downloaded: the player supplies the file
    };

    // Installs from `disc` (an image or an extracted folder), or brings the
    // install already in game/ up to date when `disc` is empty. `update` is the
    // title update's package or a folder with its files; empty downloads it.
    // `error` is set for Failed and NoUpdate.
    Result Run(const std::filesystem::path& disc, const std::filesystem::path& update, Progress& progress,
               std::string& error);

    // Where the update is downloaded from, to tell a player who has to fetch it.
    const char* UpdateUrl();
    // True in a build that installs an update at all.
    bool UsesUpdate();
    std::filesystem::path GameFolder();
}
