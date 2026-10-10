// XamInput* -- gamepad state. Backed by SDL3 when available; otherwise reports
// "no controller connected", which is a truthful answer the title handles.
#if __has_include(<ppc_recomp_shared.h>)
#include <ppc_recomp_shared.h>
#else
#include "../../ppc/ppc_recomp_shared.h"
#endif
#include "kernel.h"
#include "../guest.h"
#include "../log.h"
#include "../diagnostics.h"
#include "../console.h"
#include "../online/service.h"
#include "../player.h"
#include "../signin.h"
#include "../stutters.h"
#include "../gpu/vulkan/renderer.h"

#ifdef MW2_ANDROID
#include "../android/android.h"
#include <algorithm>
#include <cstring>
#endif

#ifdef MW2_USE_SDL
#include <SDL3/SDL.h>
#include <atomic>
#include <chrono>
#include <cmath>
#include <algorithm>
#include <cstdlib>
#include <cstring>
#include <mutex>
#include <string>
#include <vector>
#endif

#ifdef _WIN32
#include <windows.h>
#endif

namespace
{
    // XINPUT_GAMEPAD, big-endian in guest memory.
    struct XInputGamepad
    {
        be16 buttons;
        uint8_t leftTrigger;
        uint8_t rightTrigger;
        be16 thumbLX, thumbLY, thumbRX, thumbRY;
    };
    struct XInputState
    {
        be32 packet;
        XInputGamepad gamepad;
    };
    struct XInputVibration { be16 left, right; };
    struct XInputCapabilities
    {
        uint8_t type, subType;
        be16 flags;
        XInputGamepad gamepad;
        XInputVibration vibration;
    };

#ifdef MW2_USE_SDL
    std::once_flag g_sdlOnce;
    // The title reads the pads on its main thread and sets the motors from
    // whichever thread runs its rumble; both open and close pads here.
    std::mutex g_padLock;
    SDL_Gamepad* g_pads[4] = {};

    void EnsureSdl()
    {
        std::call_once(g_sdlOnce, []{
            if (!SDL_InitSubSystem(SDL_INIT_GAMEPAD))
                LOGW("SDL gamepad init failed: %s", SDL_GetError());
        });
    }

    SDL_Gamepad* PadFor(uint32_t user)
    {
        if (user >= 4) return nullptr;
        EnsureSdl();
        std::lock_guard lock(g_padLock);
        if (g_pads[user] && !SDL_GamepadConnected(g_pads[user]))
        {
            SDL_CloseGamepad(g_pads[user]);
            g_pads[user] = nullptr;
        }
        // Looked for once a second, not on every poll: the title polls all
        // four users every frame, and each look allocates the device list.
        static std::chrono::steady_clock::time_point lastLook[4];
        const auto now = std::chrono::steady_clock::now();
        if (!g_pads[user] && now - lastLook[user] >= std::chrono::seconds(1))
        {
            lastLook[user] = now;
            int count = 0;
            SDL_JoystickID* ids = SDL_GetGamepads(&count);
            if (ids)
            {
                if (int(user) < count) g_pads[user] = SDL_OpenGamepad(ids[user]);
                SDL_free(ids);
            }
            if (g_pads[user])
            {
                const char* name = SDL_GetGamepadName(g_pads[user]);
                LOGI("input: controller %u is %s", user, name ? name : "unnamed");
            }
        }
        return g_pads[user];
    }

    constexpr uint16_t BTN_DPAD_UP=0x0001, BTN_DPAD_DOWN=0x0002, BTN_DPAD_LEFT=0x0004,
        BTN_DPAD_RIGHT=0x0008, BTN_START=0x0010, BTN_BACK=0x0020, BTN_LTHUMB=0x0040,
        BTN_RTHUMB=0x0080, BTN_LB=0x0100, BTN_RB=0x0200, BTN_A=0x1000, BTN_B=0x2000,
        BTN_X=0x4000, BTN_Y=0x8000;

