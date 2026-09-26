// The XMA decoder. A port of Xenia's current context decoder (xma_context_new)
// onto this runtime: the same context layout, the same packet and frame walk,
// the same FFmpeg "xmaframes" codec, which takes one XMA frame at a time.
//
// XMA2 is WMA Pro in 2 KB packets. A packet starts with a 32-bit header (frame
// count, bit offset of the first frame that starts in it, a skip count to the
// next packet of the same stream) and holds 15-bit-length-prefixed frames of
// 512 samples, which may straddle packets. The context records a read offset in
// bits into its input buffer, and the title's XAudio2 loops sounds by having
// the decoder jump from loop_end back to loop_start.
#include "xma.h"
#include "../guest.h"
#include "../diagnostics.h"
#include "../log.h"
#include "../kernel/kernel.h"

extern "C" {
#include <libavcodec/avcodec.h>
#include <libavutil/channel_layout.h>
#include <libavutil/error.h>
#include <libavutil/log.h>
}

#include <algorithm>
#include <array>
#include <atomic>
#include <cstdlib>
#include <cstring>
#include <mutex>

namespace
{
    constexpr uint32_t kWindow = 0x7FEA0000u;
    constexpr uint32_t kContextCount = 320;
    constexpr uint32_t kContextSize = 64;

    // Register indices (byte offset / 4) inside the window.
    enum : uint32_t
    {
        kRegContextArrayAddress = 0x600,   // 0x1800: physical address of context 0
        kRegCurrentContextIndex = 0x606,   // 0x1818: the context the hardware is on
        kRegNextContextIndex    = 0x607,
        kRegKick0               = 0x650,   // ten words of bits, one per context
        kRegLock0               = 0x690,
        kRegClear0              = 0x6A0,
    };

    constexpr uint32_t kBytesPerPacket       = 2048;
    constexpr uint32_t kBytesPerPacketHeader = 4;
    constexpr uint32_t kBytesPerPacketData   = kBytesPerPacket - kBytesPerPacketHeader;
    constexpr uint32_t kBitsPerPacket        = kBytesPerPacket * 8;
    constexpr uint32_t kBitsPerPacketHeader  = 32;
    constexpr uint32_t kBitsPerFrameHeader   = 15;
    constexpr uint32_t kSamplesPerFrame      = 512;
    constexpr uint32_t kBytesPerSample       = 2;
    constexpr uint32_t kBytesPerFrameChannel = kSamplesPerFrame * kBytesPerSample;
    constexpr uint32_t kOutputBytesPerBlock  = 256;
    constexpr uint32_t kOutputMaxSizeBytes   = 31 * kOutputBytesPerBlock;
    constexpr uint32_t kMaxFrameLength       = 0x7FFF;
    constexpr uint32_t kMaxFrameSizeInBits   = 0x4000 - kBitsPerPacketHeader;
    constexpr int      kIdToSampleRate[4]    = { 24000, 32000, 44100, 48000 };

    bool Trace()
    {
        static const bool on = diag::Flag("MW2_TRACE_XMA");
        return on;
    }
#define XMATRACE(...) do { if (Trace()) LOGK("xma: " __VA_ARGS__); } while (false)

    // Errors are per frame and a broken stream repeats them; keep the first few.
    std::atomic<uint32_t> g_errors{ 0 };
#define XMAERR(...) do { if (g_errors++ < 20) LOGW("xma: " __VA_ARGS__); } while (false)

    // ---- the context block --------------------------------------------------
    // Big-endian dwords in guest memory; swapped whole so the bitfields apply.
    struct ContextData
    {
        // DWORD 0
        uint32_t input_buffer_0_packet_count : 12;
        uint32_t loop_count : 8;
        uint32_t input_buffer_0_valid : 1;
        uint32_t input_buffer_1_valid : 1;
        uint32_t output_buffer_block_count : 5;
        uint32_t output_buffer_write_offset : 5;
        // DWORD 1
        uint32_t input_buffer_1_packet_count : 12;
        uint32_t loop_subframe_start : 2;
        uint32_t loop_subframe_end : 3;
        uint32_t loop_subframe_skip : 3;
        uint32_t subframe_decode_count : 4;
        uint32_t output_buffer_padding : 3;
        uint32_t sample_rate : 2;
        uint32_t is_stereo : 1;
        uint32_t unk_dword_1_c : 1;
        uint32_t output_buffer_valid : 1;
        // DWORD 2
        uint32_t input_buffer_read_offset : 26;
        uint32_t error_status : 5;
        uint32_t error_set : 1;
        // DWORD 3
        uint32_t loop_start : 26;
        uint32_t parser_error_status : 5;
        uint32_t parser_error_set : 1;
        // DWORD 4
        uint32_t loop_end : 26;
        uint32_t packet_metadata : 5;
        uint32_t current_buffer : 1;
        // DWORD 5..8, physical addresses
        uint32_t input_buffer_0_ptr;
        uint32_t input_buffer_1_ptr;
        uint32_t output_buffer_ptr;
        uint32_t work_buffer_ptr;
        // DWORD 9
        uint32_t output_buffer_read_offset : 5;
        uint32_t : 25;
        uint32_t stop_when_done : 1;
        uint32_t interrupt_when_done : 1;
        // DWORD 10..15
        uint32_t unk_dwords_10_15[6];

