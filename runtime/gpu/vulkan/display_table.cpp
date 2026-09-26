#include "display_table.h"

#include "pipeline.h"
#include "spirv.h"
#include "../gpu.h"
#include "../../log.h"

#ifndef MW2_HAVE_VULKAN
bool vk::display::Initialise() { return false; }
void vk::display::Shutdown() {}
bool vk::display::Ready() { return false; }
void vk::display::Apply(void*, uint32_t, uint32_t, int) {}
void vk::display::Report() {}
#else

#include <array>
#include <cstring>
#include <vector>
#include <vulkan/vulkan.h>
#include "recorder.h"
#include "util.h"

namespace
{
    using spirv::Op;
    using spirv::Id;
    using spirv::StorageClass;
    using spirv::Decoration;

    constexpr uint32_t kImageFormatRgba8 = 4;
    constexpr uint32_t kExecutionModelGLCompute = 5;
    constexpr uint32_t kExecutionModeLocalSize = 17;
    constexpr uint32_t kGroup = 8;

    struct State
    {
        VkDevice device = VK_NULL_HANDLE;
        VkDescriptorSetLayout setLayout = VK_NULL_HANDLE;
        VkPipelineLayout layout = VK_NULL_HANDLE;
        VkPipeline pipeline = VK_NULL_HANDLE;
        VkDescriptorPool pool = VK_NULL_HANDLE;

        // The table as a 256x1 image, so the shader reads it with one texel
        // fetch and no sampler.
        VkImage table = VK_NULL_HANDLE;
        VkDeviceMemory tableMemory = VK_NULL_HANDLE;
        VkImageView tableView = VK_NULL_HANDLE;
        // Filled from the command buffer (vkCmdUpdateBuffer), so a frame still
        // in flight never has its copy's source rewritten under it.
        VkBuffer staging = VK_NULL_HANDLE;
        VkDeviceMemory stagingMemory = VK_NULL_HANDLE;

        // One set per presented image, so a set is not rewritten while the
        // frame that uses it is still in flight.
        std::vector<VkDescriptorSet> sets;
        std::vector<VkImageView> views;
        std::vector<VkImage> forImage;
        uint32_t next = 0;

        uint32_t held[256]{};       // what the table image currently holds
        bool haveTable = false;
        uint64_t applied = 0, uploads = 0;
        bool failed = false;
    };
    State g;

