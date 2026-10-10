#include "report.h"
#include "disc.h"
#include "setup.h"
#include "update.h"
#include "spawn.h"

#ifdef _WIN32
#include <windows.h>
#else
#include <sys/utsname.h>
#endif
#include <SDL3/SDL.h>

#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <fstream>
#include <regex>
#include <sstream>
#include <vector>

namespace fs = std::filesystem;
using install::Utf8;

namespace
{
    constexpr const char* kFolder = "reports";
    constexpr const char* kLog = "reports/run.log";
    constexpr const char* kNewIssue = "https://github.com/PaulCombal/mw2-recompiled/issues/new";

    void ReplaceAll(std::string& text, const std::string& what, const std::string& with)
    {
        if (what.empty()) return;
        for (size_t at = text.find(what); at != std::string::npos; at = text.find(what, at + with.size()))
            text.replace(at, what.size(), with);
    }

    // The folder both ways it can be spelt in a log.
    void ReplaceFolder(std::string& text, const fs::path& folder, const char* with)
    {
        if (folder.empty()) return;
        fs::path native = folder;
        ReplaceAll(text, Utf8(native.make_preferred()), with);
        ReplaceAll(text, folder.generic_string(), with);
    }

    // An address inside a home or office network says which kind of connection
    // it is on and nothing about whose: every router hands out the same ones.
    // Its first half stays, since that is what tells a real connection from
    // one a virtual machine or a VPN added. Any other address goes entirely.
    std::string Addresses(const std::string& line, const std::regex& address)
    {
        std::string out;
        size_t from = 0;
        for (std::sregex_iterator at(line.begin(), line.end(), address), end; at != end; ++at)
        {
            unsigned a = 0, b = 0;
            std::sscanf(at->str().c_str(), "%u.%u", &a, &b);
            std::string kept = "<address>";
            if (a == 10 || a == 127) kept = std::to_string(a) + ".x.x.x";
            else if ((a == 192 && b == 168) || (a == 172 && b >= 16 && b <= 31) || (a == 169 && b == 254))
                kept = std::to_string(a) + "." + std::to_string(b) + ".x.x";
            out += line.substr(from, size_t(at->position()) - from) + kept;
            from = size_t(at->position() + at->length());
        }
        return out + line.substr(from);
    }

    // The log without what says who the player is.
    std::string Scrub(std::istream& log)
    {
        static const std::regex name("as \"([^\"]*)\""), address("\\b\\d{1,3}(\\.\\d{1,3}){3}\\b"),
            account("(u:|mpdata_|user[/\\\\])[0-9a-fA-F]{16}"), number("\\b[0-9a-fA-F]{16}\\b"),
            connect("\"connect [^\"]*\"?");
        std::error_code ec;
        const fs::path here = fs::current_path(ec);
        fs::path home;
        if (const char* folder = std::getenv("USERPROFILE")) home = install::FromUtf8(folder);
        else if (const char* folder = std::getenv("HOME")) home = install::FromUtf8(folder);

        std::string out, line, player;
        while (std::getline(log, line))
        {
            if (!line.empty() && line.back() == '\r') line.pop_back();
            const bool online = line.find("] online:") != std::string::npos;
            std::smatch found;
            if (online && std::regex_search(line, found, name)) player = found[1];
            if (online)
            {
                ReplaceAll(line, player, "<player>");
                line = std::regex_replace(line, connect, "\"connect <removed>\"");
                line = std::regex_replace(line, number, "<id>");
                // Whoever else is named: the other end of a join or an invitation.
                for (const char* verb : { " lan joins ", " lan invites ", " lan accepts " })
                    if (const size_t at = line.find(verb); at != std::string::npos)
                        line = line.substr(0, at + std::strlen(verb)) + "<removed>";
                if (const size_t at = line.find(" invites you"); at != std::string::npos)
                    line = line.substr(0, line.find("online: ") + 8) + "<removed>" + line.substr(at);
            }
            line = Addresses(line, address);
            line = std::regex_replace(line, account, "$1<id>");
            ReplaceFolder(line, here, "<game folder>");
            ReplaceFolder(line, home, "<home>");
            out += line + "\n";
        }
        return out;
    }