        void Load(const uint8_t* p)
        {
            uint32_t* d = reinterpret_cast<uint32_t*>(this);
            for (int i = 0; i < 16; i++)
            {
                uint32_t v; std::memcpy(&v, p + i * 4, 4);
                d[i] = __builtin_bswap32(v);
            }
        }
        void Store(uint8_t* p) const
        {
            const uint32_t* s = reinterpret_cast<const uint32_t*>(this);
            for (int i = 0; i < 16; i++)
            {
                uint32_t v = __builtin_bswap32(s[i]);
                std::memcpy(p + i * 4, &v, 4);
            }
        }

        bool IsInputBufferValid(uint32_t i) const { return i == 0 ? input_buffer_0_valid : input_buffer_1_valid; }
        bool IsCurrentInputBufferValid() const { return IsInputBufferValid(current_buffer); }
        bool IsAnyInputBufferValid() const { return input_buffer_0_valid || input_buffer_1_valid; }
        uint32_t GetInputBufferAddress(uint32_t i) const { return i == 0 ? input_buffer_0_ptr : input_buffer_1_ptr; }
        uint32_t GetCurrentInputBufferAddress() const { return GetInputBufferAddress(current_buffer); }
        uint32_t GetInputBufferPacketCount(uint32_t i) const { return i == 0 ? input_buffer_0_packet_count : input_buffer_1_packet_count; }
        uint32_t GetCurrentInputBufferPacketCount() const { return GetInputBufferPacketCount(current_buffer); }
        bool IsConsumeOnlyContext() const { return (input_buffer_0_packet_count | input_buffer_1_packet_count) == 0; }
    };
    static_assert(sizeof(ContextData) == kContextSize);

    // ---- packet header ------------------------------------------------------
    uint8_t  PacketFrameCount(const uint8_t* p) { return p[0] >> 2; }
    uint8_t  PacketMetadata(const uint8_t* p)   { return p[2] & 0x7; }
    bool     PacketIsXma2(const uint8_t* p)     { return PacketMetadata(p) == 1; }
    uint8_t  PacketSkipCount(const uint8_t* p)  { return p[3]; }
    uint32_t PacketFrameOffset(const uint8_t* p)
    {
        uint32_t v = uint16_t(((p[0] & 0x3) << 13) | (p[1] << 5) | (p[2] >> 3));
        return v + kBitsPerPacketHeader;
    }

    // ---- bit stream over a big-endian buffer ---------------------------------
    class BitStream
    {
    public:
        BitStream(const uint8_t* buffer, size_t sizeBits) : buffer_(buffer), sizeBits_(sizeBits) {}
        size_t offset_bits() const { return offsetBits_; }
        void   SetOffset(size_t bits) { offsetBits_ = std::min(bits, sizeBits_); }
        void   Advance(size_t bits) { SetOffset(offsetBits_ + bits); }
        size_t BitsRemaining() const { return sizeBits_ - offsetBits_; }

        // At most 57 bits, which fits in the 8 bytes read.
        uint64_t Peek(size_t numBits) const
        {
            size_t offsetBytes = std::min(offsetBits_ >> 3, (sizeBits_ - 64) >> 3);
            size_t relBits = offsetBits_ - (offsetBytes << 3);
            uint64_t bits; std::memcpy(&bits, buffer_ + offsetBytes, 8);
            bits = __builtin_bswap64(bits);
            bits >>= 64 - (relBits + numBits);
            bits &= (1ULL << numBits) - 1;
            return bits;
        }
        uint64_t Read(size_t numBits) { uint64_t v = Peek(numBits); Advance(numBits); return v; }

        // Copies numBits to dest, keeping the source's alignment within the first
        // byte; returns that alignment (bits of padding before the data).
        size_t Copy(uint8_t* dest, size_t numBits)
        {
            size_t offsetBytes = offsetBits_ >> 3;
            size_t relBits = offsetBits_ - (offsetBytes << 3);
            size_t bitsLeft = numBits;
            size_t out = 0;
            if (relBits)
            {
                uint64_t bits = Peek(8 - relBits);
                uint8_t clearMask = uint8_t(~((uint8_t(1) << relBits) - 1));
                dest[out] &= clearMask;
                dest[out] |= uint8_t(bits);
                bitsLeft -= 8 - relBits;
                Advance(8 - relBits);
                out++;
            }
            if (bitsLeft >= 8)
            {
                std::memcpy(dest + out, buffer_ + offsetBytes + out, bitsLeft / 8);
                out += bitsLeft / 8;
                Advance((bitsLeft / 8) * 8);
                bitsLeft -= (bitsLeft / 8) * 8;
            }
            if (bitsLeft)
            {
                uint64_t bits = Peek(bitsLeft);
                bits <<= 8 - bitsLeft;
                uint8_t clearMask = uint8_t((uint8_t(1) << bitsLeft) - 1);
                dest[out] &= clearMask;
                dest[out] |= uint8_t(bits);
                Advance(bitsLeft);
            }
            return relBits;
        }

    private:
        const uint8_t* buffer_;
        size_t offsetBits_ = 0;
        size_t sizeBits_;
    };