    struct Named { const char* name; uint16_t bit; };
    constexpr Named kButtons[] = {
        { "up", BTN_DPAD_UP }, { "down", BTN_DPAD_DOWN }, { "left", BTN_DPAD_LEFT },
        { "right", BTN_DPAD_RIGHT }, { "start", BTN_START }, { "back", BTN_BACK },
        { "lthumb", BTN_LTHUMB }, { "rthumb", BTN_RTHUMB }, { "lb", BTN_LB },
        { "rb", BTN_RB }, { "a", BTN_A }, { "b", BTN_B }, { "x", BTN_X }, { "y", BTN_Y },
        { "guide", signin::kGuide },
    };

    // The keyboard, for when there is no controller. Only useful with the window
    // open, since that is what gives SDL a focused surface to read keys from.
    struct Key { SDL_Scancode code; uint16_t bit; };
    constexpr Key kKeys[] = {
        { SDL_SCANCODE_RETURN, BTN_START },   { SDL_SCANCODE_ESCAPE, BTN_BACK },
        { SDL_SCANCODE_TAB, BTN_BACK },       { SDL_SCANCODE_BACKSPACE, BTN_BACK },
        { SDL_SCANCODE_UP, BTN_DPAD_UP },     { SDL_SCANCODE_DOWN, BTN_DPAD_DOWN },
        { SDL_SCANCODE_LEFT, BTN_DPAD_LEFT }, { SDL_SCANCODE_RIGHT, BTN_DPAD_RIGHT },
        // Standard PC bindings
        { SDL_SCANCODE_SPACE, BTN_A },        { SDL_SCANCODE_Z, BTN_A },
        { SDL_SCANCODE_C, BTN_B },            { SDL_SCANCODE_LCTRL, BTN_B }, { SDL_SCANCODE_X, BTN_B },
        { SDL_SCANCODE_R, BTN_X },            { SDL_SCANCODE_F, BTN_X },
        { SDL_SCANCODE_1, BTN_Y },            { SDL_SCANCODE_2, BTN_Y },     { SDL_SCANCODE_V, BTN_RTHUMB },
        { SDL_SCANCODE_LSHIFT, BTN_LTHUMB },
        { SDL_SCANCODE_Q, BTN_LB },           { SDL_SCANCODE_4, BTN_LB },
        { SDL_SCANCODE_G, BTN_RB },           { SDL_SCANCODE_E, BTN_RB },
    };

    uint16_t KeyboardButtons()
    {
        if (!SDL_WasInit(SDL_INIT_VIDEO)) return 0;
        const bool* keys = SDL_GetKeyboardState(nullptr);
        if (!keys) return 0;
        uint16_t buttons = 0;
        for (const Key& key : kKeys)
            if (keys[key.code]) buttons |= key.bit;
        return buttons;
    }

    void KeyboardMoveAxes(int16_t& lx, int16_t& ly)
    {
        if (!SDL_WasInit(SDL_INIT_VIDEO)) return;
        const bool* keys = SDL_GetKeyboardState(nullptr);
        if (!keys) return;
        int x = 0, y = 0;
        if (keys[SDL_SCANCODE_W]) y += 32767;
        if (keys[SDL_SCANCODE_S]) y -= 32767;
        if (keys[SDL_SCANCODE_D]) x += 32767;
        if (keys[SDL_SCANCODE_A]) x -= 32767;
        if (x != 0) lx = int16_t(x);
        if (y != 0) ly = int16_t(y);
    }

