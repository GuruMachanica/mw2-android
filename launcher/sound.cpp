// The menu sounds, out of the installed game.
//
// They are in code_post_gfx.ff, the fastfile both titles load before their
// menus. A fastfile is a short header and one zlib stream; inflated, it is the
// title's assets one after another, each a structure followed by what its
// pointers led to. A loaded sound is
//
//     name pointer, XAUDIOPACKET (buffer pointer, buffer size, loops, context),
//     XAUDIOSOURCEFORMAT (sample type, streams, sample rate, channels),
//     length in milliseconds, seek table (count, pointer)
//
// and then the name's characters, the buffer and the seek table. The buffer is
// XMA in 2 KB packets, the same the title hands the console's decoder while it
// runs (runtime/apu/xma.cpp), and the same FFmpeg decodes it here.
//
// A sound is looked up by its name's characters rather than by walking the
// assets before it, which would take the layout of every kind of asset there
// is. What is found is checked for being a sound before it is believed.
//
// The menus do not name these sounds but two aliases, "mouse_over" and
// "mouse_click", which add the volume and pitch they are played at; the
// figures below are those aliases'.
#include "sound.h"
#include "settings.h"
#include "setup.h"

#include <SDL3/SDL.h>

extern "C" {
#include <libavcodec/avcodec.h>
#include <libavutil/channel_layout.h>
#include <libavutil/log.h>
}

#include <algorithm>
#include <cstdint>
#include <cstring>
#include <fstream>
#include <iterator>
#include <string>
#include <vector>

namespace
{
    struct Alias { const char* sound; float volume, pitch; };
    constexpr Alias kAliases[] = {
        { "user_interface/ui_over_v2", 0.27f, 1.3f },       // mouse_over
        { "user_interface/ui_select_hz_1", 0.21f, 1.0f },   // mouse_click
    };
    constexpr int kClips = int(std::size(kAliases));

    constexpr const char* kFastfile = "code_post_gfx.ff";
    // An unsigned fastfile of this version that streams no images: the magic,
    // the version, a flag, when it was made, the language, the count of
    // streamed images and two sizes; the zlib stream is next.
    constexpr uint8_t kMagic[] = { 'I', 'W', 'f', 'f', 'u', '1', '0', '0', 0x00, 0x00, 0x01, 0x0D };
    constexpr size_t kStreamedImages = 0x19, kZlib = 0x25;

    constexpr size_t kPacket = 2048, kPacketHeader = 4;
    constexpr int kDecoderRate = 44100;     // what the decoder is opened at; the sound's own rate is the header's
    constexpr int kDeviceRate = 48000;
    // How many sounds at once: the click rings for two seconds, and the ticks
    // of a pointer crossing the entries come over it.
    constexpr int kVoices = 4;

    uint32_t Big32(const uint8_t* p) { return uint32_t(p[0]) << 24 | uint32_t(p[1]) << 16 | uint32_t(p[2]) << 8 | p[3]; }

    // ---- inflate (RFC 1950, 1951) ------------------------------------------
    struct Inflater
    {
        const uint8_t* in;
        size_t size, at = 0;
        uint32_t hold = 0;
        int held = 0;
        bool spent = false;     // the input ended inside the stream

        uint32_t Bits(int count)
        {
            while (held < count)
            {
                if (at >= size) { spent = true; return 0; }
                hold |= uint32_t(in[at++]) << held;
                held += 8;
            }
            const uint32_t value = hold & ((1u << count) - 1);
            hold >>= count;
            held -= count;
            return value;
        }

        // A canonical Huffman code: how many codes of each length, and the
        // symbols in the order of their codes.
        struct Code
        {
            uint16_t count[16] = {}, symbol[288] = {};
            void Build(const uint8_t* lengths, int symbols)
            {
                for (int i = 0; i < symbols; i++) count[lengths[i]]++;
                count[0] = 0;
                uint16_t offset[16] = {};
                for (int length = 1; length < 15; length++) offset[length + 1] = uint16_t(offset[length] + count[length]);
                for (int i = 0; i < symbols; i++)
                    if (lengths[i]) symbol[offset[lengths[i]]++] = uint16_t(i);
            }
        };

