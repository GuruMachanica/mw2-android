#include "setup.h"
#include "disc.h"
#include "download.h"
#include "package.h"
#include "../runtime/install/crypto.h"
#include "../runtime/install/xex.h"

#include <xex_patcher.h>

#include <cstdio>
#include <cstring>
#include <fstream>
#include <map>
#include <vector>

namespace fs = std::filesystem;
using install::FromUtf8;
using install::Utf8;

namespace
{
    // The disc's two executables, and what the update makes of them, by the
    // SHA-256 of each, which CMake reads from mw2/ at configure time. The game
    // executables run only what they were recompiled from, so anything else --
    // another region, another update -- is refused here rather than there.
    struct Title { const char* xex; const char* patch; const char* disc; const char* installed; };
    constexpr Title kTitles[] = {
        { "default.xex", "default.xexp", MW2_DISC_SHA256_SP, MW2_XEX_SHA256_SP },
        { "default_mp.xex", "default_mp.xexp", MW2_DISC_SHA256_MP, MW2_XEX_SHA256_MP },
    };
    constexpr uint32_t kTitleId = 0x41560817;
    constexpr const char* kGameFolder = "game";

#ifndef MW2_VERSION_TU0
    // Title update 6, from the CoD Xenon project's archive of title updates
    // (its maintainer's suggestion), at a commit of our choosing so the file
    // cannot change under the checksum.
    constexpr const char* kUpdateName = "TU_10LC20N_0000018000000.00000000001GA";
    constexpr const char* kUpdateUrl =
        "https://raw.githubusercontent.com/codxenon/xbox360-title-updates/25de2389ce214dae6159fcd45a9581cb3b640bd9/"
        "games/Call%20of%20Duty%20-%20Modern%20Warfare%202%20%28USA%2C%20Europe%29/TU6/TU_10LC20N_0000018000000.00000000001GA";
    // The fastfiles it adds, which go beside the disc's.
    struct Added { const char* name; const char* sha256; };
    constexpr Added kAdded[] = {
        { "patch_mp.ff", MW2_UPDATE_SHA256_PATCH_MP },
        { "dlc1_ui_mp.ff", MW2_UPDATE_SHA256_DLC1_UI_MP },
        { "dlc2_ui_mp.ff", MW2_UPDATE_SHA256_DLC2_UI_MP },
    };
#endif

    using Bytes = std::vector<uint8_t>;

    std::string Sha256(const Bytes& bytes)
    {
        install::crypto::Sha256 hash;
        hash.Update(bytes.data(), bytes.size());
        return hash.FinalHex();
    }

    bool ReadFile(const fs::path& path, Bytes& bytes)
    {
        std::ifstream in(path, std::ios::binary);
        if (!in) return false;
        bytes.assign(std::istreambuf_iterator<char>(in), {});
        return true;
    }

    // Through a temporary name, so a file present is a file written whole.
    bool WriteFile(const fs::path& to, const Bytes& bytes, std::string& error)
    {
        const fs::path partial = fs::path(to) += ".part";
        std::ofstream out(partial, std::ios::binary | std::ios::trunc);
        out.write(reinterpret_cast<const char*>(bytes.data()), std::streamsize(bytes.size()));
        out.close();
        std::error_code ec;
        if (out) fs::rename(partial, to, ec);
        if (!out || ec) { error = "Could not write " + Utf8(fs::absolute(to)) + " (disk full?)."; return false; }
        return true;
    }

    void Step(setup::Progress& progress, const char* title)
    {
        std::lock_guard lock(progress.lock);
        progress.step++;
        progress.title = title;
        progress.detail.clear();
        progress.done = progress.total = 0;
    }

    // What to tell a player whose executable is not the disc's.
    std::string WrongDisc(const std::string& name, const Bytes& file)
    {
        install::xex::Info info;
        if (!install::xex::ReadInfo(file, info)) return name + " is not an Xbox 360 executable.";
        char text[256];
        if (info.titleId != kTitleId)
            std::snprintf(text, sizeof(text), "This is not Modern Warfare 2 (title %08X).", info.titleId);
        else
            std::snprintf(text, sizeof(text),
                          "This is Modern Warfare 2, but not the disc this build was made from "
                          "(executable version %u, expected the disc's 10). Use an image of the "
                          "USA/Europe disc, version 1.0.557.", info.version);
        return text;
    }