    // ---- the PCM output ring ------------------------------------------------
    class RingBuffer
    {
    public:
        RingBuffer(uint8_t* buffer, uint32_t capacity) : buffer_(buffer), capacity_(capacity) {}
        bool     empty() const { return read_ == write_; }
        uint32_t read_offset() const { return read_; }
        uint32_t write_offset() const { return write_; }
        void set_read_offset(uint32_t o)  { read_ = o % capacity_; }
        void set_write_offset(uint32_t o) { write_ = o % capacity_; }
        uint32_t write_count() const
        {
            if (read_ == write_) return capacity_;
            if (write_ < read_) return read_ - write_;
            return (capacity_ - write_) + read_;
        }
        uint32_t Write(const uint8_t* src, uint32_t count)
        {
            count = std::min(count, capacity_);
            if (!count) return 0;
            if (write_ + count < capacity_)
            {
                std::memcpy(buffer_ + write_, src, count);
                write_ += count;
            }
            else
            {
                uint32_t left = capacity_ - write_;
                uint32_t right = count - left;
                std::memcpy(buffer_ + write_, src, left);
                std::memcpy(buffer_, src + left, right);
                write_ = right;
            }
            return count;
        }
    private:
        uint8_t* buffer_;
        uint32_t capacity_;
        uint32_t read_ = 0, write_ = 0;
    };

    uint8_t* Physical(uint32_t physical)
    {
        return GuestPtr<uint8_t>(kernel::FromPhysical(physical));
    }

    struct PacketInfo
    {
        uint8_t  frameCount = 0;
        uint8_t  currentFrame = 0;
        uint32_t currentFrameSize = 0;
        bool IsLastFrameInPacket() const { return frameCount == 0 || currentFrame == frameCount - 1; }
    };

    struct PacketHandle
    {
        uint32_t bufferIndex = 0;
        uint32_t packetIndex = 0;
        bool valid = false;
    };

    // ---- one hardware context -----------------------------------------------
    class Context
    {
    public:
        uint32_t id = 0;
        uint32_t guestPtr = 0;
        // Held for a decode; a lock register waits on it for one in flight.
        std::mutex lock;
        std::atomic<bool> allocated{ false };
        uint32_t framesDecoded = 0;
        uint32_t kicks = 0;

        bool Setup(uint32_t contextId, uint32_t guestAddress)
        {
            id = contextId;
            guestPtr = guestAddress;
            packet_ = av_packet_alloc();
            frame_ = av_frame_alloc();
            codec_ = avcodec_find_decoder(AV_CODEC_ID_XMAFRAMES);
            if (!codec_) { LOGE("xma: the xmaframes codec is missing"); return false; }
            if (!packet_ || !frame_) { LOGE("xma: out of memory for the decoder"); return false; }
            return true;
        }

        void Clear()
        {
            std::lock_guard<std::mutex> guard(lock);
            uint8_t* p = GuestPtr<uint8_t>(guestPtr);
            ContextData data; data.Load(p);
            ClearLocked(&data);
            data.Store(p);
        }

        // A zeroed context holds no frame in flight, so neither does the
        // decoder: the next voice given this context starts clean.
        void Release()
        {
            std::lock_guard<std::mutex> guard(lock);
            allocated.store(false, std::memory_order_release);
            std::memset(GuestPtr<uint8_t>(guestPtr), 0, kContextSize);
            remainingSubframes_ = 0;
            loopFrameOutputLimit_ = 0;
            loopStartSkipPending_ = false;
            if (av_) avcodec_flush_buffers(av_);
        }

        // Runs the context until its input is spent or its output ring is full.
        bool Work()
        {
            if (!allocated.load(std::memory_order_acquire)) return false;
            std::lock_guard<std::mutex> guard(lock);
            kicks++;

            uint8_t* contextPtr = GuestPtr<uint8_t>(guestPtr);
            ContextData data; data.Load(contextPtr);
            const ContextData initial = data;
            XMATRACE("context %u kicked: in0 %08X x%u%s in1 %08X x%u%s out %08X x%u blocks%s, offset %u",
                     id, data.input_buffer_0_ptr, data.input_buffer_0_packet_count,
                     data.input_buffer_0_valid ? " valid" : "", data.input_buffer_1_ptr,
                     data.input_buffer_1_packet_count, data.input_buffer_1_valid ? " valid" : "",
                     data.output_buffer_ptr, data.output_buffer_block_count,
                     data.output_buffer_valid ? " valid" : "", data.input_buffer_read_offset);

            if (!data.output_buffer_valid) return true;

            RingBuffer outputRb = PrepareOutputRingBuffer(&data);

            if (data.IsConsumeOnlyContext())
            {
                // Nothing to drain: leave the ring offsets alone, or stale PCM is
                // re-read.
                if (remainingSubframes_ == 0) return true;
                Consume(&outputRb, &data);
                data.output_buffer_write_offset = outputRb.write_offset() / kOutputBytesPerBlock;
                if (outputRb.empty()) data.output_buffer_valid = 0;
                StoreMerged(data, initial, contextPtr);
                return true;
            }

            // The blocks one pass writes (subframe_decode_count, at least 1) plus
            // the headroom the title asked for.
            const uint32_t effectiveSdc = std::max<uint32_t>(1, data.subframe_decode_count);
            const int32_t minimumBlocks = int32_t(effectiveSdc) + int32_t(data.output_buffer_padding);
            if (minimumBlocks > remainingBlocks_)
            {
                XMATRACE("context %u: no room for a pass (%d of %d blocks)", id, minimumBlocks, remainingBlocks_);
                StoreMerged(data, initial, contextPtr);
                return true;
            }

            while (remainingBlocks_ >= minimumBlocks)
            {
                const uint32_t preOffset = data.input_buffer_read_offset;
                const uint8_t preRemaining = remainingSubframes_;
                Decode(&data);
                Consume(&outputRb, &data);
                // A partly consumed frame has to be drained now: the title polls
                // for the remainder without kicking again.
                if ((!data.IsAnyInputBufferValid() || data.error_status == 4) && remainingSubframes_ == 0)
                    break;
                // No progress and nothing pending: wait for the next buffer.
                if (preRemaining == 0 && data.input_buffer_read_offset == preOffset && remainingSubframes_ == 0)
                    break;
            }

            if (initial.IsAnyInputBufferValid())
            {
                data.output_buffer_write_offset = outputRb.write_offset() / kOutputBytesPerBlock;
            }
            else if (data.output_buffer_write_offset != data.output_buffer_read_offset)
            {
                // Starved on input: some titles read write == read as the stall.
                data.output_buffer_write_offset = data.output_buffer_read_offset;
                data.output_buffer_valid = 0;
            }

            if (remainingBlocks_ == 0 && outputRb.empty())
                data.output_buffer_valid = 0;    // full

            StoreMerged(data, initial, contextPtr);
            return true;
        }

