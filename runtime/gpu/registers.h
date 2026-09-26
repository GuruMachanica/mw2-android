#pragma once
#include <cstdint>
#include <cstring>

// The Xenos register file.
//
// Almost everything the GPU does is a register write, carried in four packet
// shapes that all land here. A draw packet then says only "go": what to draw
// with is whatever the registers hold at that moment. So this is the state the
// Vulkan backend reads -- the float, boolean, loop, vertex fetch and texture
// fetch constants are all windows into this one array.
//
// Indices and window bases follow Xenia's `register_table.inc` and
// `command_processor.cc` (BSD-3).
namespace gpu
{
    // The register space proper, then the constant windows above it; the top of
    // the range is the loop constants.
    inline constexpr uint32_t kRegisterCount = 0x5003;

    // SET_CONSTANT names a window and an index within it, not an absolute
    // register, so each type adds its own base.
    inline constexpr uint32_t kConstantBaseAlu       = 0x4000;   // float, 4 dwords each
    inline constexpr uint32_t kConstantBaseFetch     = 0x4800;   // vertex and texture
    inline constexpr uint32_t kConstantBaseBool      = 0x4900;   // 256 bits, 8 dwords
    inline constexpr uint32_t kConstantBaseLoop      = 0x4908;   // 32 dwords
    inline constexpr uint32_t kConstantBaseRegisters = 0x2000;   // ordinary registers

    // The few registers this stage reads by name. The rest are recorded and left
    // for the backend.
    enum : uint32_t
    {
        RB_SURFACE_INFO         = 0x2000,
        RB_COLOR_INFO           = 0x2001,   // target 0; 1-3 are RB_COLOR1_INFO.. below
        RB_DEPTH_INFO           = 0x2002,
        RB_COLOR1_INFO          = 0x2003,
        RB_COLOR2_INFO          = 0x2004,
        RB_COLOR3_INFO          = 0x2005,
        PA_SC_SCREEN_SCISSOR_TL = 0x200E,
        PA_SC_SCREEN_SCISSOR_BR = 0x200F,
        PA_SC_WINDOW_SCISSOR_TL = 0x2081,
        PA_SC_WINDOW_SCISSOR_BR = 0x2082,
        RB_COLOR_MASK           = 0x2104,
        PA_CL_VPORT_XSCALE      = 0x210F,   // then YSCALE, ZSCALE and the offsets
        SQ_PROGRAM_CNTL         = 0x2180,
        // The display's colour lookup table, applied by the scanout hardware.
        DC_LUT_RW_MODE          = 0x1921,   // bit 0 clear selects the 256-entry table
        DC_LUT_RW_INDEX         = 0x1922,   // which entry the next write lands in
        DC_LUT_30_COLOR         = 0x1925,   // ten bits per channel, blue lowest
        DC_LUT_WRITE_EN_MASK    = 0x1927,   // blue, green, red

        SQ_VS_CONST             = 0x2307,   // base and size of the vertex
        SQ_PS_CONST             = 0x2308,   // and pixel constant windows
        // Where the command processor leaves an occlusion query's sample counts.
        RB_SAMPLE_COUNT_ADDR    = 0x2325,
        VGT_DRAW_INITIATOR      = 0x21FC,
        RB_DEPTHCONTROL         = 0x2200,
        RB_BLENDCONTROL0        = 0x2201,
        RB_STENCILREFMASK_BF    = 0x210C,   // the back faces', when they have their own
        RB_STENCILREFMASK       = 0x210D,
        RB_ALPHA_REF            = 0x210E,   // the value the alpha test compares with
        RB_COLORCONTROL         = 0x2202,
        PA_SU_SC_MODE_CNTL      = 0x2205,
        PA_CL_VTE_CNTL          = 0x2206,
        RB_MODECONTROL          = 0x2208,
        RB_BLENDCONTROL1        = 0x2209,
        RB_BLENDCONTROL2        = 0x220A,
        RB_BLENDCONTROL3        = 0x220B,
        // Depth bias, as Direct3D 9 has it: a slope scale in 1/16 pixel units,
        // then an absolute offset in depth units. Front, then back.
        PA_SU_POLY_OFFSET_FRONT_SCALE  = 0x2380,
        PA_SU_POLY_OFFSET_FRONT_OFFSET = 0x2381,
        PA_SU_POLY_OFFSET_BACK_SCALE   = 0x2382,
        PA_SU_POLY_OFFSET_BACK_OFFSET  = 0x2383,
        RB_COPY_CONTROL         = 0x2318,
        RB_COPY_DEST_BASE       = 0x2319,
        RB_COPY_DEST_PITCH      = 0x231A,
        RB_COPY_DEST_INFO       = 0x231B,
        RB_DEPTH_CLEAR          = 0x231D,
        RB_COLOR_CLEAR          = 0x231E,
        RB_COLOR_CLEAR_LO       = 0x231F,
    };

