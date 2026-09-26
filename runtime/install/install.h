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
}
