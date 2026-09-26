#pragma once
#include <cstdint>

// Xenos shader microcode, decoded.
//
// A program is a run of 32-bit words, big-endian in guest memory, holding a
// control flow section followed by the instructions it names. Control flow
// instructions are 48 bits, packed two into every three words; everything else
// is exactly three words, and an exec's address is an *instruction* index.
//
// Nothing in an instruction says whether it is an ALU pair or a fetch: that
// comes from the sequence word of the exec that runs it, so a program cannot be
// decoded without walking its control flow first.
//
// Field layouts follow Xenia's src/xenia/gpu/ucode.h (BSD-3), written as
// explicit shifts so the encoding is legible.
namespace xenos
{
    inline uint32_t Bits(uint32_t value, uint32_t lo, uint32_t count)
    {
        return (value >> lo) & ((1u << count) - 1u);
    }

    inline int32_t SignExtend(uint32_t value, uint32_t count)
    {
        const uint32_t sign = 1u << (count - 1);
        return int32_t((value ^ sign) - sign);
    }

    enum class ControlFlowOpcode : uint32_t
    {
        Nop = 0, Exec = 1, ExecEnd = 2, CondExec = 3, CondExecEnd = 4,
        CondExecPred = 5, CondExecPredEnd = 6, LoopStart = 7, LoopEnd = 8,
        CondCall = 9, Return = 10, CondJmp = 11, Alloc = 12,
        CondExecPredClean = 13, CondExecPredCleanEnd = 14, MarkVsFetchDone = 15,
    };

    enum class AllocType : uint32_t
    {
        None = 0, Position = 1, Interpolators = 2, Memory = 3,
    };

    // A vertex shader exports its position here, interpolators at 0..15.
    constexpr uint32_t kExportPosition = 62;
    constexpr uint32_t kExportPointSize = 63;
    // A pixel shader exports colour at 0..3 and depth in the x of 61.
    constexpr uint32_t kExportDepth = 61;
    // Memory export: 32 carries the address, 33..37 are eM0..eM4.
    constexpr uint32_t kExportMemoryAddress = 32;
    constexpr uint32_t kExportMemoryFirst = 33;
    constexpr uint32_t kExportMemoryLast = 37;

    constexpr uint32_t kTempRegisterCount = 64;
    constexpr uint32_t kFloatConstantCount = 256;
    constexpr uint32_t kInterpolatorCount = 16;

    struct ControlFlow
    {
        uint32_t word0 = 0;
        uint32_t word1 = 0;     // only the low 16 bits are the instruction

        ControlFlowOpcode Opcode() const { return ControlFlowOpcode(Bits(word1, 12, 4)); }

        bool IsExec() const
        {
            switch (Opcode())
            {
            case ControlFlowOpcode::Exec:
            case ControlFlowOpcode::ExecEnd:
            case ControlFlowOpcode::CondExec:
            case ControlFlowOpcode::CondExecEnd:
            case ControlFlowOpcode::CondExecPred:
            case ControlFlowOpcode::CondExecPredEnd:
            case ControlFlowOpcode::CondExecPredClean:
            case ControlFlowOpcode::CondExecPredCleanEnd:
                return true;
            default:
                return false;
            }
        }

        bool IsEnd() const
        {
            switch (Opcode())
            {
            case ControlFlowOpcode::ExecEnd:
            case ControlFlowOpcode::CondExecEnd:
            case ControlFlowOpcode::CondExecPredEnd:
            case ControlFlowOpcode::CondExecPredCleanEnd:
                return true;
            default:
                return false;
            }
        }

        uint32_t Address() const  { return Bits(word0, 0, 12); }
        uint32_t Count() const    { return Bits(word0, 12, 3); }
        uint32_t Sequence() const { return Bits(word0, 16, 12); }
        bool IsFetch(uint32_t n) const { return (Sequence() >> (2 * n)) & 1; }

        // Bit 9 is the "predicate clean" hint; the condition is the bit above it.
        bool PredicateCondition() const { return Bits(word1, 10, 1) != 0; }

        // cond_exec tests one of the 256 boolean constants instead of the predicate
        // register. The two lowest bits of word1 are a vertex cache field, so the
        // constant index starts above them.
        uint32_t BoolAddress() const { return Bits(word1, 2, 8); }

        // All of them carry a 13-bit target in the low bits of word0; the rest of
        // the layout differs per opcode.
        uint32_t Target() const { return Bits(word0, 0, 13); }

