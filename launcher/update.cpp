#include "update.h"
#include "disc.h"
#include "download.h"
#include "../runtime/install/crypto.h"
#include "../runtime/install/spawn.h"

#include <SDL3/SDL.h>

#include <cstdio>
#include <cstdlib>
#include <fstream>
#include <iterator>
#include <utility>
#include <vector>

namespace fs = std::filesystem;
using install::Utf8;

namespace
{
#ifndef MW2_RELEASE_TAG
#define MW2_RELEASE_TAG ""
#endif
#ifndef MW2_RELEASE_KIND
#define MW2_RELEASE_KIND ""
#endif
    // An archive is mw2-<tag>-<system>-<online service>, as the workflow names it.
#ifdef _WIN32
    constexpr const char* kArchiveEnd = "-" MW2_RELEASE_KIND ".zip";
#else
    constexpr const char* kArchiveEnd = "-" MW2_RELEASE_KIND ".tar.gz";
#endif
    // GitHub's description of the newest published release: its tag, and for
    // each archive its name, size, SHA-256 and address.
    constexpr const char* kNewest = "https://api.github.com/repos/PaulCombal/mw2-recompiled/releases/latest";
    constexpr const char* kPage = "https://github.com/PaulCombal/mw2-recompiled/releases";
    const fs::path kFolder = "update";
    const fs::path kDone = kFolder / "installed";      // holds the version, for the next start to say

    // MW2_UPDATE_URL names another description of the same form, a mirror's or a test's file.
    std::string Newest()
    {
        const char* other = std::getenv("MW2_UPDATE_URL");
        return other && *other ? other : kNewest;
    }

    // The value of the first `"key":` at or after `from` in a JSON text, as
    // written: a string without its quotes, or a number. The description's
    // strings here -- a tag, a file name, a digest, an address -- hold
    // nothing escaped.
    std::string Value(const std::string& json, const char* key, size_t from = 0)
    {
        const std::string quoted = std::string("\"") + key + "\"";
        size_t at = json.find(quoted, from);
        if (at == std::string::npos) return "";
        at = json.find(':', at + quoted.size());
        if (at == std::string::npos) return "";
        at = json.find_first_not_of(" \t\r\n", at + 1);
        if (at == std::string::npos) return "";
        if (json[at] == '"')
        {
            const size_t end = json.find('"', at + 1);
            return end == std::string::npos ? "" : json.substr(at + 1, end - at - 1);
        }
        return json.substr(at, json.find_first_of(",}\r\n ", at) - at);
    }

    // "v1.2.3" as numbers; a tag that is not one compares as older than any.
    std::vector<int> Numbers(const std::string& tag)
    {
        std::vector<int> numbers;
        size_t at = !tag.empty() && tag[0] == 'v' ? 1 : 0;
        while (at < tag.size())
        {
            if (tag[at] < '0' || tag[at] > '9') return {};
            int number = 0;
            for (; at < tag.size() && tag[at] >= '0' && tag[at] <= '9'; at++) number = number * 10 + (tag[at] - '0');
            numbers.push_back(number);
            if (at < tag.size() && tag[at++] != '.') return {};
        }
        return numbers;
    }

    bool Sha256Of(const fs::path& path, std::string& hex)
    {
        std::ifstream in(path, std::ios::binary);
        if (!in) return false;
        install::crypto::Sha256 hash;
        std::vector<char> block(1 << 20);
        while (in.read(block.data(), std::streamsize(block.size())) || in.gcount() > 0)
            hash.Update(block.data(), size_t(in.gcount()));
        hex = hash.FinalHex();
        return true;
    }

    // Windows 10 and later have tar as every other system does, and theirs
    // reads a .zip.
    bool Unpack(const fs::path& archive, const fs::path& into, std::string& error)
    {
        const std::string from = Utf8(archive), to = Utf8(into);
        const char* const args[] = { "tar", "-xf", from.c_str(), "-C", to.c_str(), nullptr };
        SDL_Process* process = spawn::Start(args);
        if (!process) { error = "The update could not be unpacked: there is no tar program on this system."; return false; }
        int code = -1;
        SDL_WaitProcess(process, true, &code);
        SDL_DestroyProcess(process);
        if (code != 0) { error = "The update could not be unpacked (tar's exit code " + std::to_string(code) + ")."; return false; }
        return true;
    }

    void Step(setup::Progress& progress, int step, const char* title)
    {
        std::lock_guard lock(progress.lock);
        progress.step = step;
        progress.steps = 3;
        progress.title = title;
        progress.detail.clear();
        progress.done = progress.total = 0;
    }
}

const char* update::Current() { return MW2_RELEASE_TAG; }
const char* update::Kind() { return MW2_RELEASE_KIND; }

