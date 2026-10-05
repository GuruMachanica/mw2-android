#pragma once
// A bug report: one run of the game with its log kept, and what a reader
// needs to know about the machine.
//
// The game is started with MW2_REPORT=1 and MW2_LOG_FILE (runtime/report.h),
// so its log names the graphics driver and ends with how the run performed.
// When it has ended, the log -- with the player's name, addresses, session
// keys, account numbers and home folder taken out, since an issue is public --
// goes into one text file under reports/ with the system's description on top.
// GitHub's new-issue page is opened with that description filled in; the
// launcher has no account to file the issue with, and a page cannot be handed
// a file, so the player drags the file in and submits.
#include <filesystem>
#include <string>

namespace report
{
    // Starts `program`, beside the launcher, with its log kept.
    bool Start(const char* program, std::string& error);

    struct Made
    {
        std::filesystem::path file;     // the report
        std::string page;               // the new-issue page's address, filled in
    };
    // After the game has ended. `what` is "Campaign" or "Multiplayer".
    bool Make(const char* what, Made& made, std::string& error);
    // Shows the page and the folder holding the file. False when the browser
    // could not be opened.
    bool Open(const Made& made);
}