        // loop_start: `address` is where to go when the loop is skipped entirely,
        // and `is_repeat` keeps the current aL rather than resetting.
        bool IsRepeat() const   { return Bits(word0, 13, 1) != 0; }
        uint32_t LoopId() const { return Bits(word0, 16, 5); }

        // loop_end: the same loop id, plus an optional predicated break.
        uint32_t LoopEndId() const       { return Bits(word0, 16, 5); }
        bool IsPredicatedBreak() const   { return Bits(word0, 21, 1) != 0; }
        bool LoopCondition() const       { return Bits(word1, 10, 1) != 0; }

        // Unconditional, predicated, or on a boolean constant, in that order of
        // precedence.
        bool IsUnconditional() const { return Bits(word0, 13, 1) != 0; }
        bool IsPredicatedJump() const { return Bits(word0, 14, 1) != 0; }
        uint32_t JumpBoolAddress() const { return Bits(word1, 2, 8); }
        bool JumpCondition() const { return Bits(word1, 10, 1) != 0; }

        AllocType Allocation() const { return AllocType(Bits(word1, 9, 2)); }
        uint32_t AllocSize() const   { return Bits(word0, 0, 3); }
    };

    // Two control flow instructions live in three words.
    inline void UnpackControlFlow(uint32_t w0, uint32_t w1, uint32_t w2,
                                  ControlFlow& first, ControlFlow& second)
    {
        first.word0 = w0;
        first.word1 = w1 & 0xFFFF;
        second.word0 = (w1 >> 16) | (w2 << 16);
        second.word1 = w2 >> 16;
    }

    enum class VectorOpcode : uint32_t
    {
        Add = 0, Mul = 1, Max = 2, Min = 3, Seq = 4, Sgt = 5, Sge = 6, Sne = 7,
        Frc = 8, Trunc = 9, Floor = 10, Mad = 11, CndEq = 12, CndGe = 13,
        CndGt = 14, Dp4 = 15, Dp3 = 16, Dp2Add = 17, Cube = 18, Max4 = 19,
        SetpEqPush = 20, SetpNePush = 21, SetpGtPush = 22, SetpGePush = 23,
        KillEq = 24, KillGt = 25, KillGe = 26, KillNe = 27, Dst = 28, MaxA = 29,
    };

    enum class ScalarOpcode : uint32_t
    {
        Adds = 0, AddsPrev = 1, Muls = 2, MulsPrev = 3, MulsPrev2 = 4,
        Maxs = 5, Mins = 6, Seqs = 7, Sgts = 8, Sges = 9, Snes = 10, Frcs = 11,
        Truncs = 12, Floors = 13, Exp = 14, Logc = 15, Log = 16, Rcpc = 17,
        Rcpf = 18, Rcp = 19, Rsqc = 20, Rsqf = 21, Rsq = 22, MaxAs = 23,
        MaxAsf = 24, Subs = 25, SubsPrev = 26, SetpEq = 27, SetpNe = 28,
        SetpGt = 29, SetpGe = 30, SetpInv = 31, SetpPop = 32, SetpClr = 33,
        SetpRstr = 34, KillsEq = 35, KillsGt = 36, KillsGe = 37, KillsNe = 38,
        KillsOne = 39, Sqrt = 40, Mulsc0 = 42, Mulsc1 = 43, Addsc0 = 44,
        Addsc1 = 45, Subsc0 = 46, Subsc1 = 47, Sin = 48, Cos = 49,
        RetainPrev = 50,
    };

    // How many register operands each vector operation reads, so a translator
    // never evaluates a source the hardware ignores.
    inline uint32_t VectorOperandCount(VectorOpcode op)
    {
        switch (op)
        {
        case VectorOpcode::Frc:
        case VectorOpcode::Trunc:
        case VectorOpcode::Floor:
        case VectorOpcode::Max4:
            return 1;
        case VectorOpcode::Mad:
        case VectorOpcode::CndEq:
        case VectorOpcode::CndGe:
        case VectorOpcode::CndGt:
        case VectorOpcode::Dp2Add:
            return 3;
        default:
            return 2;
        }
    }

    struct Alu
    {
        uint32_t w0 = 0, w1 = 0, w2 = 0;