    private:
        void ClearLocked(ContextData* data)
        {
            data->input_buffer_0_valid = 0;
            data->input_buffer_1_valid = 0;
            data->output_buffer_valid = 0;
            data->input_buffer_read_offset = kBitsPerPacketHeader;
            data->output_buffer_read_offset = 0;
            data->output_buffer_write_offset = 0;
            remainingSubframes_ = 0;
            loopFrameOutputLimit_ = 0;
            loopStartSkipPending_ = false;
        }

        RingBuffer PrepareOutputRingBuffer(ContextData* data)
        {
            const uint32_t capacity = data->output_buffer_block_count * kOutputBytesPerBlock;
            const uint32_t readOffset = data->output_buffer_read_offset * kOutputBytesPerBlock;
            const uint32_t writeOffset = data->output_buffer_write_offset * kOutputBytesPerBlock;
            if (capacity > kOutputMaxSizeBytes)
                XMAERR("context %u: output ring of %u bytes is larger than the hardware's", id, capacity);
            RingBuffer rb(Physical(data->output_buffer_ptr), capacity);
            rb.set_read_offset(readOffset);
            rb.set_write_offset(writeOffset);
            remainingBlocks_ = int32_t(rb.write_count() / kOutputBytesPerBlock);
            return rb;
        }

        static void SwapInputBuffer(ContextData* data)
        {
            if (data->current_buffer == 0) data->input_buffer_0_valid = 0;
            else                           data->input_buffer_1_valid = 0;
            data->current_buffer ^= 1;
            data->input_buffer_read_offset = kBitsPerPacketHeader;
        }

        void Consume(RingBuffer* rb, const ContextData* data)
        {
            if (!remainingSubframes_) return;

            const uint8_t totalSubframes = uint8_t((kBytesPerFrameChannel / kOutputBytesPerBlock) << data->is_stereo);
            if (loopFrameOutputLimit_ > 0)
            {
                const uint8_t consumed = totalSubframes - remainingSubframes_;
                if (consumed >= loopFrameOutputLimit_)
                {
                    // Loop end truncation: drop the rest of the frame, charging
                    // the headroom as if it had completed.
                    remainingBlocks_ -= int32_t(data->output_buffer_padding);
                    remainingSubframes_ = 0;
                    loopFrameOutputLimit_ = 0;
                    return;
                }
            }

            const uint8_t effectiveSdc = uint8_t(std::max<uint32_t>(1, data->subframe_decode_count));
            int8_t toWrite = int8_t(std::min<uint8_t>(remainingSubframes_, effectiveSdc));
            if (loopFrameOutputLimit_ > 0)
            {
                const uint8_t consumed = totalSubframes - remainingSubframes_;
                const int8_t untilLimit = int8_t(loopFrameOutputLimit_ - consumed);
                if (toWrite > untilLimit) toWrite = untilLimit;
            }

            const int8_t rawOffset = int8_t(totalSubframes - remainingSubframes_);
            rb->Write(rawFrame_.data() + kOutputBytesPerBlock * rawOffset, uint32_t(toWrite) * kOutputBytesPerBlock);

            const int8_t headroom = (remainingSubframes_ - toWrite == 0) ? int8_t(data->output_buffer_padding) : 0;
            remainingBlocks_ -= toWrite + headroom;
            remainingSubframes_ = uint8_t(remainingSubframes_ - toWrite);
        }

        void UpdateLoopStatus(ContextData* data)
        {
            if (data->loop_count == 0) return;
            const uint32_t loopStart = std::max(kBitsPerPacketHeader, data->loop_start);
            const uint32_t loopEnd = std::max(kBitsPerPacketHeader, data->loop_end);
            if (data->input_buffer_read_offset != loopEnd) return;
            data->input_buffer_read_offset = loopStart;
            loopStartSkipPending_ = true;
            if (data->loop_count != 255) data->loop_count--;
        }

        PacketHandle GetPacketHandle(ContextData* data, uint32_t bufferIndex, uint32_t packetIndex, uint32_t currentPacketCount)
        {
            PacketHandle result;
            const bool inNextBuffer = packetIndex >= currentPacketCount;
            if (inNextBuffer)
            {
                bufferIndex ^= 1;
                packetIndex -= currentPacketCount;
            }
            if (!data->IsInputBufferValid(bufferIndex)) return result;
            if (!data->GetInputBufferAddress(bufferIndex))
            {
                XMAERR("context %u: the %s buffer is marked valid but null", id, inNextBuffer ? "next" : "current");
                return result;
            }
            if (packetIndex >= data->GetInputBufferPacketCount(bufferIndex))
            {
                XMAERR("context %u: packet %u is past the end of the %s buffer", id, packetIndex, inNextBuffer ? "next" : "current");
                return result;
            }
            result.bufferIndex = bufferIndex;
            result.packetIndex = packetIndex;
            result.valid = true;
            return result;
        }