    // c = imageLoad(frame, id.xy); each channel indexes the table; store back.
    std::vector<uint32_t> BuildShader()
    {
        spirv::Module m;
        m.RequireCapability(1);   // Shader

        Id voidType = m.Void();
        Id f32 = m.Float();
        Id f4 = m.Float4();
        Id u32 = m.Int(false);
        Id i32 = m.Int();
        Id i2 = m.Vector(i32, 2);
        Id u3 = m.Vector(u32, 3);

        Id imageType = m.StorageImage(f32, 1, kImageFormatRgba8);   // Dim 1 = 2D
        Id imagePointer = m.Pointer(StorageClass::UniformConstant, imageType);

        Id frame = m.Allocate();
        Id table = m.Allocate();
        for (auto [variable, binding] : { std::pair<Id, uint32_t>{ frame, 0 },
                                          std::pair<Id, uint32_t>{ table, 1 } })
        {
            spirv::Module::Emit(m.Declarations(), Op::Variable,
                                { imagePointer, variable, uint32_t(StorageClass::UniformConstant) });
            spirv::Module::Emit(m.Decorations(), Op::Decorate,
                                { variable, uint32_t(Decoration::DescriptorSet), 0 });
            spirv::Module::Emit(m.Decorations(), Op::Decorate,
                                { variable, uint32_t(Decoration::Binding), binding });
        }

        Id globalId = m.Allocate();
        Id globalPointer = m.Pointer(StorageClass::Input, u3);
        spirv::Module::Emit(m.Declarations(), Op::Variable,
                            { globalPointer, globalId, uint32_t(StorageClass::Input) });
        spirv::Module::Emit(m.Decorations(), Op::Decorate,
                            { globalId, uint32_t(Decoration::BuiltIn),
                              uint32_t(spirv::BuiltIn::GlobalInvocationId) });

        Id functionType = m.Allocate();
        spirv::Module::Emit(m.Declarations(), Op::TypeFunction, { functionType, voidType });
        Id entry = m.Allocate();

        m.EntryPoint(kExecutionModelGLCompute, entry, "main", { globalId, frame, table });
        spirv::Module::Emit(m.ExecutionModes(), Op::ExecutionMode,
                            { entry, kExecutionModeLocalSize, kGroup, kGroup, 1 });

        auto& code = m.Code();
        spirv::Module::Emit(code, Op::Function,
                            { voidType, entry, 0 /* None */, functionType });
        spirv::Module::Emit(code, Op::Label, { m.Allocate() });

        auto emit = [&](Op op, Id type, std::initializer_list<uint32_t> operands) {
            Id result = m.Allocate();
            std::vector<uint32_t> words{ type, result };
            for (uint32_t o : operands) words.push_back(o);
            code.push_back(spirv::Head(op, uint32_t(words.size() + 1)));
            code.insert(code.end(), words.begin(), words.end());
            return result;
        };

        Id id3 = emit(Op::Load, u3, { globalId });
        Id x = emit(Op::CompositeExtract, u32, { id3, 0 });
        Id y = emit(Op::CompositeExtract, u32, { id3, 1 });
        Id at = emit(Op::CompositeConstruct, i2,
                     { emit(Op::Bitcast, i32, { x }), emit(Op::Bitcast, i32, { y }) });

        Id frameImage = emit(Op::Load, imageType, { frame });
        Id tableImage = emit(Op::Load, imageType, { table });
        Id colour = emit(Op::ImageRead, f4, { frameImage, at });

        // Round rather than truncate: the value came from an eight-bit image, so
        // it lands exactly on an entry and floating point should not decide which.
        Id scale = m.ConstantF(255.0f);
        Id half = m.ConstantF(0.5f);
        Id zero = m.ConstantS(0);
        Id components[4]{};
        for (uint32_t c = 0; c < 3; c++)
        {
            Id value = emit(Op::CompositeExtract, f32, { colour, c });
            Id index = emit(Op::ConvertFToS, i32,
                            { emit(Op::FAdd, f32,
                                   { emit(Op::FMul, f32, { value, scale }), half }) });
            Id texel = emit(Op::ImageRead, f4, { tableImage,
                            emit(Op::CompositeConstruct, i2, { index, zero }) });
            components[c] = emit(Op::CompositeExtract, f32, { texel, c });
        }
        components[3] = emit(Op::CompositeExtract, f32, { colour, 3 });

        Id out = emit(Op::CompositeConstruct, f4,
                      { components[0], components[1], components[2], components[3] });
        spirv::Module::Emit(code, Op::ImageWrite, { frameImage, at, out });
        spirv::Module::Emit(code, Op::Return, {});
        spirv::Module::Emit(code, Op::FunctionEnd, {});
        return m.Finish();
    }

