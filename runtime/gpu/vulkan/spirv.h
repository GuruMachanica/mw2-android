#pragma once
#include <cstdint>
#include <map>
#include <string>
#include <vector>

// A small SPIR-V binary writer: a five-word header, then instructions, each a
// word of (length << 16 | opcode) followed by its operands. Emitting that
// directly avoids a glslang or SPIRV-Tools dependency inside the runtime, which
// matters because shaders are translated while the title runs.
//
// The specification fixes the order of a module's parts, so each is built into
// its own buffer and they are concatenated in Finish(). Ids are handed out in
// one sequence across all of them, so an id may be numerically higher than one
// appearing later in the stream, which SPIR-V allows.
namespace spirv
{
    using Id = uint32_t;

    // Only what the translator needs; the values are from the specification.
    enum class Op : uint16_t
    {
        Nop = 0, Name = 5, MemberName = 6, ExtInstImport = 11, ExtInst = 12,
        MemoryModel = 14, EntryPoint = 15, ExecutionMode = 16, Capability = 17,
        TypeVoid = 19, TypeBool = 20, TypeInt = 21, TypeFloat = 22,
        TypeVector = 23, TypeMatrix = 24, TypeImage = 25, TypeSampler = 26,
        TypeSampledImage = 27, TypeArray = 28, TypeRuntimeArray = 29,
        TypeStruct = 30, TypePointer = 32, TypeFunction = 33,
        ConstantTrue = 41, ConstantFalse = 42, Constant = 43,
        ConstantComposite = 44, Function = 54, FunctionEnd = 56,
        FunctionCall = 57, Variable = 59, Load = 61, Store = 62,
        AccessChain = 65, Decorate = 71, MemberDecorate = 72,
        VectorShuffle = 79, CompositeConstruct = 80, CompositeExtract = 81,
        CompositeInsert = 82, Transpose = 84, SampledImage = 86,
        ImageSampleImplicitLod = 87, ImageSampleExplicitLod = 88,
        ImageRead = 98, ImageWrite = 99,
        Image = 100, ImageQuerySizeLod = 103,
        DPdx = 207, DPdy = 208,
        ConvertFToU = 109, ConvertFToS = 110, ConvertSToF = 111,
        ConvertUToF = 112, Bitcast = 124, SNegate = 126, FNegate = 127,
        IAdd = 128, FAdd = 129, ISub = 130, FSub = 131, IMul = 132,
        FMul = 133, UDiv = 134, SDiv = 135, FDiv = 136, UMod = 137,
        SRem = 138, SMod = 139, FRem = 140, FMod = 141,
        VectorTimesScalar = 142, Dot = 148,
        Any = 154, All = 155,
        LogicalOr = 166, LogicalAnd = 167, LogicalNot = 168, Select = 169,
        IEqual = 170, INotEqual = 171, SGreaterThan = 173,
        SGreaterThanEqual = 174, SLessThan = 177, SLessThanEqual = 178,
        FOrdEqual = 180, FOrdNotEqual = 182, FOrdLessThan = 184,
        FOrdGreaterThan = 186, FOrdLessThanEqual = 188,
        FOrdGreaterThanEqual = 190,
        ShiftRightLogical = 194, ShiftLeftLogical = 196, BitwiseOr = 197,
        BitwiseXor = 198, BitwiseAnd = 199, Not = 200, BitFieldSExtract = 202,
        UGreaterThanEqual = 175, ULessThan = 176,
        LoopMerge = 246, SelectionMerge = 247,
        Label = 248, Branch = 249, BranchConditional = 250, Switch = 251, Kill = 252,
        Return = 253, Unreachable = 255,
    };

    enum class Glsl : uint32_t
    {
        Trunc = 3, FAbs = 4, Floor = 8, Fract = 10, Sin = 13, Cos = 14,
        Pow = 26, Exp2 = 29, Log2 = 30, Sqrt = 31, InverseSqrt = 32,
        SMin = 39, FMin = 37, SMax = 42, FMax = 40, FClamp = 43, SClamp = 45,
        Fma = 50, Normalize = 69,
        UnpackHalf2x16 = 62,
        NClamp = 81,
    };

