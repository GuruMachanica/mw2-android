#pragma once
// Starting another program: the game from the launcher, the launcher or the
// other title from the game, tar, curl. Only where SDL is built in.
#if __has_include(<SDL3/SDL.h>)
#include <SDL3/SDL.h>

namespace spawn
{
    // Starts `args` (null-terminated, the program first), with `environment`
    // when one is given. The program gets this one's own standard streams
    // where it has them. A Windows program opened from the desktop has none,
    // and SDL fails the start when asked to pass on a stream that is not
    // there ("DuplicateHandle(): The handle is invalid"), so those are left
    // unconnected instead. Null, and SDL_GetError says why, when it cannot.
    SDL_Process* Start(const char* const* args, SDL_Environment* environment = nullptr);
}
#endif