    uint16_t MouseInputs(uint8_t triggers[2], int16_t& rx, int16_t& ry)
    {
        if (!SDL_WasInit(SDL_INIT_VIDEO)) return 0;
        float dx = 0.0f, dy = 0.0f;
        const SDL_MouseButtonFlags mouse = SDL_GetRelativeMouseState(&dx, &dy);
        uint16_t b = 0;
        if (mouse & SDL_BUTTON_LMASK) triggers[1] = 255;
        if (mouse & SDL_BUTTON_RMASK) triggers[0] = 255;
        if (mouse & SDL_BUTTON_MMASK) b |= BTN_RTHUMB;

        if (std::abs(dx) > 0.01f || std::abs(dy) > 0.01f)
        {
            const float sens = 3000.0f;
            rx = int16_t(std::clamp(dx * sens, -32768.0f, 32767.0f));
            ry = int16_t(std::clamp(-dy * sens, -32768.0f, 32767.0f));
        }
        return b;
    }

    // MW2_INPUT_SCRIPT="2.5:start,6:a" presses buttons at fixed times, so a title
    // can be driven to a screen without a hand on the controller, and a bring-up
    // run reproduces the same path twice.
    //
    // An entry may name `lt` or `rt` for a trigger rather than a button, or a
    // stick direction -- `lx+ lx- ly+ ly- rx+ rx- ry+ ry-` -- and may carry a
    // third field giving how long to hold it: "40:lt:25" aims down the sights for
    // twenty-five seconds. Some of what the renderer does only happens while a
    // trigger is held -- MW2 turns its depth of field on when the player aims --
    // and some screens only respond to a stick: the first-boot brightness screen
    // will not accept anything until the slider has been moved, so a run that
    // only presses buttons sits on it forever. A name ending in `@2`, `@3` or
    // `@4` is that player's controller, which the script then stands in for:
    // "5:a@2" is the second player's A.
    // `bit` names a button; the trigger and stick pseudo-names set `trigger` or
    // `axis` instead, and `held` is how long the press lasts.
    struct Press
    {
        double at; uint16_t bit; int trigger = -1; double held = 0.2;
        int axis = -1; int16_t value = 0; uint32_t user = 0;
    };
    std::vector<Press> g_script;
    uint8_t g_scriptTriggers[4][2]{};
    int16_t g_scriptAxes[4][4]{};
    bool g_scriptAxisHeld[4][4]{};
    bool g_scripted[4]{};   // the script presses something on this controller

    // "lx+" is the left stick's X pushed fully one way, "ly-" the other.
    bool NamedAxis(const std::string& name, int& axis, int16_t& value)
    {
        if (name.size() != 3 || (name[2] != '+' && name[2] != '-')) return false;
        const int stick = name[0] == 'l' ? 0 : name[0] == 'r' ? 2 : -1;
        const int which = name[1] == 'x' ? 0 : name[1] == 'y' ? 1 : -1;
        if (stick < 0 || which < 0) return false;
        axis = stick + which;
        value = name[2] == '+' ? int16_t(32767) : int16_t(-32768);
        return true;
    }
    std::once_flag g_scriptOnce;
    std::chrono::steady_clock::time_point g_scriptStart;

