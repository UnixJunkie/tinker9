#pragma once
#include "macro.h"
#include <type_traits>


namespace tinker {
/**
 * \ingroup acc_syntax
 * Used as `eq<T1,T2>()` for two type identifiers.
 */
template <class T, class U>
constexpr bool eq()
{
   return std::is_same<T, U>::value;
}
}
