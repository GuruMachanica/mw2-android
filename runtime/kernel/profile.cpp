// The player's profile.
//
// MW2 keeps its own settings -- controls, video, and the brightness the player
// sets on the calibration screen at first boot -- in the two 1000-byte blobs the
// console reserves for a title in the player's profile, XPROFILE_TITLE_SPECIFIC1
// and 2. It writes them through XamUserWriteProfileSettings and reads them back
// at start-up alongside six system settings.
//
// Answering that read with "nothing is set" describes a profile that has never
// been used, which is a fresh first boot every launch: the calibration screen
// comes back, and every setting the player changed is gone. The settings are
// kept in saves/profile.bin instead and handed straight back. Those of a
// profile signed in at another controller (signin.h) are in
// saves/profile_<its id>.bin. Nothing here
// interprets them -- a setting is an id, a source and its bytes -- so whatever
// the title chooses to put in its blobs survives without this having to know
// what any of it means.
#include <ppc_recomp_shared.h>
#include "kernel.h"
#include "objects.h"
#include "../guest.h"
#include "../log.h"
#include "../signin.h"

#include <algorithm>
#include <cstdio>
#include <cstring>
#include <filesystem>
#include <map>
#include <mutex>
#include <string>
#include <vector>

using namespace kernel;
namespace fs = std::filesystem;

namespace
{
    // XUSER_PROFILE_SETTING, 40 bytes, as the title's own reader walks it:
    // source at +0 -- zero means "not set", and it takes that branch before it
    // looks at anything else -- the user at +8, the id at +16, and then either
    // the value itself at +32 or, for a byte blob, its size at +32 and where the
    // bytes are at +36.
    constexpr uint32_t kStride = 0x28;
    constexpr uint32_t kSource = 0, kUser = 8, kId = 16, kValue = 32, kData = 36;
    constexpr uint32_t kSourceTitle = 2;

    // The type is the top nibble of the setting id: 6 is a byte blob, and
    // everything else fits in the eight bytes at +32.
    constexpr uint32_t kBinary = 6;
    uint32_t TypeOf(uint32_t id) { return (id >> 28) & 0xF; }

    // A blob is 1000 bytes here; the cap is only so a wild size cannot ask for a
    // gigabyte.
    constexpr uint32_t kLargestSetting = 64 * 1024;

    struct Setting
    {
        uint32_t source = kSourceTitle;
        std::vector<uint8_t> bytes;
    };

    struct Profile
    {
        std::map<uint32_t, Setting> settings;
        fs::path file;
        bool read = false;
    };
    std::mutex g_lock;
    std::map<std::string, Profile> g_profiles;   // by file name

    // The profile of whoever is at a controller, or null for nobody.
    Profile* ProfileOfLocked(uint32_t user)
    {
        std::string key = "profile.bin";
        if (user != 0)
        {
            const signin::Player player = signin::At(user);
            if (!player.signedIn) return nullptr;
            char name[40];
            std::snprintf(name, sizeof name, "profile_%012llx.bin", (unsigned long long)player.id);
            key = name;
        }
        Profile& profile = g_profiles[key];
        if (profile.file.empty()) profile.file = SaveRoot() / key;
        return &profile;
    }

    // "MW2PROF1", a count, then id / source / length / bytes for each setting.
    constexpr char kMagic[8] = { 'M','W','2','P','R','O','F','1' };

    std::map<uint32_t, Setting>& LoadLocked(Profile& profile)
    {
        auto& settings = profile.settings;
        if (profile.read) return settings;
        profile.read = true;

        std::FILE* f = std::fopen(profile.file.string().c_str(), "rb");
        if (!f) return settings;

        char magic[8] = {};
        uint32_t count = 0;
        bool ok = std::fread(magic, 1, 8, f) == 8 &&
                  std::memcmp(magic, kMagic, 8) == 0 &&
                  std::fread(&count, 4, 1, f) == 1;
        for (uint32_t i = 0; ok && i < count; i++)
        {
            uint32_t id = 0, source = 0, length = 0;
            ok = std::fread(&id, 4, 1, f) == 1 && std::fread(&source, 4, 1, f) == 1 &&
                 std::fread(&length, 4, 1, f) == 1 && length <= kLargestSetting;
            if (!ok) break;
            Setting setting;
            setting.source = source;
            setting.bytes.resize(length);
            ok = length == 0 || std::fread(setting.bytes.data(), 1, length, f) == length;
            if (ok) settings[id] = std::move(setting);
        }
        std::fclose(f);

        if (!ok) { settings.clear(); LOGE("profile: %s is not readable, starting fresh",
                                           profile.file.string().c_str()); }
        else LOGK("profile: %zu settings read from %s", settings.size(),
                  profile.file.string().c_str());
        return settings;
    }

    void SaveLocked(const Profile& profile)
    {
        const auto& settings = profile.settings;
        std::error_code ec;
        fs::create_directories(SaveRoot(), ec);
        std::FILE* f = std::fopen(profile.file.string().c_str(), "wb");
        if (!f) { LOGE("profile: cannot write %s", profile.file.string().c_str()); return; }

        const uint32_t count = uint32_t(settings.size());
        std::fwrite(kMagic, 1, 8, f);
        std::fwrite(&count, 4, 1, f);
        for (auto& [id, setting] : settings)
        {
            const uint32_t key = id, source = setting.source;
            const uint32_t length = uint32_t(setting.bytes.size());
            std::fwrite(&key, 4, 1, f);
            std::fwrite(&source, 4, 1, f);
            std::fwrite(&length, 4, 1, f);
            if (length) std::fwrite(setting.bytes.data(), 1, length, f);
        }
        std::fclose(f);
    }
}

