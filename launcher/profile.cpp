#include "profile.h"
#include "disc.h"
#include "playerdata_layout.h"

#include <algorithm>
#include <chrono>
#include <cstring>
#include <ctime>
#include <fstream>
#include <iterator>

namespace fs = std::filesystem;

namespace
{
    const fs::path kSaves = "saves";

    bool ReadFile(const fs::path& path, std::vector<uint8_t>& bytes)
    {
        std::ifstream in(path, std::ios::binary);
        if (!in) return false;
        bytes.assign(std::istreambuf_iterator<char>(in), {});
        return true;
    }

    // The file as it was before the launcher first touched it is kept beside
    // it; the new contents go through a second file so that a write cut short
    // leaves the old one.
    bool WriteFile(const fs::path& path, const std::vector<uint8_t>& bytes, std::string& error)
    {
        std::error_code ec;
        fs::path backup = path, partial = path;
        backup += ".backup";
        partial += ".new";
        if (!fs::exists(backup, ec)) fs::copy_file(path, backup, ec);
        {
            std::ofstream out(partial, std::ios::binary | std::ios::trunc);
            out.write(reinterpret_cast<const char*>(bytes.data()), std::streamsize(bytes.size()));
            if (!out) { error = "Cannot write " + install::Utf8(path) + "."; return false; }
        }
        fs::rename(partial, path, ec);
        if (ec) { error = "Cannot write " + install::Utf8(path) + ": " + ec.message(); return false; }
        return true;
    }

    uint32_t Crc32(const uint8_t* data, size_t size)
    {
        uint32_t crc = 0xFFFFFFFFu;
        for (size_t i = 0; i < size; i++)
        {
            crc ^= data[i];
            for (int bit = 0; bit < 8; bit++) crc = (crc >> 1) ^ (0xEDB88320u & (0u - (crc & 1)));
        }
        return ~crc;
    }

    // --- the multiplayer's stats ------------------------------------------
    // A stats file is a CRC-32 of the buffer, high byte first, then the
    // buffer, 8188 bytes whose values are low byte first. The offline
    // profile's, which the title saves as a content package, has four bytes
    // before that and one after.
    constexpr size_t kStored = 8192;

    struct Stats
    {
        std::vector<uint8_t> file;
        size_t lead = 0;

        uint8_t* Buffer() { return file.data() + lead + 4; }
        uint32_t Get32(uint32_t offset)
        {
            const uint8_t* p = Buffer() + offset;
            return uint32_t(p[0]) | uint32_t(p[1]) << 8 | uint32_t(p[2]) << 16 | uint32_t(p[3]) << 24;
        }
        void Put32(uint32_t offset, uint32_t value)
        {
            uint8_t* p = Buffer() + offset;
            for (int i = 0; i < 4; i++) p[i] = uint8_t(value >> (8 * i));
        }
        void SetBit(uint32_t offset, uint32_t index) { Buffer()[offset + index / 8] |= uint8_t(1u << (index % 8)); }

        bool Load(const fs::path& path)
        {
            if (!ReadFile(path, file)) return false;
            if (file.size() == kStored) lead = 0;
            else if (file.size() == kStored + 5) lead = 4;
            else return false;
            // Another version of the game lays the buffer out its own way.
            return Get32(0) == playerdata::kVersion && Get32(4) == playerdata::kFormat;
        }
        bool Save(const fs::path& path, std::string& error)
        {
            const uint32_t crc = Crc32(Buffer(), kStored - 4);
            for (int i = 0; i < 4; i++) file[lead + i] = uint8_t(crc >> (24 - 8 * i));
            return WriteFile(path, file, error);
        }
    };

    bool Change(const profile::Player& player, std::string& error, void (*change)(Stats&, int), int value = 0)
    {
        Stats stats;
        if (!stats.Load(player.file)) { error = "Cannot read " + install::Utf8(player.file) + "."; return false; }
        change(stats, value);
        return stats.Save(player.file, error);
    }

    std::string Day(const fs::path& path)
    {
        std::error_code ec;
        const auto written = fs::last_write_time(path, ec);
        if (ec) return "";
        const auto system = std::chrono::time_point_cast<std::chrono::system_clock::duration>(
            written - fs::file_time_type::clock::now() + std::chrono::system_clock::now());
        const std::time_t time = std::chrono::system_clock::to_time_t(system);
        char text[32] = "";
        if (const std::tm* local = std::localtime(&time)) std::strftime(text, sizeof(text), "%d %b %Y", local);
        return text;
    }

