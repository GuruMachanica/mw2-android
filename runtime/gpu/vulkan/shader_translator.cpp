#include "shader_translator.h"
#include "bindings.h"
#include "spirv.h"
#include "xenos_ucode.h"

#include <algorithm>
#include <array>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cstring>

using namespace spirv;
using namespace xenos;
namespace bindings = vk::bindings;

namespace
{
    constexpr uint32_t kExecutionModelVertex = 0;
    constexpr uint32_t kExecutionModelFragment = 4;
    constexpr uint32_t kExecutionModeOriginUpperLeft = 7;
    constexpr uint32_t kFunctionControlNone = 0;
    constexpr uint32_t kLoopControlNone = 0;
    constexpr uint32_t kSelectionControlNone = 0;
    constexpr uint32_t kLoopStackDepth = 4;      // what the sequencer provides
    constexpr uint32_t kCapabilityImageQuery = 50;
    constexpr uint32_t kImageOperandBias = 0x1;
    constexpr uint32_t kImageOperandLod = 0x2;

    // Xenos temporaries are vec4, and so is everything the ALU produces, so the
    // translator works almost entirely in one type.
    class Translator
    {
    public:
        Translator(shader::Type type, const uint32_t* words, size_t count)
            : m_type(type), m_words(words), m_count(count) {}

        shader::Translation Run();

    private:
        bool DecodeControlFlow();
        void Analyze();
        void DeclareInterface();
        Id DeclareArrayBlock(Id element, uint32_t count, uint32_t stride, uint32_t set,
                             uint32_t binding, const char* name);
        Id DeclarePushBlock(std::initializer_list<Id> members, uint32_t offset, const char* name);
        void EmitBody();

        void TranslateAlu(const Alu& op);
        void TranslateFetch(const Fetch& op);
        void TranslateVertexFetch(const Fetch& op);
        void TranslateTextureFetch(const Fetch& op);
        void TranslateGetGradients(const Fetch& op);
        void TranslateSetLod(const Fetch& op);
        Id TextureFetchWord(uint32_t slot, uint32_t word);
        Id SignedField(Id word, uint32_t offset, uint32_t count);
        Id CubeDirection(Id sc, Id tc, Id face);
        void DeclareVertexFetchInterface();
        void DeclareFetchConstants();
        void DeclareBoolConstants();
        void DeclareLoopConstants();
        Id BoolConstant(uint32_t index);
        Id LoopConstant(Id index);
        Id JumpTaken(const ControlFlow& cf);
        void EmitSequencerState();
        void EmitControlFlow(const ControlFlow& cf, uint32_t self);
        void UpdateAddressRegister(Id depth, Id iterator);
        void StorePredicate(Id value);
        Id PredicateIs(bool value);
        Id ConditionFor(bool predicated, bool condition);
        void RequestKill(Id condition);
        Id CubeCoordinates(Id a, Id b);
        Id ArrayElement(Id array, Id index);
        void SetArrayElement(Id array, Id index, Id value);
        void SetPcTo(uint32_t index) { Module::Emit(m_module.Code(), Op::Store, { m_pc, m_module.ConstantU(index) }); }
        void SetPc(Id value)         { Module::Emit(m_module.Code(), Op::Store, { m_pc, value }); }
        Id ReadGuestDword(Id addressInDwords, uint32_t index);
        bool DecodeVertexFormat(const Fetch& op, Id address, Id out[4], uint32_t& count);
        void WriteFetchResult(const Fetch& op, Id components[4], uint32_t count);
        Id VectorOperation(const Alu& op);
        Id ScalarOperation(const Alu& op);

        Id LoadSource(const Alu& op, uint32_t index);
        Id LoadTemp(uint32_t reg);
        Id TempPointer(Id index);
        Id TempIndex(uint32_t reg, bool relative);
        Id LoadConstant(uint32_t index);
        Id LoadConstantRelative(uint32_t index, bool useA0);
        Id Swizzle(Id value, uint32_t swizzle, const Alu& op);
        Id SplatComponent(Id value, uint32_t component);
        void StoreMasked(Id pointer, Id value, uint32_t mask);
        void StoreResult(const Alu& op, Id vectorResult, Id scalarResult);

        Id Emit(Op op, Id type, std::initializer_list<uint32_t> operands);
        Id Glsl450(Glsl instruction, Id type, std::initializer_list<uint32_t> operands);
        Id Splat(float value) { return m_module.ConstantSplatF(value); }
        Id Component(Id vector, uint32_t index)
        {
            return Emit(Op::CompositeExtract, m_float, { vector, index });
        }
        Id BuildVector(Id x, Id y, Id z, Id w)
        {
            return Emit(Op::CompositeConstruct, m_float4, { x, y, z, w });
        }
        void Fail(const char* what, uint32_t value);

        shader::Type m_type;
        const uint32_t* m_words;
        size_t m_count;

        Module m_module;
        shader::Translation m_result;

        std::vector<ControlFlow> m_flow;

        Id m_float = 0, m_float4 = 0, m_bool4 = 0, m_uint = 0, m_int = 0, m_void = 0;
        // One array rather than one variable per register: a destination can be
        // addressed relative to aL, which needs a computed index.
        Id m_temps = 0;
        Id m_constantsBuffer = 0;
        // { uint function, float reference } -- the alpha test, which Vulkan
        // has no fixed-function form of.
        Id m_alphaTest = 0;
        Id m_ndc = 0;
        Id m_position = 0;
        Id m_vertexIndex = 0;         // the index the sequencer puts in r0.x
        Id m_interpolators[kInterpolatorCount]{};
        Id m_pointSize = 0;
        Id m_colours[4]{};
        Id m_textures[32]{};
        Id m_textureTypes[32]{};
        Id m_textureImageTypes[32]{};   // the image behind the sampled image
        // A slot is only ever sampled at one dimensionality within one program.
        FetchDimension m_textureDimensions[32]{};
        Id m_arena = 0;               // the frame arena, as dwords
        Id m_fetchConstants = 0;      // the vertex fetch constant file
        Id m_boolConstants = 0;       // the 256 boolean constants, as 8 dwords
        Id m_loopConstants = 0;       // the 32 loop constants, one dword each

        // Sequencer state, in function variables because the dispatch loop reads
        // and writes it across blocks.
        Id m_pc = 0;                  // which control flow instruction is next
        Id m_addressRegister = 0;     // aL, the loop address register
        Id m_a0 = 0;                  // a0, set by the maxa family
        Id m_lod = 0;                 // the level of detail setTexLOD wrote
        Id m_killed = 0;              // pointer to a Function bool
        bool m_haveKill = false;
        Id m_loopDepth = 0, m_loopIterators = 0, m_loopIds = 0;
        Id m_callDepth = 0, m_callStack = 0;
        // A mini fetch reuses the address the preceding full fetch computed, and the
        // two need not share a basic block, so it lives in a variable.
        Id m_lastFetchBase = 0;         // pointer to a Function uint
        Id m_lastFetchEndian = 0;       // the fetch constant's endianness, 2 bits
        bool m_haveFetchBase = false;   // whether any full fetch precedes

        // What the previous scalar produced, for the *_prev family. A variable,
        // not an SSA value: producer and reader can be in different blocks.
        Id m_previousScalar = 0;        // pointer to a Function float
        bool m_havePreviousScalar = false;

        // Xenos predication is not branching: the instruction runs and its write
        // is suppressed, so it maps to a select on every store.
        Id m_predicate = 0;                 // pointer to a Function bool
        Id m_condition = 0;                 // bool value, or 0 for unconditional
        Id m_bool = 0;
        std::vector<Id> m_entryInterface;
    };

    void Translator::Fail(const char* what, uint32_t value)
    {
        if (!m_result.error.empty()) return;      // keep the first failure
        char text[128];
        std::snprintf(text, sizeof text, "%s %u is not translated yet", what, value);
        m_result.error = text;
    }

    Id Translator::Emit(Op op, Id type, std::initializer_list<uint32_t> operands)
    {
        Id id = m_module.Allocate();
        std::vector<uint32_t> all{ type, id };
        all.insert(all.end(), operands.begin(), operands.end());
        auto& code = m_module.Code();
        code.push_back(Head(op, uint32_t(all.size()) + 1));
        code.insert(code.end(), all.begin(), all.end());
        return id;
    }

    Id Translator::Glsl450(Glsl instruction, Id type, std::initializer_list<uint32_t> operands)
    {
        Id id = m_module.Allocate();
        std::vector<uint32_t> all{ type, id, m_module.GlslSet(), uint32_t(instruction) };
        all.insert(all.end(), operands.begin(), operands.end());
        auto& code = m_module.Code();
        code.push_back(Head(Op::ExtInst, uint32_t(all.size()) + 1));
        code.insert(code.end(), all.begin(), all.end());
        return id;
    }


    bool Translator::DecodeControlFlow()
    {
        size_t i = 0;
        while (i + 3 <= m_count && m_flow.size() < 512)
        {
            ControlFlow first, second;
            UnpackControlFlow(m_words[i], m_words[i + 1], m_words[i + 2], first, second);
            i += 3;
            for (const ControlFlow& cf : { first, second })
            {
                m_flow.push_back(cf);
                if (cf.IsEnd()) return true;
            }
        }
        m_result.error = "control flow does not terminate";
        return false;
    }


    // What the program uses, read before anything is emitted: the interface is
    // declared up front, and some of it -- whether a mini fetch has an address
    // to reuse -- is a property of the whole program, not of the instruction.
    void Translator::Analyze()
    {
        uint32_t lastSlot = bindings::kFetchSlots;
        for (const ControlFlow& cf : m_flow)
        {
            if (!cf.IsExec()) continue;
            for (uint32_t n = 0; n < cf.Count(); n++)
            {
                const size_t at = size_t(cf.Address() + n) * 3;
                if (at + 3 > m_count) continue;
                if (cf.IsFetch(n))
                {
                    Fetch f{ m_words[at], m_words[at + 1], m_words[at + 2] };
                    // A fetch reads its coordinates from a temporary, and for
                    // a pixel shader that is an input like any other read
                    // below: often the only read of that interpolator.
                    if (m_type == shader::Type::Pixel && f.SourceRegister() < kInterpolatorCount)
                        m_result.interpolatorMask |= 1u << f.SourceRegister();
                    if (f.Opcode() == FetchOpcode::TextureFetch)
                    {
                        const uint32_t slot = f.ConstantIndex() & 31;
                        m_result.textureMask |= 1u << slot;
                        m_textureDimensions[slot] = f.Dimension();
                    }
                    else if (f.Opcode() == FetchOpcode::VertexFetch)
                    {
                        m_result.vertexFetchMask |= 1u << f.ConstantIndex();
                        // The full fetch that computes the address a mini fetch
                        // reuses sits in an earlier control flow instruction.
                        // Only a full one names a constant, and so a slot.
                        if (!f.IsMiniFetch() && f.MustBeOne())
                        {
                            m_haveFetchBase = true;
                            if (f.ConstantSelect() < 3)
                            {
                                m_result.vertexFetchSubs[f.ConstantSelect()] |= 1u << f.ConstantIndex();
                                lastSlot = f.VertexFetchSlot();
                            }
                        }
                        // A mini fetch reuses the last full fetch's address, so its
                        // reach belongs to that slot.
                        if (lastSlot < bindings::kFetchSlots)
                        {
                            uint32_t& stride = m_result.vertexFetchStride[lastSlot];
                            uint32_t& tail = m_result.vertexFetchTail[lastSlot];
                            stride = std::max(stride, f.Stride());
                            tail = std::max(tail, uint32_t(std::max(f.Offset(), 0)) + 4);
                        }
                    }
                    continue;
                }
                Alu a{ m_words[at], m_words[at + 1], m_words[at + 2] };
                // A pixel shader receives the interpolators pre-loaded into the
                // low temporaries, so a temporary it reads is an input. It has to
                // declare every one the vertex shader might write, since the two
                // are translated apart and the pipeline matches them by location.
                if (m_type == shader::Type::Pixel)
                    for (uint32_t s = 1; s <= 3; s++)
                        if (a.SourceIsTemp(s))
                        {
                            const uint32_t reg = a.SourceRegister(s) & 0x3F;
                            if (reg < kInterpolatorCount) m_result.interpolatorMask |= 1u << reg;
                        }
                if (!a.IsExport()) continue;
                const uint32_t dest = a.VectorDest();
                if (m_type == shader::Type::Vertex)
                {
                    if (dest >= kExportMemoryAddress && dest <= kExportMemoryLast)
                        m_result.writesMemory = true;
                }
                else
                {
                    if (dest < 4) m_result.colourMask |= 1u << dest;
                    else if (dest == kExportDepth) m_result.writesDepth = true;
                }
            }
        }

        // And a vertex shader has to write every interpolator a pixel shader might
        // read: an input with no output behind it is invalid, and the pixel side
        // counts more than any one vertex shader exports. So every vertex shader
        // exports all sixteen, zeroed until the program writes them -- sixty-four
        // components, inside the device's 128.
        if (m_type == shader::Type::Vertex)
            m_result.interpolatorMask = (1u << kInterpolatorCount) - 1;
    }