    // A draw issued in `Copy` mode is not geometry: it is a resolve, and the
    // rectangle it covers is the region of EDRAM to copy out. That is how the
    // console gets a rendered frame back into ordinary memory, and the only exit
    // EDRAM has.
    enum class EdramMode : uint32_t
    {
        NoOperation = 0, ColorDepth = 4, DepthOnly = 5, Copy = 6,
    };

    inline const char* EdramModeName(EdramMode mode)
    {
        switch (mode)
        {
        case EdramMode::NoOperation: return "no operation";
        case EdramMode::ColorDepth:  return "colour+depth";
        case EdramMode::DepthOnly:   return "depth only";
        case EdramMode::Copy:        return "copy";
        default:                     return "unknown";
        }
    }

    // Render target addresses are in EDRAM tiles, not bytes, and a tile is 80x16
    // samples -- EDRAM is a fixed 10 MB the surfaces are laid out in by hand, not
    // an allocator.
    struct SurfaceInfo
    {
        uint32_t value = 0;
        uint32_t Pitch() const       { return value & 0x3FFF; }
        uint32_t MsaaSamples() const { return (value >> 16) & 0x3; }
        uint32_t HiZPitch() const    { return (value >> 18) & 0x3FFF; }
    };

    struct ColorInfo
    {
        uint32_t value = 0;
        uint32_t BaseTile() const { return value & 0xFFF; }
        uint32_t Format() const   { return (value >> 16) & 0xF; }
        int32_t  ExpBias() const  { return int32_t(value << 6) >> 26; }
    };

    struct DepthInfo
    {
        uint32_t value = 0;
        uint32_t BaseTile() const { return value & 0xFFF; }
        uint32_t Format() const   { return (value >> 16) & 0x1; }  // D24S8 or D24FS8
    };

    inline const char* ColorTargetFormatName(uint32_t format)
    {
        switch (format)
        {
        case 0:  return "8_8_8_8";
        case 1:  return "8_8_8_8_GAMMA";
        case 2:  return "2_10_10_10";
        case 3:  return "2_10_10_10_FLOAT";
        case 4:  return "16_16";
        case 5:  return "16_16_16_16";
        case 6:  return "16_16_FLOAT";
        case 7:  return "16_16_16_16_FLOAT";
        case 10: return "2_10_10_10_AS_10_10_10_10";
        case 12: return "2_10_10_10_FLOAT_AS_16_16_16_16";
        case 14: return "32_FLOAT";
        case 15: return "32_32_FLOAT";
        default: return nullptr;
        }
    }

    inline const char* DepthTargetFormatName(uint32_t format)
    {
        return format ? "D24FS8" : "D24S8";
    }

    // The clear is how a title starts the next tile when rendering in tiles,
    // which is why clears and copies share a packet.
    struct CopyControl
    {
        uint32_t value = 0;
        // 0-3 select a colour target; 4 is depth.
        uint32_t SourceSelect() const  { return value & 0x7; }
        bool     FromDepth() const     { return SourceSelect() == 4; }
        uint32_t SampleSelect() const  { return (value >> 4) & 0x7; }
        bool     ClearsColor() const   { return ((value >> 8) & 1) != 0; }
        bool     ClearsDepth() const   { return ((value >> 9) & 1) != 0; }
        // 0 raw, 1 converting, 2 constant one, 3 null.
        uint32_t Command() const       { return (value >> 20) & 0x3; }
    };