        int Symbol(const Code& code)
        {
            int bits = 0, first = 0, index = 0;
            for (int length = 1; length <= 15; length++)
            {
                bits |= int(Bits(1));
                const int count = code.count[length];
                if (bits - count < first) return code.symbol[index + (bits - first)];
                index += count;
                first = (first + count) << 1;
                bits <<= 1;
            }
            return -1;
        }

        bool Block(const Code& literals, const Code& distances, std::vector<uint8_t>& out)
        {
            static constexpr uint16_t kLengthBase[] = { 3, 4, 5, 6, 7, 8, 9, 10, 11, 13, 15, 17, 19, 23, 27, 31,
                                                         35, 43, 51, 59, 67, 83, 99, 115, 131, 163, 195, 227, 258 };
            static constexpr uint8_t kLengthExtra[] = { 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 2, 2, 2, 2,
                                                         3, 3, 3, 3, 4, 4, 4, 4, 5, 5, 5, 5, 0 };
            static constexpr uint16_t kDistanceBase[] = { 1, 2, 3, 4, 5, 7, 9, 13, 17, 25, 33, 49, 65, 97, 129, 193, 257, 385, 513, 769,
                                                           1025, 1537, 2049, 3073, 4097, 6145, 8193, 12289, 16385, 24577 };
            static constexpr uint8_t kDistanceExtra[] = { 0, 0, 0, 0, 1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 6, 6, 7, 7, 8, 8,
                                                           9, 9, 10, 10, 11, 11, 12, 12, 13, 13 };
            for (;;)
            {
                const int symbol = Symbol(literals);
                if (symbol < 0 || spent) return false;
                if (symbol < 256) { out.push_back(uint8_t(symbol)); continue; }
                if (symbol == 256) return true;
                if (symbol > 285) return false;
                const size_t length = kLengthBase[symbol - 257] + Bits(kLengthExtra[symbol - 257]);
                const int far = Symbol(distances);
                if (far < 0 || far > 29) return false;
                const size_t distance = kDistanceBase[far] + Bits(kDistanceExtra[far]);
                if (spent || distance > out.size()) return false;
                // One at a time: what is copied may reach into the copy.
                for (size_t i = 0, from = out.size() - distance; i < length; i++) out.push_back(out[from + i]);
            }
        }

        bool Run(std::vector<uint8_t>& out)
        {
            // The zlib header: deflate, no preset dictionary.
            if (size < 2 || (in[0] & 0x0F) != 8 || ((in[0] << 8) | in[1]) % 31 || (in[1] & 0x20)) return false;
            at = 2;
            for (bool last = false; !last;)
            {
                last = Bits(1);
                const uint32_t type = Bits(2);
                if (spent) return false;
                if (type == 0)
                {
                    hold = 0; held = 0;     // stored bytes start on a byte
                    if (at + 4 > size) return false;
                    const size_t length = in[at] | in[at + 1] << 8;
                    if ((length ^ (in[at + 2] | in[at + 3] << 8)) != 0xFFFF || at + 4 + length > size) return false;
                    out.insert(out.end(), in + at + 4, in + at + 4 + length);
                    at += 4 + length;
                }
                else if (type == 1)
                {
                    uint8_t lengths[288 + 30];
                    for (int i = 0; i < 288; i++) lengths[i] = i < 144 ? 8 : i < 256 ? 9 : i < 280 ? 7 : 8;
                    std::fill(lengths + 288, lengths + 318, uint8_t(5));
                    Code literals, distances;
                    literals.Build(lengths, 288);
                    distances.Build(lengths + 288, 30);
                    if (!Block(literals, distances, out)) return false;
                }
                else if (type == 2)
                {
                    static constexpr uint8_t kOrder[19] = { 16, 17, 18, 0, 8, 7, 9, 6, 10, 5, 11, 4, 12, 3, 13, 2, 14, 1, 15 };
                    const int literalCount = int(Bits(5)) + 257, distanceCount = int(Bits(5)) + 1, lengthCount = int(Bits(4)) + 4;
                    if (literalCount > 286 || distanceCount > 30) return false;
                    uint8_t lengths[286 + 30] = {};
                    for (int i = 0; i < lengthCount; i++) lengths[kOrder[i]] = uint8_t(Bits(3));
                    Code lengthCode;
                    lengthCode.Build(lengths, 19);
                    std::memset(lengths, 0, sizeof(lengths));
                    for (int i = 0; i < literalCount + distanceCount;)
                    {
                        const int symbol = Symbol(lengthCode);
                        if (symbol < 0 || spent) return false;
                        if (symbol < 16) { lengths[i++] = uint8_t(symbol); continue; }
                        uint8_t repeated = 0;
                        int times;
                        if (symbol == 16)
                        {
                            if (!i) return false;
                            repeated = lengths[i - 1];
                            times = 3 + int(Bits(2));
                        }
                        else times = symbol == 17 ? 3 + int(Bits(3)) : 11 + int(Bits(7));
                        if (i + times > literalCount + distanceCount) return false;
                        while (times--) lengths[i++] = repeated;
                    }
                    if (!lengths[256]) return false;    // no way to end the block
                    Code literals, distances;
                    literals.Build(lengths, literalCount);
                    distances.Build(lengths + literalCount, distanceCount);
                    if (!Block(literals, distances, out)) return false;
                }
                else return false;
            }
            // What follows is the Adler-32 of everything that came out.
            if (at + 4 > size) return false;
            uint32_t a = 1, b = 0;
            for (size_t i = 0; i < out.size();)
            {
                for (const size_t end = std::min(out.size(), i + 5552); i < end; i++) { a += out[i]; b += a; }
                a %= 65521; b %= 65521;
            }
            return Big32(in + at) == (b << 16 | a);
        }
    };

