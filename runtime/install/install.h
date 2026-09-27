#pragma once
// How a player starts the game: with no arguments. The executable works from
// its own folder, where the game's files are installed into game/ from the
// player's disc, once, the first time either executable starts -- or by
// `--install <disc image or folder>` from a terminal.
//
// A run given an image and a game folder on the command line is a
// development run and skips all of this.
#include <cstdint>
#include <filesystem>
#include <vector>

namespace install
{
    struct Launch
    {
        std::vector<uint8_t> image;         // the title's memory image
        std::filesystem::path gameRoot;
    };

    // True when the command line asks for a player's start.
    bool PlayerStart(int argc, char** argv);

    // Installs if asked or needed, then loads the title. Returns false when the
    // run should end, with `exitCode` saying how; a failure has been shown.
    bool Prepare(int argc, char** argv, Launch& launch, int& exitCode);

    // A development run's image: a flat PE, or an XEX decrypted on the way in.
    bool LoadImageFile(const std::filesystem::path& path, std::vector<uint8_t>& image);

    // ---- installing from somewhere other than a terminal or a desktop -----
    // Android has no current directory a player can reach and no file dialog
    // of this runtime's; the app picks the disc image and says where the
    // files go, and drives the copy itself.

    // Where the game's files are, "game" under the current directory unless
    // this says otherwise. Set before anything else in this namespace.
    void SetGameFolder(const std::filesystem::path& folder);
    const std::filesystem::path& GameFolder();

    // Whether that folder holds this build's executable: the check a launcher
    // makes before offering to play.
    bool Installed();

    // Copies the game out of `from` -- a disc image or an extracted disc
    // folder -- into the game folder, checking the executables against the
    // disc this build was recompiled from. Returns false with `error` set,
    // which is a sentence to show a player. `report` is called from a thread
    // of this function's while the copy runs.
    using Report = void (*)(const char* file, uint64_t done, uint64_t total, void* user);
    bool InstallFrom(const std::filesystem::path& from, std::string& error,
                     Report report = nullptr, void* user = nullptr);
    // Stops the copy going on now, if there is one. What was copied stays,
    // and the next install carries on from there.
    void CancelInstall();
}