    // A block holding one array: `count` elements of `element`, `stride` bytes
    // apart. With `count` 0 the array is unsized and the block a read-only
    // storage buffer, which SPIR-V 1.0 spells as a BufferBlock struct in the
    // Uniform storage class -- the StorageBuffer class needs an extension.
    Id Translator::DeclareArrayBlock(Id element, uint32_t count, uint32_t stride, uint32_t set,
                                     uint32_t binding, const char* name)
    {
        const bool storage = count == 0;
        Id array = storage ? m_module.RuntimeArrayOf(element) : m_module.ArrayOf(element, count);
        Module::Emit(m_module.Decorations(), Op::Decorate,
                     { array, uint32_t(Decoration::ArrayStride), stride });
        Id block = m_module.Allocate();
        Module::Emit(m_module.Declarations(), Op::TypeStruct, { block, array });
        Module::Emit(m_module.Decorations(), Op::Decorate,
                     { block, uint32_t(storage ? Decoration::BufferBlock : Decoration::Block) });
        Module::Emit(m_module.Decorations(), Op::MemberDecorate,
                     { block, 0, uint32_t(Decoration::Offset), 0 });
        if (storage)
            Module::Emit(m_module.Decorations(), Op::MemberDecorate,
                         { block, 0, uint32_t(Decoration::NonWritable) });
        Id pointer = m_module.Pointer(StorageClass::Uniform, block);
        Id variable = m_module.Allocate();
        Module::Emit(m_module.Declarations(), Op::Variable,
                     { pointer, variable, uint32_t(StorageClass::Uniform) });
        Module::Emit(m_module.Decorations(), Op::Decorate,
                     { variable, uint32_t(Decoration::DescriptorSet), set });
        Module::Emit(m_module.Decorations(), Op::Decorate,
                     { variable, uint32_t(Decoration::Binding), binding });
        Module::EmitString(m_module.Debug(), Op::Name, { variable }, name);
        return variable;
    }

    // A push-constant block whose members start at `offset`, each four bytes
    // after the last: scalars, or one vector.
    Id Translator::DeclarePushBlock(std::initializer_list<Id> members, uint32_t offset,
                                    const char* name)
    {
        Id block = m_module.Allocate();
        std::vector<uint32_t> operands{ block };
        operands.insert(operands.end(), members.begin(), members.end());
        auto& declarations = m_module.Declarations();
        declarations.push_back(Head(Op::TypeStruct, uint32_t(operands.size()) + 1));
        declarations.insert(declarations.end(), operands.begin(), operands.end());
        Module::Emit(m_module.Decorations(), Op::Decorate,
                     { block, uint32_t(Decoration::Block) });
        for (uint32_t i = 0; i < members.size(); i++)
            Module::Emit(m_module.Decorations(), Op::MemberDecorate,
                         { block, i, uint32_t(Decoration::Offset), offset + 4 * i });
        Id pointer = m_module.Pointer(StorageClass::PushConstant, block);
        Id variable = m_module.Allocate();
        Module::Emit(m_module.Declarations(), Op::Variable,
                     { pointer, variable, uint32_t(StorageClass::PushConstant) });
        Module::EmitString(m_module.Debug(), Op::Name, { variable }, name);
        return variable;
    }

    void Translator::DeclareInterface()
    {
        m_void = m_module.Void();
        m_float = m_module.Float();
        m_float4 = m_module.Float4();
        m_bool = m_module.Bool();
        m_bool4 = m_module.Vector(m_bool, 4);
        m_uint = m_module.Int(false);
        m_int = m_module.Int(true);

        const Id pointerInputFloat4 = m_module.Pointer(StorageClass::Input, m_float4);
        const Id pointerOutputFloat4 = m_module.Pointer(StorageClass::Output, m_float4);

        // One block of 256 vec4 per stage, not shared: SQ_VS_CONST and SQ_PS_CONST
        // give each a window into the hardware's 512-entry file, and the backend
        // points each binding at the window its register names.
        m_constantsBuffer = DeclareArrayBlock(
            m_float4, bindings::kFloatConstants, 16, bindings::kConstantSet,
            m_type == shader::Type::Pixel ? bindings::kPixelFloats : bindings::kVertexFloats,
            "constants");

        // Xenos can be told to skip the viewport transform, and then a vertex
        // program emits window coordinates itself -- D3D9's XYZRHW, a
        // pre-transformed vertex. Vulkan has no such mode: whatever a program
        // writes is clipped against w before any viewport is applied, so a
        // vertex at window x = 960 with w = 1 is outside the clip volume and the
        // primitive it belongs to is thrown away entirely. MW2 clears colour and
        // depth with exactly that, which is why the clears were measured
        // colouring nought and two samples of the 1228800 a frame holds.
        //
        // So the conversion happens here, as Xenia does it: the position is
        // multiplied and offset on the way out by a transform the pipeline
        // pushes. With the viewport transform on it is the identity and costs a
        // multiply-add; with it off it is `ndc = 2 * window / size - 1`, scaled
        // by w so it survives the perspective divide.
        if (m_type == shader::Type::Vertex)
            m_ndc = DeclarePushBlock({ m_float4 }, bindings::kVertexPushOffset, "ndc");

        // The alpha test is fixed-function on the console and does not exist in
        // Vulkan at all, so the comparison has to be in the shader. Its function
        // and reference are register state, not shader state -- the same program
        // is drawn with the test on and off -- so they arrive as push constants
        // rather than making a pipeline of their own for every reference value.
        // Then two to the power of RB_COLOR_INFO's exponent bias, and non-zero
        // when the colour target is 8_8_8_8_GAMMA.
        if (m_type == shader::Type::Pixel)
            m_alphaTest = DeclarePushBlock({ m_uint, m_float, m_float, m_uint },
                                           bindings::kPixelPushOffset, "alpha_test");

        for (uint32_t slot = 0; slot < 32; slot++)
        {
            if (!(m_result.textureMask & (1u << slot))) continue;
            // Dimensionality comes from the fetch. A cube map is a cube, sampled
            // by the direction its face and coordinates stand for.
            // A 1D fetch samples a 2D image at v = 0: the texture cache makes
            // every 1D texture a 2D image one row tall, and a slot may be bound
            // to a 2D texture the program only ever reads along a line, so a 1D
            // type here was a view-type mismatch on every such draw.
            uint32_t dim = 1;   // SPIR-V Dim: 1 = 2D, 2 = 3D, 3 = Cube
            switch (m_textureDimensions[slot])
            {
            case FetchDimension::D3:   dim = 2; break;
            case FetchDimension::Cube: dim = 3; break;
            default:                   dim = 1; break;
            }
            m_result.textureKinds[slot] = dim == 2 ? 2 : dim == 3 ? 1 : 0;
            Id image = m_module.Image(m_float, dim, false);
            Id sampled = m_module.SampledImage(image);
            m_textureImageTypes[slot] = image;
            Id pointer = m_module.Pointer(StorageClass::UniformConstant, sampled);
            Id variable = m_module.Allocate();
            Module::Emit(m_module.Declarations(), Op::Variable,
                         { pointer, variable, uint32_t(StorageClass::UniformConstant) });
            Module::Emit(m_module.Decorations(), Op::Decorate,
                         { variable, uint32_t(Decoration::DescriptorSet), bindings::kTextureSet });
            Module::Emit(m_module.Decorations(), Op::Decorate,
                         { variable, uint32_t(Decoration::Binding), slot });
            m_textures[slot] = variable;
            m_textureTypes[slot] = sampled;
            // Before SPIR-V 1.4 the entry point's interface lists only Input and
            // Output variables.
        }

        if (m_result.vertexFetchMask) DeclareVertexFetchInterface();
        if (m_result.vertexFetchMask || m_result.textureMask) DeclareFetchConstants();

        // cond_exec tests a boolean constant.
        for (const ControlFlow& cf : m_flow)
            if (cf.Opcode() == ControlFlowOpcode::CondExec ||
                cf.Opcode() == ControlFlowOpcode::CondExecEnd)
            { DeclareBoolConstants(); break; }

        for (uint32_t i = 0; i < kInterpolatorCount; i++)
        {
            if (!(m_result.interpolatorMask & (1u << i))) continue;
            const bool input = m_type == shader::Type::Pixel;
            Id variable = m_module.Allocate();
            Module::Emit(m_module.Declarations(), Op::Variable,
                         { input ? pointerInputFloat4 : pointerOutputFloat4, variable,
                           uint32_t(input ? StorageClass::Input : StorageClass::Output) });
            Module::Emit(m_module.Decorations(), Op::Decorate,
                         { variable, uint32_t(Decoration::Location), i });
            m_interpolators[i] = variable;
            m_entryInterface.push_back(variable);
        }

        if (m_type == shader::Type::Vertex)
        {
            m_position = m_module.Allocate();
            Module::Emit(m_module.Declarations(), Op::Variable,
                         { pointerOutputFloat4, m_position, uint32_t(StorageClass::Output) });
            Module::Emit(m_module.Decorations(), Op::Decorate,
                         { m_position, uint32_t(Decoration::BuiltIn), uint32_t(BuiltIn::Position) });
            m_entryInterface.push_back(m_position);

            // A point list needs a point size written, and the program's own
            // export of one is not honoured yet; one pixel is Vulkan's default.
            const Id pointerOutputFloat = m_module.Pointer(StorageClass::Output, m_float);
            m_pointSize = m_module.Allocate();
            Module::Emit(m_module.Declarations(), Op::Variable,
                         { pointerOutputFloat, m_pointSize, uint32_t(StorageClass::Output) });
            Module::Emit(m_module.Decorations(), Op::Decorate,
                         { m_pointSize, uint32_t(Decoration::BuiltIn), uint32_t(BuiltIn::PointSize) });
            m_entryInterface.push_back(m_pointSize);

            // Xenos has no vertex input stage: the sequencer puts the index of the vertex
            // being shaded into r0.x as a float, and the program's own fetch computes an
            // address from it. Without this every vertex fetches vertex zero, collapsing
            // every primitive to a point.
            Id pointerInputInt = m_module.Pointer(StorageClass::Input, m_int);
            m_vertexIndex = m_module.Allocate();
            Module::Emit(m_module.Declarations(), Op::Variable,
                         { pointerInputInt, m_vertexIndex, uint32_t(StorageClass::Input) });
            Module::Emit(m_module.Decorations(), Op::Decorate,
                         { m_vertexIndex, uint32_t(Decoration::BuiltIn),
                           uint32_t(BuiltIn::VertexIndex) });
            Module::EmitString(m_module.Debug(), Op::Name, { m_vertexIndex }, "vertex_index");
            m_entryInterface.push_back(m_vertexIndex);
        }
        else
        {
            // Only the targets the program writes: an output left undefined would feed
            // the blender with whatever was in the register.
            for (uint32_t i = 0; i < 4; i++)
            {
                if (!(m_result.colourMask & (1u << i))) continue;
                m_colours[i] = m_module.Allocate();
                Module::Emit(m_module.Declarations(), Op::Variable,
                             { pointerOutputFloat4, m_colours[i], uint32_t(StorageClass::Output) });
                Module::Emit(m_module.Decorations(), Op::Decorate,
                             { m_colours[i], uint32_t(Decoration::Location), i });
                m_entryInterface.push_back(m_colours[i]);
            }
        }
    }


    Id Translator::LoadTemp(uint32_t reg)
    {
        return Emit(Op::Load, m_float4, { TempPointer(m_module.ConstantS(int32_t(reg & (kTempRegisterCount - 1)))) });
    }

    // The index is a value rather than a constant so that a destination
    // addressed relative to aL can use the same path.
    Id Translator::TempPointer(Id index)
    {
        Id pointer = m_module.Pointer(StorageClass::Function, m_float4);
        return Emit(Op::AccessChain, pointer, { m_temps, index });
    }

    Id Translator::TempIndex(uint32_t reg, bool relative)
    {
        if (!relative) return m_module.ConstantS(int32_t(reg & (kTempRegisterCount - 1)));
        Id at = Emit(Op::IAdd, m_int,
                     { Emit(Op::Load, m_int, { m_addressRegister }), m_module.ConstantS(int32_t(reg)) });
        return Emit(Op::Bitcast, m_int,
                    { Emit(Op::UMod, m_uint,
                           { Emit(Op::Bitcast, m_uint, { at }),
                             m_module.ConstantU(kTempRegisterCount) }) });
    }

    Id Translator::LoadConstant(uint32_t index)
    {
        const uint32_t at32 = index % kFloatConstantCount;
        // So the renderer can copy the window this program reads rather than
        // all 256 of them.
        m_result.constantsRead = std::max(m_result.constantsRead, at32 + 1);
        Id pointer = m_module.Pointer(StorageClass::Uniform, m_float4);
        Id zero = m_module.ConstantS(0);
        Id at = m_module.ConstantS(int32_t(at32));
        Id chain = Emit(Op::AccessChain, pointer, { m_constantsBuffer, zero, at });
        return Emit(Op::Load, m_float4, { chain });
    }

    // The index is computed at run time, so it is wrapped into range rather
    // than masked at translation time.
    Id Translator::LoadConstantRelative(uint32_t index, bool useA0)
    {
        // The index is only known when the shader runs, so nothing can be left
        // out of the copy.
        m_result.addressedConstants = true;
        Id base = Emit(Op::Load, m_int, { useA0 ? m_a0 : m_addressRegister });
        Id at = Emit(Op::IAdd, m_int, { base, m_module.ConstantS(int32_t(index)) });
        Id wrapped = Emit(Op::UMod, m_uint,
                          { Emit(Op::Bitcast, m_uint, { at }),
                            m_module.ConstantU(kFloatConstantCount) });
        Id pointer = m_module.Pointer(StorageClass::Uniform, m_float4);
        Id chain = Emit(Op::AccessChain, pointer,
                        { m_constantsBuffer, m_module.ConstantS(0), wrapped });
        return Emit(Op::Load, m_float4, { chain });
    }

    Id Translator::Swizzle(Id value, uint32_t swizzle, const Alu& op)
    {
        // Component-relative: field n is added to n. An identity swizzle is
        // 0b11100100 read that way, and is common enough to skip.
        uint32_t components[4];
        bool identity = true;
        for (uint32_t c = 0; c < 4; c++)
        {
            components[c] = op.SwizzledComponent(swizzle, c);
            if (components[c] != c) identity = false;
        }
        if (identity) return value;
        return Emit(Op::VectorShuffle, m_float4,
                    { value, value, components[0], components[1], components[2], components[3] });
    }

    Id Translator::SplatComponent(Id value, uint32_t component)
    {
        return Emit(Op::VectorShuffle, m_float4,
                    { value, value, component, component, component, component });
    }

