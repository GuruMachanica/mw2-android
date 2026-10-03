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

    // Loads the installed title. Returns false when the run should end, with
    // `exitCode` saying how: the launcher was started, or a failure was shown.
    bool Prepare(int argc, char** argv, Launch& launch, int& exitCode);

    // A development run's image: a flat PE, or an XEX decrypted on the way in.
    bool LoadImageFile(const std::filesystem::path& path, std::vector<uint8_t>& image);
}