    uint16_t ScriptedButtons(uint32_t user)
    {
        if constexpr (!diag::kOn) return 0;
        std::call_once(g_scriptOnce, [] {
            g_scriptStart = std::chrono::steady_clock::now();
            const char* text = diag::Text("MW2_INPUT_SCRIPT");
            if (!text) return;
            for (const char* at = text; *at; )
            {
                const char* comma = std::strchr(at, ',');
                std::string entry(at, comma ? comma - at : std::strlen(at));
                const size_t colon = entry.find(':');
                if (colon != std::string::npos)
                {
                    const double when = std::atof(entry.substr(0, colon).c_str());
                    std::string name = entry.substr(colon + 1);
                    double held = 0.2;
                    const size_t second = name.find(':');
                    if (second != std::string::npos)
                    {
                        held = std::atof(name.substr(second + 1).c_str());
                        if (held <= 0.0) held = 0.2;
                        name = name.substr(0, second);
                    }
                    uint32_t user = 0;
                    if (name.size() > 2 && name[name.size() - 2] == '@')
                    {
                        user = uint32_t(name.back() - '1') & 3;
                        name.resize(name.size() - 2);
                    }
                    const size_t before = g_script.size();
                    int axis = -1; int16_t value = 0;
                    if (name == "lt" || name == "rt")
                        g_script.push_back({ when, 0, name == "lt" ? 0 : 1, held });
                    else if (NamedAxis(name, axis, value))
                        g_script.push_back({ when, 0, -1, held, axis, value });
                    else
                        for (const Named& button : kButtons)
                            if (name == button.name)
                                g_script.push_back({ when, button.bit, -1, held });
                    for (size_t i = before; i < g_script.size(); i++) g_script[i].user = user;
                    if (g_script.size() > before) g_scripted[user] = true;
                }
                if (!comma) break;
                at = comma + 1;
            }
            static const char* kAxisNames[4] = { "left stick X", "left stick Y",
                                                 "right stick X", "right stick Y" };
            for (const Press& press : g_script)
                LOGI("input: controller %u, scripted %s at %.2f s for %.2f s (%04X)", press.user,
                     press.axis >= 0 ? kAxisNames[press.axis]
                                     : press.trigger < 0 ? "press"
                                     : press.trigger ? "right trigger" : "left trigger",
                     press.at, press.held, press.bit);
        });
        g_scriptTriggers[user][0] = g_scriptTriggers[user][1] = 0;
        for (int i = 0; i < 4; i++) { g_scriptAxes[user][i] = 0; g_scriptAxisHeld[user][i] = false; }
        if (!g_scripted[user]) return 0;

        // A press lasts long enough for a title polling at 60 Hz to see it and
        // short enough not to repeat, unless the entry asked to hold it.
        const double now = std::chrono::duration<double>(
            std::chrono::steady_clock::now() - g_scriptStart).count();
        uint16_t buttons = 0;
        for (const Press& press : g_script)
        {
            if (press.user != user || now < press.at || now >= press.at + press.held) continue;
            if (press.axis >= 0)
            {
                g_scriptAxes[user][press.axis] = press.value;
                g_scriptAxisHeld[user][press.axis] = true;
            }
            else if (press.trigger < 0) buttons |= press.bit;
            else                        g_scriptTriggers[user][press.trigger] = 255;
        }
        return buttons;
    }

    // A scripted stick entry moves nothing on its own, so a run with no pad
    // attached still has to take the path that applies it.
    bool ScriptedAxesHeld(uint32_t user)
    {
        for (bool held : g_scriptAxisHeld[user]) if (held) return true;
        return false;
    }

#endif  // MW2_USE_SDL

    // The packet number tells the title whether anything has changed since it
    // last looked. Incrementing it every poll says "changed" sixty times a second.
    struct Latch { uint32_t packet = 0; uint16_t buttons = 0; uint8_t triggers[2]{}; int16_t axes[4]{}; };
    Latch g_latch[4];
}

