#include "download.h"
#include "disc.h"
#include "../runtime/install/spawn.h"

#ifdef _WIN32
#include <windows.h>
#include <urlmon.h>
#else
#include <SDL3/SDL.h>
#endif

bool install::Download(const std::string& url, const std::filesystem::path& to, std::string& error)
{
    std::error_code ec;
    std::filesystem::remove(to, ec);
#ifdef _WIN32
    const std::wstring wide(url.begin(), url.end());     // the URL is ASCII
    const HRESULT result = URLDownloadToFileW(nullptr, wide.c_str(), to.c_str(), 0, nullptr);
    if (FAILED(result))
    {
        char text[64];
        std::snprintf(text, sizeof(text), "the download failed (%08lX)", static_cast<unsigned long>(result));
        error = text;
        return false;
    }
#else
    const std::string path = Utf8(to);
    const char* const args[] = { "curl", "--location", "--fail", "--silent", "--show-error", "--max-time", "300",
                                 "--output", path.c_str(), url.c_str(), nullptr };
    SDL_Process* process = spawn::Start(args);
    if (!process) { error = "curl could not be started"; return false; }
    int code = -1;
    SDL_WaitProcess(process, true, &code);
    SDL_DestroyProcess(process);
    if (code != 0) { error = "curl failed (exit code " + std::to_string(code) + ")"; return false; }
#endif
    if (!std::filesystem::is_regular_file(to, ec)) { error = "nothing was downloaded"; return false; }
    return true;
}
