#include "ui.h"
#include "fonts.h"

#include <SDL3/SDL.h>
#include <imgui.h>

#include <algorithm>
#include <cmath>
#include <vector>

namespace
{
    constexpr ImU32 kWhite = IM_COL32(236, 236, 232, 255);
    constexpr ImU32 kDim = IM_COL32(236, 236, 232, 96);
    constexpr ImU32 kBlack = IM_COL32(0, 0, 0, 255);
    constexpr ImU32 kAmber = IM_COL32(232, 178, 52, 255);
    constexpr ImU32 kGreen = IM_COL32(186, 232, 176, 255);
    constexpr ImU32 kRed = IM_COL32(240, 150, 120, 255);

    // Value noise, summed over a few octaves: the smoke.
    float Hash(int x, int y)
    {
        uint32_t h = uint32_t(x) * 374761393u + uint32_t(y) * 668265263u;
        h = (h ^ (h >> 13)) * 1274126177u;
        return float((h ^ (h >> 16)) & 0xFFFF) / 65535.0f;
    }
    float Noise(float x, float y)
    {
        const int xi = int(std::floor(x)), yi = int(std::floor(y));
        float fx = x - float(xi), fy = y - float(yi);
        fx = fx * fx * (3 - 2 * fx);
        fy = fy * fy * (3 - 2 * fy);
        const float a = Hash(xi, yi), b = Hash(xi + 1, yi), c = Hash(xi, yi + 1), d = Hash(xi + 1, yi + 1);
        return a + (b - a) * fx + (c - a) * fy + (a - b - c + d) * fx * fy;
    }
    float Smoke(float x, float y)
    {
        float sum = 0, weight = 0.5f;
        for (int octave = 0; octave < 5; octave++, x *= 2.03f, y *= 2.03f, weight *= 0.5f) sum += Noise(x, y) * weight;
        return sum;
    }

    // Text with its letters set apart, as a wordmark is.
    void Spaced(ImDrawList* draw, ImFont* font, float size, ImVec2 at, ImU32 colour, const char* text, float spacing)
    {
        for (const char* c = text; *c; c++)
        {
            draw->AddText(font, size, at, colour, c, c + 1);
            at.x += font->CalcTextSizeA(size, FLT_MAX, 0, c, c + 1).x + spacing;
        }
    }
    float SpacedWidth(ImFont* font, float size, const char* text, float spacing)
    {
        float width = 0;
        for (const char* c = text; *c; c++) width += font->CalcTextSizeA(size, FLT_MAX, 0, c, c + 1).x + spacing;
        return width - spacing;
    }
}

ui::Fonts ui::LoadFonts(float scale)
{
    ImGuiIO& io = ImGui::GetIO();
    ImFontConfig config;
    config.FontDataOwnedByAtlas = false;    // the data is in the executable
    config.OversampleH = 3;
    auto load = [&](const unsigned char* data, unsigned size, float pixels) {
        return io.Fonts->AddFontFromMemoryTTF(const_cast<unsigned char*>(data), int(size), std::round(pixels * scale), &config);
    };
    Fonts fonts;
    fonts.body = load(kFontBody, kFontBodySize, 21);    // first: the default for widgets
    fonts.menu = load(kFontMenu, kFontMenuSize, 30);
    fonts.heading = load(kFontHeading, kFontHeadingSize, 40);
    fonts.small = load(kFontBody, kFontBodySize, 16);
    return fonts;
}