    bool MakeTable()
    {
        VkPhysicalDeviceMemoryProperties memory{};
        vkGetPhysicalDeviceMemoryProperties(
            static_cast<VkPhysicalDevice>(vk::pipeline::PhysicalDevice()), &memory);
        VkImageCreateInfo info{ VK_STRUCTURE_TYPE_IMAGE_CREATE_INFO };
        info.imageType = VK_IMAGE_TYPE_2D;
        info.format = VK_FORMAT_R8G8B8A8_UNORM;
        info.extent = { 256, 1, 1 };
        info.mipLevels = 1;
        info.arrayLayers = 1;
        info.samples = VK_SAMPLE_COUNT_1_BIT;
        info.tiling = VK_IMAGE_TILING_OPTIMAL;
        info.usage = VK_IMAGE_USAGE_STORAGE_BIT | VK_IMAGE_USAGE_TRANSFER_DST_BIT;
        info.initialLayout = VK_IMAGE_LAYOUT_UNDEFINED;
        if (vkCreateImage(g.device, &info, nullptr, &g.table) != VK_SUCCESS) return false;

        VkMemoryRequirements needs{};
        vkGetImageMemoryRequirements(g.device, g.table, &needs);
        VkMemoryAllocateInfo allocate{ VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO };
        allocate.allocationSize = needs.size;
        allocate.memoryTypeIndex = vk::util::FindMemory(memory, needs.memoryTypeBits,
                                                        VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT);
        if (allocate.memoryTypeIndex == UINT32_MAX) return false;
        if (vkAllocateMemory(g.device, &allocate, nullptr, &g.tableMemory) != VK_SUCCESS) return false;
        vkBindImageMemory(g.device, g.table, g.tableMemory, 0);

        VkImageViewCreateInfo view{ VK_STRUCTURE_TYPE_IMAGE_VIEW_CREATE_INFO };
        view.image = g.table;
        view.viewType = VK_IMAGE_VIEW_TYPE_2D;
        view.format = VK_FORMAT_R8G8B8A8_UNORM;
        view.subresourceRange = { VK_IMAGE_ASPECT_COLOR_BIT, 0, 1, 0, 1 };
        if (vkCreateImageView(g.device, &view, nullptr, &g.tableView) != VK_SUCCESS) return false;

        VkBufferCreateInfo buffer{ VK_STRUCTURE_TYPE_BUFFER_CREATE_INFO };
        buffer.size = 256 * 4;
        buffer.usage = VK_BUFFER_USAGE_TRANSFER_SRC_BIT | VK_BUFFER_USAGE_TRANSFER_DST_BIT;
        if (vkCreateBuffer(g.device, &buffer, nullptr, &g.staging) != VK_SUCCESS) return false;
        vkGetBufferMemoryRequirements(g.device, g.staging, &needs);
        allocate.allocationSize = needs.size;
        allocate.memoryTypeIndex = vk::util::FindMemory(memory, needs.memoryTypeBits,
                                                        VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT);
        if (allocate.memoryTypeIndex == UINT32_MAX) return false;
        if (vkAllocateMemory(g.device, &allocate, nullptr, &g.stagingMemory) != VK_SUCCESS) return false;
        return vkBindBufferMemory(g.device, g.staging, g.stagingMemory, 0) == VK_SUCCESS;
    }
}