        uint32_t VectorDest() const     { return Bits(w0, 0, 6); }
        bool VectorDestRelative() const { return Bits(w0, 6, 1) != 0; }
        bool AbsoluteConstants() const  { return Bits(w0, 7, 1) != 0; }
        uint32_t ScalarDest() const     { return Bits(w0, 8, 6); }
        bool ScalarDestRelative() const { return Bits(w0, 14, 1) != 0; }
        bool IsExport() const           { return Bits(w0, 15, 1) != 0; }
        uint32_t VectorWriteMask() const{ return Bits(w0, 16, 4); }
        uint32_t ScalarWriteMask() const{ return Bits(w0, 20, 4); }
        bool VectorClamp() const        { return Bits(w0, 24, 1) != 0; }
        bool ScalarClamp() const        { return Bits(w0, 25, 1) != 0; }
        ScalarOpcode Scalar() const     { return ScalarOpcode(Bits(w0, 26, 6)); }

        // Operand 1 is the most significant field of each word, which is why the
        // shifts run backwards.
        uint32_t SourceSwizzle(uint32_t i) const { return Bits(w1, i == 1 ? 16 : (i == 2 ? 8 : 0), 8); }
        bool SourceNegate(uint32_t i) const      { return Bits(w1, i == 1 ? 26 : (i == 2 ? 25 : 24), 1) != 0; }
        uint32_t SourceRegister(uint32_t i) const{ return Bits(w2, i == 1 ? 16 : (i == 2 ? 8 : 0), 8); }
        bool SourceIsTemp(uint32_t i) const      { return Bits(w2, i == 1 ? 31 : (i == 2 ? 30 : 29), 1) != 0; }

        bool PredicateCondition() const { return Bits(w1, 27, 1) != 0; }
        bool IsPredicated() const       { return Bits(w1, 28, 1) != 0; }
        // Relative constant addressing has two independent parts. Bit 29 picks which
        // register does the addressing -- a0 rather than aL -- and says nothing about
        // whether addressing happens at all. Whether a given source is addressed
        // comes from const_0_rel_abs / const_1_rel_abs, chosen by how many earlier
        // operands were constants: the hardware carries two such bits for three
        // possible constant operands.
        bool ConstantAddressUsesA0() const { return Bits(w1, 29, 1) != 0; }
        bool Const0RelAbs() const          { return Bits(w1, 31, 1) != 0; }
        bool Const1RelAbs() const          { return Bits(w1, 30, 1) != 0; }
        bool SourceConstantIsAddressed(uint32_t i) const
        {
            switch (i)
            {
            case 1: return Const0RelAbs();
            case 2: return SourceIsTemp(1) ? Const0RelAbs() : Const1RelAbs();
            case 3: return (SourceIsTemp(1) && SourceIsTemp(2)) ? Const0RelAbs()
                                                                : Const1RelAbs();
            default: return false;
            }
        }

        VectorOpcode Vector() const     { return VectorOpcode(Bits(w2, 24, 5)); }

        // The mulsc/addsc/subsc family read a constant alongside a *temporary*, and
        // it is the temporary whose index is assembled from bits scattered across
        // the instruction. The constant is source 3's own register number.
        uint32_t ScalarConstantFormTemp() const
        {
            return (uint32_t(Scalar()) & 1) | (Bits(w2, 29, 1) << 1) |
                   (SourceSwizzle(3) & 0x3C);
        }

        // Exports write one register from both halves under complementary masks, and
        // can also write literal 0 and 1 where neither writes.
        uint32_t VectorResultMask() const
        {
            uint32_t mask = VectorWriteMask();
            return IsExport() ? (mask & ~ScalarWriteMask()) : mask;
        }
        uint32_t ScalarResultMask() const
        {
            uint32_t mask = ScalarWriteMask();
            return IsExport() ? (mask & ~VectorWriteMask()) : mask;
        }
        uint32_t ConstantZeroMask() const
        {
            if (!IsExport() || !ScalarDestRelative()) return 0;
            return 0xF & ~(VectorWriteMask() | ScalarWriteMask());
        }
        uint32_t ConstantOneMask() const
        {
            return IsExport() ? (VectorWriteMask() & ScalarWriteMask()) : 0;
        }

        // Swizzles are component-relative: each two-bit field is added to the
        // position it sits in.
        uint32_t SwizzledComponent(uint32_t swizzle, uint32_t component) const
        {
            return ((swizzle >> (2 * component)) + component) & 3;
        }
    };

