#include "settings.h"

#include <algorithm>
#include <cstdlib>
#include <fstream>
#include <map>
#include <string>

namespace
{
    constexpr const char* kFile = ".env";
    // Every line, so the ones a player wrote by hand are written back.
    std::map<std::string, std::string> g_kept;
}

void settings::Load()
{
    std::ifstream file(kFile);
    for (std::string line; std::getline(file, line);)
    {
        while (!line.empty() && (line.back() == '\r' || line.back() == ' ')) line.pop_back();
        const size_t equals = line.find('=');
        if (equals == std::string::npos) continue;
        const std::string name = line.substr(0, equals), value = line.substr(equals + 1);
        g_kept[name] = value;
    }
}

int settings::Scale()
{
    const auto kept = g_kept.find("MW2_SCALE");
    return std::clamp(kept == g_kept.end() ? 1 : std::atoi(kept->second.c_str()), 1, kMaxScale);
}

void settings::SetScale(int scale)
{
    g_kept["MW2_SCALE"] = std::to_string(std::clamp(scale, 1, kMaxScale));
    std::ofstream file(kFile, std::ios::trunc);
    for (const auto& [name, value] : g_kept) file << name << '=' << value << '\n';
}