    struct CopyDestInfo
    {
        uint32_t value = 0;
        uint32_t Endian() const   { return value & 0x7; }
        bool     IsArray() const  { return ((value >> 3) & 1) != 0; }
        uint32_t Slice() const    { return (value >> 4) & 0x7; }
        uint32_t Format() const   { return (value >> 7) & 0x3F; }
        uint32_t NumberFormat() const { return (value >> 13) & 0x7; }
        int32_t  ExpBias() const  { return int32_t(value << 10) >> 26; }
        bool     Swap() const     { return ((value >> 24) & 1) != 0; }
    };

    struct CopyDestPitch
    {
        uint32_t value = 0;
        uint32_t Pitch() const  { return value & 0x3FFF; }
        uint32_t Height() const { return (value >> 16) & 0x3FFF; }
    };

    // Supplied by the draw packet rather than the register file, and says what
    // the draw actually is.
    struct DrawInitiator
    {
        uint32_t value = 0;

        uint32_t PrimitiveType() const { return value & 0x3F; }
        // 0 = indices fetched by DMA, 1 = immediate in the packet, 2 = auto.
        uint32_t SourceSelect() const  { return (value >> 6) & 0x3; }
        uint32_t MajorMode() const     { return (value >> 8) & 0x3; }
        bool Index32() const           { return ((value >> 11) & 1) != 0; }
        bool NotEndOfPacket() const    { return ((value >> 12) & 1) != 0; }
        uint32_t IndexCount() const    { return (value >> 16) & 0xFFFF; }
    };

    inline const char* PrimitiveName(uint32_t type)
    {
        switch (type)
        {
        case 0x00: return "none";
        case 0x01: return "point list";
        case 0x02: return "line list";
        case 0x03: return "line strip";
        case 0x04: return "triangle list";
        case 0x05: return "triangle fan";
        case 0x06: return "triangle strip";
        case 0x07: return "triangle with w flags";
        case 0x08: return "rectangle list";
        case 0x0C: return "line loop";
        case 0x0D: return "quad list";
        case 0x0E: return "quad strip";
        case 0x0F: return "polygon";
        default:   return nullptr;
        }
    }

    // The fixed-function state a draw is issued with. All register bits; none of
    // it is in the draw packet.
    struct DepthControl
    {
        uint32_t value = 0;
        bool     StencilEnable() const { return (value & 1) != 0; }
        bool     ZEnable() const       { return ((value >> 1) & 1) != 0; }
        bool     ZWrite() const        { return ((value >> 2) & 1) != 0; }
        uint32_t ZFunc() const         { return (value >> 4) & 0x7; }
        bool     BackfaceEnable() const { return ((value >> 7) & 1) != 0; }
        uint32_t StencilFunc() const   { return (value >> 8) & 0x7; }
        uint32_t StencilFail() const   { return (value >> 11) & 0x7; }
        uint32_t StencilZPass() const  { return (value >> 14) & 0x7; }
        uint32_t StencilZFail() const  { return (value >> 17) & 0x7; }
        // Back faces', used when BackfaceEnable is set.
        uint32_t StencilFuncBack() const  { return (value >> 20) & 0x7; }
        uint32_t StencilFailBack() const  { return (value >> 23) & 0x7; }
        uint32_t StencilZPassBack() const { return (value >> 26) & 0x7; }
        uint32_t StencilZFailBack() const { return (value >> 29) & 0x7; }
    };

    struct StencilRefMask
    {
        uint32_t value = 0;
        uint32_t Reference() const { return value & 0xFF; }
        uint32_t Mask() const      { return (value >> 8) & 0xFF; }
        uint32_t WriteMask() const { return (value >> 16) & 0xFF; }
    };

    struct BlendControl
    {
        uint32_t value = 0;
        uint32_t ColorSource() const      { return value & 0x1F; }
        uint32_t ColorOp() const          { return (value >> 5) & 0x7; }
        uint32_t ColorDestination() const { return (value >> 8) & 0x1F; }
        uint32_t AlphaSource() const      { return (value >> 16) & 0x1F; }
        uint32_t AlphaOp() const          { return (value >> 21) & 0x7; }
        uint32_t AlphaDestination() const { return (value >> 24) & 0x1F; }