    Id Translator::LoadSource(const Alu& op, uint32_t index)
    {
        const uint32_t reg = op.SourceRegister(index);
        Id value;
        bool absolute = false;
        if (op.SourceIsTemp(index))
        {
            // Bit 6 makes the number relative to aL, exactly as a destination
            // can be; the temporaries are an array, so either kind indexes it.
            value = (reg & 0x40)
                  ? Emit(Op::Load, m_float4, { TempPointer(TempIndex(reg & 0x3F, true)) })
                  : LoadTemp(reg & 0x3F);
            absolute = (reg & 0x80) != 0;
        }
        else
        {
            value = op.SourceConstantIsAddressed(index)
                  ? LoadConstantRelative(reg, op.ConstantAddressUsesA0())
                  : LoadConstant(reg);
            absolute = op.AbsoluteConstants();
        }
        value = Swizzle(value, op.SourceSwizzle(index), op);
        if (absolute) value = Glsl450(Glsl::FAbs, m_float4, { value });
        if (op.SourceNegate(index)) value = Emit(Op::FNegate, m_float4, { value });
        return value;
    }


    void Translator::StoreMasked(Id pointer, Id value, uint32_t mask)
    {
        if (!mask) return;
        Id merged = value;
        if (mask != 0xF || m_condition)
        {
            Id current = Emit(Op::Load, m_float4, { pointer });
            if (mask != 0xF)
            {
                // Shuffle picks from `current` (0..3) or `value` (4..7).
                uint32_t pick[4];
                for (uint32_t c = 0; c < 4; c++) pick[c] = (mask & (1u << c)) ? (4 + c) : c;
                merged = Emit(Op::VectorShuffle, m_float4,
                              { current, value, pick[0], pick[1], pick[2], pick[3] });
            }
            if (m_condition)
            {
                // SPIR-V 1.0 wants the condition to match the operands in shape.
                Id wide = Emit(Op::CompositeConstruct, m_bool4,
                               { m_condition, m_condition, m_condition, m_condition });
                merged = Emit(Op::Select, m_float4, { wide, merged, current });
            }
        }
        Module::Emit(m_module.Code(), Op::Store, { pointer, merged });
    }

    void Translator::StoreResult(const Alu& op, Id vectorResult, Id scalarResult)
    {
        if (!op.IsExport())
        {
            if (op.VectorWriteMask() && vectorResult)
                StoreMasked(TempPointer(TempIndex(op.VectorDest(), op.VectorDestRelative())),
                            vectorResult, op.VectorWriteMask());
            if (op.ScalarWriteMask() && scalarResult)
                StoreMasked(TempPointer(TempIndex(op.ScalarDest(), op.ScalarDestRelative())),
                            scalarResult, op.ScalarWriteMask());
            return;
        }

        // An export is one destination written by both halves under complementary
        // masks, plus literal 0 and 1 where the masks say so.
        const uint32_t dest = op.VectorDest();
        Id target = 0;
        if (m_type == shader::Type::Vertex)
        {
            if (dest < kInterpolatorCount) target = m_interpolators[dest];
            else if (dest == kExportPosition) target = m_position;
            else if (dest == kExportPointSize) return;      // no point sprites yet
            else if (dest >= kExportMemoryAddress && dest <= kExportMemoryLast)
            {
                // A memory export writes to a guest physical address, and set 2
                // is not guest memory: it is the frame arena, holding copies of
                // only the vertex data each draw reads, at rewritten addresses.
                // There is nowhere for this to land without mapping guest RAM to
                // the GPU, which is a change to the whole design and not to this
                // program. The geometry it draws is perfectly good, though, and
                // refusing the program threw that away too -- 2376 draws a run,
                // whose absence left holes in the depth buffer that the sky then
                // filled in, white, over the floor. So the write is dropped and
                // counted, and the drawing goes ahead.
                m_result.droppedMemoryExports++;
                return;
            }
        }
        else
        {
            if (dest < 4) target = m_colours[dest];
            else if (dest == kExportDepth) { Fail("depth export", dest); return; }
            else
            {
                // A pixel shader has four colour outputs and depth. An export to anything else
                // has nowhere to land, on this hardware as much as here, so it is dropped --
                // but counted.
                m_result.droppedExports++;
                return;
            }
        }
        if (!target) { Fail("export register", dest); return; }

        if (vectorResult) StoreMasked(target, vectorResult, op.VectorResultMask());
        if (scalarResult) StoreMasked(target, scalarResult, op.ScalarResultMask());
        if (uint32_t mask = op.ConstantZeroMask()) StoreMasked(target, Splat(0.0f), mask);
        if (uint32_t mask = op.ConstantOneMask()) StoreMasked(target, Splat(1.0f), mask);
    }


    Id Translator::VectorOperation(const Alu& op)
    {
        const uint32_t operands = VectorOperandCount(op.Vector());
        Id a = operands >= 1 ? LoadSource(op, 1) : 0;
        Id b = operands >= 2 ? LoadSource(op, 2) : 0;
        Id c = operands >= 3 ? LoadSource(op, 3) : 0;

        auto compare = [&](Op comparison) {
            Id mask = Emit(comparison, m_bool4, { a, b });
            return Emit(Op::Select, m_float4, { mask, Splat(1.0f), Splat(0.0f) });
        };
        auto select = [&](Op comparison) {
            // cnd* pick b or c per component according to a's comparison to 0.
            Id mask = Emit(comparison, m_bool4, { a, Splat(0.0f) });
            return Emit(Op::Select, m_float4, { mask, b, c });
        };
        // The push family write the predicate and produce a counter: p0 = (a.w == 0 &&
        // b.w op 0), and the result steps a.x by one unless the same test on x holds.
        auto push = [&](Op comparison) {
            Id zero = m_module.ConstantF(0.0f);
            auto both = [&](uint32_t component) {
                Id x = Component(a, component), y = Component(b, component);
                return Emit(Op::LogicalAnd, m_bool,
                            { Emit(Op::FOrdEqual, m_bool, { x, zero }),
                              Emit(comparison, m_bool, { y, zero }) });
            };
            StorePredicate(both(3));
            Id restart = both(0);
            Id stepped = Emit(Op::Select, m_float,
                              { restart, m_module.ConstantF(-1.0f), Component(a, 0) });
            Id result = Emit(Op::FAdd, m_float, { stepped, m_module.ConstantF(1.0f) });
            return BuildVector(result, result, result, result);
        };
        // The hardware stops the invocation at a kill; here the discard is deferred to
        // the end, which differs only for a shader exporting to memory after killing.
        auto kill = [&](Op comparison) {
            Id mask = Emit(comparison, m_bool4, { a, b });
            Id any = Emit(Op::Any, m_bool, { mask });
            RequestKill(any);
            return Splat(0.0f);
        };
        auto cube = [&]() { return CubeCoordinates(a, b); };
        auto dot = [&](uint32_t count) {
            Id x = Component(a, 0), y = Component(b, 0);
            Id sum = Emit(Op::FMul, m_float, { x, y });
            for (uint32_t i = 1; i < count; i++)
                sum = Glsl450(Glsl::Fma, m_float,
                              { Component(a, i), Component(b, i), sum });
            return BuildVector(sum, sum, sum, sum);
        };

        switch (op.Vector())
        {
        case VectorOpcode::Add:   return Emit(Op::FAdd, m_float4, { a, b });
        case VectorOpcode::Mul:   return Emit(Op::FMul, m_float4, { a, b });
        case VectorOpcode::Max:   return Glsl450(Glsl::FMax, m_float4, { a, b });
        case VectorOpcode::Min:   return Glsl450(Glsl::FMin, m_float4, { a, b });
        case VectorOpcode::Seq:   return compare(Op::FOrdEqual);
        case VectorOpcode::Sgt:   return compare(Op::FOrdGreaterThan);
        case VectorOpcode::Sge:   return compare(Op::FOrdGreaterThanEqual);
        case VectorOpcode::Sne:   return compare(Op::FOrdNotEqual);
        case VectorOpcode::Frc:   return Glsl450(Glsl::Fract, m_float4, { a });
        case VectorOpcode::Trunc: return Glsl450(Glsl::Trunc, m_float4, { a });
        case VectorOpcode::Floor: return Glsl450(Glsl::Floor, m_float4, { a });
        case VectorOpcode::Mad:   return Glsl450(Glsl::Fma, m_float4, { a, b, c });
        case VectorOpcode::CndEq: return select(Op::FOrdEqual);
        case VectorOpcode::CndGe: return select(Op::FOrdGreaterThanEqual);
        case VectorOpcode::CndGt: return select(Op::FOrdGreaterThan);
        case VectorOpcode::SetpEqPush: return push(Op::FOrdEqual);
        case VectorOpcode::SetpNePush: return push(Op::FOrdNotEqual);
        case VectorOpcode::SetpGtPush: return push(Op::FOrdGreaterThan);
        case VectorOpcode::SetpGePush: return push(Op::FOrdGreaterThanEqual);
        case VectorOpcode::KillEq: return kill(Op::FOrdEqual);
        case VectorOpcode::KillGt: return kill(Op::FOrdGreaterThan);
        case VectorOpcode::KillGe: return kill(Op::FOrdGreaterThanEqual);
        case VectorOpcode::KillNe: return kill(Op::FOrdNotEqual);
        case VectorOpcode::Cube:  return cube();
        case VectorOpcode::Dp4:   return dot(4);
        case VectorOpcode::Dp3:   return dot(3);
        case VectorOpcode::Dp2Add:
        {
            Id two = dot(2);
            return Emit(Op::FAdd, m_float4, { two, SplatComponent(c, 0) });
        }
        case VectorOpcode::Max4:
        {
            Id best = Component(a, 0);
            for (uint32_t i = 1; i < 4; i++)
                best = Glsl450(Glsl::FMax, m_float, { best, Component(a, i) });
            return BuildVector(best, best, best, best);
        }
        default:
            Fail("vector opcode", uint32_t(op.Vector()));
            return Splat(0.0f);
        }
    }