    bool IsGameFile(const std::string& name)
    {
        std::string lower = name;
        for (char& c : lower) c = char(std::tolower(uint8_t(c)));
        auto endsWith = [&](const char* suffix) {
            const size_t n = std::strlen(suffix);
            return lower.size() >= n && lower.compare(lower.size() - n, n, suffix) == 0;
        };
        // The fastfiles, the image archives and the Bink movies.
        return endsWith(".ff") || endsWith(".pak") || endsWith(".bik");
    }

    // Copies the disc's game files into game/. What is already there, whole,
    // is kept: an install cut short resumes.
    setup::Result CopyGame(install::Source& source, const fs::path& from, setup::Progress& progress, std::string& error)
    {
        const fs::path folder = kGameFolder;
        std::error_code ec;
        uint64_t needed = 0;
        std::vector<const install::Source::File*> copy;
        for (const auto& file : source.Files())
        {
            if (!IsGameFile(file.name)) continue;
            const fs::path to = folder / FromUtf8(file.name);
            if (fs::is_regular_file(to, ec) && fs::file_size(to, ec) == file.size) continue;
            copy.push_back(&file);
            needed += file.size;
        }
        {
            std::lock_guard lock(progress.lock);
            progress.total = needed;
        }
        const auto space = fs::space(folder, ec);
        if (!ec && space.available < needed)
        {
            char text[160];
            std::snprintf(text, sizeof(text), "Not enough disk space: %.1f GB needed, %.1f GB free.",
                          needed / 1e9, space.available / 1e9);
            error = text;
            return setup::Result::Failed;
        }

        Bytes buffer(8 << 20);
        for (const auto* file : copy)
        {
            {
                std::lock_guard lock(progress.lock);
                progress.detail = file->name;
            }
            const fs::path to = folder / FromUtf8(file->name), partial = fs::path(to) += ".part";
            std::ofstream out(partial, std::ios::binary | std::ios::trunc);
            if (!out) { error = "Cannot write " + Utf8(fs::absolute(partial)); return setup::Result::Failed; }
            for (uint64_t at = 0; at < file->size;)
            {
                if (progress.cancel) { out.close(); fs::remove(partial, ec); return setup::Result::Cancelled; }
                const size_t take = size_t(std::min<uint64_t>(buffer.size(), file->size - at));
                if (!source.Read(*file, at, buffer.data(), take))
                {
                    error = "Could not read " + file->name + " from " + Utf8(from) + ".";
                    return setup::Result::Failed;
                }
                out.write(reinterpret_cast<const char*>(buffer.data()), std::streamsize(take));
                if (!out) { error = "Could not write " + Utf8(fs::absolute(partial)) + " (disk full?)."; return setup::Result::Failed; }
                at += take;
                std::lock_guard lock(progress.lock);
                progress.done += take;
            }
            out.close();
            fs::rename(partial, to, ec);
            if (ec) { error = "Cannot rename " + Utf8(partial) + ": " + ec.message(); return setup::Result::Failed; }
        }
        return setup::Result::Done;
    }

#ifndef MW2_VERSION_TU0
    // The update's files, by name: from the package the player chose or a
    // folder holding them, from a package left beside the launcher, or
    // downloaded.
    setup::Result GetUpdate(const fs::path& given, std::map<std::string, Bytes>& files, std::string& error)
    {
        std::error_code ec;
        if (fs::is_directory(given, ec))
        {
            for (const auto& entry : fs::directory_iterator(given, ec))
                if (entry.is_regular_file(ec)) ReadFile(entry.path(), files[Utf8(entry.path().filename())]);
            return setup::Result::Done;
        }
        Bytes package;
        std::string why;
        if (!given.empty())
        {
            if (!ReadFile(given, package)) { error = "Cannot read " + Utf8(given) + "."; return setup::Result::Failed; }
            if (!install::ReadPackage(package, files, why))
            {
                error = Utf8(given.filename()) + " cannot be used: " + why + ".";
                return setup::Result::Failed;
            }
            return setup::Result::Done;
        }
        if (ReadFile(kUpdateName, package) && install::ReadPackage(package, files, why)) return setup::Result::Done;

        const fs::path partial = fs::path(kUpdateName) += ".part";
        const bool downloaded = install::Download(kUpdateUrl, partial, why) && ReadFile(partial, package);
        fs::remove(partial, ec);
        if (!downloaded || !install::ReadPackage(package, files, why))
        {
            error = "Title update 6 could not be downloaded: " + why + ".";
            return setup::Result::NoUpdate;
        }
        return setup::Result::Done;
    }
#endif
}

fs::path setup::GameFolder() { return kGameFolder; }