bool vk::display::Initialise()
{
    if (g.pipeline) return true;
    if (g.failed) return false;
    g.device = static_cast<VkDevice>(vk::pipeline::Device());
    if (!g.device) { g.failed = true; return false; }

    VkDescriptorSetLayoutBinding bindings[2]{};
    for (uint32_t i = 0; i < 2; i++)
    {
        bindings[i].binding = i;
        bindings[i].descriptorType = VK_DESCRIPTOR_TYPE_STORAGE_IMAGE;
        bindings[i].descriptorCount = 1;
        bindings[i].stageFlags = VK_SHADER_STAGE_COMPUTE_BIT;
    }
    VkDescriptorSetLayoutCreateInfo setInfo{ VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_CREATE_INFO };
    setInfo.bindingCount = 2;
    setInfo.pBindings = bindings;
    if (vkCreateDescriptorSetLayout(g.device, &setInfo, nullptr, &g.setLayout) != VK_SUCCESS)
    { g.failed = true; return false; }

    VkPipelineLayoutCreateInfo layoutInfo{ VK_STRUCTURE_TYPE_PIPELINE_LAYOUT_CREATE_INFO };
    layoutInfo.setLayoutCount = 1;
    layoutInfo.pSetLayouts = &g.setLayout;
    if (vkCreatePipelineLayout(g.device, &layoutInfo, nullptr, &g.layout) != VK_SUCCESS)
    { g.failed = true; return false; }

    const std::vector<uint32_t> words = BuildShader();
    VkShaderModuleCreateInfo moduleInfo{ VK_STRUCTURE_TYPE_SHADER_MODULE_CREATE_INFO };
    moduleInfo.codeSize = words.size() * 4;
    moduleInfo.pCode = words.data();
    VkShaderModule module = VK_NULL_HANDLE;
    if (vkCreateShaderModule(g.device, &moduleInfo, nullptr, &module) != VK_SUCCESS)
    { LOGW("display: the driver refused the colour table shader"); g.failed = true; return false; }

    VkComputePipelineCreateInfo pipelineInfo{ VK_STRUCTURE_TYPE_COMPUTE_PIPELINE_CREATE_INFO };
    pipelineInfo.stage.sType = VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO;
    pipelineInfo.stage.stage = VK_SHADER_STAGE_COMPUTE_BIT;
    pipelineInfo.stage.module = module;
    pipelineInfo.stage.pName = "main";
    pipelineInfo.layout = g.layout;
    VkResult r = vkCreateComputePipelines(g.device, VK_NULL_HANDLE, 1, &pipelineInfo,
                                          nullptr, &g.pipeline);
    vkDestroyShaderModule(g.device, module, nullptr);
    if (r != VK_SUCCESS) { LOGW("display: no colour table pipeline"); g.failed = true; return false; }

    VkDescriptorPoolSize size{ VK_DESCRIPTOR_TYPE_STORAGE_IMAGE, 16 };
    VkDescriptorPoolCreateInfo poolInfo{ VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_CREATE_INFO };
    poolInfo.maxSets = 8;
    poolInfo.poolSizeCount = 1;
    poolInfo.pPoolSizes = &size;
    if (vkCreateDescriptorPool(g.device, &poolInfo, nullptr, &g.pool) != VK_SUCCESS)
    { g.failed = true; return false; }

    if (!MakeTable()) { LOGW("display: no colour table image"); g.failed = true; return false; }
    LOGI("display: the title's colour table will be applied to the presented frame");
    return true;
}

bool vk::display::Ready() { return g.pipeline != VK_NULL_HANDLE && !g.failed; }

