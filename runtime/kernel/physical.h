#pragma once
#include <cstdint>

// Guest virtual and physical addresses. The title computes physical addresses
// inline as (va & 0x1FFFFFFF), which is what MmGetPhysicalAddress returns, so
// the two have to agree. FromPhysical is the inverse, which the GPU side uses to
// get from an address the command stream names back to one it can read.
namespace kernel
{
    uint32_t PhysicalHighWater();
    uint32_t ToPhysical(uint32_t virtualAddress);
    uint32_t FromPhysical(uint32_t physicalAddress);
}