        // src * ONE + dst * ZERO: the blend that is not a blend, so a draw with this
        // state does not need blending enabled at all.
        bool IsPassThrough() const
        {
            return ColorSource() == 1 && ColorDestination() == 0 && ColorOp() == 0 &&
                   AlphaSource() == 1 && AlphaDestination() == 0 && AlphaOp() == 0;
        }
    };

    struct ColorControl
    {
        uint32_t value = 0;
        uint32_t AlphaFunc() const     { return value & 0x7; }
        bool     AlphaTest() const     { return ((value >> 3) & 1) != 0; }
        bool     AlphaToMask() const   { return ((value >> 4) & 1) != 0; }
    };

    struct ModeCntl
    {
        uint32_t value = 0;
        bool     CullFront() const   { return (value & 1) != 0; }
        bool     CullBack() const    { return ((value >> 1) & 1) != 0; }
        // 0 = counter-clockwise is front, 1 = clockwise is front.
        bool     FrontIsClockwise() const { return ((value >> 2) & 1) != 0; }
        uint32_t PolyMode() const    { return (value >> 3) & 0x3; }
        uint32_t FrontPolyType() const { return (value >> 5) & 0x7; }
        bool     PolyOffsetFront() const { return ((value >> 11) & 1) != 0; }
        bool     PolyOffsetBack() const  { return ((value >> 12) & 1) != 0; }
        // Points and lines take the front registers, but under this bit.
        bool     PolyOffsetPara() const  { return ((value >> 13) & 1) != 0; }
        bool     MsaaEnable() const  { return ((value >> 15) & 1) != 0; }
    };

    // Which viewport scale and offset terms the hardware applies. A title that
    // has already scaled in the shader disables them, and then the viewport is
    // the whole surface.
    struct ViewportControl
    {
        uint32_t value = 0;
        bool XScale() const  { return (value & 1) != 0; }
        bool XOffset() const { return ((value >> 1) & 1) != 0; }
        bool YScale() const  { return ((value >> 2) & 1) != 0; }
        bool YOffset() const { return ((value >> 3) & 1) != 0; }
        bool ZScale() const  { return ((value >> 4) & 1) != 0; }
        bool ZOffset() const { return ((value >> 5) & 1) != 0; }
    };

    // The two stages address c[0] independently; D3D9 typically gives the vertex
    // shader the low half and the pixel shader the high half, so a backend that
    // uploads only the low half hands the pixel shader the wrong constants.
    struct ConstantWindow
    {
        uint32_t value = 0;
        uint32_t Base() const { return value & 0x1FF; }
        uint32_t Count() const { return ((value >> 12) & 0x1FF) + 1; }
    };

    // Two 14-bit corners, with the window offset disable in the top bit of the
    // top-left one.
    struct ScissorCorner
    {
        uint32_t value = 0;
        uint32_t X() const { return value & 0x7FFF; }
        uint32_t Y() const { return (value >> 16) & 0x7FFF; }
    };

    // One monotonic write counter stamped into the block a write lands in, so a
    // constant window whose highest stamp has not moved need not be copied again.
    // 64 dwords a block is 16 float constants: a 256-constant window is sixteen
    // loads to check, and a material change does not invalidate the whole file.
    inline constexpr uint32_t kStampShift  = 6;
    inline constexpr uint32_t kStampBlocks = (kRegisterCount >> kStampShift) + 1;

    struct RegisterFile
    {
        uint32_t values[kRegisterCount]{};
        uint64_t stamps[kStampBlocks]{};
        uint64_t writes = 0;

        uint32_t operator[](uint32_t index) const
        {
            return index < kRegisterCount ? values[index] : 0;
        }
        bool InRange(uint32_t index) const { return index < kRegisterCount; }

        void Write(uint32_t index, uint32_t value)
        {
            values[index] = value;
            stamps[index >> kStampShift] = ++writes;
        }

        // Zero for a window nothing has ever written, which is its own answer.
        uint64_t StampOf(uint32_t first, uint32_t count) const
        {
            uint64_t newest = 0;
            for (uint32_t block = first >> kStampShift;
                 block <= (first + count - 1) >> kStampShift; block++)
                if (stamps[block] > newest) newest = stamps[block];
            return newest;
        }

        void Reset()
        {
            std::memset(values, 0, sizeof values);
            std::memset(stamps, 0, sizeof stamps);
            writes = 0;
        }
    };
}