void vk::display::Apply(void* imageHandle, uint32_t width, uint32_t height, int layout)
{
    if (!Ready() && !Initialise()) return;
    VkImage image = static_cast<VkImage>(imageHandle);

    uint32_t wanted[256];
    if (!gpu::DisplayColourTable(wanted)) return;

    if (!g.haveTable || std::memcmp(wanted, g.held, sizeof wanted) != 0)
    {
        // Ten bits a channel down to eight. The alpha byte is unused.
        std::array<uint8_t, 256 * 4> bytes;
        for (uint32_t i = 0; i < 256; i++)
        {
            const uint32_t entry = wanted[i];
            auto eight = [](uint32_t ten) { return uint8_t((ten * 255 + 511) / 1023); };
            bytes[i * 4 + 0] = eight((entry >> 20) & 0x3FF);
            bytes[i * 4 + 1] = eight((entry >> 10) & 0x3FF);
            bytes[i * 4 + 2] = eight(entry & 0x3FF);
            bytes[i * 4 + 3] = 255;
        }
        // After the last frame's copy out of the buffer and its shader's reads
        // of the table, both of which may still be running.
        const VkBuffer staging = g.staging;
        const VkImage table = g.table;
        const VkImageLayout was = g.haveTable ? VK_IMAGE_LAYOUT_GENERAL : VK_IMAGE_LAYOUT_UNDEFINED;
        vk::record::Command([=](VkCommandBuffer command) {
            VkMemoryBarrier before{ VK_STRUCTURE_TYPE_MEMORY_BARRIER };
            before.dstAccessMask = VK_ACCESS_TRANSFER_WRITE_BIT;
            vkCmdPipelineBarrier(command,
                                 VK_PIPELINE_STAGE_TRANSFER_BIT | VK_PIPELINE_STAGE_COMPUTE_SHADER_BIT,
                                 VK_PIPELINE_STAGE_TRANSFER_BIT, 0, 1, &before, 0, nullptr, 0, nullptr);
            vkCmdUpdateBuffer(command, staging, 0, bytes.size(), bytes.data());
            VkMemoryBarrier written{ VK_STRUCTURE_TYPE_MEMORY_BARRIER };
            written.srcAccessMask = VK_ACCESS_TRANSFER_WRITE_BIT;
            written.dstAccessMask = VK_ACCESS_TRANSFER_READ_BIT;
            vkCmdPipelineBarrier(command, VK_PIPELINE_STAGE_TRANSFER_BIT,
                                 VK_PIPELINE_STAGE_TRANSFER_BIT, 0, 1, &written, 0, nullptr, 0, nullptr);
            vk::util::Barrier(command, table, VK_IMAGE_ASPECT_COLOR_BIT, was,
                              VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL, 0, VK_ACCESS_TRANSFER_WRITE_BIT,
                              VK_PIPELINE_STAGE_COMPUTE_SHADER_BIT, VK_PIPELINE_STAGE_TRANSFER_BIT);
            VkBufferImageCopy copy{};
            copy.imageSubresource = { VK_IMAGE_ASPECT_COLOR_BIT, 0, 0, 1 };
            copy.imageExtent = { 256, 1, 1 };
            vkCmdCopyBufferToImage(command, staging, table,
                                   VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL, 1, &copy);
            vk::util::Barrier(command, table, VK_IMAGE_ASPECT_COLOR_BIT,
                              VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL, VK_IMAGE_LAYOUT_GENERAL,
                              VK_ACCESS_TRANSFER_WRITE_BIT, VK_ACCESS_SHADER_READ_BIT,
                              VK_PIPELINE_STAGE_TRANSFER_BIT, VK_PIPELINE_STAGE_COMPUTE_SHADER_BIT);
        });
        std::memcpy(g.held, wanted, sizeof wanted);
        g.haveTable = true;
        g.uploads++;
    }

    // One descriptor set per presented image, made once and kept: the set names
    // the image, and the images rotate.
    uint32_t slot = UINT32_MAX;
    for (uint32_t i = 0; i < g.forImage.size(); i++)
        if (g.forImage[i] == image) { slot = i; break; }
    if (slot == UINT32_MAX)
    {
        if (g.forImage.size() >= 8) return;
        VkImageViewCreateInfo view{ VK_STRUCTURE_TYPE_IMAGE_VIEW_CREATE_INFO };
        view.image = image;
        view.viewType = VK_IMAGE_VIEW_TYPE_2D;
        view.format = VK_FORMAT_R8G8B8A8_UNORM;
        view.subresourceRange = { VK_IMAGE_ASPECT_COLOR_BIT, 0, 1, 0, 1 };
        VkImageView made = VK_NULL_HANDLE;
        if (vkCreateImageView(g.device, &view, nullptr, &made) != VK_SUCCESS) return;

        VkDescriptorSetAllocateInfo allocate{ VK_STRUCTURE_TYPE_DESCRIPTOR_SET_ALLOCATE_INFO };
        allocate.descriptorPool = g.pool;
        allocate.descriptorSetCount = 1;
        allocate.pSetLayouts = &g.setLayout;
        VkDescriptorSet set = VK_NULL_HANDLE;
        if (vkAllocateDescriptorSets(g.device, &allocate, &set) != VK_SUCCESS)
        { vkDestroyImageView(g.device, made, nullptr); return; }

        VkDescriptorImageInfo images[2]{};
        images[0].imageView = made;
        images[0].imageLayout = VK_IMAGE_LAYOUT_GENERAL;
        images[1].imageView = g.tableView;
        images[1].imageLayout = VK_IMAGE_LAYOUT_GENERAL;
        VkWriteDescriptorSet writes[2]{};
        for (uint32_t i = 0; i < 2; i++)
        {
            writes[i].sType = VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET;
            writes[i].dstSet = set;
            writes[i].dstBinding = i;
            writes[i].descriptorCount = 1;
            writes[i].descriptorType = VK_DESCRIPTOR_TYPE_STORAGE_IMAGE;
            writes[i].pImageInfo = &images[i];
        }
        vkUpdateDescriptorSets(g.device, 2, writes, 0, nullptr);
        slot = uint32_t(g.forImage.size());
        g.forImage.push_back(image);
        g.views.push_back(made);
        g.sets.push_back(set);
    }

    const VkImageLayout from = VkImageLayout(layout);
    const VkPipeline pipeline = g.pipeline;
    const VkPipelineLayout pipelineLayout = g.layout;
    const VkDescriptorSet set = g.sets[slot];
    vk::record::Command([=](VkCommandBuffer command) {
        vk::util::Barrier(command, image, VK_IMAGE_ASPECT_COLOR_BIT,
                          from, VK_IMAGE_LAYOUT_GENERAL,
                          VK_ACCESS_TRANSFER_WRITE_BIT, VK_ACCESS_SHADER_READ_BIT | VK_ACCESS_SHADER_WRITE_BIT,
                          VK_PIPELINE_STAGE_TRANSFER_BIT, VK_PIPELINE_STAGE_COMPUTE_SHADER_BIT);
        vkCmdBindPipeline(command, VK_PIPELINE_BIND_POINT_COMPUTE, pipeline);
        vkCmdBindDescriptorSets(command, VK_PIPELINE_BIND_POINT_COMPUTE, pipelineLayout, 0, 1,
                                &set, 0, nullptr);
        vkCmdDispatch(command, (width + kGroup - 1) / kGroup, (height + kGroup - 1) / kGroup, 1);
        vk::util::Barrier(command, image, VK_IMAGE_ASPECT_COLOR_BIT,
                          VK_IMAGE_LAYOUT_GENERAL, from,
                          VK_ACCESS_SHADER_WRITE_BIT, VK_ACCESS_TRANSFER_READ_BIT,
                          VK_PIPELINE_STAGE_COMPUTE_SHADER_BIT, VK_PIPELINE_STAGE_TRANSFER_BIT);
    });
    g.applied++;
}