PPC_FUNC(__imp__XamInputGetState)
{
    // The title polls input once a frame from its main thread, which makes this
    // the cheapest place to hand the engine a scripted console command.
    online::Frame();
    console::Pump(ctx, base);

    uint32_t user  = ctx.r3.u32;
    uint32_t sAddr = ctx.r5.u32;
    auto* out = GuestPtr<XInputState>(sAddr);
    if (!out) { ctx.r3.u64 = X_ERROR_DEVICE_NOT_CONNECTED; return; }

#ifdef MW2_ANDROID
    // The touch controls and any physical pad, merged by the Android layer.
    // User 0 always answers: the on-screen pad stands in for a controller,
    // and a title told there is none on user 0 stops on its "please
    // reconnect the controller" screen and waits there.
    {
        android::input::Pad pad;
        if (!android::input::Poll(user, pad))
        {
            *out = XInputState{};
            ctx.r3.u64 = X_ERROR_DEVICE_NOT_CONNECTED;
            return;
        }
        int16_t axes[4] = { pad.leftX, pad.leftY, pad.rightX, pad.rightY };
        uint8_t triggers[2] = { pad.leftTrigger, pad.rightTrigger };
        if (user == 0)
        {
            // The same hand-off the desktop build makes: what the player did
            // is seen first, then the autopilot may add to it.
            player::SawPad(pad.buttons, triggers[1]);
            player::Press press = player::Press::None;
            if (player::Steer(axes, press))
                switch (press)
                {
                case player::Press::A:    pad.buttons |= 0x1000; break;
                case player::Press::Up:   pad.buttons |= 0x0001; break;
                case player::Press::Left: pad.buttons |= 0x0004; break;
                case player::Press::Fire: triggers[1] = 255; break;
                case player::Press::None: break;
                }
        }

        Latch& latch = g_latch[user & 3];
        const bool changed = latch.buttons != pad.buttons ||
                             std::memcmp(latch.triggers, triggers, sizeof triggers) != 0 ||
                             std::memcmp(latch.axes, axes, sizeof axes) != 0;
        if (changed)
        {
            latch.packet++;
            latch.buttons = pad.buttons;
            std::memcpy(latch.triggers, triggers, sizeof triggers);
            std::memcpy(latch.axes, axes, sizeof axes);
        }

        out->packet               = latch.packet;
        out->gamepad.buttons      = pad.buttons;
        out->gamepad.leftTrigger  = triggers[0];
        out->gamepad.rightTrigger = triggers[1];
        out->gamepad.thumbLX      = uint16_t(axes[0]);
        out->gamepad.thumbLY      = uint16_t(axes[1]);
        out->gamepad.thumbRX      = uint16_t(axes[2]);
        out->gamepad.thumbRY      = uint16_t(axes[3]);
        ctx.r3.u64 = X_ERROR_SUCCESS;
        return;
    }
#endif

#ifdef MW2_USE_SDL
    if (user >= 4) { *out = XInputState{}; ctx.r3.u64 = X_ERROR_DEVICE_NOT_CONNECTED; return; }
    SDL_Gamepad* pad = PadFor(user);
    const uint16_t elsewhere = uint16_t((user == 0 ? KeyboardButtons() : 0) | ScriptedButtons(user));
    if (user == 0 || pad || elsewhere || (user ? g_scripted[user] : ScriptedAxesHeld(0) || player::Wanted()))
    {

        if (pad) SDL_UpdateGamepads();
        uint16_t b = elsewhere;
        auto down = [&](SDL_GamepadButton x){ return pad && SDL_GetGamepadButton(pad, x); };
        if (down(SDL_GAMEPAD_BUTTON_DPAD_UP))        b |= BTN_DPAD_UP;
        if (down(SDL_GAMEPAD_BUTTON_DPAD_DOWN))      b |= BTN_DPAD_DOWN;
        if (down(SDL_GAMEPAD_BUTTON_DPAD_LEFT))      b |= BTN_DPAD_LEFT;
        if (down(SDL_GAMEPAD_BUTTON_DPAD_RIGHT))     b |= BTN_DPAD_RIGHT;
        if (down(SDL_GAMEPAD_BUTTON_START))          b |= BTN_START;
        if (down(SDL_GAMEPAD_BUTTON_BACK))           b |= BTN_BACK;
        if (down(SDL_GAMEPAD_BUTTON_LEFT_STICK))     b |= BTN_LTHUMB;
        if (down(SDL_GAMEPAD_BUTTON_RIGHT_STICK))    b |= BTN_RTHUMB;
        if (down(SDL_GAMEPAD_BUTTON_LEFT_SHOULDER))  b |= BTN_LB;
        if (down(SDL_GAMEPAD_BUTTON_RIGHT_SHOULDER)) b |= BTN_RB;
        if (down(SDL_GAMEPAD_BUTTON_SOUTH))          b |= BTN_A;
        if (down(SDL_GAMEPAD_BUTTON_EAST))           b |= BTN_B;
        if (down(SDL_GAMEPAD_BUTTON_WEST))           b |= BTN_X;
        if (down(SDL_GAMEPAD_BUTTON_NORTH))          b |= BTN_Y;

        // A flash hunt (MW2_FLASH_HUNT, tools/flash_hunt.sh) takes the pad's Y
        // as its mark, because reaching for F7 mid-fight is not going to
        // happen. The title does not see it: Y switches weapon, and the
        // switch would change the very frames the mark keeps. A stutter hunt
        // (MW2_STUTTERS) marks a hitch with it the same way.
        static const bool hunting = diag::Flag("MW2_FLASH_HUNT") || stutters::On();
        if (hunting && user == 0 && pad)
        {
            static bool wasDown = false;
            const bool isDown = down(SDL_GAMEPAD_BUTTON_NORTH);
            if (isDown && !wasDown)
            {
                if (stutters::On()) stutters::Mark("pad Y");
                else vk::renderer::FlashSeen("pad Y");
            }
            wasDown = isDown;
            b &= uint16_t(~BTN_Y);
        }

        auto axis = [&](SDL_GamepadAxis a){ return pad ? SDL_GetGamepadAxis(pad, a) : int16_t(0); };
        uint8_t triggers[2] = {
            uint8_t(std::max<int>(axis(SDL_GAMEPAD_AXIS_LEFT_TRIGGER) >> 7,
                                  g_scriptTriggers[user][0])),
            uint8_t(std::max<int>(axis(SDL_GAMEPAD_AXIS_RIGHT_TRIGGER) >> 7,
                                  g_scriptTriggers[user][1])) };
        // The guest's Y axes point up; SDL's point down.
        int16_t axes[4] = { axis(SDL_GAMEPAD_AXIS_LEFTX),
                            int16_t(-1 - axis(SDL_GAMEPAD_AXIS_LEFTY)),
                            axis(SDL_GAMEPAD_AXIS_RIGHTX),
                            int16_t(-1 - axis(SDL_GAMEPAD_AXIS_RIGHTY)) };
        if (user == 0)
        {
            KeyboardMoveAxes(axes[0], axes[1]);
            b |= MouseInputs(triggers, axes[2], axes[3]);
#ifdef _WIN32
            auto isDown = [](int vk) { return (GetAsyncKeyState(vk) & 0x8000) != 0; };
            if (isDown(VK_RETURN))                      b |= BTN_START;
            if (isDown(VK_ESCAPE))                      b |= BTN_BACK;
            if (isDown(VK_TAB) || isDown(VK_BACK))      b |= BTN_BACK;
            if (isDown(VK_UP))                          b |= BTN_DPAD_UP;
            if (isDown(VK_DOWN))                        b |= BTN_DPAD_DOWN;
            if (isDown(VK_LEFT))                        b |= BTN_DPAD_LEFT;
            if (isDown(VK_RIGHT))                       b |= BTN_DPAD_RIGHT;

            if (isDown(VK_SPACE) || isDown('Z') || isDown(VK_RETURN)) b |= BTN_A;
            if (isDown('C') || isDown(VK_CONTROL) || isDown('X'))      b |= BTN_B;
            if (isDown('R') || isDown('F'))                           b |= BTN_X;
            if (isDown('1') || isDown('2') || isDown('Y'))            b |= BTN_Y;

            if (isDown('Q') || isDown('4'))                           b |= BTN_LB;
            if (isDown('G') || isDown('E'))                           b |= BTN_RB;

            if (isDown(VK_SHIFT))                                     b |= BTN_LTHUMB;
            if (isDown('V') || isDown(VK_MBUTTON))                    b |= BTN_RTHUMB;

            if (isDown(VK_LBUTTON)) triggers[1] = 255;
            if (isDown(VK_RBUTTON)) triggers[0] = 255;

            if (isDown('W')) { axes[1] = 32767;  b |= BTN_DPAD_UP; }
            if (isDown('S')) { axes[1] = -32768; b |= BTN_DPAD_DOWN; }
            if (isDown('D')) { axes[0] = 32767;  b |= BTN_DPAD_RIGHT; }
            if (isDown('A')) { axes[0] = -32768; b |= BTN_DPAD_LEFT; }
#endif
            if (axes[1] > 16000) b |= BTN_DPAD_UP;
            else if (axes[1] < -16000) b |= BTN_DPAD_DOWN;
            if (axes[0] > 16000) b |= BTN_DPAD_RIGHT;
            else if (axes[0] < -16000) b |= BTN_DPAD_LEFT;

            // What a person did, before the autopilot adds to it: a recorded
            // route keeps the presses (MW2_RECORD_PATH), and every shot is logged.
            player::SawPad(b, triggers[1]);
            player::Press press = player::Press::None;
            if (player::Steer(axes, press))
                switch (press)
                {
                case player::Press::A:    b |= BTN_A; break;
                case player::Press::Up:   b |= BTN_DPAD_UP; break;
                case player::Press::Left: b |= BTN_DPAD_LEFT; break;
                case player::Press::Fire: triggers[1] = 255; break;
                case player::Press::None: break;
                }
        }
        // A scripted stick entry overrides the pad and the autopilot while it is
        // held: a script that says where to look means it.
        for (int i = 0; i < 4; i++) if (g_scriptAxisHeld[user][i]) axes[i] = g_scriptAxes[user][i];

        // The sign-in screen takes the controllers while it is open, the left
        // stick moving through it as the d-pad does.
        // The Guide button opens it, or Back and Start together where the
        // system keeps that button for itself.
        const uint16_t stick = axes[1] > 16000 ? BTN_DPAD_UP : axes[1] < -16000 ? BTN_DPAD_DOWN : uint16_t(0);
        const bool guide = down(SDL_GAMEPAD_BUTTON_GUIDE) || (b & (BTN_BACK | BTN_START)) == (BTN_BACK | BTN_START);
        const bool taken = signin::Input(user, uint16_t(b | stick | (guide ? signin::kGuide : 0)));
        b &= uint16_t(~signin::kGuide);
        if (taken)
        {
            b = 0;
            triggers[0] = triggers[1] = 0;
            axes[0] = axes[1] = axes[2] = axes[3] = 0;
        }

        Latch& latch = g_latch[user];
        const bool changed = latch.buttons != b ||
                             std::memcmp(latch.triggers, triggers, sizeof triggers) != 0 ||
                             std::memcmp(latch.axes, axes, sizeof axes) != 0;
        if (changed)
        {
            latch.packet++;
            latch.buttons = b;
            std::memcpy(latch.triggers, triggers, sizeof triggers);
            std::memcpy(latch.axes, axes, sizeof axes);
        }

        out->packet                = latch.packet;
        out->gamepad.buttons       = b;
        out->gamepad.leftTrigger   = triggers[0];
        out->gamepad.rightTrigger  = triggers[1];
        out->gamepad.thumbLX       = uint16_t(axes[0]);
        out->gamepad.thumbLY       = uint16_t(axes[1]);
        out->gamepad.thumbRX       = uint16_t(axes[2]);
        out->gamepad.thumbRY       = uint16_t(axes[3]);
        ctx.r3.u64 = X_ERROR_SUCCESS;
        return;
    }
#else
    (void)user;
#endif
    *out = XInputState{};
    ctx.r3.u64 = X_ERROR_DEVICE_NOT_CONNECTED;
}

