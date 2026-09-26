#include "spirv.h"

#include <algorithm>
#include <cstring>

using namespace spirv;

namespace
{
    // 1.0 is what Vulkan 1.0 requires and every driver accepts.
    constexpr uint32_t kMagic = 0x07230203u;
    constexpr uint32_t kVersion = 0x00010000u;
    // Registered generator ids are handed out by Khronos; 0 is "unknown".
    constexpr uint32_t kGenerator = 0u;

    constexpr uint32_t kCapabilityShader = 1u;
    constexpr uint32_t kAddressingLogical = 0u;
    constexpr uint32_t kMemoryGlsl450 = 1u;
}

Module::Module()
{
    Emit(m_capabilities, Op::Capability, { kCapabilityShader });
    // The specification fixes the order: the extended instruction import and the
    // memory model come before the entry point, and before any type or constant.
    m_glslSet = Allocate();
    EmitString(m_preamble, Op::ExtInstImport, { m_glslSet }, "GLSL.std.450");
    Emit(m_preamble, Op::MemoryModel, { kAddressingLogical, kMemoryGlsl450 });
}

void Module::Emit(std::vector<uint32_t>& into, Op op,
                  std::initializer_list<uint32_t> operands)
{
    into.push_back(Head(op, uint32_t(operands.size()) + 1));
    into.insert(into.end(), operands.begin(), operands.end());
}

void Module::EmitString(std::vector<uint32_t>& into, Op op,
                        std::initializer_list<uint32_t> before,
                        const std::string& text)
{
    // Literal strings are NUL-terminated and padded to a whole number of words.
    const size_t words = text.size() / 4 + 1;
    into.push_back(Head(op, uint32_t(1 + before.size() + words)));
    into.insert(into.end(), before.begin(), before.end());
    size_t at = into.size();
    into.resize(at + words, 0);
    std::memcpy(&into[at], text.data(), text.size());
}

void Module::EntryPoint(uint32_t model, Id function, const std::string& name,
                        const std::vector<Id>& interface)
{
    const size_t start = m_entryPoints.size();
    EmitString(m_entryPoints, Op::EntryPoint, { model, function }, name);
    m_entryPoints.insert(m_entryPoints.end(), interface.begin(), interface.end());
    m_entryPoints[start] = Head(Op::EntryPoint, uint32_t(m_entryPoints.size() - start));
}

Id Module::Cached(const Key& key, Op op, Id resultType, std::initializer_list<uint32_t> tail)
{
    auto found = m_cache.find(key);
    if (found != m_cache.end()) return found->second;

    const Id id = Allocate();
    m_declarations.push_back(Head(op, uint32_t(tail.size() + (resultType ? 3 : 2))));
    if (resultType) m_declarations.push_back(resultType);
    m_declarations.push_back(id);
    m_declarations.insert(m_declarations.end(), tail.begin(), tail.end());
    m_cache.emplace(key, id);
    return id;
}

void Module::RequireCapability(uint32_t capability)
{
    for (size_t i = 0; i + 1 < m_capabilities.size(); i += 2)
        if (m_capabilities[i + 1] == capability) return;
    Emit(m_capabilities, Op::Capability, { capability });
}

Id Module::Image(Id sampledType, uint32_t dim, bool arrayed)
{
    // result, sampled type, Dim, Depth, Arrayed, MS, Sampled, Format
    return Cached({ uint32_t(Op::TypeImage), sampledType, dim | (arrayed ? 0x100u : 0u) },
                  Op::TypeImage, 0, { sampledType, dim, 0, arrayed ? 1u : 0u, 0, 1, 0 });
}

Id Module::StorageImage(Id sampledType, uint32_t dim, uint32_t format)
{
    // Sampled = 2 says the image is used without a sampler, which is what makes
    // it a storage image rather than a texture.
    return Cached({ uint32_t(Op::TypeImage) | 0x10000u, sampledType, dim | (format << 8) },
                  Op::TypeImage, 0, { sampledType, dim, 0, 0, 0, 2, format });
}

Id Module::SampledImage(Id image)
{
    return Cached({ uint32_t(Op::TypeSampledImage), image, 0 }, Op::TypeSampledImage, 0, { image });
}

Id Module::Void()  { return Cached({ uint32_t(Op::TypeVoid), 0, 0 }, Op::TypeVoid, 0, {}); }
Id Module::Bool()  { return Cached({ uint32_t(Op::TypeBool), 0, 0 }, Op::TypeBool, 0, {}); }
Id Module::Float() { return Cached({ uint32_t(Op::TypeFloat), 32, 0 }, Op::TypeFloat, 0, { 32 }); }

Id Module::Int(bool sign)
{
    return Cached({ uint32_t(Op::TypeInt), 32, sign ? 1u : 0u },
                  Op::TypeInt, 0, { 32, sign ? 1u : 0u });
}

Id Module::Vector(Id component, uint32_t count)
{
    return Cached({ uint32_t(Op::TypeVector), component, count },
                  Op::TypeVector, 0, { component, count });
}

Id Module::Pointer(StorageClass storage, Id pointee)
{
    return Cached({ uint32_t(Op::TypePointer), uint32_t(storage), pointee },
                  Op::TypePointer, 0, { uint32_t(storage), pointee });
}

Id Module::ArrayOf(Id element, uint32_t count)
{
    Id length = ConstantU(count);
    return Cached({ uint32_t(Op::TypeArray), element, length },
                  Op::TypeArray, 0, { element, length });
}

Id Module::RuntimeArrayOf(Id element)
{
    return Cached({ uint32_t(Op::TypeRuntimeArray), element, 0 },
                  Op::TypeRuntimeArray, 0, { element });
}

Id Module::ConstantFalseValue()
{
    return Cached({ uint32_t(Op::ConstantFalse), 0, 0 }, Op::ConstantFalse, Bool(), {});
}

Id Module::ConstantF(float value)
{
    uint32_t bits;
    std::memcpy(&bits, &value, 4);
    // -0.0 and 0.0 have different bit patterns and must stay distinct.
    Id type = Float();
    return Cached({ uint32_t(Op::Constant), type, bits }, Op::Constant, type, { bits });
}

Id Module::ConstantU(uint32_t value)
{
    Id type = Int(false);
    return Cached({ uint32_t(Op::Constant), type, value }, Op::Constant, type, { value });
}

Id Module::ConstantS(int32_t value)
{
    Id type = Int(true);
    return Cached({ uint32_t(Op::Constant), type, uint32_t(value) },
                  Op::Constant, type, { uint32_t(value) });
}

Id Module::ConstantSplatF(float value)
{
    uint32_t bits;
    std::memcpy(&bits, &value, 4);
    Id component = ConstantF(value);
    Id type = Float4();
    return Cached({ uint32_t(Op::ConstantComposite), type, bits },
                  Op::ConstantComposite, type, { component, component, component, component });
}

std::vector<uint32_t> Module::Finish() const
{
    std::vector<uint32_t> out;
    out.reserve(64 + m_declarations.size() + m_code.size());
    out.push_back(kMagic);
    out.push_back(kVersion);
    out.push_back(kGenerator);
    out.push_back(m_nextId);          // id bound: ids are 1..bound-1
    out.push_back(0);                 // reserved

    for (const auto* section : { &m_capabilities, &m_preamble, &m_entryPoints,
                                 &m_executionModes, &m_debug, &m_decorations,
                                 &m_declarations, &m_code })
        out.insert(out.end(), section->begin(), section->end());
    return out;
}