#ifdef MW2_VERSION_TU0
const char* setup::UpdateUrl() { return ""; }
bool setup::UsesUpdate() { return false; }
#else
const char* setup::UpdateUrl() { return kUpdateUrl; }
bool setup::UsesUpdate() { return true; }
#endif

setup::State setup::Detect()
{
    // Each executable is the installed one, or the disc's and waiting for the
    // update, or something else.
    bool installed = true, known = true;
    for (const Title& title : kTitles)
    {
        Bytes file;
        if (!ReadFile(fs::path(kGameFolder) / title.xex, file)) return State::NotInstalled;
        const std::string hash = Sha256(file);
        installed = installed && hash == title.installed;
        known = known && (hash == title.installed || hash == title.disc);
    }
    return installed ? State::Installed : known ? State::NeedsUpdate : State::NotInstalled;
}

setup::Result setup::Run(const fs::path& disc, const fs::path& update, Progress& progress, std::string& error)
{
    const bool copies = !disc.empty();
    {
        std::lock_guard lock(progress.lock);
        progress.step = 0;
        progress.steps = (copies ? 3 : 1) + (UsesUpdate() ? 2 : 0);
    }
    const fs::path folder = kGameFolder;
    std::error_code ec;
    fs::create_directories(folder, ec);
    if (ec) { error = "Cannot create " + Utf8(fs::absolute(folder)) + ": " + ec.message(); return Result::Failed; }

    // The disc's executables: from the disc, or already in game/ when only the
    // update is to be applied.
    std::unique_ptr<install::Source> source;
    Bytes executables[2];
    bool updated[2] = {};
    if (copies)
    {
        Step(progress, "Checking the disc");
        source = install::Source::Open(disc, error);
        if (!source) return Result::Failed;
    }
    for (size_t i = 0; i < 2; i++)
    {
        const Title& title = kTitles[i];
        const auto* file = source ? source->Find(title.xex) : nullptr;
        const bool read = source ? file && source->ReadAll(*file, executables[i])
                                 : ReadFile(folder / title.xex, executables[i]);
        if (!read)
        {
            error = std::string("There is no ") + title.xex + " in " + Utf8(copies ? disc : fs::absolute(folder)) +
                    ": it is not a Modern Warfare 2 disc.";
            return Result::Failed;
        }
        const std::string hash = Sha256(executables[i]);
        // An update cut short between the two leaves one of them done already.
        updated[i] = !copies && hash == title.installed;
        if (!updated[i] && hash != title.disc) { error = WrongDisc(title.xex, executables[i]); return Result::Failed; }
    }

#ifndef MW2_VERSION_TU0
    // The update, and the executables it makes, before anything is copied: what
    // can fail fails in the first seconds.
    Step(progress, "Getting title update 6");
    std::map<std::string, Bytes> files;
    if (const Result got = GetUpdate(update, files, error); got != Result::Done) return got;
    for (const Added& added : kAdded)
        if (Sha256(files[added.name]) != added.sha256)
        {
            error = std::string("This is not title update 6: its ") + added.name + " is missing or another version's.";
            return Result::Failed;
        }

    Step(progress, "Updating the executables");
    for (size_t i = 0; i < 2; i++)
    {
        const Title& title = kTitles[i];
        if (updated[i]) continue;
        const Bytes& patch = files[title.patch];
        Bytes patched;
        const auto result = patch.empty() ? XexPatcher::Result::PatchFileInvalid
                                          : XexPatcher::apply(executables[i].data(), executables[i].size(), patch.data(),
                                                              patch.size(), patched, false);
        if (result != XexPatcher::Result::Success || Sha256(patched) != title.installed)
        {
            error = std::string("This is not title update 6: its ") + title.patch + " does not make the expected " + title.xex + ".";
            return Result::Failed;
        }
        executables[i] = std::move(patched);
    }
#else
    (void)update;
#endif
    if (progress.cancel) return Result::Cancelled;

    if (copies)
    {
        Step(progress, "Copying the game files");
        if (const Result copied = CopyGame(*source, disc, progress, error); copied != Result::Done) return copied;
    }

    // The executables go last: both present, and the right ones, is what an
    // install that finished looks like.
    Step(progress, "Finishing");
#ifndef MW2_VERSION_TU0
    for (const Added& added : kAdded)
        if (!WriteFile(folder / added.name, files[added.name], error)) return Result::Failed;
#endif
    for (size_t i = 0; i < 2; i++)
        if (!WriteFile(folder / kTitles[i].xex, executables[i], error)) return Result::Failed;
    return Result::Done;
}