SDL_Texture* ui::MakeBackdrop(SDL_Renderer* renderer)
{
    constexpr int kWidth = 640, kHeight = 360;
    std::vector<uint8_t> pixels(size_t(kWidth) * kHeight * 4);
    for (int y = 0; y < kHeight; y++)
        for (int x = 0; x < kWidth; x++)
        {
            const float u = float(x) / kWidth, v = float(y) / kHeight;
            // Grey smoke, lit from the upper right, darker toward the bottom.
            float grey = 0.47f - 0.24f * v;
            grey += (Smoke(u * 3.1f + 7, v * 2.3f + 3) - 0.48f) * 0.30f;
            const float lx = (u - 0.70f) * 1.78f, ly = v - 0.18f;
            grey += 0.16f * std::exp(-(lx * lx + ly * ly) * 3.2f);
            // The column the entries stand in.
            grey *= 0.74f + 0.26f * std::clamp((u - 0.318f) * 60.0f, 0.0f, 1.0f);
            // The corners fall away.
            const float cx = u - 0.5f, cy = v - 0.5f;
            grey *= 1.0f - 0.55f * std::pow(cx * cx + cy * cy, 1.2f);
            // The glow in the bottom left corner.
            const float gx = (u - 0.02f) * 1.78f, gy = v - 1.06f;
            const float glow = std::exp(-(gx * gx * 1.1f + gy * gy * 2.6f) * 2.4f) *
                               (0.75f + 0.5f * Smoke(u * 4.0f, v * 4.0f + 11));
            const float r = grey + glow * 0.95f, g = grey + glow * 0.66f, b = grey * 0.98f + glow * 0.06f;
            // A little grain keeps the gradients from banding.
            const float grain = (Hash(x * 3 + 1, y * 7 + 5) - 0.5f) * 0.018f;
            uint8_t* p = &pixels[(size_t(y) * kWidth + x) * 4];
            p[0] = uint8_t(std::clamp(r + grain, 0.0f, 1.0f) * 255);
            p[1] = uint8_t(std::clamp(g + grain, 0.0f, 1.0f) * 255);
            p[2] = uint8_t(std::clamp(b + grain, 0.0f, 1.0f) * 255);
            p[3] = 255;
        }
    SDL_Texture* texture = SDL_CreateTexture(renderer, SDL_PIXELFORMAT_RGBA32, SDL_TEXTUREACCESS_STATIC, kWidth, kHeight);
    if (!texture) return nullptr;
    SDL_UpdateTexture(texture, nullptr, pixels.data(), kWidth * 4);
    SDL_SetTextureScaleMode(texture, SDL_SCALEMODE_LINEAR);
    return texture;
}