        const uint8_t* GetNextPacket(ContextData* data, uint32_t nextPacketIndex, uint32_t currentPacketCount)
        {
            PacketHandle h = GetPacketHandle(data, data->current_buffer, nextPacketIndex, currentPacketCount);
            if (!h.valid) return nullptr;
            return Physical(data->GetInputBufferAddress(h.bufferIndex)) + h.packetIndex * kBytesPerPacket;
        }

        // The bit offset of the first frame that starts at or after this packet,
        // or kBitsPerPacketHeader when there is none in the buffer.
        static uint32_t GetNextPacketReadOffset(const uint8_t* buffer, uint32_t nextPacketIndex, uint32_t packetCount)
        {
            while (nextPacketIndex < packetCount)
            {
                const uint8_t* next = buffer + nextPacketIndex * kBytesPerPacket;
                const uint32_t frameOffset = PacketFrameOffset(next);
                if (frameOffset <= kMaxFrameSizeInBits)
                    return nextPacketIndex * kBitsPerPacket + frameOffset;
                // Entirely the continuation of a split frame: follow its skip count.
                const uint8_t skip = PacketSkipCount(next);
                if (skip == 0xFF) break;
                nextPacketIndex += skip + 1;
            }
            return kBitsPerPacketHeader;
        }

        uint32_t GetNextPacketReadOffset(ContextData* data, uint32_t nextPacketIndex, uint32_t currentPacketCount)
        {
            PacketHandle h = GetPacketHandle(data, data->current_buffer, nextPacketIndex, currentPacketCount);
            if (!h.valid) return kBitsPerPacketHeader;
            return GetNextPacketReadOffset(Physical(data->GetInputBufferAddress(h.bufferIndex)),
                                           h.packetIndex, data->GetInputBufferPacketCount(h.bufferIndex));
        }

        static PacketInfo GetPacketInfo(const uint8_t* packet, uint32_t frameOffset)
        {
            PacketInfo info;
            const uint32_t firstFrameOffset = PacketFrameOffset(packet);
            BitStream stream(packet, kBitsPerPacket);
            stream.SetOffset(firstFrameOffset);
            if (frameOffset < firstFrameOffset)
            {
                // The tail of a frame split from the previous packet.
                info.currentFrame = 0;
                info.currentFrameSize = firstFrameOffset - frameOffset;
            }
            while (true)
            {
                if (stream.BitsRemaining() < kBitsPerFrameHeader) break;
                const uint64_t frameSize = stream.Peek(kBitsPerFrameHeader);
                if (frameSize == 0 || frameSize == kMaxFrameLength) break;
                if (stream.offset_bits() == frameOffset)
                {
                    info.currentFrame = info.frameCount;
                    info.currentFrameSize = uint32_t(frameSize);
                }
                info.frameCount++;
                if (frameSize > stream.BitsRemaining()) break;   // last, split
                stream.Advance(frameSize - 1);
                if (stream.Read(1) == 0) break;                  // no frame follows
            }
            if (PacketIsXma2(packet))
            {
                const uint8_t headerCount = PacketFrameCount(packet);
                if (headerCount > info.frameCount)
                {
                    // A frame header split across the boundary could not be
                    // peeked; the XMA2 header's count is authoritative.
                    if (info.currentFrameSize == 0) info.currentFrame = info.frameCount;
                    info.frameCount = headerCount;
                }
                else if (headerCount != info.frameCount)
                {
                    XMAERR("packet header says %u frames, the walk found %u", headerCount, info.frameCount);
                }
            }
            return info;
        }

        static int16_t GetPacketNumber(size_t size, size_t bitOffset)
        {
            if (bitOffset < kBitsPerPacketHeader || bitOffset >= (size << 3)) return -1;
            return int16_t((bitOffset >> 3) / kBytesPerPacket);
        }

        // Opens the codec for this stream's rate and channels, reopening it when
        // they change. False when it will not open.
        bool PrepareDecoder(int sampleRateId, bool stereo)
        {
            const int sampleRate = kIdToSampleRate[std::min(sampleRateId, 3)];
            const int channels = stereo ? 2 : 1;
            if (av_ && av_->sample_rate == sampleRate && av_->ch_layout.nb_channels == channels)
                return true;
            avcodec_free_context(&av_);
            av_ = avcodec_alloc_context3(codec_);
            if (!av_) return false;
            av_->sample_rate = sampleRate;
            av_channel_layout_default(&av_->ch_layout, channels);
            av_->flags2 |= AV_CODEC_FLAG2_SKIP_MANUAL;
            if (avcodec_open2(av_, codec_, nullptr) < 0)
            {
                XMAERR("context %u: could not open the codec at %d Hz, %d channels", id, sampleRate, channels);
                avcodec_free_context(&av_);
                return false;
            }
            return true;
        }

        void PreparePacket(uint32_t frameSize, uint32_t framePadding)
        {
            packet_->data = xmaFrame_.data();
            packet_->size = int(1 + (framePadding + frameSize) / 8 + (((framePadding + frameSize) % 8) ? 1 : 0));
            const uint32_t paddingEnd = uint32_t(packet_->size * 8) - (8 + framePadding + frameSize);
            xmaFrame_[0] = uint8_t(((framePadding & 7) << 5) | ((paddingEnd & 7) << 2));
        }

