#pragma once
// A title update's package: the console's content container (STFS), of the
// read-only kind a downloaded update is (LIVE or PIRS), as tools/stfs.py reads
// it.
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace install
{
    // The files at the root of the package, by name. False, with `error`
    // saying why, for anything that is not such a package.
    bool ReadPackage(const std::vector<uint8_t>& package, std::map<std::string, std::vector<uint8_t>>& files,
                     std::string& error);
}
