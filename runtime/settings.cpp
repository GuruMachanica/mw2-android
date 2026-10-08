#include "settings.h"

#include <cstdlib>
#include <fstream>

std::string settings::Load(const std::filesystem::path& path)
{
    std::string set;
    std::ifstream file(path);
    for (std::string line; std::getline(file, line);)
    {
        while (!line.empty() && (line.back() == '\r' || line.back() == ' ')) line.pop_back();
        const size_t equals = line.find('=');
        // The runtime's own switches, not a way to set any variable at all.
        if (equals == std::string::npos || line.rfind("MW2_", 0) != 0) continue;
        const std::string name = line.substr(0, equals), value = line.substr(equals + 1);
        if (std::getenv(name.c_str())) continue;
#ifdef _WIN32
        _putenv_s(name.c_str(), value.c_str());
#else
        setenv(name.c_str(), value.c_str(), 0);
#endif
        set += (set.empty() ? "" : " ") + line;
    }
    return set;
}