int ui::Draw(const Fonts& fonts, const Frame& frame, float scale, int& focus)
{
    ImDrawList* draw = ImGui::GetBackgroundDrawList();
    const ImGuiIO& io = ImGui::GetIO();
    auto S = [&](float v) { return std::round(v * scale); };
    int chosen = -1;

    // ---- the entries: right-aligned in the left column, the chosen one on a
    // black bar that ends in a slant
    const float columnRight = S(416), rowHeight = S(30), barHeight = S(27);
    float y = S(150);
    for (int i = 0; i < int(frame.entries.size()); i++)
    {
        const Entry& entry = frame.entries[i];
        if (entry.ruleAbove)
        {
            draw->AddLine({ S(96), y + S(6) }, { columnRight + S(4), y + S(6) }, IM_COL32(236, 236, 232, 110), 1.0f);
            y += S(13);
        }
        const float size = fonts.menu->FontSize;
        const float width = fonts.menu->CalcTextSizeA(size, FLT_MAX, 0, entry.label.c_str()).x;
        const float tagWidth = entry.tag.empty() ? 0 : fonts.small->CalcTextSizeA(fonts.small->FontSize, FLT_MAX, 0, entry.tag.c_str()).x + S(10);
        const ImVec2 rowMin{ 0, y }, rowMax{ columnRight + S(48), y + barHeight };
        if (ImGui::IsMouseHoveringRect(rowMin, rowMax, false))
        {
            if (io.MouseDelta.x != 0 || io.MouseDelta.y != 0) focus = i;
            if (ImGui::IsMouseClicked(ImGuiMouseButton_Left)) { focus = i; chosen = i; }
        }
        if (i == focus)
        {
            const float slant = S(12);
            draw->AddRectFilled({ 0, y }, { S(90), y + barHeight }, kBlack);
            draw->AddQuadFilled({ S(96), y }, { columnRight + S(30) + slant, y }, { columnRight + S(30), y + barHeight }, { S(96), y + barHeight }, kBlack);
            for (int stroke = 0; stroke < 2; stroke++)
            {
                const float x = columnRight + S(36) + stroke * S(8);
                draw->AddQuadFilled({ x + slant, y }, { x + slant + S(4), y }, { x + S(4), y + barHeight }, { x, y + barHeight }, kBlack);
            }
        }
        const ImU32 colour = entry.enabled ? kWhite : kDim;
        draw->AddText(fonts.menu, size, { columnRight - width - tagWidth, y + (barHeight - size) * 0.5f - S(1) }, colour, entry.label.c_str());
        if (!entry.tag.empty())
            draw->AddText(fonts.small, fonts.small->FontSize, { columnRight - tagWidth + S(10), y + S(8) }, kAmber, entry.tag.c_str());
        y += rowHeight;
    }

    // ---- the pane
    const float left = S(520), right = S(1210);
    float py = S(150);
    if (!frame.heading.empty())
    {
        std::string heading = frame.heading;
        Spaced(draw, fonts.heading, fonts.heading->FontSize, { left, py }, kWhite, heading.c_str(), S(1.5f));
        py += fonts.heading->FontSize + S(6);
        draw->AddRectFilled({ left, py }, { left + S(54), py + S(3) }, kAmber);
        py += S(22);
    }
    if (frame.busy)
    {
        char count[32];
        std::snprintf(count, sizeof(count), "STEP %d OF %d", frame.step, frame.steps);
        draw->AddText(fonts.small, fonts.small->FontSize, { left, py }, kAmber, count);
        py += fonts.small->FontSize + S(6);
        draw->AddText(fonts.menu, fonts.menu->FontSize, { left, py }, kWhite, frame.stepTitle.c_str());
        py += fonts.menu->FontSize + S(18);
        // The bar: the step's own amount, or a band that travels when it has none.
        const float barWidth = right - left, bar = S(8);
        draw->AddRectFilled({ left, py }, { right, py + bar }, IM_COL32(0, 0, 0, 150));
        if (frame.fraction >= 0)
            draw->AddRectFilled({ left, py }, { left + barWidth * std::clamp(frame.fraction, 0.0f, 1.0f), py + bar }, kAmber);
        else
        {
            const float at = float(std::fmod(ImGui::GetTime() * 0.6, 1.0)) * (barWidth + S(160)) - S(160);
            draw->AddRectFilled({ std::max(left, left + at), py }, { std::min(right, left + at + S(160)), py + bar }, kAmber);
        }
        py += bar + S(12);
        draw->AddText(fonts.body, fonts.body->FontSize, { left, py }, kWhite, frame.amount.c_str());
        const float detailWidth = fonts.body->CalcTextSizeA(fonts.body->FontSize, FLT_MAX, 0, frame.detail.c_str()).x;
        draw->AddText(fonts.body, fonts.body->FontSize, { right - detailWidth, py }, IM_COL32(236, 236, 232, 170), frame.detail.c_str());
        py += fonts.body->FontSize + S(24);
    }
    if (!frame.text.empty())
        draw->AddText(fonts.body, fonts.body->FontSize, { left, py }, frame.error ? kRed : IM_COL32(236, 236, 232, 225),
                      frame.text.c_str(), nullptr, right - left);

    // ---- the wordmark, in the game's pale green with a glow behind it
    {
        const char* word = "MW2 RECOMPILED";
        const float size = S(46), spacing = S(7);
        const float width = SpacedWidth(fonts.heading, size, word, spacing);
        const ImVec2 at{ S(1210) - width, S(560) };
        for (int ring = 3; ring >= 1; ring--)
            for (int k = 0; k < 8; k++)
            {
                const float angle = float(k) * 0.785398f;
                Spaced(draw, fonts.heading, size, { at.x + std::cos(angle) * ring * S(1.6f), at.y + std::sin(angle) * ring * S(1.6f) },
                       IM_COL32(120, 220, 110, 14), word, spacing);
            }
        Spaced(draw, fonts.heading, size, at, kGreen, word, spacing);
        // Under it, ending where it ends: the line is the longer of the two.
        const char* note = "UNOFFICIAL. NOT AFFILIATED WITH ACTIVISION, INFINITY WARD OR MICROSOFT.";
        const float noteWidth = fonts.small->CalcTextSizeA(fonts.small->FontSize, FLT_MAX, 0, note).x;
        draw->AddText(fonts.small, fonts.small->FontSize, { S(1210) - noteWidth, at.y + size + S(4) }, IM_COL32(236, 236, 232, 150), note);
    }

    // ---- the lines at the edges
    draw->AddText(fonts.body, fonts.body->FontSize, { S(152), S(640) }, IM_COL32(236, 236, 232, 215), frame.status.c_str());
    const float cornerWidth = fonts.small->CalcTextSizeA(fonts.small->FontSize, FLT_MAX, 0, frame.corner.c_str()).x;
    draw->AddText(fonts.small, fonts.small->FontSize, { S(1210) - cornerWidth, S(78) }, IM_COL32(236, 236, 232, 170), frame.corner.c_str());
    const float hintWidth = fonts.small->CalcTextSizeA(fonts.small->FontSize, FLT_MAX, 0, frame.hint.c_str()).x;
    draw->AddText(fonts.small, fonts.small->FontSize, { S(1210) - hintWidth, S(676) }, IM_COL32(236, 236, 232, 150), frame.hint.c_str());
    return chosen;
}
