// The sign-in screen and who it signed in (signin.h).
#include "signin.h"
#include "diagnostics.h"
#include "log.h"
#include "kernel/kernel.h"

#include <algorithm>
#include <atomic>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <fstream>
#include <mutex>
#include <random>

#ifdef MW2_SIGNIN_PICTURE
#define STB_TRUETYPE_IMPLEMENTATION
#define STBTT_STATIC
#include <imstb_truetype.h>
// The launcher's fonts, in the executable (CMake writes them out).
extern const unsigned char kFontMenu[];
extern const unsigned char kFontHeading[];
extern const unsigned char kFontBody[];
#endif

namespace
{
    using namespace signin;

    constexpr uint16_t kUp = 0x0001, kDown = 0x0002, kStart = 0x0010, kA = 0x1000, kB = 0x2000, kX = 0x4000;
    constexpr uint32_t XN_SYS_UI = 0x00000009, XN_SYS_SIGNINCHANGED = 0x0000000A;

    struct Profile { uint64_t id; std::string name; };

    struct Item
    {
        enum What { Existing, New, SignOut } what;
        Profile profile;
        std::string label;
    };

    std::mutex g_lock;
    Player g_players[kUsers];

    // The screen.
    std::atomic<bool> g_open{ false };
    uint32_t g_asking = 0;
    std::vector<Item> g_items;
    int g_focus = 0;
    std::atomic<uint64_t> g_version{ 0 };

    // The controllers, as last read.
    uint16_t g_held[kUsers]{};
    bool g_swallow[kUsers]{};
    uint32_t g_pressedLast = 0;

    std::filesystem::path File() { return kernel::SaveRoot() / "profiles.txt"; }

    // A line per profile: twelve hexadecimal digits, a space, the name.
    std::vector<Profile> Profiles()
    {
        std::vector<Profile> profiles;
        std::ifstream in(File());
        for (std::string line; std::getline(in, line); )
        {
            while (!line.empty() && (line.back() == '\r' || line.back() == ' ')) line.pop_back();
            if (line.size() < 14 || line[12] != ' ') continue;
            char* end = nullptr;
            const uint64_t id = std::strtoull(line.substr(0, 12).c_str(), &end, 16);
            if (!id || *end) continue;
            profiles.push_back({ id, line.substr(13, 15) });   // a gamertag's longest
        }
        return profiles;
    }

    // "Player 2", or the first number after it nobody has.
    Profile NewProfile()
    {
        const std::vector<Profile> profiles = Profiles();
        Profile made;
        for (int number = 2; ; number++)
        {
            made.name = "Player " + std::to_string(number);
            if (std::none_of(profiles.begin(), profiles.end(), [&](const Profile& p) { return p.name == made.name; }))
                break;
        }
        std::random_device random;
        do made.id = ((uint64_t(random()) << 32) | random()) & 0xFFFFFFFFFFFFull;
        while (!made.id || std::any_of(profiles.begin(), profiles.end(), [&](const Profile& p) { return p.id == made.id; }));

        std::error_code ec;
        std::filesystem::create_directories(kernel::SaveRoot(), ec);
        char line[64];
        std::snprintf(line, sizeof line, "%012llx %s\n", (unsigned long long)made.id, made.name.c_str());
        std::ofstream out(File(), std::ios::app);
        out << line;
        if (!out) LOGE("signin: cannot write %s", File().string().c_str());
        return made;
    }

    uint32_t MaskLocked()
    {
        uint32_t mask = 1;
        for (uint32_t user = 1; user < kUsers; user++)
            if (g_players[user].signedIn) mask |= 1u << user;
        return mask;
    }

    void ShutLocked()
    {
        g_open = false;
        g_items.clear();
        // Whatever is held now chose something here, not in the title.
        for (uint32_t user = 0; user < kUsers; user++) g_swallow[user] = g_held[user] != 0;
        g_version++;
        kernel::PostNotification(XN_SYS_UI, 0);
    }