    // ---- the sound among the assets ----------------------------------------
    struct Found { const uint8_t* data = nullptr; size_t size = 0; int rate = 0; };

    Found Find(const std::vector<uint8_t>& zone, const char* name)
    {
        // The structure's last field is the seek table's pointer, which the
        // file leaves as -1 for "what follows"; the name follows it.
        constexpr size_t kStructure = 0xA4, kBufferSize = 0x0C, kSampleType = 0x60, kStreams = 0x64, kRate = 0x68, kChannels = 0x6C;
        std::string key(4, char(0xFF));
        key += name;
        key += '\0';
        const auto at = std::search(zone.begin() + kStructure, zone.end(), key.begin(), key.end(),
                                    [](uint8_t a, char b) { return a == uint8_t(b); });
        if (at == zone.end()) return {};
        const uint8_t* characters = &*at + 4;
        const uint8_t* structure = characters - kStructure;
        Found found;
        found.data = characters + std::strlen(name) + 1;
        found.size = Big32(structure + kBufferSize);
        found.rate = int(Big32(structure + kRate));
        // XMA, one stream of one channel, in whole packets that are all there.
        if (structure[kSampleType] != 4 || structure[kStreams] != 1 || structure[kChannels] != 1) return {};
        if (!found.size || found.size % kPacket || found.size > size_t(zone.data() + zone.size() - found.data)) return {};
        if (found.rate < 8000 || found.rate > 48000) return {};
        return found;
    }

    // ---- XMA to samples -----------------------------------------------------
    std::vector<float> Decode(const Found& sound)
    {
        // The packets' frames end to end: a frame runs on into the next packet.
        std::vector<uint8_t> bits;
        for (size_t packet = 0; packet < sound.size; packet += kPacket)
            bits.insert(bits.end(), sound.data + packet + kPacketHeader, sound.data + packet + kPacket);
        const size_t end = bits.size() * 8;
        auto bit = [&](size_t at) { return (bits[at >> 3] >> (7 - (at & 7))) & 1; };

        std::vector<float> samples;
        const AVCodec* codec = avcodec_find_decoder(AV_CODEC_ID_XMAFRAMES);
        AVCodecContext* context = codec ? avcodec_alloc_context3(codec) : nullptr;
        AVPacket* packet = av_packet_alloc();
        AVFrame* frame = av_frame_alloc();
        if (context && packet && frame)
        {
            context->sample_rate = kDecoderRate;
            av_channel_layout_default(&context->ch_layout, 1);
            context->flags2 |= AV_CODEC_FLAG2_SKIP_MANUAL;
        }
        if (context && packet && frame && avcodec_open2(context, codec, nullptr) >= 0)
        {
            // Where the first packet's first frame starts, from its header.
            size_t at = (Big32(sound.data) >> 11) & 0x7FFF;
            std::vector<uint8_t> one;
            while (at + 15 <= end)
            {
                // A frame starts with its length in bits, itself included;
                // all ones says there are no more.
                size_t length = 0;
                for (int i = 0; i < 15; i++) length = length << 1 | bit(at + i);
                if (length < 15 || length == 0x7FFF || at + length > end) break;
                // The decoder takes a frame behind a byte that says how many
                // bits of padding are before it and after.
                one.assign(1 + (length + 7) / 8 + AV_INPUT_BUFFER_PADDING_SIZE, 0);
                for (size_t i = 0; i < length; i++)
                    if (bit(at + i)) one[1 + (i >> 3)] |= uint8_t(0x80 >> (i & 7));
                packet->data = one.data();
                packet->size = int(1 + (length + 7) / 8);
                one[0] = uint8_t(((size_t(packet->size) * 8 - 8 - length) & 7) << 2);
                at += length;
                if (avcodec_send_packet(context, packet) < 0) break;
                if (avcodec_receive_frame(context, frame) < 0) continue;
                const float* out = reinterpret_cast<const float*>(frame->data[0]);
                samples.insert(samples.end(), out, out + frame->nb_samples);
            }
        }
        av_frame_free(&frame);
        av_packet_free(&packet);
        avcodec_free_context(&context);
        return samples;
    }