    Id Translator::ScalarOperation(const Alu& op)
    {
        // Scalar operations read source 3: one operand takes its x and y, the
        // mulsc/addsc/subsc family take its x and a constant's x.
        const ScalarOpcode opcode = op.Scalar();
        if (opcode == ScalarOpcode::RetainPrev)
        {
            if (!m_havePreviousScalar) return 0;
            Id previous = Emit(Op::Load, m_float, { m_previousScalar });
            return BuildVector(previous, previous, previous, previous);
        }
        if (opcode == ScalarOpcode::SetpClr)
        {
            // Reads nothing. Evaluating source 3 anyway would report an addressing
            // mode this instruction does not use.
            Module::Emit(m_module.Code(), Op::Store,
                         { m_predicate, m_module.ConstantFalseValue() });
            Id maximum = m_module.ConstantF(3.402823466e+38f);          // FLT_MAX
            Module::Emit(m_module.Code(), Op::Store, { m_previousScalar, maximum });
            m_havePreviousScalar = true;
            return BuildVector(maximum, maximum, maximum, maximum);
        }

        Id x, y;
        if (opcode >= ScalarOpcode::Mulsc0 && opcode <= ScalarOpcode::Subsc1)
        {
            // These read a constant and a temporary, and neither is where source 3
            // says: the constant is c[source 3's register number] whatever the
            // source-is-temporary bit claims, and the temporary's index is
            // assembled from bits scattered across the instruction. Both take
            // their absolute value from the constant flag, not the register one.
            const uint32_t swizzle = op.SourceSwizzle(3);
            const uint32_t reg = op.SourceRegister(3);
            Id constant = op.SourceConstantIsAddressed(3)
                        ? LoadConstantRelative(reg, op.ConstantAddressUsesA0())
                        : LoadConstant(reg);
            Id temporary = LoadTemp(op.ScalarConstantFormTemp());
            auto sign = [&](Id v) {
                if (op.AbsoluteConstants()) v = Glsl450(Glsl::FAbs, m_float, { v });
                if (op.SourceNegate(3)) v = Emit(Op::FNegate, m_float, { v });
                return v;
            };
            x = sign(Component(constant, op.SwizzledComponent(swizzle, 3)));
            y = sign(Component(temporary, op.SwizzledComponent(swizzle, 0)));
        }
        else
        {
            // The left operand is the swizzle's fourth slot, not its first, and the
            // right one is the first -- or the third, when the vector half has
            // already claimed source 3 for a third operand of its own.
            Id source = LoadSource(op, 3);
            x = Component(source, 3);
            y = Component(source, VectorOperandCount(op.Vector()) == 3 ? 2 : 0);
        }

        Id r = 0;
        auto unary = [&](Glsl instruction) { return Glsl450(instruction, m_float, { x }); };
        // The scalar comparisons test one component against zero -- they are not
        // the two-operand form the vector half uses. Comparing against a second
        // component instead gives a per-pixel 0 or 1, which is a speckle.
        auto compare = [&](Op comparison) {
            Id b = Emit(comparison, m_module.Bool(), { x, m_module.ConstantF(0.0f) });
            return Emit(Op::Select, m_float, { b, m_module.ConstantF(1.0f), m_module.ConstantF(0.0f) });
        };

        switch (opcode)
        {
        case ScalarOpcode::Adds:   r = Emit(Op::FAdd, m_float, { x, y }); break;
        case ScalarOpcode::Muls:   r = Emit(Op::FMul, m_float, { x, y }); break;
        case ScalarOpcode::Subs:   r = Emit(Op::FSub, m_float, { x, y }); break;
        case ScalarOpcode::MulsPrev2:
        {
            // src.x * ps, except that a previous scalar of -FLT_MAX, or a src.y that
            // is negative or not a number, forces -FLT_MAX through.
            Id previous = Emit(Op::Load, m_float, { m_previousScalar });
            Id negativeMax = m_module.ConstantF(-3.402823466e+38f);
            Id bad = Emit(Op::LogicalOr, m_bool,
                          { Emit(Op::FOrdEqual, m_bool, { previous, negativeMax }),
                            Emit(Op::LogicalNot, m_bool,
                                 { Emit(Op::FOrdGreaterThanEqual, m_bool,
                                        { y, m_module.ConstantF(0.0f) }) }) });
            r = Emit(Op::Select, m_float,
                     { bad, negativeMax, Emit(Op::FMul, m_float, { x, previous }) });
            break;
        }
        case ScalarOpcode::Maxs:   r = Glsl450(Glsl::FMax, m_float, { x, y }); break;
        // The maxa family is a max that also loads a0 from the first source.
        // maxas rounds to nearest, maxasf truncates towards minus infinity.
        case ScalarOpcode::MaxAs:
        case ScalarOpcode::MaxAsf:
        {
            Id rounded = opcode == ScalarOpcode::MaxAs
                ? Glsl450(Glsl::Floor, m_float, { Emit(Op::FAdd, m_float, { x, m_module.ConstantF(0.5f) }) })
                : Glsl450(Glsl::Floor, m_float, { x });
            Id clamped = Glsl450(Glsl::FClamp, m_float,
                                 { rounded, m_module.ConstantF(-256.0f), m_module.ConstantF(255.0f) });
            Module::Emit(m_module.Code(), Op::Store,
                         { m_a0, Emit(Op::ConvertFToS, m_int, { clamped }) });
            r = Glsl450(Glsl::FMax, m_float, { x, y });
            break;
        }
        case ScalarOpcode::Mins:   r = Glsl450(Glsl::FMin, m_float, { x, y }); break;
        case ScalarOpcode::Seqs:   r = compare(Op::FOrdEqual); break;
        case ScalarOpcode::Sgts:   r = compare(Op::FOrdGreaterThan); break;
        case ScalarOpcode::Sges:   r = compare(Op::FOrdGreaterThanEqual); break;
        case ScalarOpcode::Snes:   r = compare(Op::FOrdNotEqual); break;
        case ScalarOpcode::Frcs:   r = unary(Glsl::Fract); break;
        case ScalarOpcode::Truncs: r = unary(Glsl::Trunc); break;
        case ScalarOpcode::Floors: r = unary(Glsl::Floor); break;
        case ScalarOpcode::Exp:    r = unary(Glsl::Exp2); break;
        case ScalarOpcode::Log:
        case ScalarOpcode::Logc:   r = unary(Glsl::Log2); break;
        case ScalarOpcode::Sqrt:   r = unary(Glsl::Sqrt); break;
        case ScalarOpcode::Sin:    r = unary(Glsl::Sin); break;
        case ScalarOpcode::Cos:    r = unary(Glsl::Cos); break;
        case ScalarOpcode::Rcp:
        case ScalarOpcode::Rcpc:
        case ScalarOpcode::Rcpf:
            r = Emit(Op::FDiv, m_float, { m_module.ConstantF(1.0f), x });
            break;
        case ScalarOpcode::Rsq:
        case ScalarOpcode::Rsqc:
        case ScalarOpcode::Rsqf:
            r = unary(Glsl::InverseSqrt);
            break;
        case ScalarOpcode::AddsPrev:
            if (!m_havePreviousScalar) { Fail("scalar prev with no previous result", 0); return 0; }
            r = Emit(Op::FAdd, m_float, { x, Emit(Op::Load, m_float, { m_previousScalar }) });
            break;
        case ScalarOpcode::MulsPrev:
            if (!m_havePreviousScalar) { Fail("scalar prev with no previous result", 0); return 0; }
            r = Emit(Op::FMul, m_float, { x, Emit(Op::Load, m_float, { m_previousScalar }) });
            break;
        case ScalarOpcode::SubsPrev:
            if (!m_havePreviousScalar) { Fail("scalar prev with no previous result", 0); return 0; }
            r = Emit(Op::FSub, m_float, { x, Emit(Op::Load, m_float, { m_previousScalar }) });
            break;
        case ScalarOpcode::Mulsc0:
        case ScalarOpcode::Mulsc1: r = Emit(Op::FMul, m_float, { x, y }); break;
        case ScalarOpcode::Addsc0:
        case ScalarOpcode::Addsc1: r = Emit(Op::FAdd, m_float, { x, y }); break;
        case ScalarOpcode::Subsc0:
        case ScalarOpcode::Subsc1: r = Emit(Op::FSub, m_float, { x, y }); break;
        // The setp family write the predicate and a result together: the predicate
        // takes the comparison, the destination 0 when it holds and 1 when not.
        case ScalarOpcode::SetpEq:
        case ScalarOpcode::SetpNe:
        case ScalarOpcode::SetpGt:
        case ScalarOpcode::SetpGe:
        case ScalarOpcode::SetpRstr:
        {
            Id zero = m_module.ConstantF(0.0f);
            Id set;
            switch (opcode)
            {
            case ScalarOpcode::SetpNe: set = Emit(Op::FOrdNotEqual, m_bool, { x, zero }); break;
            case ScalarOpcode::SetpGt: set = Emit(Op::FOrdGreaterThan, m_bool, { x, zero }); break;
            case ScalarOpcode::SetpGe: set = Emit(Op::FOrdGreaterThanEqual, m_bool, { x, zero }); break;
            default:                   set = Emit(Op::FOrdEqual, m_bool, { x, zero }); break;
            }
            Module::Emit(m_module.Code(), Op::Store, { m_predicate, set });
            // setp_rstr keeps the source when the predicate does not hold.
            Id otherwise = opcode == ScalarOpcode::SetpRstr ? x : m_module.ConstantF(1.0f);
            r = Emit(Op::Select, m_float, { set, zero, otherwise });
            break;
        }
        // The scalar kills test one component against zero, or against one, and
        // report whether they fired.
        case ScalarOpcode::KillsEq:
        case ScalarOpcode::KillsGt:
        case ScalarOpcode::KillsGe:
        case ScalarOpcode::KillsNe:
        case ScalarOpcode::KillsOne:
        {
            Id against = opcode == ScalarOpcode::KillsOne ? m_module.ConstantF(1.0f)
                                                          : m_module.ConstantF(0.0f);
            Op comparison = opcode == ScalarOpcode::KillsGt ? Op::FOrdGreaterThan
                          : opcode == ScalarOpcode::KillsGe ? Op::FOrdGreaterThanEqual
                          : opcode == ScalarOpcode::KillsNe ? Op::FOrdNotEqual
                                                            : Op::FOrdEqual;
            Id fired = Emit(comparison, m_bool, { x, against });
            RequestKill(fired);
            r = Emit(Op::Select, m_float,
                     { fired, m_module.ConstantF(1.0f), m_module.ConstantF(0.0f) });
            break;
        }
        case ScalarOpcode::SetpInv:
        {
            Id one = m_module.ConstantF(1.0f);
            Id zero = m_module.ConstantF(0.0f);
            Id isOne = Emit(Op::FOrdEqual, m_bool, { x, one });
            Module::Emit(m_module.Code(), Op::Store, { m_predicate, isOne });
            Id isZero = Emit(Op::FOrdEqual, m_bool, { x, zero });
            Id notOne = Emit(Op::Select, m_float, { isZero, one, x });
            r = Emit(Op::Select, m_float, { isOne, zero, notOne });
            break;
        }
        case ScalarOpcode::SetpPop:
        {
            Id zero = m_module.ConstantF(0.0f);
            Id decremented = Emit(Op::FSub, m_float, { x, m_module.ConstantF(1.0f) });
            Id set = Emit(Op::FOrdLessThanEqual, m_bool, { decremented, zero });
            Module::Emit(m_module.Code(), Op::Store, { m_predicate, set });
            r = Emit(Op::Select, m_float, { set, zero, decremented });
            break;
        }
        default:
            Fail("scalar opcode", uint32_t(opcode));
            return 0;
        }

        Module::Emit(m_module.Code(), Op::Store, { m_previousScalar, r });
        m_havePreviousScalar = true;
        return BuildVector(r, r, r, r);
    }

    void Translator::TranslateAlu(const Alu& op)
    {
        // A predicated instruction still executes; only its write is suppressed.
        const Id outer = m_condition;
        m_condition = ConditionFor(op.IsPredicated(), op.PredicateCondition());

        // The vector unit carries no state between instructions, so a fully masked
        // operation need not be built. The scalar unit does, so it always runs.
        Id vectorResult = 0;
        if (op.IsExport() ? op.VectorResultMask() != 0 : op.VectorWriteMask() != 0)
        {
            vectorResult = VectorOperation(op);
            if (op.VectorClamp())
                vectorResult = Glsl450(Glsl::FClamp, m_float4,
                                       { vectorResult, Splat(0.0f), Splat(1.0f) });
        }

        Id scalarResult = 0;
        if (op.ScalarWriteMask() || op.Scalar() != ScalarOpcode::RetainPrev)
        {
            scalarResult = ScalarOperation(op);
            if (scalarResult && op.ScalarClamp())
                scalarResult = Glsl450(Glsl::FClamp, m_float4,
                                       { scalarResult, Splat(0.0f), Splat(1.0f) });
        }

        StoreResult(op, vectorResult, scalarResult);
        m_condition = outer;
    }

    // The 256 boolean constants in the hardware's packed shape, so the block is
    // a straight copy of the registers.
    void Translator::DeclareBoolConstants()
    {
        if (m_boolConstants) return;
        m_boolConstants = DeclareArrayBlock(m_module.Vector(m_uint, 4), 2, 16,
                                            bindings::kConstantSet, bindings::kBoolConstants,
                                            "bool_constants");
    }

    // Bit index%32 of dword index/32, which the block layout splits into
    // vector index/4 and component index%4.
    Id Translator::BoolConstant(uint32_t index)
    {
        DeclareBoolConstants();
        index &= 0xFF;
        const uint32_t dword = index / 32;
        Id pointer = m_module.Pointer(StorageClass::Uniform, m_uint);
        Id address = Emit(Op::AccessChain, pointer,
                          { m_boolConstants, m_module.ConstantU(0),
                            m_module.ConstantU(dword / 4), m_module.ConstantU(dword % 4) });
        Id word = Emit(Op::Load, m_uint, { address });
        Id shifted = Emit(Op::ShiftRightLogical, m_uint,
                          { word, m_module.ConstantU(index % 32) });
        Id masked = Emit(Op::BitwiseAnd, m_uint, { shifted, m_module.ConstantU(1) });
        return Emit(Op::INotEqual, m_bool, { masked, m_module.ConstantU(0) });
    }

    // The 32 loop constants, one dword each, packing the iteration count, the
    // aL start value and the aL step.
    void Translator::DeclareLoopConstants()
    {
        if (m_loopConstants) return;
        m_loopConstants = DeclareArrayBlock(m_module.Vector(m_uint, 4), 8, 16,
                                            bindings::kConstantSet, bindings::kLoopConstants,
                                            "loop_constants");
    }

    // The block is 8 vec4s, so the index splits into a vector and a component.
    Id Translator::LoopConstant(Id index)
    {
        DeclareLoopConstants();
        Id four = m_module.ConstantU(4);
        Id vector = Emit(Op::UDiv, m_uint, { index, four });
        Id component = Emit(Op::UMod, m_uint, { index, four });
        Id pointer = m_module.Pointer(StorageClass::Uniform, m_uint);
        Id chain = Emit(Op::AccessChain, pointer,
                        { m_loopConstants, m_module.ConstantU(0), vector, component });
        return Emit(Op::Load, m_uint, { chain });
    }

    Id Translator::ArrayElement(Id array, Id index)
    {
        Id pointer = m_module.Pointer(StorageClass::Function, m_uint);
        Id chain = Emit(Op::AccessChain, pointer, { array, index });
        return Emit(Op::Load, m_uint, { chain });
    }

    void Translator::SetArrayElement(Id array, Id index, Id value)
    {
        Id pointer = m_module.Pointer(StorageClass::Function, m_uint);
        Id chain = Emit(Op::AccessChain, pointer, { array, index });
        Module::Emit(m_module.Code(), Op::Store, { chain, value });
    }

    // Unconditional, or on the predicate, or on a boolean constant, in that
    // order of precedence.
    Id Translator::JumpTaken(const ControlFlow& cf)
    {
        if (cf.IsUnconditional()) return 0;
        Id wanted = cf.IsPredicatedJump()
            ? Emit(Op::Load, m_bool, { m_predicate })
            : BoolConstant(cf.JumpBoolAddress());
        return cf.JumpCondition() ? wanted : Emit(Op::LogicalNot, m_bool, { wanted });
    }

    // Vertex fetch reads a buffer the title described in a fetch constant, at an
    // address the shader computes itself. None of that is fixed-function, so
    // there is no vertex input state: the program reads the frame arena, where
    // the renderer has copied what the draw reaches and pointed the fetch
    // constants at the copies.
    void Translator::DeclareVertexFetchInterface()
    {
        m_arena = DeclareArrayBlock(m_uint, 0, 4, bindings::kArenaSet, bindings::kArenaBinding,
                                    "arena");
    }

    // The fetch constant window as 96 pairs of dwords, each padded to a vec4 so
    // the default packing rules suffice: vertex fetches read their address and
    // endianness from it, texture fetches their LOD bias and exponent adjust.
    void Translator::DeclareFetchConstants()
    {
        m_fetchConstants = DeclareArrayBlock(m_module.Vector(m_uint, 4), bindings::kFetchSlots, 16,
                                             bindings::kConstantSet, bindings::kFetchConstants,
                                             "fetch_constants");
    }