    void ChooseLocked(const Item& item)
    {
        Player& player = g_players[g_asking];
        Player chosen;
        switch (item.what)
        {
        case Item::Existing:
            chosen = { true, item.profile.id, item.profile.name };
            break;
        case Item::New:
        {
            const Profile made = NewProfile();
            chosen = { true, made.id, made.name };
            break;
        }
        case Item::SignOut:
            break;
        }
        player = chosen;
        LOGI("signin: controller %u %s%s", g_asking, chosen.signedIn ? "signs in as " : "signs out", chosen.name.c_str());
        ShutLocked();
        kernel::PostNotification(XN_SYS_SIGNINCHANGED, MaskLocked());
    }
    void OpenLocked(uint32_t user)
    {
        // The first controller's player is the online service's.
        if (g_open || user == 0 || user >= kUsers) return;
        g_asking = user;
        const Player& current = g_players[g_asking];

        g_items.clear();
        for (const Profile& profile : Profiles())
        {
            const bool taken = std::any_of(g_players, g_players + kUsers, [&](const Player& other) {
                return other.signedIn && other.id == profile.id; });
            if (!taken) g_items.push_back({ Item::Existing, profile, profile.name });
        }
        g_items.push_back({ Item::New, {}, "New profile" });
        if (current.signedIn) g_items.push_back({ Item::SignOut, {}, "Sign out" });
        g_focus = 0;
        g_open = true;
        g_version++;
        LOGI("signin: the screen opens for controller %u, %zu entries", g_asking, g_items.size());
        kernel::PostNotification(XN_SYS_UI, 1);
    }
}

signin::Player signin::At(uint32_t user)
{
    if (user == 0 || user >= kUsers) return {};
    std::lock_guard lock(g_lock);
    return g_players[user];
}

uint32_t signin::Mask()
{
    std::lock_guard lock(g_lock);
    return MaskLocked();
}

void signin::Ask()
{
    std::lock_guard lock(g_lock);
    OpenLocked(g_pressedLast);
}

bool signin::Input(uint32_t user, uint16_t buttons)
{
    if (user >= kUsers) return false;
    std::lock_guard lock(g_lock);
    const uint16_t pressed = buttons & ~g_held[user];
    g_held[user] = buttons;
    if (!g_open)
    {
        if (pressed & (kA | kX | kStart)) g_pressedLast = user;
        if (g_swallow[user]) g_swallow[user] = buttons != 0;
        // The console's own button opens the screen whatever the title shows.
        if (pressed & kGuide)
        {
            OpenLocked(user);
            if (g_open) return true;
        }
        return g_swallow[user];
    }
    if (user == g_asking)
    {
        const int count = int(g_items.size());
        if (pressed & kDown) { g_focus = (g_focus + 1) % count; g_version++; }
        if (pressed & kUp)   { g_focus = (g_focus + count - 1) % count; g_version++; }
        if (pressed & kA) ChooseLocked(Item(g_items[g_focus]));
        else if (pressed & kB) ShutLocked();
    }
    return true;
}

#ifdef MW2_SIGNIN_PICTURE
namespace
{
    constexpr int kAtlas = 512;
    struct Font
    {
        std::vector<uint8_t> atlas;
        stbtt_packedchar glyphs[95]{};
        float size = 0, ascent = 0;
    };
    Font g_heading, g_entry, g_small;

    void Bake(Font& font, const unsigned char* data, float size)
    {
        if (font.size == size) return;
        font.size = size;
        font.atlas.assign(size_t(kAtlas) * kAtlas, 0);
        stbtt_pack_context pack;
        stbtt_PackBegin(&pack, font.atlas.data(), kAtlas, kAtlas, 0, 1, nullptr);
        stbtt_PackFontRange(&pack, data, 0, size, 32, 95, font.glyphs);
        stbtt_PackEnd(&pack);
        stbtt_fontinfo info;
        stbtt_InitFont(&info, data, 0);
        int ascent = 0, descent = 0, gap = 0;
        stbtt_GetFontVMetrics(&info, &ascent, &descent, &gap);
        font.ascent = float(ascent) * stbtt_ScaleForPixelHeight(&info, size);
    }

    struct Colour { uint8_t r, g, b; };
    constexpr Colour kWhite{ 236, 236, 232 }, kDim{ 150, 151, 150 }, kAmber{ 232, 178, 52 },
                     kBack{ 22, 24, 28 }, kBar{ 0, 0, 0 }, kEdge{ 70, 73, 78 };

    void Fill(Image& image, int x0, int y0, int x1, int y1, Colour colour)
    {
        x0 = std::max(x0, 0); y0 = std::max(y0, 0);
        x1 = std::min(x1, int(image.width)); y1 = std::min(y1, int(image.height));
        for (int y = y0; y < y1; y++)
            for (int x = x0; x < x1; x++)
            {
                uint8_t* p = &image.pixels[(size_t(y) * image.width + x) * 4];
                p[0] = colour.b; p[1] = colour.g; p[2] = colour.r; p[3] = 255;
            }
    }

