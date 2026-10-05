#pragma once
// A newer release of these programs: looked for when the player asks, and
// put in place of the running ones.
//
// GitHub describes the newest published release at a fixed address: its tag,
// and each archive's name, size, SHA-256 and address.
// The archive for this build's system and online service is downloaded,
// checked, unpacked with the system's tar, and its files swapped in; the ones
// they replace wait in update/ until the next start removes it, since a
// running program can be moved aside but not deleted.
#include "setup.h"

#include <cstdint>
#include <string>

namespace update
{
    // The release this build is, or empty: a build nobody released has
    // nothing to compare with and does not update.
    const char* Current();
    // Its system and online service, "linux-steam".
    const char* Kind();

    struct Release
    {
        std::string version, archive, sha256, url;
        uint64_t size = 0;
    };
    enum class Check { Newer, UpToDate, Failed };
    Check Look(Release& release, std::string& error);

    // Blocks until the release is in place, or says why not. The caller
    // starts the new launcher.
    setup::Result Install(const Release& release, setup::Progress& progress, std::string& error);

    // Removes what the last update left. Returns the version it installed
    // when this is the first start since.
    std::string Finish();
}