    // The console stores everything big-endian, and the fetch constant says how:
    // none, 8-in-16, 8-in-32 or 16-in-32. Which one is a run-time value, so all
    // four are computed and selected between, exactly as the hardware would.
    Id Translator::ReadGuestDword(Id addressInDwords, uint32_t index)
    {
        Id at = addressInDwords;
        if (index)
            at = Emit(Op::IAdd, m_uint, { at, m_module.ConstantU(index) });

        Id pointer = m_module.Pointer(StorageClass::Uniform, m_uint);
        Id zero = m_module.ConstantS(0);
        Id chain = Emit(Op::AccessChain, pointer, { m_arena, zero, at });
        Id raw = Emit(Op::Load, m_uint, { chain });

        // Bytes exchanged within each half.
        Id in16 = Emit(Op::BitwiseOr, m_uint,
            { Emit(Op::ShiftLeftLogical, m_uint,
                   { Emit(Op::BitwiseAnd, m_uint, { raw, m_module.ConstantU(0x00FF00FFu) }),
                     m_module.ConstantU(8) }),
              Emit(Op::BitwiseAnd, m_uint,
                   { Emit(Op::ShiftRightLogical, m_uint, { raw, m_module.ConstantU(8) }),
                     m_module.ConstantU(0x00FF00FFu) }) });
        auto halves = [&](Id v) {
            return Emit(Op::BitwiseOr, m_uint,
                { Emit(Op::ShiftRightLogical, m_uint, { v, m_module.ConstantU(16) }),
                  Emit(Op::ShiftLeftLogical, m_uint, { v, m_module.ConstantU(16) }) });
        };
        Id in32 = halves(in16);        // 8-in-16 then halves swapped is a full reversal
        Id half32 = halves(raw);

        Id endian = Emit(Op::Load, m_uint, { m_lastFetchEndian });
        auto is = [&](uint32_t value) {
            return Emit(Op::IEqual, m_module.Bool(), { endian, m_module.ConstantU(value) });
        };
        Id result = Emit(Op::Select, m_uint, { is(3), half32, raw });
        result = Emit(Op::Select, m_uint, { is(2), in32, result });
        result = Emit(Op::Select, m_uint, { is(1), in16, result });
        return result;
    }

    // Component 0 sits in the least significant bits of a packed word.
    bool Translator::DecodeVertexFormat(const Fetch& op, Id address, Id out[4], uint32_t& count)
    {
        const uint32_t format = op.VertexFormat();
        const bool isSigned = op.SignedComponents();
        const bool isInteger = op.IntegerComponents();

        // Normalised formats scale to [-1, 1] or [0, 1] by the largest value the
        // field can hold.
        auto scaleOf = [&](uint32_t width) {
            const double maximum = isSigned ? double((uint64_t(1) << (width - 1)) - 1)
                                            : double((uint64_t(1) << width) - 1);
            return m_module.ConstantF(float(1.0 / maximum));
        };
        // SPIR-V has no arithmetic right shift guaranteed on an unsigned type, so a
        // signed field is extracted unsigned and folded down by 2^width when its top
        // bit is set -- which is what sign extension is.
        auto unpack = [&](Id word, uint32_t offset, uint32_t width) {
            Id shifted = offset ? Emit(Op::ShiftRightLogical, m_uint,
                                       { word, m_module.ConstantU(offset) })
                                : word;
            Id field = width == 32
                     ? shifted
                     : Emit(Op::BitwiseAnd, m_uint,
                            { shifted, m_module.ConstantU((1u << width) - 1u) });

            Id value;
            if (isSigned)
            {
                Id asInt = Emit(Op::Bitcast, m_int, { field });
                if (width < 32)
                {
                    Id signBit = Emit(Op::BitwiseAnd, m_uint,
                                      { field, m_module.ConstantU(1u << (width - 1)) });
                    Id negative = Emit(Op::INotEqual, m_module.Bool(),
                                       { signBit, m_module.ConstantU(0) });
                    Id folded = Emit(Op::ISub, m_int,
                                     { asInt, m_module.ConstantS(int32_t(1u << width)) });
                    asInt = Emit(Op::Select, m_int, { negative, folded, asInt });
                }
                value = Emit(Op::ConvertSToF, m_float, { asInt });
            }
            else
            {
                value = Emit(Op::ConvertUToF, m_float, { field });
            }
            if (!isInteger) value = Emit(Op::FMul, m_float, { value, scaleOf(width) });
            return value;
        };

        // Each format names, per component, its width, its bit offset and which word
        // of the vertex it lives in. Component 0 is in the *least* significant bits.
        struct Layout
        {
            uint32_t count;
            uint32_t width[4];
            uint32_t offset[4];
            uint32_t word[4];
        };
        Layout layout{};
        enum class Kind { Packed, Float32, Float16 } kind = Kind::Packed;

        switch (format)
        {
        case 6:  layout = { 4, {8,8,8,8},     {0,8,16,24},  {0,0,0,0} }; break;   // 8_8_8_8
        case 7:  layout = { 4, {10,10,10,2},  {0,10,20,30}, {0,0,0,0} }; break;   // 2_10_10_10
        case 16: layout = { 3, {11,11,10,0},  {0,11,22,0},  {0,0,0,0} }; break;   // 10_11_11
        case 17: layout = { 3, {10,11,11,0},  {0,10,21,0},  {0,0,0,0} }; break;   // 11_11_10
        case 25: layout = { 2, {16,16,0,0},   {0,16,0,0},   {0,0,0,0} }; break;   // 16_16
        case 26: layout = { 4, {16,16,16,16}, {0,16,0,16},  {0,0,1,1} }; break;   // 16_16_16_16
        case 33: layout = { 1, {32,0,0,0},    {0,0,0,0},    {0,0,0,0} }; break;   // 32
        case 34: layout = { 2, {32,32,0,0},   {0,0,0,0},    {0,1,0,0} }; break;   // 32_32
        case 35: layout = { 4, {32,32,32,32}, {0,0,0,0},    {0,1,2,3} }; break;   // 32_32_32_32
        case 31: layout = { 2, {16,16,0,0},   {0,0,0,0},    {0,0,0,0} }; kind = Kind::Float16; break;
        case 32: layout = { 4, {16,16,16,16}, {0,0,0,0},    {0,0,1,1} }; kind = Kind::Float16; break;
        case 36: layout = { 1, {32,0,0,0},    {0,0,0,0},    {0,0,0,0} }; kind = Kind::Float32; break;
        case 37: layout = { 2, {32,32,0,0},   {0,0,0,0},    {0,1,0,0} }; kind = Kind::Float32; break;
        case 38: layout = { 4, {32,32,32,32}, {0,0,0,0},    {0,1,2,3} }; kind = Kind::Float32; break;
        case 57: layout = { 3, {32,32,32,0},  {0,0,0,0},    {0,1,2,0} }; kind = Kind::Float32; break;
        default:
            Fail("vertex format", format);
            return false;
        }
        count = layout.count;

        switch (kind)
        {
        case Kind::Float32:
            for (uint32_t i = 0; i < layout.count; i++)
                out[i] = Emit(Op::Bitcast, m_float, { ReadGuestDword(address, layout.word[i]) });
            return true;

        case Kind::Float16:
            for (uint32_t w = 0; w * 2 < layout.count; w++)
            {
                Id pair = Glsl450(Glsl::UnpackHalf2x16, m_module.Float2(),
                                  { ReadGuestDword(address, w) });
                for (uint32_t c = 0; c < 2 && w * 2 + c < layout.count; c++)
                    out[w * 2 + c] = Emit(Op::CompositeExtract, m_float, { pair, c });
            }
            return true;

        case Kind::Packed:
            for (uint32_t i = 0; i < layout.count; i++)
                out[i] = unpack(ReadGuestDword(address, layout.word[i]),
                                layout.offset[i], layout.width[i]);
            return true;
        }
        return true;
    }

    // The destination swizzle picks components, or literal 0 or 1, or leaves a
    // component of the destination register alone.
    void Translator::WriteFetchResult(const Fetch& op, Id components[4], uint32_t count)
    {
        Id target = TempPointer(m_module.ConstantS(int32_t(op.DestRegister() & (kTempRegisterCount - 1))));
        Id current = Emit(Op::Load, m_float4, { target });
        Id result[4];
        for (uint32_t c = 0; c < 4; c++)
        {
            const uint32_t select = op.DestComponent(c);
            if (select < 4)
                result[c] = select < count ? components[select] : m_module.ConstantF(0.0f);
            else if (select == 4) result[c] = m_module.ConstantF(0.0f);
            else if (select == 5) result[c] = m_module.ConstantF(1.0f);
            else                  result[c] = Component(current, c);
        }
        // Through StoreMasked, so a predicated fetch gets the same suppression an
        // ALU instruction does.
        StoreMasked(target, BuildVector(result[0], result[1], result[2], result[3]), 0xF);
    }

    void Translator::TranslateVertexFetch(const Fetch& op)
    {
        // Bit 19 is set on every real vertex fetch -- the field is called must_be_one.
        // When it is clear the instruction is not one: either the exec's sequence word
        // pointed at an ALU instruction, or the program is not where it was thought.
        if (!op.MustBeOne()) { Fail("not a vertex fetch (must_be_one is clear)", 0); return; }

        // A mini fetch carries no vertex index or fetch constant: it reuses the
        // address the last full fetch computed and applies its own format.
        if (!op.IsMiniFetch())
        {
            const uint32_t constant = op.VertexFetchSlot();
            if (constant >= bindings::kFetchSlots) { Fail("vertex fetch constant", constant); return; }

            Id pointer = m_module.Pointer(StorageClass::Uniform, m_uint);
            Id zero = m_module.ConstantS(0);
            Id chain = Emit(Op::AccessChain, pointer,
                            { m_fetchConstants, zero,
                              m_module.ConstantS(int32_t(constant)), zero });
            Id word0 = Emit(Op::Load, m_uint, { chain });
            // dword 0 is the address in dwords, with a two-bit type below it.
            Id base = Emit(Op::ShiftRightLogical, m_uint, { word0, m_module.ConstantU(2) });

            // dword 1 carries the endianness in its low two bits. Vertex data is
            // not always stored 8-in-32: a mesh with 16-bit positions is 8-in-16,
            // and swapping it as if it were whole dwords exchanges the halves of
            // every pair, which stretches triangles across the level.
            Id chain1 = Emit(Op::AccessChain, pointer,
                             { m_fetchConstants, zero,
                               m_module.ConstantS(int32_t(constant)),
                               m_module.ConstantS(1) });
            Module::Emit(m_module.Code(), Op::Store,
                         { m_lastFetchEndian,
                           Emit(Op::BitwiseAnd, m_uint,
                                { Emit(Op::Load, m_uint, { chain1 }), m_module.ConstantU(3) }) });

            // The vertex index arrives as a float, which is how the sequencer hands
            // it over.
            Id source = LoadTemp(op.SourceRegister());
            Id indexFloat = Component(source, op.SourceComponent());
            Id index = Emit(Op::ConvertFToU, m_uint, { indexFloat });
            Id stride = m_module.ConstantU(op.Stride());
            Module::Emit(m_module.Code(), Op::Store,
                         { m_lastFetchBase, Emit(Op::IAdd, m_uint,
                             { base, Emit(Op::IMul, m_uint, { index, stride }) }) });
        }
        if (!m_haveFetchBase) { Fail("mini vertex fetch with no preceding full fetch", 0); return; }

        Id address = Emit(Op::Load, m_uint, { m_lastFetchBase });
        if (op.Offset())
            address = Emit(Op::IAdd, m_uint,
                           { address, m_module.ConstantU(uint32_t(op.Offset())) });

        // A full fetch whose destination swizzle selects nothing exists to compute the
        // address for the mini fetches after it, which carry no format -- which is why
        // decoding one here would fail on format 0.
        bool readsMemory = false, writesAnything = false;
        for (uint32_t c = 0; c < 4; c++)
        {
            const uint32_t select = op.DestComponent(c);
            if (select < 4) readsMemory = true;
            if (select < 6) writesAnything = true;
        }

        Id components[4] = {};
        uint32_t count = 0;
        if (readsMemory && !DecodeVertexFormat(op, address, components, count)) return;
        if (!writesAnything) return;

        if (const int32_t exponent = op.ExponentAdjust())
        {
            Id scale = m_module.ConstantF(std::ldexp(1.0f, exponent));
            for (uint32_t i = 0; i < count; i++)
                components[i] = Emit(Op::FMul, m_float, { components[i], scale });
        }
        WriteFetchResult(op, components, count);
    }

    // The screen-space derivatives a shader uses to pick a mip level itself.
    void Translator::TranslateGetGradients(const Fetch& op)
    {
        // A vertex shader has no screen-space derivatives, and the hardware has
        // none to give it either.
        if (m_type != shader::Type::Pixel)
        {
            Id zero = m_module.ConstantF(0.0f);
            Id components[4] = { zero, zero, zero, zero };
            WriteFetchResult(op, components, 4);
            return;
        }
        Id source = LoadTemp(op.SourceRegister());
        Id x = Component(source, 0), y = Component(source, 1);
        Id components[4] = {
            Emit(Op::DPdx, m_float, { x }), Emit(Op::DPdx, m_float, { y }),
            Emit(Op::DPdy, m_float, { x }), Emit(Op::DPdy, m_float, { y }),
        };
        WriteFetchResult(op, components, 4);
    }

    // The level of detail a later fetch uses instead of, or on top of, the one
    // the derivatives give it. It outlives the instruction, so it lives in a
    // variable, and its write is suppressed by the predicate like any other.
    void Translator::TranslateSetLod(const Fetch& op)
    {
        Id source = LoadTemp(op.SourceRegister());
        Id value = Component(source, op.TextureSourceSwizzle() & 3);
        if (m_condition)
            value = Emit(Op::Select, m_float,
                         { m_condition, value, Emit(Op::Load, m_float, { m_lod }) });
        Module::Emit(m_module.Code(), Op::Store, { m_lod, value });
    }

    // A dword of texture fetch constant `slot`, as the draw bound it. The
    // shader sees the fetch window as 96 pairs of dwords, each padded to a
    // vector, so dword `word` of the six is pair 3 * slot + word / 2.
    Id Translator::TextureFetchWord(uint32_t slot, uint32_t word)
    {
        Id pointer = m_module.Pointer(StorageClass::Uniform, m_uint);
        Id chain = Emit(Op::AccessChain, pointer,
                        { m_fetchConstants, m_module.ConstantS(0),
                          m_module.ConstantS(int32_t(slot * 3 + word / 2)),
                          m_module.ConstantS(int32_t(word & 1)) });
        return Emit(Op::Load, m_uint, { chain });
    }