    // Left-aligned at x, the line's top at y. Returns where the text ends.
    float Text(Image& image, const Font& font, float x, float y, Colour colour, const std::string& text)
    {
        float penY = y + font.ascent;
        for (unsigned char c : text)
        {
            if (c < 32 || c > 126) c = '?';
            stbtt_aligned_quad quad;
            stbtt_GetPackedQuad(font.glyphs, kAtlas, kAtlas, c - 32, &x, &penY, &quad, 1);
            const int sx = int(quad.s0 * kAtlas + 0.5f), sy = int(quad.t0 * kAtlas + 0.5f);
            const int w = int(quad.x1 - quad.x0), h = int(quad.y1 - quad.y0);
            for (int row = 0; row < h; row++)
                for (int column = 0; column < w; column++)
                {
                    const int px = int(quad.x0) + column, py = int(quad.y0) + row;
                    if (px < 0 || py < 0 || px >= int(image.width) || py >= int(image.height)) continue;
                    const uint32_t alpha = font.atlas[size_t(sy + row) * kAtlas + sx + column];
                    uint8_t* p = &image.pixels[(size_t(py) * image.width + px) * 4];
                    p[0] = uint8_t((colour.b * alpha + p[0] * (255 - alpha)) / 255);
                    p[1] = uint8_t((colour.g * alpha + p[1] * (255 - alpha)) / 255);
                    p[2] = uint8_t((colour.r * alpha + p[2] * (255 - alpha)) / 255);
                }
        }
        return x;
    }
}

bool signin::Picture(uint32_t windowHeight, Image& image)
{
    if (!g_open.load(std::memory_order_relaxed)) return false;
    std::lock_guard lock(g_lock);
    if (!g_open) return false;

    // Laid out on a 450 by 360 sheet, scaled to a little over half the window.
    const uint32_t height = std::max<uint32_t>(240, windowHeight * 56 / 100) & ~1u;
    const uint32_t width = (height * 5 / 4) & ~1u;
    const uint64_t version = g_version.load();
    if (image.version == version && image.height == height) return true;
    image.width = width;
    image.height = height;
    image.version = version;
    image.pixels.resize(size_t(width) * height * 4);
    const float unit = float(height) / 360.0f;
    auto at = [&](float sheet) { return int(std::lround(sheet * unit)); };
    Bake(g_heading, kFontHeading, std::round(38 * unit));
    Bake(g_entry, kFontMenu, std::round(28 * unit));
    Bake(g_small, kFontBody, std::round(18 * unit));

    Fill(image, 0, 0, int(width), int(height), kEdge);
    Fill(image, at(2), at(2), int(width) - at(2), int(height) - at(2), kBack);
    Text(image, g_heading, float(at(28)), float(at(20)), kWhite, "SIGN IN");
    const Player& current = g_players[g_asking];
    const std::string who = "Controller " + std::to_string(g_asking + 1) +
        (current.signedIn ? ", signed in as " + current.name : "");
    Text(image, g_small, float(at(29)), float(at(64)), kDim, who);

    // Six entries are seen at once; the list follows the one chosen.
    constexpr int kSeen = 6;
    const int count = int(g_items.size());
    const int first = std::clamp(g_focus - kSeen + 1, 0, std::max(0, count - kSeen));
    for (int i = first; i < std::min(count, first + kSeen); i++)
    {
        const int top = at(104.0f + float(i - first) * 36.0f);
        const bool chosen = i == g_focus;
        if (chosen)
        {
            Fill(image, at(2), top, int(width) - at(2), top + at(34), kBar);
            Fill(image, at(2), top, at(8), top + at(34), kAmber);
        }
        Text(image, g_entry, float(at(28)), float(top + at(2)), chosen ? kWhite : kDim, g_items[i].label);
    }
    if (first > 0) Text(image, g_small, float(width) - float(at(40)), float(at(84)), kDim, "...");
    if (first + kSeen < count) Text(image, g_small, float(width) - float(at(40)), float(at(318)), kDim, "...");
    float x = Text(image, g_small, float(at(28)), float(at(326)), kAmber, "A");
    x = Text(image, g_small, x, float(at(326)), kDim, "  Select      ");
    x = Text(image, g_small, x, float(at(326)), kAmber, "B");
    Text(image, g_small, x, float(at(326)), kDim, "  Back");

    // MW2_DUMP_FRAMES keeps the screen too, which the frames do not show.
    if constexpr (diag::kOn)
        if (const char* folder = diag::Text("MW2_DUMP_FRAMES"))
        {
            const std::string path = std::string(folder) + "/signin_" + std::to_string(version) + ".ppm";
            if (std::FILE* out = std::fopen(path.c_str(), "wb"))
            {
                std::fprintf(out, "P6\n%u %u\n255\n", width, height);
                for (size_t i = 0; i < image.pixels.size(); i += 4)
                {
                    const uint8_t rgb[3] = { image.pixels[i + 2], image.pixels[i + 1], image.pixels[i] };
                    std::fwrite(rgb, 1, 3, out);
                }
                std::fclose(out);
            }
        }
    return true;
}
#else
bool signin::Picture(uint32_t, Image&) { return false; }
#endif