    // ---- playing ------------------------------------------------------------
    bool g_loaded = false;
    std::vector<float> g_clips[kClips];     // as the device takes them
    SDL_AudioStream* g_voices[kVoices] = {};
    int g_next = 0;

    bool Read()
    {
        std::ifstream file(setup::GameFolder() / kFastfile, std::ios::binary);
        if (!file) return false;
        const std::vector<uint8_t> packed((std::istreambuf_iterator<char>(file)), std::istreambuf_iterator<char>());
        if (packed.size() <= kZlib || std::memcmp(packed.data(), kMagic, sizeof(kMagic)) || Big32(packed.data() + kStreamedImages)) return false;
        std::vector<uint8_t> zone;
        Inflater inflater{ packed.data() + kZlib, packed.size() - kZlib };
        if (!inflater.Run(zone)) return false;

        av_log_set_level(AV_LOG_QUIET);
        std::vector<float> clips[kClips];
        for (int i = 0; i < kClips; i++)
        {
            const Found found = Find(zone, kAliases[i].sound);
            if (!found.data) return false;
            std::vector<float> samples = Decode(found);
            if (samples.empty()) return false;
            for (float& sample : samples) sample *= kAliases[i].volume;
            // A higher pitch is the same samples played faster.
            const SDL_AudioSpec from{ SDL_AUDIO_F32, 1, int(found.rate * kAliases[i].pitch) }, to{ SDL_AUDIO_F32, 1, kDeviceRate };
            Uint8* converted = nullptr;
            int bytes = 0;
            if (!SDL_ConvertAudioSamples(&from, reinterpret_cast<const Uint8*>(samples.data()), int(samples.size() * sizeof(float)),
                                         &to, &converted, &bytes))
                return false;
            clips[i].assign(reinterpret_cast<const float*>(converted), reinterpret_cast<const float*>(converted) + bytes / sizeof(float));
            SDL_free(converted);
        }
        for (int i = 0; i < kClips; i++) g_clips[i] = std::move(clips[i]);
        return true;
    }
}

void sound::Load()
{
    if (g_loaded || !settings::Sounds() || !Read()) return;
    if (!SDL_InitSubSystem(SDL_INIT_AUDIO)) return;
    const SDL_AudioSpec spec{ SDL_AUDIO_F32, 1, kDeviceRate };
    for (SDL_AudioStream*& voice : g_voices)
    {
        // Each its own stream on the default device, which mixes them.
        voice = SDL_OpenAudioDeviceStream(SDL_AUDIO_DEVICE_DEFAULT_PLAYBACK, &spec, nullptr, nullptr);
        if (voice) SDL_ResumeAudioStreamDevice(voice);
    }
    g_loaded = true;
}

void sound::Play(Clip clip)
{
    if (!g_loaded) return;
    SDL_AudioStream* voice = g_voices[g_next];
    g_next = (g_next + 1) % kVoices;
    if (!voice) return;
    // The oldest voice, whatever is left of what it was playing.
    SDL_ClearAudioStream(voice);
    const std::vector<float>& samples = g_clips[int(clip)];
    SDL_PutAudioStreamData(voice, samples.data(), int(samples.size() * sizeof(float)));
}