    std::string FirstLine(const std::string& text, const char* marker)
    {
        const size_t at = text.find(marker);
        if (at == std::string::npos) return {};
        const size_t from = at + std::strlen(marker), end = text.find('\n', from);
        return text.substr(from, end == std::string::npos ? end : end - from);
    }

#ifdef _WIN32
    std::string Registry(const wchar_t* key, const wchar_t* value)
    {
        wchar_t text[256];
        DWORD size = sizeof(text);
        if (RegGetValueW(HKEY_LOCAL_MACHINE, key, value, RRF_RT_REG_SZ, nullptr, text, &size) != ERROR_SUCCESS) return {};
        return Utf8(fs::path(text));
    }
#endif

    std::string System()
    {
#ifdef _WIN32
        const wchar_t* key = L"SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion";
        std::string name = Registry(key, L"ProductName");
        const std::string build = Registry(key, L"CurrentBuild");
        // Windows 11 still calls itself 10 there; the build number tells them apart.
        if (std::atoi(build.c_str()) >= 22000) ReplaceAll(name, "Windows 10", "Windows 11");
        return name + " " + Registry(key, L"DisplayVersion") + " (build " + build + ")";
#else
        std::string name = "Linux";
        std::ifstream release("/etc/os-release");
        for (std::string line; std::getline(release, line);)
            if (line.rfind("PRETTY_NAME=", 0) == 0)
            {
                name = line.substr(12);
                ReplaceAll(name, "\"", "");
            }
        utsname kernel{};
        if (uname(&kernel) == 0) name += std::string(", kernel ") + kernel.release;
        const char* desktop = std::getenv("XDG_CURRENT_DESKTOP");
        const char* session = std::getenv("XDG_SESSION_TYPE");
        if (desktop || session) name += std::string(", ") + (desktop ? desktop : "") + (desktop && session ? " on " : "") + (session ? session : "");
        return name;
#endif
    }

    std::string Processor()
    {
        std::string name;
#ifdef _WIN32
        name = Registry(L"HARDWARE\\DESCRIPTION\\System\\CentralProcessor\\0", L"ProcessorNameString");
#else
        std::ifstream cpu("/proc/cpuinfo");
        for (std::string line; std::getline(cpu, line);)
            if (line.rfind("model name", 0) == 0 && line.find(':') != std::string::npos)
            {
                name = line.substr(line.find(':') + 2);
                break;
            }
#endif
        while (!name.empty() && name.back() == ' ') name.pop_back();
        if (name.empty()) name = "unknown";
        return name + ", " + std::to_string(SDL_GetNumLogicalCPUCores()) + " threads";
    }

    std::string Displays()
    {
        std::string all;
        int count = 0;
        if (SDL_DisplayID* displays = SDL_GetDisplays(&count))
        {
            for (int i = 0; i < count; i++)
                if (const SDL_DisplayMode* mode = SDL_GetCurrentDisplayMode(displays[i]))
                {
                    char text[64];
                    std::snprintf(text, sizeof(text), "%s%dx%d at %.0f Hz", all.empty() ? "" : ", ", mode->w, mode->h, mode->refresh_rate);
                    all += text;
                }
            SDL_free(displays);
        }
        return all.empty() ? "unknown" : all;
    }

    std::string Encoded(const std::string& text)
    {
        std::string out;
        for (const unsigned char c : text)
        {
            if (std::isalnum(c) || c == '-' || c == '_' || c == '.' || c == '~') out += char(c);
            else
            {
                char code[4];
                std::snprintf(code, sizeof(code), "%%%02X", c);
                out += code;
            }
        }
        return out;
    }

    std::string FileAddress(const fs::path& path)
    {
        std::string address = "file://";
        const std::string text = path.generic_string();
        if (text.empty() || text[0] != '/') address += '/';     // a drive letter
        for (const unsigned char c : text)
        {
            if (std::isalnum(c) || std::strchr("-_.~/:", c)) address += char(c);
            else
            {
                char code[4];
                std::snprintf(code, sizeof(code), "%%%02X", c);
                address += code;
            }
        }
        return address;
    }
}

