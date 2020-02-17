#pragma once
#include "dmflag.h"
#include <cstddef>


TINKER_NAMESPACE_BEGIN
namespace pltfm_cu {
template <class T>
T reduce_sum(const T* a, size_t nelem, DMFlag flag);


template <class HT, size_t HN, class DPTR>
void reduce_sum2(HT (&h_ans)[HN], DPTR v, size_t nelem, DMFlag flag);


template <class T>
T reduce_logic_or(const T* a, size_t nelem, DMFlag flag);


template <class T>
void dotprod(T* ans, const T* a, const T* b, int nelem, DMFlag flag);
}
TINKER_NAMESPACE_END