PPC_FUNC(__imp__XamInputGetCapabilities)
{
    uint32_t user = ctx.r3.u32;
    auto* caps = GuestPtr<XInputCapabilities>(ctx.r5.u32);
    if (!caps) { ctx.r3.u64 = X_ERROR_DEVICE_NOT_CONNECTED; return; }
#ifdef MW2_ANDROID
    if (android::input::Connected(user))
    {
        *caps = XInputCapabilities{};
        caps->type = 1;      // XINPUT_DEVTYPE_GAMEPAD
        caps->subType = 1;   // XINPUT_DEVSUBTYPE_GAMEPAD
        caps->gamepad.buttons = 0xF3FF;
        caps->gamepad.leftTrigger = caps->gamepad.rightTrigger = 0xFF;
        caps->gamepad.thumbLX = caps->gamepad.thumbLY = uint16_t(0xFFFF);
        caps->gamepad.thumbRX = caps->gamepad.thumbRY = uint16_t(0xFFFF);
        caps->vibration.left = caps->vibration.right = uint16_t(0xFFFF);
        ctx.r3.u64 = X_ERROR_SUCCESS;
        return;
    }
    *caps = XInputCapabilities{};
    ctx.r3.u64 = X_ERROR_DEVICE_NOT_CONNECTED;
    return;
#endif
#ifdef MW2_USE_SDL
    if (user == 0 || PadFor(user) || (user < 4 && g_scripted[user]) || player::Wanted())
    {
        // What a wired 360 pad reports: every control it has at full range,
        // and both motors.
        *caps = XInputCapabilities{};
        caps->type = 1;      // XINPUT_DEVTYPE_GAMEPAD
        caps->subType = 1;   // XINPUT_DEVSUBTYPE_GAMEPAD
        caps->gamepad.buttons = 0xF3FF;
        caps->gamepad.leftTrigger = caps->gamepad.rightTrigger = 0xFF;
        caps->gamepad.thumbLX = caps->gamepad.thumbLY = uint16_t(0xFFFF);
        caps->gamepad.thumbRX = caps->gamepad.thumbRY = uint16_t(0xFFFF);
        caps->vibration.left = caps->vibration.right = uint16_t(0xFFFF);
        ctx.r3.u64 = X_ERROR_SUCCESS;
        return;
    }
#else
    (void)user;
#endif
    *caps = XInputCapabilities{};
    ctx.r3.u64 = X_ERROR_DEVICE_NOT_CONNECTED;
}

