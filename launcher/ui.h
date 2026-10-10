#pragma once
// What the launcher shows: one screen, drawn by hand in the look of the game's
// own menus -- a smoky backdrop with a glow in one corner, a column of
// right-aligned entries with a black bar under the chosen one, and a pane
// beside it that says what the entry does or how a job is going.
//
// The screen is a description (Frame) the caller fills each frame; a later
// feature adds entries and, for a screen with real controls, widgets in the
// pane, which is an ordinary Dear ImGui window area.
#include <string>
#include <vector>

struct ImFont;
struct SDL_Renderer;
struct SDL_Texture;

namespace ui
{
    struct Fonts
    {
        ImFont* menu = nullptr;     // the entries
        ImFont* heading = nullptr;  // the pane's heading and the wordmark
        ImFont* body = nullptr;
        ImFont* small = nullptr;
    };
    // The embedded fonts, at sizes for a window `scale` times the design's 1280x720.
    Fonts LoadFonts(float scale);

    // The backdrop, made once: there is no artwork to ship, so it is computed.
    // Its smoke drifts, so it is drawn for a time.
    struct Backdrop
    {
        SDL_Texture* smoke[2] = {};
        SDL_Texture* shade = nullptr;
        SDL_Texture* glow = nullptr;
    };
    Backdrop MakeBackdrop(SDL_Renderer* renderer);
    void DrawBackdrop(SDL_Renderer* renderer, const Backdrop& backdrop, double seconds);
    void DestroyBackdrop(Backdrop& backdrop);

    struct Entry
    {
        std::string label;
        bool enabled = true;
        bool ruleAbove = false;     // a thin rule between this entry and the one before
        std::string tag;            // a small note after a disabled entry, "SOON"
    };

    struct Frame
    {
        std::vector<Entry> entries;
        int focus = 0;

        std::string heading, text;  // the pane
        bool error = false;         // the text reports a failure

        bool busy = false;          // a job is running: the pane shows its progress
        int step = 0, steps = 0;
        std::string stepTitle, detail, amount;
        float fraction = -1;        // of the step, or below zero when it has no amount

        std::string status;         // one line at the bottom left
        std::string corner;         // and one at the top right
        std::string hint;           // which controls do what, bottom right
    };

    // Draws the frame. Returns the entry the pointer chose, or -1; `focus`
    // follows the pointer when it moves over an entry.
    int Draw(const Fonts& fonts, const Frame& frame, float scale, int& focus);
}
