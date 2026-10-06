#pragma once
// Who plays at controllers 2 to 4, and the screen that chooses it.
//
// The console signs a profile in at each controller through its own sign-in
// screen, which a title asks for (XamShowSigninUI) and never draws. This is
// that screen: the profiles of this machine (saves/profiles.txt), a new one,
// or nobody. The console's also signs a guest in beside a player on Live,
// which this title has no use for: its split screen is offline. Nothing is
// remembered between runs: every controller but the first starts signed
// out. The first controller's player is the online service's and is not
// chosen here (kernel/xam.cpp).
//
// The screen is drawn here into a picture the presenter lays over the frame,
// and is driven by the controller that asked for it, through the title's own
// reads of the controllers: while it is open the title sees none pressed.
#include <cstdint>
#include <string>
#include <vector>

namespace signin
{
    constexpr uint32_t kUsers = 4;

    struct Player
    {
        bool signedIn = false;
        uint64_t id = 0;        // the profile's, 48 bits: its offline XUID's
        std::string name;
    };
    // The player at controller 1, 2 or 3 (the second to the fourth).
    Player At(uint32_t user);
    // A bit per signed-in controller, the first's always set.
    uint32_t Mask();

    // The title asks for the screen: it opens for the controller pressed last.
    void Ask();

    // What a controller holds, at every read of it (XINPUT_GAMEPAD buttons,
    // a stick pushed up or down counted as the d-pad, and kGuide). True when
    // the title is not to see it. The Guide button opens the screen for its
    // controller, as it opens the console's.
    constexpr uint16_t kGuide = 0x0400;
    bool Input(uint32_t user, uint16_t buttons);

    // The screen, for a window of this height: BGRA, opaque. False while it is
    // shut. The pixels are only rewritten when `version` is not theirs.
    struct Image
    {
        std::vector<uint8_t> pixels;
        uint32_t width = 0, height = 0;
        uint64_t version = 0;
    };
    bool Picture(uint32_t windowHeight, Image& image);
}
