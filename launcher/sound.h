#pragma once
// The two sounds of the game's own menus, for the launcher's: the tick as
// another entry is reached and the one a choice or going back makes. Nothing of
// them is shipped; they are read out of the installed game (sound.cpp), so a
// launcher with no game beside it is silent.
namespace sound
{
    // Reads the sounds from game/ and opens the sound device. Called again
    // once an install has put the game there; nothing to do when they are read.
    void Load();

    enum class Clip { Over, Click };
    void Play(Clip clip);
}