        bool DecodePacket()
        {
            int ret = avcodec_send_packet(av_, packet_);
            if (ret < 0)
            {
                char err[AV_ERROR_MAX_STRING_SIZE]; av_strerror(ret, err, sizeof err);
                XMAERR("context %u: send_packet: %s", id, err);
                return false;
            }
            ret = avcodec_receive_frame(av_, frame_);
            if (ret == AVERROR(EAGAIN)) return false;    // warming up
            if (ret < 0)
            {
                char err[AV_ERROR_MAX_STRING_SIZE]; av_strerror(ret, err, sizeof err);
                XMAERR("context %u: receive_frame: %s", id, err);
                return false;
            }
            return true;
        }

        // Planar float from FFmpeg to interleaved 16-bit big-endian PCM, saturated.
        void ConvertFrame(bool stereo)
        {
            constexpr float scale = float((1 << 15) - 1);
            int16_t* out = reinterpret_cast<int16_t*>(rawFrame_.data());
            const float* in[2] = { reinterpret_cast<const float*>(frame_->data[0]),
                                   stereo && frame_->data[1] ? reinterpret_cast<const float*>(frame_->data[1]) : nullptr };
            const uint32_t channels = (stereo && in[1]) ? 2 : 1;
            uint32_t o = 0;
            for (uint32_t i = 0; i < kSamplesPerFrame; i++)
            {
                for (uint32_t c = 0; c < channels; c++)
                {
                    float v = std::clamp(in[c][i], -1.0f, 1.0f) * scale;
                    int16_t s = int16_t(v);
                    out[o++] = int16_t(__builtin_bswap16(uint16_t(s)));
                }
                if (stereo && channels == 1) out[o++] = out[o - 1];
            }
        }

        void Decode(ContextData* data)
        {
            if (!data->IsAnyInputBufferValid()) return;
            if (remainingSubframes_ > 0) return;
            if (!data->IsCurrentInputBufferValid())
            {
                SwapInputBuffer(data);
                if (!data->IsCurrentInputBufferValid()) return;
            }

            uint8_t* currentInput = Physical(data->GetCurrentInputBufferAddress());
            inputBuffer_.fill(0);

            bool isLoopEndFrame = false;
            if (data->loop_count > 0)
            {
                const uint32_t loopEnd = std::max(kBitsPerPacketHeader, data->loop_end);
                isLoopEndFrame = data->input_buffer_read_offset == loopEnd;
            }
            UpdateLoopStatus(data);

            if (!data->output_buffer_block_count)
            {
                XMAERR("context %u: an output ring of zero blocks", id);
                return;
            }
            if (data->input_buffer_read_offset < kBitsPerPacketHeader)
                data->input_buffer_read_offset = kBitsPerPacketHeader;   // inside the header

            const uint32_t inputSize = data->GetCurrentInputBufferPacketCount() * kBytesPerPacket;
            const uint32_t packetCount = inputSize / kBytesPerPacket;
            const int16_t packetIndex = GetPacketNumber(inputSize, data->input_buffer_read_offset);
            if (packetIndex == -1)
            {
                XMAERR("context %u: read offset %u is outside its %u-packet buffer", id, data->input_buffer_read_offset, packetCount);
                return;
            }

            const uint8_t* packet = currentInput + packetIndex * kBytesPerPacket;
            const uint32_t packetFirstFrameOffset = PacketFrameOffset(packet);
            uint32_t relativeOffset = data->input_buffer_read_offset % kBitsPerPacket;

            // Before the first frame of the packet is the tail of a frame whose
            // start we never had: skip to the first complete one.
            if (relativeOffset < packetFirstFrameOffset)
            {
                data->input_buffer_read_offset = packetIndex * kBitsPerPacket + packetFirstFrameOffset;
                relativeOffset = packetFirstFrameOffset;
            }

            const uint8_t skipCount = PacketSkipCount(packet);
            if (skipCount == 0xFF)
            {
                // No frame starts here at all; step to the next packet.
                const uint32_t nextIndex = packetIndex + 1;
                uint32_t nextOffset = GetNextPacketReadOffset(data, nextIndex, packetCount);
                if (nextIndex >= packetCount || nextOffset == kBitsPerPacketHeader) SwapInputBuffer(data);
                data->input_buffer_read_offset = nextOffset;
                return;
            }

            PacketInfo info = GetPacketInfo(packet, relativeOffset);
            const uint32_t nextPacketIndex = packetIndex + skipCount + 1;

            if (info.currentFrameSize == 0)
            {
                // The 15-bit length is split across the boundary: combine packets.
                const uint8_t* next = GetNextPacket(data, nextPacketIndex, packetCount);
                if (!next) { SwapInputBuffer(data); return; }
                std::memcpy(inputBuffer_.data(), packet + kBytesPerPacketHeader, kBytesPerPacketData);
                std::memcpy(inputBuffer_.data() + kBytesPerPacketData, next + kBytesPerPacketHeader, kBytesPerPacketData);
                BitStream combined(inputBuffer_.data(), (kBitsPerPacket - kBitsPerPacketHeader) * 2);
                combined.SetOffset(relativeOffset - kBitsPerPacketHeader);
                const uint64_t frameSize = combined.Peek(kBitsPerFrameHeader);
                if (frameSize == kMaxFrameLength) { data->error_status = 4; return; }
                info.currentFrameSize = uint32_t(frameSize);
            }

            BitStream stream(currentInput, (packetIndex + 1) * kBitsPerPacket);
            stream.SetOffset(data->input_buffer_read_offset);
            const uint32_t bitsToCopy = std::min<uint32_t>(uint32_t(stream.BitsRemaining()), info.currentFrameSize);
            if (bitsToCopy == 0)
            {
                XMAERR("context %u: nothing to copy at offset %u", id, data->input_buffer_read_offset);
                SwapInputBuffer(data);
                return;
            }

            if (info.IsLastFrameInPacket() && stream.BitsRemaining() < info.currentFrameSize)
            {
                // A split frame: bring in the next packet's data.
                const uint8_t* next = GetNextPacket(data, nextPacketIndex, packetCount);
                if (!next) { data->error_status = 4; return; }
                std::memcpy(inputBuffer_.data() + kBytesPerPacketData, next + kBytesPerPacketHeader, kBytesPerPacketData);
            }
            std::memcpy(inputBuffer_.data(), packet + kBytesPerPacketHeader, kBytesPerPacketData);
            stream = BitStream(inputBuffer_.data(), (kBitsPerPacket - kBitsPerPacketHeader) * 2);
            stream.SetOffset(relativeOffset - kBitsPerPacketHeader);

            xmaFrame_.fill(0);
            const uint32_t paddingStart = uint32_t(uint8_t(stream.Copy(xmaFrame_.data() + 1, info.currentFrameSize)));
            PreparePacket(info.currentFrameSize, paddingStart);
            if (PrepareDecoder(int(data->sample_rate), bool(data->is_stereo)) && DecodePacket())
            {
                framesDecoded++;
                ConvertFrame(bool(data->is_stereo));
                remainingSubframes_ = uint8_t(4 << data->is_stereo);
                loopFrameOutputLimit_ = isLoopEndFrame ? uint8_t((data->loop_subframe_end + 1) << data->is_stereo) : 0;
                if (loopStartSkipPending_)
                {
                    const uint8_t skip = uint8_t(data->loop_subframe_skip << data->is_stereo);
                    if (skip < remainingSubframes_) remainingSubframes_ = uint8_t(remainingSubframes_ - skip);
                    loopStartSkipPending_ = false;
                }
            }

            if (!info.IsLastFrameInPacket())
            {
                const uint32_t nextFrameOffset = (data->input_buffer_read_offset + bitsToCopy) % kBitsPerPacket;
                data->input_buffer_read_offset = packetIndex * kBitsPerPacket + nextFrameOffset;
                return;
            }

            uint32_t nextOffset = GetNextPacketReadOffset(data, nextPacketIndex, packetCount);
            if (nextPacketIndex >= packetCount || nextOffset == kBitsPerPacketHeader) SwapInputBuffer(data);
            if (nextOffset == kBitsPerPacketHeader && data->IsAnyInputBufferValid())
            {
                // The start of the other buffer: its first packet's first frame,
                // or straight on if it has none.
                nextOffset = PacketFrameOffset(Physical(data->GetCurrentInputBufferAddress()));
                if (nextOffset > kMaxFrameSizeInBits) { SwapInputBuffer(data); return; }
            }
            data->input_buffer_read_offset = nextOffset;
        }