update::Check update::Look(Release& release, std::string& error)
{
    std::error_code ec;
    fs::create_directories(kFolder, ec);
    const fs::path file = kFolder / "newest.json";
    if (!install::Download(Newest(), file, error))
    {
        error = "The newest version could not be looked up: " + error + ".";
        return Check::Failed;
    }
    std::string json;
    {
        std::ifstream in(file, std::ios::binary);
        json.assign(std::istreambuf_iterator<char>(in), {});
    }
    fs::remove_all(kFolder, ec);
    release.version = Value(json, "tag_name");
    // An archive's entry gives its name, then its size, digest and address.
    const std::string end = kArchiveEnd;
    for (size_t at = json.find("\"name\""); at != std::string::npos; at = json.find("\"name\"", at + 1))
    {
        const std::string name = Value(json, "name", at);
        if (name.size() <= end.size() || name.compare(name.size() - end.size(), end.size(), end) != 0) continue;
        const std::string digest = Value(json, "digest", at);
        release.archive = name;
        release.size = std::strtoull(Value(json, "size", at).c_str(), nullptr, 10);
        release.sha256 = digest.rfind("sha256:", 0) == 0 ? digest.substr(7) : "";
        release.url = Value(json, "browser_download_url", at);
        break;
    }
    const std::vector<int> newest = Numbers(release.version);
    if (newest.empty()) { error = "The newest version could not be looked up: its description is not one."; return Check::Failed; }
    if (newest <= Numbers(Current())) return Check::UpToDate;
    if (release.archive.empty() || release.sha256.empty() || release.url.empty())
    {
        error = "Version " + release.version + " is out, without a build for this system. Look on\n" + std::string(kPage);
        return Check::Failed;
    }
    return Check::Newer;
}

setup::Result update::Install(const Release& release, setup::Progress& progress, std::string& error)
{
    std::error_code ec;
    fs::remove_all(kFolder, ec);
    const fs::path fresh = kFolder / "new", old = kFolder / "old", archive = kFolder / release.archive;
    fs::create_directories(fresh, ec);
    fs::create_directories(old, ec);
    if (ec) { error = "Cannot write beside the launcher: " + ec.message(); return setup::Result::Failed; }
    auto stop = [&](setup::Result result) { fs::remove_all(kFolder, ec); return result; };

    char amount[48];
    std::snprintf(amount, sizeof(amount), "%.0f MB", release.size / 1e6);
    Step(progress, 1, "Downloading the new version");
    { std::lock_guard lock(progress.lock); progress.detail = amount; }
    if (!install::Download(release.url, archive, error))
    {
        error = "The new version could not be downloaded: " + error + ".";
        return stop(setup::Result::Failed);
    }
    if (progress.cancel) return stop(setup::Result::Cancelled);

    Step(progress, 2, "Checking it");
    std::string sha256;
    if (!Sha256Of(archive, sha256) || sha256 != release.sha256)
    {
        error = "The download is not the file the release describes. Try again.";
        return stop(setup::Result::Failed);
    }
    if (!Unpack(archive, fresh, error)) return stop(setup::Result::Failed);
    // The archive holds one folder, with the files in it.
    fs::path folder;
    for (fs::directory_iterator it(fresh, ec), end; !ec && it != end; it.increment(ec))
        if (it->is_directory(ec)) folder = it->path();
    if (folder.empty()) { error = "The update holds nothing to install."; return stop(setup::Result::Failed); }
    if (progress.cancel) return stop(setup::Result::Cancelled);

    // Past here nothing is asked: a swap is quick, and half of one is no
    // place to stop.
    Step(progress, 3, "Installing");
    std::vector<std::pair<fs::path, bool>> swapped;     // the name, and whether one was there before
    auto undo = [&] {
        for (auto it = swapped.rbegin(); it != swapped.rend(); ++it)
        {
            fs::remove(it->first, ec);
            if (it->second) fs::rename(old / it->first, it->first, ec);
        }
    };
    for (fs::directory_iterator it(folder, ec), end; !ec && it != end; it.increment(ec))
    {
        if (!it->is_regular_file(ec)) continue;
        const fs::path name = it->path().filename();
        const bool there = fs::exists(name, ec);
        std::error_code failed;
        if (there) fs::rename(name, old / name, failed);
        if (!failed)
        {
            fs::rename(it->path(), name, failed);
            if (failed && there) fs::rename(old / name, name, ec);
        }
        if (failed)
        {
            undo();
            error = "Cannot replace " + Utf8(name) + ": " + failed.message();
            return stop(setup::Result::Failed);
        }
        swapped.emplace_back(name, there);
    }
    if (swapped.empty()) { error = "The update holds nothing to install."; return stop(setup::Result::Failed); }
    std::ofstream(kDone) << release.version;
    return setup::Result::Done;
}

std::string update::Finish()
{
    std::string version;
    std::ifstream(kDone) >> version;
    // The launcher this one replaced may still be closing, and its file
    // cannot go before it has: the next start tries again.
    std::error_code ec;
    fs::remove_all(kFolder, ec);
    return version;
}
