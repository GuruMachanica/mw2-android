#pragma once
// What the player set in the launcher (launcher/settings.cpp) or wrote by
// hand, kept in the file .env as a line each of NAME=value. Any MW2_ switch
// can be there (docs/switches.md).
#include <filesystem>
#include <string>

namespace settings
{
    // Puts the file's switches in the environment, where the rest of the
    // runtime reads them. One already set there is left as it is, so a
    // switch given on the command line still decides. Called once, before
    // anything reads a switch. Returns what it set, for the log.
    std::string Load(const std::filesystem::path& file);
}
