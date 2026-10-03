#pragma once
// One file over HTTPS, with what the system already has: Windows' own URL
// download, and the curl program everywhere else.
#include <filesystem>
#include <string>

namespace install
{
    // Blocks until `url` is in `to` or the attempt failed; `error` says why.
    bool Download(const std::string& url, const std::filesystem::path& to, std::string& error);
}
