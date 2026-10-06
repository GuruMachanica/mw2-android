#pragma once
// The profile screen's work: what a player has earned, changed in the files
// the game keeps it in under saves/ (docs/saves.md).
//
// The multiplayer's rank, prestige and unlocks are in a stats file per player
// (mpdata); where each is in it comes from the title's own layout
// (playerdata_layout.h). The campaign's progress is in the profile
// (profile.bin). A file is copied to <name>.backup before its first change.
#include <cstdint>
#include <filesystem>
#include <string>
#include <vector>

namespace profile
{
    // One player's multiplayer stats.
    struct Player
    {
        // A profile made on the game's sign-in screen (saves/profiles.txt) has
        // a name there, and no stats file until its first match ends.
        std::string name;
        uint64_t id = 0;
        std::filesystem::path file;
        bool offline = false;       // the profile nobody signed in to an online service with
        int level = 1, prestige = 0;
        std::string played;         // the day the file was last written
    };
    // Every stats file under saves/ this version of the game can read, the
    // one played last first.
    std::vector<Player> Players();

    // A new name for a profile of the sign-in screen: up to fifteen letters,
    // digits and spaces.
    bool Rename(const Player& player, const std::string& name, std::string& error);

    bool MaxRank(const Player& player, std::string& error);
    bool SetPrestige(const Player& player, int prestige, std::string& error);
    // Every challenge done, and every title, emblem and killstreak unlocked.
    bool UnlockEverything(const Player& player, std::string& error);
    int MaxPrestige();

    // The campaign's progress, as the profile has it.
    struct Campaign
    {
        bool found = false;         // no profile yet: the game was never started
        int missions = 0;           // how far the campaign is unlocked
        int stars = 0;              // Special Ops
    };
    Campaign ReadCampaign();
    bool UnlockMissions(std::string& error);
    bool AllStars(std::string& error);
}