    // A signed bit field of a fetch constant dword, as a float.
    Id Translator::SignedField(Id word, uint32_t offset, uint32_t count)
    {
        Id field = Emit(Op::BitFieldSExtract, m_int,
                        { Emit(Op::Bitcast, m_int, { word }), m_module.ConstantU(offset),
                          m_module.ConstantU(count) });
        return Emit(Op::ConvertSToF, m_float, { field });
    }

    // The direction a cube fetch samples, from the face and the two
    // coordinates the `cube` instruction produced -- its exact inverse. The
    // hardware takes the face and coordinates as they are; a Vulkan cube wants
    // the direction, and sampling one rather than six layers of an array is
    // what keeps the level choice right where the face changes, because a
    // direction's derivatives do not jump there. Follows Xenia (BSD-3).
    Id Translator::CubeDirection(Id sc, Id tc, Id face)
    {
        // The coordinates arrive in 1..2, where the `cube` result plus the 1.5
        // the title adds leaves them.
        auto remap = [&](Id v) {
            return Emit(Op::FAdd, m_float, { Emit(Op::FMul, m_float, { v, m_module.ConstantF(2.0f) }),
                                             m_module.ConstantF(-3.0f) });
        };
        Id s = remap(sc), t = remap(tc);
        Id index = Emit(Op::ConvertFToU, m_uint,
                        { Glsl450(Glsl::NClamp, m_float,
                                  { face, m_module.ConstantF(0.0f), m_module.ConstantF(5.0f) }) });
        Id one = m_module.ConstantU(1);
        Id axis = Emit(Op::ShiftRightLogical, m_uint, { index, one });
        Id negative = Emit(Op::INotEqual, m_bool,
                           { Emit(Op::BitwiseAnd, m_uint, { index, one }), m_module.ConstantU(0) });
        Id xMajor = Emit(Op::IEqual, m_bool, { axis, m_module.ConstantU(0) });
        Id yMajor = Emit(Op::IEqual, m_bool, { axis, one });
        auto pick = [&](Id cond, Id t, Id f) { return Emit(Op::Select, m_float, { cond, t, f }); };
        auto negate = [&](Id v) { return Emit(Op::FNegate, m_float, { v }); };
        Id sign = pick(negative, m_module.ConstantF(-1.0f), m_module.ConstantF(1.0f));
        Id x = pick(xMajor, sign, pick(yMajor, s, pick(negative, negate(s), s)));
        Id y = pick(xMajor, negate(t), pick(yMajor, sign, negate(t)));
        Id z = pick(xMajor, pick(negative, s, negate(s)),
                    pick(yMajor, pick(negative, negate(t), t), sign));
        return Emit(Op::CompositeConstruct, m_module.Float3(), { x, y, z });
    }

    void Translator::TranslateTextureFetch(const Fetch& op)
    {
        const uint32_t slot = op.ConstantIndex() & 31;
        if (!m_textures[slot]) { Fail("texture fetch constant", slot); return; }

        Id source = LoadTemp(op.SourceRegister());
        // The fetch names which component of the source register each coordinate
        // comes from. A colour ramp looked up once per channel is three fetches of
        // one 1D texture reading x, then y, then z.
        const uint32_t swizzle = op.TextureSourceSwizzle();
        auto pick = [&](uint32_t i) { return Component(source, (swizzle >> (2 * i)) & 3); };
        const FetchDimension dimension = op.Dimension();
        // The coordinates that address texels: u for 1D, u and v for 2D and for
        // a cube's face, all three for a volume. A cube's third is its face.
        const uint32_t axes = dimension == FetchDimension::D1 ? 1
                            : dimension == FetchDimension::D3 ? 3 : 2;
        Id c[3] = { pick(0),
                    dimension == FetchDimension::D1 ? m_module.ConstantF(0.0f) : pick(1),
                    axes == 3 || dimension == FetchDimension::Cube ? pick(2) : 0 };

        // The size of level 0, in texels: offsets are in half texels of it, and
        // unnormalised coordinates are texels of it.
        m_module.RequireCapability(kCapabilityImageQuery);
        Id sampler = Emit(Op::Load, m_textureTypes[slot], { m_textures[slot] });
        Id bare = Emit(Op::Image, m_textureImageTypes[slot], { sampler });
        const uint32_t sizeCount = dimension == FetchDimension::D3 ? 3 : 2;
        Id size = Emit(Op::ConvertSToF, sizeCount == 3 ? m_module.Float3() : m_module.Float2(),
                       { Emit(Op::ImageQuerySizeLod, m_module.IntVector(sizeCount),
                              { bare, m_module.ConstantS(0) }) });

        // Offsets are in half texels, and every axis gets a sliver more: the
        // hardware turns a coordinate into fixed point with 8 bits below the
        // texel, and a point sample exactly between two texels has to land on
        // the one the console's rounding picks, not wherever float arithmetic
        // does. The sliver is Xenia's, 1.5/1024 of a texel (BSD-3).
        constexpr float kRounding = 1.5f / 1024.0f;
        const int32_t offsets[3] = { op.OffsetX(), op.OffsetY(), op.OffsetZ() };
        for (uint32_t i = 0; i < axes; i++)
        {
            Id offset = m_module.ConstantF(float(offsets[i]) * 0.5f + kRounding);
            Id extent = Component(size, i);
            c[i] = op.CoordinatesUnnormalised()
                ? Emit(Op::FDiv, m_float, { Emit(Op::FAdd, m_float, { c[i], offset }), extent })
                : Emit(Op::FAdd, m_float, { c[i], Emit(Op::FDiv, m_float, { offset, extent }) });
        }

        Id coordinates;
        if (dimension == FetchDimension::Cube)
        {
            Id face = offsets[2] ? Emit(Op::FAdd, m_float,
                                        { c[2], m_module.ConstantF(float(offsets[2]) * 0.5f) })
                                 : c[2];
            coordinates = CubeDirection(c[0], c[1], face);
        }
        else if (axes == 3)
            coordinates = Emit(Op::CompositeConstruct, m_module.Float3(), { c[0], c[1], c[2] });
        else
            coordinates = Emit(Op::CompositeConstruct, m_module.Float2(), { c[0], c[1] });

        // The level of detail: the derivatives, the register setTexLOD wrote, or
        // both, moved by the fetch constant's bias (in 32nds) and the
        // instruction's (in 16ths). Implicit LOD needs derivatives, which only a
        // fragment shader has, so a vertex shader always states the level.
        const bool computed = op.UseComputedLod() && m_type == shader::Type::Pixel;
        Id word4 = TextureFetchWord(slot, 4);
        Id lod = Emit(Op::FMul, m_float, { SignedField(word4, 12, 10), m_module.ConstantF(1.0f / 32.0f) });
        if (op.UseRegisterLod())
            lod = Emit(Op::FAdd, m_float, { Emit(Op::Load, m_float, { m_lod }), lod });
        if (op.LodBias())
            lod = Emit(Op::FAdd, m_float, { lod, m_module.ConstantF(float(op.LodBias()) / 16.0f) });
        Id sampled = computed
            ? Emit(Op::ImageSampleImplicitLod, m_float4,
                   { sampler, coordinates, kImageOperandBias, lod })
            : Emit(Op::ImageSampleExplicitLod, m_float4,
                   { sampler, coordinates, kImageOperandLod, lod });

        // The fetch constant's exponent adjust scales what comes back by a
        // power of two.
        Id scale = Glsl450(Glsl::Exp2, m_float, { SignedField(TextureFetchWord(slot, 3), 13, 6) });
        Id components[4];
        for (uint32_t i = 0; i < 4; i++)
            components[i] = Emit(Op::FMul, m_float, { Component(sampled, i), scale });
        WriteFetchResult(op, components, 4);
    }

    void Translator::TranslateFetch(const Fetch& op)
    {
        // As with the ALU: the fetch happens, its write is suppressed.
        const Id outer = m_condition;
        m_condition = ConditionFor(op.IsPredicated(), op.PredicateCondition());

        switch (op.Opcode())
        {
        case FetchOpcode::VertexFetch:  TranslateVertexFetch(op); break;
        case FetchOpcode::TextureFetch: TranslateTextureFetch(op); break;
        case FetchOpcode::GetGradients: TranslateGetGradients(op); break;
        case FetchOpcode::SetLod:       TranslateSetLod(op); break;
        case FetchOpcode::GetBorderColourFrac:
        {
            // How much of the sample fell outside the texture. No sampler here has a
            // border, so nothing ever does.
            Id zero = m_module.ConstantF(0.0f);
            Id components[4] = { zero, zero, zero, zero };
            WriteFetchResult(op, components, 4);
            break;
        }
        default: Fail("fetch opcode", uint32_t(op.Opcode())); break;
        }
        m_condition = outer;
    }

    // The predicate register, or its negation.
    Id Translator::PredicateIs(bool value)
    {
        Id predicate = Emit(Op::Load, m_bool, { m_predicate });
        return value ? predicate : Emit(Op::LogicalNot, m_bool, { predicate });
    }

    // What an instruction's writes are suppressed under: the block's condition,
    // and the instruction's own predicate when it has one.
    Id Translator::ConditionFor(bool predicated, bool condition)
    {
        if (!predicated) return m_condition;
        Id wanted = PredicateIs(condition);
        return m_condition ? Emit(Op::LogicalAnd, m_bool, { m_condition, wanted }) : wanted;
    }

    // Suppressed under the condition in force exactly as a register write is.
    void Translator::StorePredicate(Id value)
    {
        if (m_condition)
            value = Emit(Op::Select, m_bool,
                         { m_condition, value, Emit(Op::Load, m_bool, { m_predicate }) });
        Module::Emit(m_module.Code(), Op::Store, { m_predicate, value });
    }

    // OpKill terminates its block and every block here belongs to the dispatch
    // switch, so the discard is recorded and performed once the sequencer
    // finishes. Observable only to a shader exporting to memory after killing.
    void Translator::RequestKill(Id condition)
    {
        if (m_condition) condition = Emit(Op::LogicalAnd, m_bool, { m_condition, condition });
        Id already = Emit(Op::Load, m_bool, { m_killed });
        Module::Emit(m_module.Code(), Op::Store,
                     { m_killed, Emit(Op::LogicalOr, m_bool, { already, condition }) });
        m_haveKill = true;
    }

    // The operand arrives swizzled .z_xy -- the title writes `cube r, src.zzxy,
    // src.yxzz` -- so Z is component 0, X is component 2 and Y is component 3.
    // Component 1 is the one that is skipped. The result is (T, S, 2 * major
    // axis, face). Selects rather than branches, to stay in one basic block. The
    // second operand is decorative: the hardware reads XYZ from the first alone.
    Id Translator::CubeCoordinates(Id a, Id)
    {
        Id x = Component(a, 2), y = Component(a, 3), z = Component(a, 0);
        auto abs = [&](Id v) { return Glsl450(Glsl::FAbs, m_float, { v }); };
        Id ax = abs(x), ay = abs(y), az = abs(z);
        auto negate = [&](Id v) { return Emit(Op::FNegate, m_float, { v }); };
        auto ge = [&](Id p, Id q) { return Emit(Op::FOrdGreaterThanEqual, m_bool, { p, q }); };
        auto pick = [&](Id cond, Id t, Id f) { return Emit(Op::Select, m_float, { cond, t, f }); };

        Id zero = m_module.ConstantF(0.0f);
        Id zMajor = Emit(Op::LogicalAnd, m_bool, { ge(az, ax), ge(az, ay) });
        Id yMajor = Emit(Op::LogicalAnd, m_bool,
                         { Emit(Op::LogicalNot, m_bool, { zMajor }), ge(ay, ax) });
        Id zNeg = Emit(Op::FOrdLessThan, m_bool, { z, zero });
        Id yNeg = Emit(Op::FOrdLessThan, m_bool, { y, zero });
        Id xNeg = Emit(Op::FOrdLessThan, m_bool, { x, zero });

        Id sc = pick(zMajor, pick(zNeg, negate(x), x),
                pick(yMajor, x, pick(xNeg, z, negate(z))));
        Id tc = pick(zMajor, negate(y),
                pick(yMajor, pick(yNeg, negate(z), z), negate(y)));
        Id ma = pick(zMajor, z, pick(yMajor, y, x));
        Id face = pick(zMajor, pick(zNeg, m_module.ConstantF(5.0f), m_module.ConstantF(4.0f)),
                  pick(yMajor, pick(yNeg, m_module.ConstantF(3.0f), m_module.ConstantF(2.0f)),
                               pick(xNeg, m_module.ConstantF(1.0f), m_module.ConstantF(0.0f))));
        Id twoMa = Emit(Op::FMul, m_float, { ma, m_module.ConstantF(2.0f) });
        return BuildVector(tc, sc, twoMa, face);
    }