    enum class StorageClass : uint32_t
    {
        UniformConstant = 0, Input = 1, Uniform = 2, Output = 3,
        Function = 7, PushConstant = 9, StorageBuffer = 12,
    };

    enum class Decoration : uint32_t
    {
        Block = 2, BufferBlock = 3, ArrayStride = 6, BuiltIn = 11,
        NonWritable = 24, Location = 30, Binding = 33, DescriptorSet = 34,
        Offset = 35,
    };

    enum class BuiltIn : uint32_t
    {
        Position = 0, PointSize = 1, FragCoord = 15, FragDepth = 22,
        GlobalInvocationId = 28,
        VertexIndex = 42, InstanceIndex = 43,
    };

    class Module
    {
    public:
        Module();

        Id Allocate() { return m_nextId++; }
        Id Bound() const { return m_nextId; }

        std::vector<uint32_t>& Capabilities()  { return m_capabilities; }
        void RequireCapability(uint32_t capability);
        std::vector<uint32_t>& Preamble()      { return m_preamble; }
        std::vector<uint32_t>& EntryPoints()   { return m_entryPoints; }
        std::vector<uint32_t>& ExecutionModes(){ return m_executionModes; }
        std::vector<uint32_t>& Debug()         { return m_debug; }
        std::vector<uint32_t>& Decorations()   { return m_decorations; }
        std::vector<uint32_t>& Declarations()  { return m_declarations; }
        std::vector<uint32_t>& Code()          { return m_code; }

        static void Emit(std::vector<uint32_t>& into, Op op,
                         std::initializer_list<uint32_t> operands);
        static void EmitString(std::vector<uint32_t>& into, Op op,
                               std::initializer_list<uint32_t> before,
                               const std::string& text);
        // OpEntryPoint: the execution model, the function, its name, and the
        // Input and Output variables it uses (all that SPIR-V 1.0 lists).
        void EntryPoint(uint32_t model, Id function, const std::string& name,
                        const std::vector<Id>& interface);

        // Cached type and constant construction, so the module stays free of
        // duplicates without the caller tracking ids.
        Id Void();
        Id Bool();
        Id Int(bool sign = true);
        Id Float();
        Id Vector(Id component, uint32_t count);
        Id RuntimeArrayOf(Id element);
        Id Pointer(StorageClass storage, Id pointee);
        Id ArrayOf(Id element, uint32_t count);
        Id ConstantFalseValue();
        Id ConstantF(float value);
        Id ConstantU(uint32_t value);
        Id ConstantS(int32_t value);
        Id ConstantSplatF(float value);
        Id GlslSet() const { return m_glslSet; }

        Id IntVector(uint32_t count) { return Vector(Int(), count); }
        Id Float2() { return Vector(Float(), 2); }
        Id Float3() { return Vector(Float(), 3); }
        Id Float4() { return Vector(Float(), 4); }

        std::vector<uint32_t> Finish() const;

    private:
        Id m_nextId = 1;
        Id m_glslSet = 0;
        std::vector<uint32_t> m_capabilities, m_preamble, m_entryPoints,
                              m_executionModes, m_debug, m_decorations,
                              m_declarations, m_code;

        // Tagged with the opcode, so different kinds never collide.
        struct Key
        {
            uint32_t a, b, c;
            auto operator<=>(const Key&) const = default;
        };
        // A type declaration puts its result id first (`resultType` 0); anything
        // with a result *type* -- the constants -- puts the type first and the id
        // second. Getting that backwards defines an id twice.
        Id Cached(const Key& key, Op op, Id resultType, std::initializer_list<uint32_t> tail);
        std::map<Key, Id> m_cache;
    public:
        // Image types are non-aggregate, so the specification forbids declaring the
        // same one twice. Every image here shares everything but its dimensionality,
        // so that is the whole key.
        Id Image(Id sampledType, uint32_t dim, bool arrayed = false);
        // A storage image: read and written directly, no sampler. `format` is a
        // SPIR-V ImageFormat -- 4 is Rgba8, which is the only one used here.
        Id StorageImage(Id sampledType, uint32_t dim, uint32_t format);
        Id SampledImage(Id image);
    };

    inline uint32_t Head(Op op, uint32_t words) { return (words << 16) | uint32_t(op); }
}