    // --- the campaign's progress ------------------------------------------
    // profile.bin is the settings the title wrote (runtime/kernel/profile.cpp):
    // "MW2PROF1", a count, then id, source, length and bytes of each. The
    // title's own settings are lists of numbered fields: "SEMV" and two words, then for
    // each field its number, its type and its value -- a byte (types 1 and 2),
    // 32 bits (4 and 5), or a string (6) as two 16-bit words, where it goes
    // in the title's string area and how long it may be, and its characters
    // up to a zero.
    // The title has two such lists: one both of its executables read, which
    // has the Special Ops star count the menus lock the mission groups by,
    // and the campaign's own.
    constexpr uint32_t kSharedSetting = 0x63E83FFF, kCampaignSetting = 0x63E83FFE;
    constexpr uint8_t kStarCount = 0x0E;                                // shared
    constexpr uint8_t kHighestMission = 6, kSpecOpsDifficulty = 0x23;   // campaign
    // The campaign's last level, and the Special Ops missions, whose stars
    // are the difficulty each was finished at.
    constexpr int kMissions = 20, kSpecOps = 23;
    constexpr char kVeteran = '4';

    struct Field
    {
        uint8_t number = 0, type = 0;
        uint32_t value = 0;
        uint16_t place = 0, room = 0;
        std::string text;
    };

    struct Fields
    {
        uint8_t head[12] = {};
        std::vector<Field> fields;

        bool Parse(const std::vector<uint8_t>& b)
        {
            if (b.size() < 12 || std::memcmp(b.data(), "SEMV", 4) != 0) return false;
            std::memcpy(head, b.data(), 12);
            for (size_t at = 12; at < b.size();)
            {
                if (at + 2 > b.size()) return false;
                Field field;
                field.number = b[at];
                field.type = b[at + 1];
                at += 2;
                const size_t size = (field.type == 1 || field.type == 2) ? 1 : (field.type >= 4 && field.type <= 6) ? 4 : 0;
                if (!size || at + size > b.size()) return false;
                if (field.type == 6)
                {
                    field.place = uint16_t(b[at] << 8 | b[at + 1]);
                    field.room = uint16_t(b[at + 2] << 8 | b[at + 3]);
                    at += 4;
                    const auto end = std::find(b.begin() + at, b.end(), uint8_t(0));
                    if (end == b.end()) return false;
                    field.text.assign(b.begin() + at, end);
                    at = size_t(end - b.begin()) + 1;
                }
                else
                {
                    for (size_t i = 0; i < size; i++) field.value = field.value << 8 | b[at + i];
                    at += size;
                }
                fields.push_back(std::move(field));
            }
            return true;
        }

        Field* Find(uint8_t number, uint8_t type)
        {
            for (Field& field : fields)
                if (field.number == number && field.type == type) return &field;
            return nullptr;
        }

        std::vector<uint8_t> Bytes() const
        {
            std::vector<uint8_t> b(head, head + 12);
            for (const Field& field : fields)
            {
                b.push_back(field.number);
                b.push_back(field.type);
                if (field.type == 6)
                {
                    for (uint16_t word : { field.place, field.room }) { b.push_back(uint8_t(word >> 8)); b.push_back(uint8_t(word)); }
                    b.insert(b.end(), field.text.begin(), field.text.end());
                    b.push_back(0);
                }
                else if (field.type == 1 || field.type == 2) b.push_back(uint8_t(field.value));
                else for (int shift = 24; shift >= 0; shift -= 8) b.push_back(uint8_t(field.value >> shift));
            }
            return b;
        }
    };

    struct Settings
    {
        struct Setting { uint32_t id = 0, source = 0; std::vector<uint8_t> bytes; };
        std::vector<Setting> settings;
        Fields shared, campaign;

        Setting* Find(uint32_t id)
        {
            for (Setting& setting : settings)
                if (setting.id == id) return &setting;
            return nullptr;
        }

        bool Load()
        {
            std::vector<uint8_t> file;
            if (!ReadFile(kSaves / "profile.bin", file) || file.size() < 12 || std::memcmp(file.data(), "MW2PROF1", 8) != 0) return false;
            auto word = [&](size_t at) { uint32_t v; std::memcpy(&v, file.data() + at, 4); return v; };
            size_t at = 12;
            for (uint32_t i = 0, count = word(8); i < count; i++)
            {
                if (at + 12 > file.size()) return false;
                Setting setting{ word(at), word(at + 4), {} };
                const uint32_t length = word(at + 8);
                at += 12;
                if (at + length > file.size()) return false;
                setting.bytes.assign(file.begin() + at, file.begin() + at + length);
                at += length;
                settings.push_back(std::move(setting));
            }
            const Setting* a = Find(kSharedSetting);
            const Setting* b = Find(kCampaignSetting);
            return a && b && shared.Parse(a->bytes) && campaign.Parse(b->bytes);
        }

        bool Save(std::string& error)
        {
            Find(kSharedSetting)->bytes = shared.Bytes();
            Find(kCampaignSetting)->bytes = campaign.Bytes();
            std::vector<uint8_t> file(12);
            std::memcpy(file.data(), "MW2PROF1", 8);
            auto word = [&](uint32_t v) { const auto* p = reinterpret_cast<const uint8_t*>(&v); file.insert(file.end(), p, p + 4); };
            const uint32_t count = uint32_t(settings.size());
            std::memcpy(file.data() + 8, &count, 4);
            for (const Setting& setting : settings)
            {
                word(setting.id);
                word(setting.source);
                word(uint32_t(setting.bytes.size()));
                file.insert(file.end(), setting.bytes.begin(), setting.bytes.end());
            }
            return WriteFile(kSaves / "profile.bin", file, error);
        }
    };

