#pragma once
#include "diagnostics.h"
// The predicate waits every engine stall ends in (predicate_waits.cpp).
namespace engine
{
#if MW2_DIAGNOSTICS
    void ReportPredicateWaits();
#else
    inline void ReportPredicateWaits() {}
#endif
}