    void Translator::EmitSequencerState()
    {
        Id uintPointer = m_module.Pointer(StorageClass::Function, m_uint);
        Id zero = m_module.ConstantU(0);
        auto scalar = [&](Id& slot, const char* name) {
            slot = m_module.Allocate();
            Module::Emit(m_module.Code(), Op::Variable,
                         { uintPointer, slot, uint32_t(StorageClass::Function), zero });
            Module::EmitString(m_module.Debug(), Op::Name, { slot }, name);
        };
        scalar(m_pc, "pc");
        scalar(m_lastFetchBase, "vertex_fetch_address");
        scalar(m_lastFetchEndian, "vertex_fetch_endian");

        Id floatPointer = m_module.Pointer(StorageClass::Function, m_float);
        m_previousScalar = m_module.Allocate();
        Module::Emit(m_module.Code(), Op::Variable,
                     { floatPointer, m_previousScalar, uint32_t(StorageClass::Function),
                       m_module.ConstantF(0.0f) });
        Module::EmitString(m_module.Debug(), Op::Name, { m_previousScalar }, "previous_scalar");
        scalar(m_loopDepth, "loop_depth");
        scalar(m_callDepth, "call_depth");

        // aL is signed and clamped to [-256, 256] by the sequencer.
        Id intPointer = m_module.Pointer(StorageClass::Function, m_int);
        m_addressRegister = m_module.Allocate();
        Module::Emit(m_module.Code(), Op::Variable,
                     { intPointer, m_addressRegister, uint32_t(StorageClass::Function),
                       m_module.ConstantS(0) });
        Module::EmitString(m_module.Debug(), Op::Name, { m_addressRegister }, "aL");
        m_a0 = m_module.Allocate();
        Module::Emit(m_module.Code(), Op::Variable,
                     { intPointer, m_a0, uint32_t(StorageClass::Function),
                       m_module.ConstantS(0) });
        Module::EmitString(m_module.Debug(), Op::Name, { m_a0 }, "a0");
        m_lod = m_module.Allocate();
        Module::Emit(m_module.Code(), Op::Variable,
                     { floatPointer, m_lod, uint32_t(StorageClass::Function),
                       m_module.ConstantF(0.0f) });
        Module::EmitString(m_module.Debug(), Op::Name, { m_lod }, "lod");

        Id boolPointer2 = m_module.Pointer(StorageClass::Function, m_bool);
        m_killed = m_module.Allocate();
        Module::Emit(m_module.Code(), Op::Variable,
                     { boolPointer2, m_killed, uint32_t(StorageClass::Function),
                       m_module.ConstantFalseValue() });
        Module::EmitString(m_module.Debug(), Op::Name, { m_killed }, "killed");

        Id stack = m_module.ArrayOf(m_uint, kLoopStackDepth);
        Id stackPointer = m_module.Pointer(StorageClass::Function, stack);
        auto array = [&](Id& slot, const char* name) {
            slot = m_module.Allocate();
            Module::Emit(m_module.Code(), Op::Variable,
                         { stackPointer, slot, uint32_t(StorageClass::Function) });
            Module::EmitString(m_module.Debug(), Op::Name, { slot }, name);
        };
        array(m_loopIterators, "loop_iterators");
        array(m_loopIds, "loop_ids");
        array(m_callStack, "call_stack");
    }

    // aL = iterator * step + start, from the innermost loop's constant,
    // clamped to [-256, 256]. Step and start are signed 8-bit fields.
    void Translator::UpdateAddressRegister(Id depth, Id iterator)
    {
        Id constant = LoopConstant(ArrayElement(m_loopIds, depth));
        Id start = Emit(Op::BitwiseAnd, m_uint,
                        { Emit(Op::ShiftRightLogical, m_uint, { constant, m_module.ConstantU(8) }),
                          m_module.ConstantU(0xFF) });
        Id step = Emit(Op::BitwiseAnd, m_uint,
                       { Emit(Op::ShiftRightLogical, m_uint, { constant, m_module.ConstantU(16) }),
                         m_module.ConstantU(0xFF) });
        // Values above 127 are negative.
        Id signedStep = Emit(Op::Bitcast, m_int, { step });
        Id negative = Emit(Op::SGreaterThan, m_bool, { signedStep, m_module.ConstantS(127) });
        signedStep = Emit(Op::Select, m_int,
                          { negative, Emit(Op::ISub, m_int, { signedStep, m_module.ConstantS(256) }),
                            signedStep });
        Id value = Emit(Op::IAdd, m_int,
                        { Emit(Op::IMul, m_int, { Emit(Op::Bitcast, m_int, { iterator }), signedStep }),
                          Emit(Op::Bitcast, m_int, { start }) });
        value = Glsl450(Glsl::SClamp, m_int,
                        { value, m_module.ConstantS(-256), m_module.ConstantS(256) });
        Module::Emit(m_module.Code(), Op::Store, { m_addressRegister, value });
    }

    // `self` is the instruction's index, and every path through has to leave
    // the program counter set.
    void Translator::EmitControlFlow(const ControlFlow& cf, uint32_t self)
    {
        const uint32_t next = self + 1;
        const uint32_t stop = uint32_t(m_flow.size());   // no case: falls to default

        switch (cf.Opcode())
        {
        case ControlFlowOpcode::Nop:
        case ControlFlowOpcode::Alloc:
        case ControlFlowOpcode::MarkVsFetchDone:
            SetPcTo(next);
            return;

        case ControlFlowOpcode::CondExec:
        case ControlFlowOpcode::CondExecEnd:
        {
            // Same shape as a predicated block, but on a boolean constant. Both are
            // uniform within the block, so a select on every store is exact.
            Id value = BoolConstant(cf.BoolAddress());
            m_condition = cf.PredicateCondition()
                        ? value
                        : Emit(Op::LogicalNot, m_bool, { value });
            break;
        }

        case ControlFlowOpcode::CondExecPred:
        case ControlFlowOpcode::CondExecPredEnd:
        case ControlFlowOpcode::CondExecPredClean:
        case ControlFlowOpcode::CondExecPredCleanEnd:
        {
            m_condition = PredicateIs(cf.PredicateCondition());
            break;
        }

        case ControlFlowOpcode::Exec:
        case ControlFlowOpcode::ExecEnd:
            break;

        case ControlFlowOpcode::LoopStart:
        {
            // Reset the iterator unless this is a repeat, then skip the whole loop if
            // it has already run its count.
            DeclareLoopConstants();
            Id depth = Emit(Op::Load, m_uint, { m_loopDepth });
            Id id = m_module.ConstantU(cf.LoopId());
            SetArrayElement(m_loopIds, depth, id);
            if (!cf.IsRepeat()) SetArrayElement(m_loopIterators, depth, m_module.ConstantU(0));
            Id iterator = ArrayElement(m_loopIterators, depth);
            Id count = Emit(Op::BitwiseAnd, m_uint,
                            { LoopConstant(id), m_module.ConstantU(0xFF) });
            Id done = Emit(Op::UGreaterThanEqual, m_bool, { iterator, count });
            // Entering the loop pushes and sets aL; skipping it does neither.
            Id entered = Emit(Op::IAdd, m_uint, { depth, m_module.ConstantU(1) });
            Module::Emit(m_module.Code(), Op::Store,
                         { m_loopDepth, Emit(Op::Select, m_uint, { done, depth, entered }) });
            UpdateAddressRegister(depth, iterator);
            SetPc(Emit(Op::Select, m_uint,
                       { done, m_module.ConstantU(cf.Target()), m_module.ConstantU(next) }));
            return;
        }

        case ControlFlowOpcode::LoopEnd:
        {
            // Go round again unless the count is exhausted or a predicated break
            // fires.
            DeclareLoopConstants();
            Id depth = Emit(Op::Load, m_uint, { m_loopDepth });
            Id inner = Emit(Op::ISub, m_uint, { depth, m_module.ConstantU(1) });
            Id id = ArrayElement(m_loopIds, inner);
            Id iterator = Emit(Op::IAdd, m_uint,
                               { ArrayElement(m_loopIterators, inner), m_module.ConstantU(1) });
            SetArrayElement(m_loopIterators, inner, iterator);
            Id count = Emit(Op::BitwiseAnd, m_uint,
                            { LoopConstant(id), m_module.ConstantU(0xFF) });
            Id more = Emit(Op::ULessThan, m_bool, { iterator, count });
            if (cf.IsPredicatedBreak())
            {
                Id breaks = PredicateIs(cf.LoopCondition());
                more = Emit(Op::LogicalAnd, m_bool,
                            { more, Emit(Op::LogicalNot, m_bool, { breaks }) });
            }
            // Leaving pops; going round again keeps the depth and steps aL.
            Module::Emit(m_module.Code(), Op::Store,
                         { m_loopDepth, Emit(Op::Select, m_uint, { more, depth, inner }) });
            UpdateAddressRegister(inner, iterator);
            SetPc(Emit(Op::Select, m_uint,
                       { more, m_module.ConstantU(cf.Target()), m_module.ConstantU(next) }));
            return;
        }

        case ControlFlowOpcode::CondCall:
        {
            Id depth = Emit(Op::Load, m_uint, { m_callDepth });
            Id room = Emit(Op::ULessThan, m_bool, { depth, m_module.ConstantU(kLoopStackDepth) });
            Id taken = JumpTaken(cf);
            taken = taken ? Emit(Op::LogicalAnd, m_bool, { taken, room }) : room;
            // The stack slot is written unconditionally and the depth only when the
            // call is taken, which keeps this one basic block.
            Id slot = Emit(Op::Select, m_uint,
                           { room, depth, m_module.ConstantU(kLoopStackDepth - 1) });
            SetArrayElement(m_callStack, slot, m_module.ConstantU(next));
            Module::Emit(m_module.Code(), Op::Store,
                         { m_callDepth, Emit(Op::Select, m_uint,
                             { taken, Emit(Op::IAdd, m_uint, { depth, m_module.ConstantU(1) }),
                               depth }) });
            SetPc(Emit(Op::Select, m_uint,
                       { taken, m_module.ConstantU(cf.Target()), m_module.ConstantU(next) }));
            return;
        }

        case ControlFlowOpcode::Return:
        {
            // A return outside a call is well defined: it does nothing.
            Id depth = Emit(Op::Load, m_uint, { m_callDepth });
            Id inCall = Emit(Op::ULessThan, m_bool, { m_module.ConstantU(0), depth });
            Id inner = Emit(Op::Select, m_uint,
                            { inCall, Emit(Op::ISub, m_uint, { depth, m_module.ConstantU(1) }),
                              m_module.ConstantU(0) });
            Module::Emit(m_module.Code(), Op::Store, { m_callDepth, inner });
            SetPc(Emit(Op::Select, m_uint,
                       { inCall, ArrayElement(m_callStack, inner), m_module.ConstantU(next) }));
            return;
        }

        case ControlFlowOpcode::CondJmp:
        {
            Id taken = JumpTaken(cf);
            if (!taken) { SetPcTo(cf.Target()); return; }
            SetPc(Emit(Op::Select, m_uint,
                       { taken, m_module.ConstantU(cf.Target()), m_module.ConstantU(next) }));
            return;
        }

        default:
            Fail("control flow opcode", uint32_t(cf.Opcode()));
            return;
        }

        for (uint32_t n = 0; n < cf.Count(); n++)
        {
            const size_t at = size_t(cf.Address() + n) * 3;
            if (at + 3 > m_count) { Fail("instruction past the end of the program", uint32_t(at)); return; }
            m_result.instructionCount++;
            if (cf.IsFetch(n)) TranslateFetch({ m_words[at], m_words[at + 1], m_words[at + 2] });
            else               TranslateAlu({ m_words[at], m_words[at + 1], m_words[at + 2] });
        }
        m_condition = 0;
        SetPcTo(cf.IsEnd() ? stop : next);
    }


