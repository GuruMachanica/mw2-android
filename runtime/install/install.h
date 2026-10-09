#pragma once
// How a player starts the game: with no arguments. The executable works from
// its own folder, where the launcher (launcher/) installed the game's files
// into game/. With no install there, or another version's, it starts the
// launcher instead.
//
// A run given an image and a game folder on the command line is a
// development run and skips all of this.
#include <cstdint>
#include <filesystem>
#include <string>
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

    // The folder this start runs in: the executable's for a player's start,
    // which Prepare moves to, and the current directory (empty) otherwise.
    std::filesystem::path Folder(int argc, char** argv);

    // Loads the installed title. Returns false when the run should end, with
    // `exitCode` saying how: the launcher was started, or a failure was shown.
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

    // The data one executable of the title leaves for the next (the console's
    // XamLoaderSetLaunchData): the campaign and the multiplayer are two
    // programs here as there, and it crosses from one to the other in the
    // environment. Empty when nothing left any.
    std::vector<uint8_t>& LaunchData();

    // What the title asked to be started in its place, by the executable's
    // name on the disc ("default_mp.xex"), and the start itself, made once
    // this run has let go of the window and the sound.
    void SetNextTitle(const std::string& xex);
    void StartNextTitle();
}