void vk::display::Shutdown()
{
    if (!g.device) return;
    for (VkImageView view : g.views) vkDestroyImageView(g.device, view, nullptr);
    g.views.clear();
    g.sets.clear();
    g.forImage.clear();
    if (g.pool) vkDestroyDescriptorPool(g.device, g.pool, nullptr);
    if (g.tableView) vkDestroyImageView(g.device, g.tableView, nullptr);
    if (g.table) vkDestroyImage(g.device, g.table, nullptr);
    if (g.tableMemory) vkFreeMemory(g.device, g.tableMemory, nullptr);
    if (g.staging) vkDestroyBuffer(g.device, g.staging, nullptr);
    if (g.stagingMemory) vkFreeMemory(g.device, g.stagingMemory, nullptr);
    if (g.pipeline) vkDestroyPipeline(g.device, g.pipeline, nullptr);
    if (g.layout) vkDestroyPipelineLayout(g.device, g.layout, nullptr);
    if (g.setLayout) vkDestroyDescriptorSetLayout(g.device, g.setLayout, nullptr);
    const uint64_t applied = g.applied, uploads = g.uploads;
    g = State{};
    g.applied = applied;
    g.uploads = uploads;
}

void vk::display::Report()
{
    if (!g.applied && !g.uploads) return;
    LOGI("display: the title's colour table applied to %llu frames (%llu table changes)",
         (unsigned long long)g.applied, (unsigned long long)g.uploads);
}

#endif
