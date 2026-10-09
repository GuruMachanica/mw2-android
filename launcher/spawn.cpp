#include "spawn.h"

#ifdef _WIN32
#include <windows.h>
#endif

namespace
{
#ifdef _WIN32
    // Whether the launcher has this standard stream to hand on.
    bool Has(DWORD which)
    {
        const HANDLE handle = GetStdHandle(which);
        if (!handle || handle == INVALID_HANDLE_VALUE) return false;
        SetLastError(NO_ERROR);
        return GetFileType(handle) != FILE_TYPE_UNKNOWN || GetLastError() == NO_ERROR;
    }
#endif

    void Connect(SDL_PropertiesID properties, const char* stream, bool has)
    {
        SDL_SetNumberProperty(properties, stream, has ? SDL_PROCESS_STDIO_INHERITED : SDL_PROCESS_STDIO_NULL);
    }
}

SDL_Process* spawn::Start(const char* const* args, SDL_Environment* environment)
{
    SDL_PropertiesID properties = SDL_CreateProperties();
    SDL_SetPointerProperty(properties, SDL_PROP_PROCESS_CREATE_ARGS_POINTER, const_cast<char**>(args));
    if (environment) SDL_SetPointerProperty(properties, SDL_PROP_PROCESS_CREATE_ENVIRONMENT_POINTER, environment);
#ifdef _WIN32
    Connect(properties, SDL_PROP_PROCESS_CREATE_STDIN_NUMBER, Has(STD_INPUT_HANDLE));
    Connect(properties, SDL_PROP_PROCESS_CREATE_STDOUT_NUMBER, Has(STD_OUTPUT_HANDLE));
    Connect(properties, SDL_PROP_PROCESS_CREATE_STDERR_NUMBER, Has(STD_ERROR_HANDLE));
#endif
    SDL_Process* process = SDL_CreateProcessWithProperties(properties);
    SDL_DestroyProperties(properties);
    return process;
}