bool report::Start(const char* program, std::string& error)
{
    std::error_code ec;
    fs::create_directories(kFolder, ec);
    fs::remove(kLog, ec);
    const std::string path = Utf8(fs::absolute(program, ec)), log = Utf8(fs::absolute(kLog, ec));
    const char* const args[] = { path.c_str(), nullptr };
    // A copy: what is set here must not reach a game started the plain way later.
    SDL_Environment* environment = SDL_CreateEnvironment(true);
    SDL_SetEnvironmentVariable(environment, "MW2_REPORT", "1", true);
    SDL_SetEnvironmentVariable(environment, "MW2_LOG_FILE", log.c_str(), true);
    SDL_Process* process = spawn::Start(args, environment);
    SDL_DestroyEnvironment(environment);
    if (!process) { error = std::string(program) + " could not be started: " + SDL_GetError(); return false; }
    SDL_DestroyProcess(process);
    return true;
}

bool report::Pending()
{
    std::error_code ec;
    return fs::is_regular_file(kLog, ec);
}

void report::Discard()
{
    std::error_code ec;
    fs::remove(kLog, ec);
}

bool report::Make(Made& made, std::string& error)
{
    std::ifstream raw(kLog, std::ios::binary);
    if (!raw) { error = "The game left no log, so there is nothing to report. Did it start?"; return false; }
    const std::string log = Scrub(raw);
    raw.close();

    // The log's first line says which game wrote it.
    const char* what = log.find("runtime (multiplayer") < log.find('\n') ? "Multiplayer" : "Campaign";
    const bool fault = log.find("[E] ----") != std::string::npos;
    std::string version = *update::Current() ? update::Current() : "a development build";
    if (*update::Kind()) version += std::string(" ") + update::Kind();
    std::string graphics = FirstLine(log, "] report: graphics ");
    if (graphics.empty()) graphics = "unknown (the game did not get as far as the graphics device)";

    std::string system;
    system += "- Version: " + version + (setup::UsesUpdate() ? ", title update 6" : ", disc version") + "\n";
    system += std::string("- Game: ") + what + (fault ? ", the run ended on a fault" : ", the run ended normally") + "\n";
    system += "- System: " + System() + "\n";
    system += "- Processor: " + Processor() + "\n";
    system += "- Memory: " + std::to_string((SDL_GetSystemRAM() + 512) / 1024) + " GB\n";
    system += "- Graphics: " + graphics + "\n";
    system += "- Display: " + Displays() + "\n";
    // How the run performed, as the game summed it up.
    std::string performance;
    {
        std::istringstream lines(log);
        for (std::string line; std::getline(lines, line);)
            if (const size_t at = line.find("] report: "); at != std::string::npos && line.find("report: graphics") == std::string::npos)
                performance += "- " + line.substr(at + 10) + "\n";
    }

    char stamp[32];
    const std::time_t now = std::time(nullptr);
    std::strftime(stamp, sizeof(stamp), "%Y%m%d-%H%M%S", std::localtime(&now));
    const std::string name = std::string("mw2-report-") + stamp + ".txt";
    std::error_code ec;
    made.file = fs::absolute(fs::path(kFolder) / name, ec);
    {
        std::ofstream file(made.file, std::ios::binary);
        file << "Modern Warfare 2 recompiled: bug report\n\n" << system << performance << "\n---- log ----\n" << log;
        if (!file) { error = "The report could not be written to " + Utf8(made.file) + "."; return false; }
    }
    // The log as the game wrote it says who the player is.
    fs::remove(kLog, ec);

    // The body given here takes the place of the repository's own text for
    // a new issue (.github/ISSUE_TEMPLATE/issue.md), which sends people to this.
    const std::string body =
        "**What happened?**\n\n<!-- Describe the problem here: what you did, what you expected, what you saw. -->\n\n\n"
        "**The report file**\n\n<!-- Drag " + name + " into this box. The launcher opened the folder it is in. -->\n\n\n"
        "**System** (filled in by the launcher)\n\n" + system + performance;
    made.page = std::string(kNewIssue) + "?template=issue.md&title=" + Encoded(std::string(what) + (fault ? ": crash " : ": ")) + "&body=" + Encoded(body);
    return true;
}

bool report::Open(const Made& made)
{
    SDL_OpenURL(FileAddress(made.file.parent_path()).c_str());
    return SDL_OpenURL(made.page.c_str());
}