    enum class FetchOpcode : uint32_t
    {
        VertexFetch = 0, TextureFetch = 1, GetBorderColourFrac = 16,
        GetComputedLod = 17, GetGradients = 18, GetWeights = 19,
        SetLod = 24, SetGradientsH = 25, SetGradientsV = 26,
    };

    enum class FetchDimension : uint32_t { D1 = 0, D2 = 1, D3 = 2, Cube = 3 };

    struct Fetch
    {
        uint32_t w0 = 0, w1 = 0, w2 = 0;

        FetchOpcode Opcode() const { return FetchOpcode(Bits(w0, 0, 5)); }
        uint32_t SourceRegister() const { return Bits(w0, 5, 6); }
        uint32_t DestRegister() const   { return Bits(w0, 12, 6); }
        uint32_t ConstantIndex() const  { return Bits(w0, 20, 5); }

        // Four components, three bits each: 0-3 pick x/y/z/w of the fetched value,
        // 4 is literal 0, 5 is literal 1, 7 leaves the component alone.
        uint32_t DestSwizzle() const    { return Bits(w1, 0, 12); }
        uint32_t DestComponent(uint32_t i) const { return (DestSwizzle() >> (3 * i)) & 7; }
        bool IsPredicated() const        { return Bits(w1, 31, 1) != 0; }
        bool PredicateCondition() const  { return Bits(w2, 31, 1) != 0; }

        // A vertex fetch. Bit 19 is set on every real one (Xenia calls it
        // must_be_one), and bits 25-26 pick which of the group's three vertex
        // constants it reads.
        bool MustBeOne() const            { return Bits(w0, 19, 1) != 0; }
        uint32_t ConstantSelect() const   { return Bits(w0, 25, 2); }
        uint32_t VertexFetchSlot() const  { return ConstantIndex() * 3 + ConstantSelect(); }
        uint32_t SourceComponent() const{ return Bits(w0, 30, 2); }
        // The components are signed, and integers rather than a normalised fraction.
        bool SignedComponents() const     { return Bits(w1, 12, 1) != 0; }
        bool IntegerComponents() const    { return Bits(w1, 13, 1) != 0; }
        uint32_t VertexFormat() const   { return Bits(w1, 16, 6); }
        int32_t ExponentAdjust() const  { return SignExtend(Bits(w1, 24, 6), 6); }
        bool IsMiniFetch() const        { return Bits(w1, 30, 1) != 0; }
        uint32_t Stride() const         { return Bits(w2, 0, 8); }
        int32_t Offset() const          { return SignExtend(Bits(w2, 8, 23), 23); }

        // The coordinates are in texels rather than in 0..1. A volume lookup
        // table is addressed that way, and read as if normalised it samples far
        // outside the texture and clamps to a corner.
        bool CoordinatesUnnormalised() const { return Bits(w0, 25, 1) != 0; }
        uint32_t TextureSourceSwizzle() const { return Bits(w0, 26, 6); }
        FetchDimension Dimension() const      { return FetchDimension(Bits(w2, 14, 2)); }
        bool UseComputedLod() const           { return Bits(w1, 28, 1) != 0; }
        bool UseRegisterLod() const           { return Bits(w1, 29, 1) != 0; }
        // Per-instruction sampler state. 3 (7 for anisotropy) is "as the fetch
        // constant says"; anything else overrides it for this fetch alone.
        // Field layout follows Xenia's `TextureFetchInstruction` (BSD-3).
        uint32_t MagFilter() const            { return Bits(w1, 12, 2); }
        uint32_t MinFilter() const            { return Bits(w1, 14, 2); }
        uint32_t MipFilter() const            { return Bits(w1, 16, 2); }
        uint32_t AnisoFilter() const          { return Bits(w1, 18, 3); }
        uint32_t VolumeMagFilter() const      { return Bits(w1, 24, 2); }
        uint32_t VolumeMinFilter() const      { return Bits(w1, 26, 2); }
        bool UseRegisterGradients() const     { return Bits(w2, 0, 1) != 0; }
        // In sixteenths of a level.
        int32_t LodBias() const               { return SignExtend(Bits(w2, 2, 7), 7); }
        // In half texels.
        int32_t OffsetX() const               { return SignExtend(Bits(w2, 16, 5), 5); }
        int32_t OffsetY() const               { return SignExtend(Bits(w2, 21, 5), 5); }
        int32_t OffsetZ() const               { return SignExtend(Bits(w2, 26, 5), 5); }
    };
}