    const char* const kNoProfile = "There is no campaign profile yet: start the campaign once first.";
}

std::vector<profile::Player> profile::Players()
{
    struct Found { Player player; fs::file_time_type written; };
    std::vector<Found> found;
    auto add = [&](const fs::path& file, bool offline) {
        Stats stats;
        std::error_code ec;
        if (!stats.Load(file)) return;
        Player player;
        player.file = file;
        player.offline = offline;
        const uint32_t experience = stats.Get32(playerdata::kExperience);
        for (size_t rank = 0; rank < std::size(playerdata::kRankExperience); rank++)
            if (experience >= playerdata::kRankExperience[rank]) player.level = int(rank) + 1;
        player.prestige = int(stats.Get32(playerdata::kPrestige));
        player.played = Day(file);
        found.push_back({ std::move(player), fs::last_write_time(file, ec) });
    };
    std::error_code ec;
    // What the online service keeps for each player who signed in...
    for (fs::directory_iterator it(kSaves / "online" / "user", ec), end; !ec && it != end; it.increment(ec))
        add(it->path() / "mpdata", false);
    // ...and the content package the title saves the offline profile's in.
    for (fs::directory_iterator it(kSaves, ec), end; !ec && it != end; it.increment(ec))
        if (it->path().filename().string().rfind("mpdata_", 0) == 0) add(it->path() / it->path().filename(), true);
    std::sort(found.begin(), found.end(), [](const Found& a, const Found& b) { return a.written > b.written; });
    std::vector<Player> players;
    for (Found& entry : found) players.push_back(std::move(entry.player));
    return players;
}

int profile::MaxPrestige() { return playerdata::kMaxPrestige; }

bool profile::MaxRank(const Player& player, std::string& error)
{
    return Change(player, error, [](Stats& stats, int) { stats.Put32(playerdata::kExperience, playerdata::kMaxExperience); });
}

bool profile::SetPrestige(const Player& player, int prestige, std::string& error)
{
    return Change(player, error, [](Stats& stats, int value) { stats.Put32(playerdata::kPrestige, uint32_t(value)); },
                  std::clamp(prestige, 0, playerdata::kMaxPrestige));
}

bool profile::UnlockEverything(const Player& player, std::string& error)
{
    return Change(player, error, [](Stats& stats, int) {
        for (const playerdata::Challenge& challenge : playerdata::kChallenges)
        {
            stats.Buffer()[playerdata::kChallengeState + challenge.index] = uint8_t(challenge.tiers + 1);
            stats.Put32(playerdata::kChallengeProgress + 4 * challenge.index, challenge.target);
        }
        for (uint16_t index : playerdata::kTitles) stats.SetBit(playerdata::kTitleUnlocked, index);
        for (uint16_t index : playerdata::kIcons) stats.SetBit(playerdata::kIconUnlocked, index);
        for (uint16_t index : playerdata::kKillstreaks) stats.SetBit(playerdata::kKillstreakUnlocked, index);
    });
}

profile::Campaign profile::ReadCampaign()
{
    Campaign campaign;
    Settings settings;
    if (!settings.Load()) return campaign;
    const Field* highest = settings.campaign.Find(kHighestMission, 1);
    const Field* stars = settings.shared.Find(kStarCount, 4);
    if (!highest || !stars) return campaign;
    campaign.found = true;
    campaign.missions = int(highest->value);
    campaign.stars = int(stars->value);
    return campaign;
}

bool profile::UnlockMissions(std::string& error)
{
    Settings settings;
    Field* highest = settings.Load() ? settings.campaign.Find(kHighestMission, 1) : nullptr;
    if (!highest) { error = kNoProfile; return false; }
    highest->value = std::max<uint32_t>(highest->value, kMissions);
    return settings.Save(error);
}

bool profile::AllStars(std::string& error)
{
    Settings settings;
    const bool loaded = settings.Load();
    Field* stars = loaded ? settings.campaign.Find(kSpecOpsDifficulty, 6) : nullptr;
    Field* count = loaded ? settings.shared.Find(kStarCount, 4) : nullptr;
    if (!stars || !count || stars->room < kSpecOps) { error = kNoProfile; return false; }
    // A mission finished on veteran has its three stars, and the count the
    // menus open the mission groups by is their sum.
    if (stars->text.size() < size_t(kSpecOps)) stars->text.resize(kSpecOps, '0');
    std::fill_n(stars->text.begin(), kSpecOps, kVeteran);
    count->value = 3 * kSpecOps;
    return settings.Save(error);
}