        // Writes back only the fields the decoder owns, over whatever the title
        // changed meanwhile.
        static void StoreMerged(const ContextData& data, const ContextData& initial, uint8_t* contextPtr)
        {
            ContextData fresh; fresh.Load(contextPtr);
            fresh.loop_count = data.loop_count;
            fresh.output_buffer_write_offset = data.output_buffer_write_offset;
            if (initial.input_buffer_0_valid && !data.input_buffer_0_valid) fresh.input_buffer_0_valid = 0;
            if (initial.input_buffer_1_valid && !data.input_buffer_1_valid) fresh.input_buffer_1_valid = 0;
            if (initial.output_buffer_valid && !data.output_buffer_valid) fresh.output_buffer_valid = 0;
            fresh.input_buffer_read_offset = data.input_buffer_read_offset;
            fresh.error_status = data.error_status;
            fresh.current_buffer = data.current_buffer;
            fresh.output_buffer_read_offset = data.output_buffer_read_offset;
            fresh.Store(contextPtr);
        }

        AVPacket* packet_ = nullptr;
        const AVCodec* codec_ = nullptr;
        AVCodecContext* av_ = nullptr;
        AVFrame* frame_ = nullptr;

        std::array<uint8_t, kBytesPerPacketData * 2> inputBuffer_{};
        // Byte 0 carries the bit alignment; then the frame, with FFmpeg's padding.
        std::array<uint8_t, 1 + 4096 + AV_INPUT_BUFFER_PADDING_SIZE> xmaFrame_{};
        std::array<uint8_t, kBytesPerFrameChannel * 2> rawFrame_{};

        int32_t remainingBlocks_ = 0;
        uint8_t remainingSubframes_ = 0;
        uint8_t loopFrameOutputLimit_ = 0;
        bool    loopStartSkipPending_ = false;
    };

    // ---- the decoder ----------------------------------------------------------
    Context g_contexts[kContextCount];
    uint32_t g_contextBase = 0;      // guest address of context 0
    std::mutex g_allocation;
    bool g_ready = false;
    std::atomic<uint32_t> g_kicks{ 0 }, g_locks{ 0 }, g_clears{ 0 }, g_unknownStores{ 0 }, g_lockAllStores{ 0 };
    uint32_t g_peakAllocated = 0;

    uint32_t* Register(uint32_t index)
    {
        return reinterpret_cast<uint32_t*>(guest::Base() + kWindow + index * 4);
    }

    int ContextId(uint32_t guestAddress)
    {
        if (!g_ready || guestAddress < g_contextBase ||
            guestAddress >= g_contextBase + kContextCount * kContextSize) return -1;
        return int((guestAddress - g_contextBase) / kContextSize);
    }