// (titleId, userIndex, xuidCount, xuids, settingCount, settingIds, bufferSize,
//  buffer, overlapped). Callers size the buffer with a first call that passes
// none, then read into it.
PPC_FUNC(__imp__XamUserReadProfileSettings)
{
    constexpr uint32_t X_ERROR_INSUFFICIENT_BUFFER = 122;

    const uint32_t userIndex    = ctx.r4.u32;
    const uint32_t settingCount = ctx.r7.u32;
    const uint32_t settingIds   = ctx.r8.u32;
    auto*          bufferSize   = GuestPtr<be32>(ctx.r9.u32);
    const uint32_t buffer       = ctx.r10.u32;
    const uint32_t overlapped   = kernel::StackArgument(ctx, 8);

    auto* ids = GuestPtr<be32>(settingIds);

    std::lock_guard guard(g_lock);
    // Nobody signed in there: nothing is set.
    static const std::map<uint32_t, Setting> kNone;
    Profile* profile = ProfileOfLocked(userIndex);
    const auto& settings = profile ? LoadLocked(*profile) : kNone;

    // A blob does not fit in the entry, so it goes after the entries and the
    // entry points at it -- which means the size the caller needs depends on
    // what is actually stored.
    uint32_t blobBytes = 0;
    for (uint32_t i = 0; ids && i < settingCount; i++)
    {
        auto it = settings.find(uint32_t(ids[i]));
        if (it != settings.end() && TypeOf(uint32_t(ids[i])) == kBinary)
            blobBytes += uint32_t(it->second.bytes.size());
    }
    const uint32_t required = 8 + settingCount * kStride + blobBytes;

    if (!buffer || !bufferSize || uint32_t(*bufferSize) < required)
    {
        if (bufferSize) *bufferSize = required;
        // A sizing call is not an operation to complete; report the shortfall so
        // the caller retries with a big enough buffer.
        ctx.r3.u64 = X_ERROR_INSUFFICIENT_BUFFER;
        return;
    }

    auto* header = GuestPtr<be32>(buffer);
    header[0] = settingCount;
    header[1] = buffer + 8;

    uint32_t blob = buffer + 8 + settingCount * kStride;
    for (uint32_t i = 0; i < settingCount; i++)
    {
        const uint32_t id = ids ? uint32_t(ids[i]) : 0;
        const uint32_t address = buffer + 8 + i * kStride;
        auto* entry = GuestPtr<be32>(address);
        std::memset(entry, 0, kStride);
        entry[kUser / 4] = userIndex;
        entry[kId / 4]   = id;

        auto it = settings.find(id);
        if (it == settings.end()) continue;      // source stays zero: not set

        const Setting& setting = it->second;
        entry[kSource / 4] = setting.source;
        if (TypeOf(id) == kBinary)
        {
            const uint32_t length = uint32_t(setting.bytes.size());
            if (length) std::memcpy(guest::Base() + blob, setting.bytes.data(), length);
            entry[kValue / 4] = length;
            entry[kData / 4]  = blob;
            blob += length;
        }
        else
        {
            // The value in the guest's own byte order, exactly as it was given.
            const size_t length = std::min<size_t>(setting.bytes.size(), 8);
            std::memcpy(guest::Base() + address + kValue, setting.bytes.data(), length);
        }
    }

    CompleteOverlapped(overlapped, X_ERROR_SUCCESS);
    ctx.r3.u64 = X_ERROR_SUCCESS;
}

// (titleId, userIndex, settingCount, settings, overlapped)
PPC_FUNC(__imp__XamUserWriteProfileSettings)
{
    const uint32_t settingCount = ctx.r5.u32;
    const uint32_t settings     = ctx.r6.u32;
    const uint32_t overlapped   = ctx.r7.u32;

    std::lock_guard guard(g_lock);
    Profile* profile = ProfileOfLocked(ctx.r4.u32);
    if (!profile)
    {
        CompleteOverlapped(overlapped, X_ERROR_NO_SUCH_USER);
        ctx.r3.u64 = X_ERROR_NO_SUCH_USER;
        return;
    }
    auto& stored = LoadLocked(*profile);

    uint32_t kept = 0;
    for (uint32_t i = 0; settings && i < settingCount; i++)
    {
        const uint32_t address = settings + i * kStride;
        auto* entry = GuestPtr<be32>(address);
        const uint32_t id = entry[kId / 4];
        if (!id) continue;

        Setting setting;
        setting.source = uint32_t(entry[kSource / 4]) ? uint32_t(entry[kSource / 4]) : kSourceTitle;
        if (TypeOf(id) == kBinary)
        {
            const uint32_t length = entry[kValue / 4];
            const uint32_t data   = entry[kData / 4];
            if (!data || !length || length > kLargestSetting) continue;
            setting.bytes.assign(guest::Base() + data, guest::Base() + data + length);
        }
        else
        {
            setting.bytes.assign(guest::Base() + address + kValue,
                                 guest::Base() + address + kValue + 8);
        }
        stored[id] = std::move(setting);
        kept++;
    }

    if (kept) SaveLocked(*profile);
    LOGK("profile: %u of %u settings written to %s", kept, settingCount,
         profile->file.string().c_str());
    CompleteOverlapped(overlapped, X_ERROR_SUCCESS);
    ctx.r3.u64 = X_ERROR_SUCCESS;
}