    void Translator::EmitBody()
    {
        Id functionType = m_module.Allocate();
        Module::Emit(m_module.Declarations(), Op::TypeFunction, { functionType, m_void });

        Id entry = m_module.Allocate();
        m_module.EntryPoint(m_type == shader::Type::Vertex ? kExecutionModelVertex
                                                           : kExecutionModelFragment,
                            entry, "main", m_entryInterface);
        if (m_type == shader::Type::Pixel)
            Module::Emit(m_module.ExecutionModes(), Op::ExecutionMode,
                         { entry, kExecutionModeOriginUpperLeft });

        Module::Emit(m_module.Code(), Op::Function,
                     { m_void, entry, kFunctionControlNone, functionType });
        Id label = m_module.Allocate();
        Module::Emit(m_module.Code(), Op::Label, { label });

        // SPIR-V wants every function variable declared in the entry block, and
        // drivers promote them to registers, so this saves building SSA by hand.
        Id temps = m_module.ArrayOf(m_float4, kTempRegisterCount);
        Id pointer = m_module.Pointer(StorageClass::Function, temps);
        m_temps = m_module.Allocate();
        Module::Emit(m_module.Code(), Op::Variable,
                     { pointer, m_temps, uint32_t(StorageClass::Function) });
        Module::EmitString(m_module.Debug(), Op::Name, { m_temps }, "r");

        Id boolPointer = m_module.Pointer(StorageClass::Function, m_bool);
        m_predicate = m_module.Allocate();
        Module::Emit(m_module.Code(), Op::Variable,
                     { boolPointer, m_predicate, uint32_t(StorageClass::Function),
                       m_module.ConstantFalseValue() });

        EmitSequencerState();

        if (m_type == shader::Type::Vertex && m_vertexIndex)
        {
            Id index = Emit(Op::Load, m_int, { m_vertexIndex });
            Id asFloat = Emit(Op::ConvertSToF, m_float, { index });
            Id zero = m_module.ConstantF(0.0f);
            Id value = Emit(Op::CompositeConstruct, m_float4, { asFloat, zero, zero, zero });
            Module::Emit(m_module.Code(), Op::Store,
                         { TempPointer(m_module.ConstantS(0)), value });
        }

        if (m_type == shader::Type::Vertex)
        {
            const Id zero = m_module.ConstantF(0.0f);
            const Id zero4 = Emit(Op::CompositeConstruct, m_float4, { zero, zero, zero, zero });
            for (uint32_t i = 0; i < kInterpolatorCount; i++)
                if (m_interpolators[i])
                    Module::Emit(m_module.Code(), Op::Store, { m_interpolators[i], zero4 });
            if (m_pointSize)
                Module::Emit(m_module.Code(), Op::Store, { m_pointSize, m_module.ConstantF(1.0f) });
        }

        if (m_type == shader::Type::Pixel)
            for (uint32_t i = 0; i < kInterpolatorCount; i++)
                if (m_interpolators[i])
                {
                    Id value = Emit(Op::Load, m_float4, { m_interpolators[i] });
                    Module::Emit(m_module.Code(), Op::Store,
                                 { TempPointer(m_module.ConstantS(int32_t(i))), value });
                }

        // The sequencer is a program counter over the control flow list, and Xenos
        // jumps, calls and loops move it arbitrarily. Rather than recover structured
        // control flow, the module runs one loop whose body is a switch on the
        // counter, each control flow instruction a case:
        //
        //   loop { switch (pc) { case 0: ...; pc = 1; ... default: break; } }
        const uint32_t caseCount = uint32_t(m_flow.size());
        Id header = m_module.Allocate();
        Id dispatch = m_module.Allocate();
        // The switch needs a merge block of its own: a selection construct may not
        // merge at the loop's continue target. This one exists only to branch on.
        Id caseMerge = m_module.Allocate();
        Id continueTarget = m_module.Allocate();
        Id merge = m_module.Allocate();
        // The default needs its own block for the same reason. It breaks out of
        // the loop, which is how a shader ends.
        Id defaultBlock = m_module.Allocate();
        std::vector<Id> blocks(caseCount);
        for (uint32_t i = 0; i < caseCount; i++) blocks[i] = m_module.Allocate();

        Module::Emit(m_module.Code(), Op::Branch, { header });
        Module::Emit(m_module.Code(), Op::Label, { header });
        Module::Emit(m_module.Code(), Op::LoopMerge, { merge, continueTarget, kLoopControlNone });
        Module::Emit(m_module.Code(), Op::Branch, { dispatch });

        Module::Emit(m_module.Code(), Op::Label, { dispatch });
        Id current = Emit(Op::Load, m_uint, { m_pc });
        Module::Emit(m_module.Code(), Op::SelectionMerge, { caseMerge, kSelectionControlNone });
        {
            std::vector<uint32_t> operands{ current, defaultBlock };
            for (uint32_t i = 0; i < caseCount; i++)
            {
                operands.push_back(i);
                operands.push_back(blocks[i]);
            }
            auto& code = m_module.Code();
            code.push_back(Head(Op::Switch, uint32_t(operands.size()) + 1));
            code.insert(code.end(), operands.begin(), operands.end());
        }

        for (uint32_t i = 0; i < caseCount; i++)
        {
            Module::Emit(m_module.Code(), Op::Label, { blocks[i] });
            EmitControlFlow(m_flow[i], i);
            if (!m_result.error.empty()) return;
            Module::Emit(m_module.Code(), Op::Branch, { caseMerge });
        }

        Module::Emit(m_module.Code(), Op::Label, { defaultBlock });
        Module::Emit(m_module.Code(), Op::Branch, { merge });

        Module::Emit(m_module.Code(), Op::Label, { caseMerge });
        Module::Emit(m_module.Code(), Op::Branch, { continueTarget });
        Module::Emit(m_module.Code(), Op::Label, { continueTarget });
        Module::Emit(m_module.Code(), Op::Branch, { header });
        Module::Emit(m_module.Code(), Op::Label, { merge });

        // The alpha test, folded into the same discard. The three comparison
        // results are exactly the bits of the console's compare function --
        // 001 less, 010 equal, 100 greater -- so the whole test is one mask and
        // one and, with `never` and `always` falling out of it for free.
        if (m_type == shader::Type::Pixel && m_alphaTest && m_colours[0])
        {
            Id uint32 = m_module.Int(false);
            Id functionPointer = m_module.Pointer(StorageClass::PushConstant, uint32);
            Id referencePointer = m_module.Pointer(StorageClass::PushConstant, m_float);
            Id function = Emit(Op::Load, uint32,
                               { Emit(Op::AccessChain, functionPointer,
                                      { m_alphaTest, m_module.ConstantU(0) }) });
            Id reference = Emit(Op::Load, m_float,
                                { Emit(Op::AccessChain, referencePointer,
                                       { m_alphaTest, m_module.ConstantU(1) }) });
            Id alpha = Emit(Op::CompositeExtract, m_float,
                            { Emit(Op::Load, m_float4, { m_colours[0] }), 3 });
            Id zero = m_module.ConstantU(0);
            auto bit = [&](Op comparison, uint32_t value) {
                return Emit(Op::Select, uint32,
                            { Emit(comparison, m_bool, { alpha, reference }),
                              m_module.ConstantU(value), zero });
            };
            Id mask = Emit(Op::BitwiseOr, uint32,
                           { Emit(Op::BitwiseOr, uint32,
                                  { bit(Op::FOrdLessThan, 1), bit(Op::FOrdEqual, 2) }),
                             bit(Op::FOrdGreaterThan, 4) });
            // `always` has to be inert, not merely a function that happens to match
            // every comparison. The three comparisons are ordered, so an alpha that
            // is not a number answers false to all of them, the mask comes out zero
            // and the pixel dies whatever the function says -- and a shader that
            // does not write its alpha leaves exactly that. The prepass shaders do
            // not write alpha, which is why their fragments were being discarded
            // and their depth never written, and the sky then filled the hole in.
            Id enabled = Emit(Op::INotEqual, m_bool, { function, m_module.ConstantU(7) });
            Id rejected = Emit(Op::IEqual, m_bool,
                               { Emit(Op::BitwiseAnd, uint32, { function, mask }), zero });
            Id failed = Emit(Op::LogicalAnd, m_bool, { enabled, rejected });
            Id already = Emit(Op::Load, m_bool, { m_killed });
            Module::Emit(m_module.Code(), Op::Store,
                         { m_killed, Emit(Op::LogicalOr, m_bool, { already, failed }) });
            m_haveKill = true;
        }

        // The console scales what a pixel shader wrote by two to the power of
        // RB_COLOR_INFO's exponent bias on the way into EDRAM, and the title
        // renders the world with a bias -- so a shader's output is not the
        // colour the screen gets, and ignoring it left every lit surface a
        // fixed fraction of its brightness. After the alpha test, which the
        // hardware runs on the unbiased alpha.
        if (m_type == shader::Type::Pixel && m_alphaTest)
        {
            Id scalePointer = m_module.Pointer(StorageClass::PushConstant, m_float);
            Id scale = Emit(Op::Load, m_float,
                            { Emit(Op::AccessChain, scalePointer,
                                   { m_alphaTest, m_module.ConstantU(2) }) });
            for (Id colour : m_colours)
            {
                if (!colour) continue;
                Id value = Emit(Op::Load, m_float4, { colour });
                Module::Emit(m_module.Code(), Op::Store,
                             { colour, Emit(Op::VectorTimesScalar, m_float4,
                                            { value, scale }) });
            }
        }

        // Xenos runs a pixel shader's colour through a piecewise-linear gamma
        // curve on the way into an 8_8_8_8_GAMMA target, and MW2 draws the
        // world's colour pass into one -- 4.4 million draws a run against
        // 230 thousand into a plain 8_8_8_8. Storing the linear value instead
        // left the whole world both too dark and too saturated, which is what a
        // missing gamma encode looks like from the outside. Follows Xenia's
        // SpirvShaderTranslator::LinearToPWLGamma (BSD-3). Alpha is not
        // converted, and neither is anything drawn into a target that is not
        // the gamma form.
        if (m_type == shader::Type::Pixel && m_alphaTest)
        {
            Id uint32 = m_module.Int(false);
            Id flagPointer = m_module.Pointer(StorageClass::PushConstant, uint32);
            Id flag = Emit(Op::Load, uint32,
                           { Emit(Op::AccessChain, flagPointer,
                                  { m_alphaTest, m_module.ConstantU(3) }) });
            Id wanted = Emit(Op::INotEqual, m_bool, { flag, m_module.ConstantU(0) });
            Id float3 = m_module.Float3();
            Id bool3 = m_module.Vector(m_module.Bool(), 3);
            Id wanted3 = Emit(Op::CompositeConstruct, bool3, { wanted, wanted, wanted });
            auto splat = [&](float v) {
                Id c = m_module.ConstantF(v);
                return Emit(Op::CompositeConstruct, float3, { c, c, c });
            };
            for (Id colour : m_colours)
            {
                if (!colour) continue;
                Id value = Emit(Op::Load, m_float4, { colour });
                Id rgb = Emit(Op::VectorShuffle, float3, { value, value, 0, 1, 2 });
                // Saturate first; NClamp puts a NaN at zero rather than leaving
                // it to the driver, which is how the alpha test got caught out.
                Id linear = Glsl450(Glsl::NClamp, float3, { rgb, splat(0.0f), splat(1.0f) });
                auto atLeast = [&](float edge) {
                    return Emit(Op::FOrdGreaterThanEqual, bool3, { linear, splat(edge) });
                };
                Id high  = atLeast(512.0f / 1023.0f);
                Id mid   = atLeast(128.0f / 1023.0f);
                Id low   = atLeast(64.0f / 1023.0f);
                Id scaleHigh  = Emit(Op::Select, float3, { high, splat(1023.0f / 8.0f),
                                                                 splat(1023.0f / 4.0f) });
                Id offsetHigh = Emit(Op::Select, float3, { high, splat(128.0f / 255.0f),
                                                                 splat(64.0f / 255.0f) });
                Id scaleLow   = Emit(Op::Select, float3, { low, splat(1023.0f / 2.0f),
                                                                splat(1023.0f) });
                Id offsetLow  = Emit(Op::Select, float3, { low, splat(32.0f / 255.0f),
                                                                splat(0.0f) });
                Id scaleOf    = Emit(Op::Select, float3, { mid, scaleHigh, scaleLow });
                Id offsetOf   = Emit(Op::Select, float3, { mid, offsetHigh, offsetLow });
                Id stepped = Glsl450(Glsl::Trunc, float3,
                                     { Emit(Op::FMul, float3, { linear, scaleOf }) });
                Id encoded = Emit(Op::FAdd, float3,
                                  { Emit(Op::VectorTimesScalar, float3,
                                         { stepped, m_module.ConstantF(1.0f / 255.0f) }),
                                    offsetOf });
                Id chosen = Emit(Op::Select, float3, { wanted3, encoded, rgb });
                Id alpha = Emit(Op::CompositeExtract, m_float, { value, 3 });
                Module::Emit(m_module.Code(), Op::Store,
                             { colour, Emit(Op::CompositeConstruct, m_float4,
                                            { Emit(Op::CompositeExtract, m_float, { chosen, 0 }),
                                              Emit(Op::CompositeExtract, m_float, { chosen, 1 }),
                                              Emit(Op::CompositeExtract, m_float, { chosen, 2 }),
                                              alpha }) });
            }
        }

        // Window coordinates to clip space, from the transform the pipeline
        // pushed: xy = xy * scale + offset * w. The identity when the viewport
        // transform is on, which is every draw but the EDRAM clears.
        if (m_type == shader::Type::Vertex && m_ndc && m_position)
        {
            Id pointer = m_module.Pointer(StorageClass::PushConstant, m_float4);
            Id ndc = Emit(Op::Load, m_float4,
                          { Emit(Op::AccessChain, pointer,
                                 { m_ndc, m_module.ConstantU(0) }) });
            Id value = Emit(Op::Load, m_float4, { m_position });
            Id w = Emit(Op::CompositeExtract, m_float, { value, 3 });
            auto term = [&](uint32_t component) {
                return Glsl450(Glsl::Fma, m_float,
                               { Emit(Op::CompositeExtract, m_float, { value, component }),
                                 Emit(Op::CompositeExtract, m_float, { ndc, component }),
                                 Emit(Op::FMul, m_float,
                                      { Emit(Op::CompositeExtract, m_float,
                                             { ndc, component + 2 }), w }) });
            };
            Module::Emit(m_module.Code(), Op::Store,
                         { m_position,
                           Emit(Op::CompositeConstruct, m_float4,
                                { term(0), term(1),
                                  Emit(Op::CompositeExtract, m_float, { value, 2 }), w }) });
        }

        // The discard any kill asked for, now that OpKill can terminate a block
        // without breaking the switch.
        if (m_haveKill && m_type == shader::Type::Pixel)
        {
            Id discard = m_module.Allocate();
            Id carryOn = m_module.Allocate();
            Id killed = Emit(Op::Load, m_bool, { m_killed });
            Module::Emit(m_module.Code(), Op::SelectionMerge, { carryOn, kSelectionControlNone });
            Module::Emit(m_module.Code(), Op::BranchConditional, { killed, discard, carryOn });
            Module::Emit(m_module.Code(), Op::Label, { discard });
            Module::Emit(m_module.Code(), Op::Kill, {});
            Module::Emit(m_module.Code(), Op::Label, { carryOn });
        }

        Module::Emit(m_module.Code(), Op::Return, {});
        Module::Emit(m_module.Code(), Op::FunctionEnd, {});
    }

    shader::Translation Translator::Run()
    {
        if (m_count < 3) { m_result.error = "program is too short"; return m_result; }
        if (!DecodeControlFlow()) return m_result;
        Analyze();
        DeclareInterface();
        EmitBody();
        if (!m_result.error.empty()) return m_result;
        m_result.spirv = m_module.Finish();
        m_result.ok = true;
        return m_result;
    }
}

shader::Translation shader::Translate(Type type, const uint32_t* words, size_t count)
{
    Translator translator(type, words, count);
    return translator.Run();
}

std::string shader::Describe(const Translation& result)
{
    char text[320];
    if (!result.ok)
    {
        std::snprintf(text, sizeof text, "not translated: %s", result.error.c_str());
        return text;
    }
    char dropped[48] = "";
    if (result.droppedExports || result.droppedMemoryExports)
        std::snprintf(dropped, sizeof dropped, ", %u export%s dropped%s",
                      result.droppedExports + result.droppedMemoryExports,
                      result.droppedExports + result.droppedMemoryExports == 1 ? "" : "s",
                      result.droppedMemoryExports ? " (to memory)" : "");
    std::snprintf(text, sizeof text,
                  "%u instructions -> %zu SPIR-V words; interpolators %04X, colours %X,"
                  " textures %08X, vertex fetches %08X%s%s%s",
                  result.instructionCount, result.spirv.size(), result.interpolatorMask,
                  result.colourMask, result.textureMask, result.vertexFetchMask,
                  result.writesDepth ? ", writes depth" : "",
                  result.writesMemory ? ", memory export" : "", dropped);
    return text;
}