// XamInputSetState(user, flags, vibration): the left motor is the heavy, low
// frequency one, as SDL's first argument is. A 360 motor keeps its speed until
// the next call, so the rumble is given SDL's longest duration rather than
// none: with none, SDL also stops resending it to pads that let a rumble lapse.
PPC_FUNC(__imp__XamInputSetState)
{
    const uint32_t user = ctx.r3.u32;
    if (user >= 4) { ctx.r3.u64 = X_ERROR_DEVICE_NOT_CONNECTED; return; }
    auto* v = GuestPtr<XInputVibration>(ctx.r5.u32);
    if (!v) { ctx.r3.u64 = X_ERROR_BAD_ARGUMENTS; return; }
#ifdef MW2_ANDROID
    // The phone's vibrator, or a pad that has motors of its own: the app
    // decides which, and whether the player wanted either.
    android::input::Rumble(user, v->left, v->right);
    ctx.r3.u64 = X_ERROR_SUCCESS;
    return;
#endif
#ifdef MW2_USE_SDL
    if (SDL_Gamepad* pad = PadFor(user))
    {
        std::lock_guard lock(g_padLock);
        if (g_pads[user] == pad)
        {
            const uint16_t left = v->left, right = v->right;
            const bool ok = SDL_RumbleGamepad(pad, left, right, 0xFFFF);
            // Said once per pad: the first rumble, or that the pad has none.
            static bool told[4];
            if ((left || right || !ok) && !told[user])
            {
                told[user] = true;
                if (ok) LOGI("input: controller %u rumbles (%04X, %04X)", user, left, right);
                else    LOGW("input: controller %u cannot rumble: %s", user, SDL_GetError());
            }
            ctx.r3.u64 = X_ERROR_SUCCESS;
            return;
        }
    }
#endif
    ctx.r3.u64 = X_ERROR_DEVICE_NOT_CONNECTED;
}