    void AvLog(void*, int level, const char* fmt, va_list args)
    {
        if (level > AV_LOG_WARNING && !Trace()) return;
        if (level <= AV_LOG_WARNING && g_errors++ >= 20) return;
        char line[512];
        std::vsnprintf(line, sizeof line, fmt, args);
        size_t n = std::strlen(line);
        while (n && (line[n - 1] == '\n' || line[n - 1] == '\r')) line[--n] = 0;
        LOGW("xma: ffmpeg: %s", line);
    }
}

void apu::xma::Initialise()
{
    av_log_set_callback(AvLog);

    // The contexts live in physical memory: the title finds a context's
    // hardware index by taking its physical address from the register.
    // Not at physical address 0, which reads as "no context" in too many places.
    g_contextBase = kernel::AllocatePhysical(kContextCount * kContextSize, 256);
    if (g_contextBase && kernel::ToPhysical(g_contextBase) == 0)
        g_contextBase = kernel::AllocatePhysical(kContextCount * kContextSize, 256);
    if (!g_contextBase) { LOGE("xma: no physical memory for the contexts"); return; }
    std::memset(GuestPtr<uint8_t>(g_contextBase), 0, kContextCount * kContextSize);

    for (uint32_t i = 0; i < kContextCount; i++)
        if (!g_contexts[i].Setup(i, g_contextBase + i * kContextSize)) return;

    // The registers the title reads, as the little-endian hardware would show
    // them: the array's physical address, and a "current context" that never
    // matches a context the title owns, so its lock-all never sees a busy one.
    *Register(kRegContextArrayAddress) = kernel::ToPhysical(g_contextBase);
    *Register(kRegCurrentContextIndex) = 0xFFFF;
    *Register(kRegNextContextIndex) = 1;

    g_ready = true;
    LOGI("xma: %u contexts at %08X (physical %08X)", kContextCount, g_contextBase, kernel::ToPhysical(g_contextBase));
}

uint32_t apu::xma::AllocateContext()
{
    if (!g_ready) return 0;
    std::lock_guard<std::mutex> guard(g_allocation);
    uint32_t inUse = 0;
    uint32_t found = 0;
    for (uint32_t i = 0; i < kContextCount; i++)
    {
        if (g_contexts[i].allocated.load(std::memory_order_acquire)) { inUse++; continue; }
        if (!found)
        {
            g_contexts[i].allocated.store(true, std::memory_order_release);
            found = g_contexts[i].guestPtr;
            inUse++;
        }
    }
    g_peakAllocated = std::max(g_peakAllocated, inUse);
    if (!found) LOGW("xma: all %u contexts are in use", kContextCount);
    return found;
}

void apu::xma::ReleaseContext(uint32_t guestAddress)
{
    int id = ContextId(guestAddress);
    if (id < 0) { LOGW("xma: release of %08X, which is not a context", guestAddress); return; }
    g_contexts[id].Release();
}

namespace
{
    // The kick, lock and clear registers are ten words of bits, one per context.
    template <typename Each>
    void ForEachContext(uint32_t firstContext, uint32_t bits, Each each)
    {
        for (; bits; bits &= bits - 1)
        {
            const uint32_t id = firstContext + uint32_t(__builtin_ctz(bits));
            if (id < kContextCount) each(g_contexts[id]);
        }
    }
}

void apu::xma::RegisterStore(uint32_t address, uint32_t value)
{
    if (!g_ready) return;
    const uint32_t r = (address & 0xFFFFu) / 4;
    if (r >= kRegKick0 && r < kRegKick0 + 10)
    {
        // Decoded here and now, so the title sees the results when the store
        // returns.
        g_kicks++;
        ForEachContext((r - kRegKick0) * 32, value, [](Context& c) { c.Work(); });
    }
    else if (r >= kRegLock0 && r < kRegLock0 + 10)
    {
        // The title is about to edit these contexts: wait out a decode in flight
        // on another thread.
        g_locks++;
        ForEachContext((r - kRegLock0) * 32, value,
                       [](Context& c) { std::lock_guard<std::mutex> guard(c.lock); });
    }
    else if (r >= kRegClear0 && r < kRegClear0 + 10)
    {
        g_clears++;
        ForEachContext((r - kRegClear0) * 32, value, [](Context& c) { c.Clear(); });
    }
    else if (r == 0x601)
    {
        // Written with 0 and then 3 around the title's lock of every context.
        g_lockAllStores++;
        XMATRACE("store of %08X to register 601", value);
    }
    else if (g_unknownStores++ < 8)
    {
        LOGW("xma: store of %08X to register %04X", value, r);
    }
}

extern "C" void mw2_xma_register_store(uint32_t address, uint32_t value)
{
    // The recompiled code hands over what stw would write; the hardware reads
    // its registers little-endian, so the title wrote them with stwbrx.
    apu::xma::RegisterStore(address, __builtin_bswap32(value));
}

void apu::xma::Report()
{
    if constexpr (!diag::kOn) return;
    if (!g_ready) return;
    uint64_t frames = 0;
    uint32_t used = 0;
    for (auto& c : g_contexts) { frames += c.framesDecoded; if (c.kicks) used++; }
    LOGI("xma: %u kicks, %u locks, %u clears, %u lock-all stores; %llu frames decoded on %u contexts (peak %u allocated); %u errors",
         g_kicks.load(), g_locks.load(), g_clears.load(), g_lockAllStores.load(),
         (unsigned long long)frames, used, g_peakAllocated, g_errors.load());
}
