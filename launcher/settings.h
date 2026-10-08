#pragma once
// What the player sets in the launcher for the game: kept in
// .env beside the launcher, a line each of NAME=value. The game reads the file as
// it starts (runtime/settings.cpp), however it is started, so a change is
// for the next start. The file can hold any of the game's switches; the
// launcher changes its own and keeps the rest.
namespace settings
{
    void Load();

    // MW2_SCALE: how many times the console's 1280x720 the game draws at.
    constexpr int kMaxScale = 3;
    int Scale();
    void SetScale(int scale);
}
