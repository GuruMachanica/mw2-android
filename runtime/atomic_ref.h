#pragma once
#include <atomic>
#include <type_traits>
#include <version>

// An atomic view of memory somebody else owns.
//
// std::atomic_ref is C++20 and libstdc++ has had it since 10, so the desktop
// build simply uses it. libc++ only grew it in LLVM 19, and the NDK that
// builds the Android port (r27) ships 18 -- there, the same thing is spelled
// with the compiler's own atomic builtins, which is what the library does
// underneath in any case.
//
// Sequentially consistent throughout, because every use of it here is: the
// guest's critical sections and spinlocks (runtime/kernel/sync.cpp) are the
// console's, taken and released by code that assumes the 360's ordering, and
// a weaker order would be a bet on that code's behaviour rather than a
// translation of it.
//
// MW2_NO_STD_ATOMIC_REF forces the hand-written one, which is how the
// fallback gets tested on a machine whose library has the real thing.
namespace mw2
{

#if !defined(MW2_NO_STD_ATOMIC_REF) && defined(__cpp_lib_atomic_ref) && \
    __cpp_lib_atomic_ref >= 201806L

template <class T>
using AtomicRef = std::atomic_ref<T>;

#else

template <class T>
class AtomicRef
{
    static_assert(std::is_trivially_copyable_v<T>, "an atomic view wants a plain object");

public:
    using value_type = T;

    explicit AtomicRef(T& object) noexcept : word(&object) {}

    // const, as std::atomic_ref's are: the reference is what is const, never
    // the object it refers to.
    T load() const noexcept
    {
        return __atomic_load_n(word, __ATOMIC_SEQ_CST);
    }

    void store(T value) const noexcept
    {
        __atomic_store_n(word, value, __ATOMIC_SEQ_CST);
    }

    T exchange(T value) const noexcept
    {
        return __atomic_exchange_n(word, value, __ATOMIC_SEQ_CST);
    }

    bool compare_exchange_strong(T& expected, T desired) const noexcept
    {
        return __atomic_compare_exchange_n(word, &expected, desired, false,
                                           __ATOMIC_SEQ_CST, __ATOMIC_SEQ_CST);
    }

    bool compare_exchange_weak(T& expected, T desired) const noexcept
    {
        return __atomic_compare_exchange_n(word, &expected, desired, true,
                                           __ATOMIC_SEQ_CST, __ATOMIC_SEQ_CST);
    }

    T fetch_add(T value) const noexcept
    {
        return __atomic_fetch_add(word, value, __ATOMIC_SEQ_CST);
    }

    T fetch_sub(T value) const noexcept
    {
        return __atomic_fetch_sub(word, value, __ATOMIC_SEQ_CST);
    }

    operator T() const noexcept { return load(); }

private:
    T* word;
};

#endif

}
