#pragma once
#include "mathfunc_parallel_acc.h"
#include "mathfunc_parallel_cu.h"
#include "platform.h"


TINKER_NAMESPACE_BEGIN
namespace parallel {
/**
 * \ingroup math
 * \brief Sum over all of the elements of an 1D array.
 *
 * \f[ Sum = \sum_i^n a_i \f]
 * \return The sum.
 */
template <class T>
T reduce_sum(const T* gpu_a, size_t nelem, DMFlag flag)
{
#if TINKER_CUDART
   if (pltfm_config & CU_PLTFM) {
      return pltfm_cu::reduce_sum(gpu_a, nelem, flag);
   } else
#endif
      return pltfm_acc::reduce_sum(gpu_a, nelem, flag);
}


/**
 * \ingroup math
 * \brief Sum over all of the elements of a 2D array.
 *
 * Fortran syntax:
 * \f[ Ans(k) = \sum_i^n v(k,i), 1 \le k \le HN \f]
 * C++ syntax:
 * \f[ Ans[k] = \sum_i^n v[i][k], 0 \le k < HN \f]
 */
template <class HT, size_t HN, class DPTR>
void reduce_sum2(HT (&h_ans)[HN], DPTR v, size_t nelem, DMFlag flag)
{
#if TINKER_CUDART
   if (pltfm_config & CU_PLTFM) {
      pltfm_cu::reduce_sum2(h_ans, v, nelem, flag);
   } else
#endif
      pltfm_acc::reduce_sum2(h_ans, v, nelem, flag);
}


template <class T>
T reduce_logic_or(const T* a, size_t nelem, DMFlag flag)
{
#if TINKER_CUDART
   if (pltfm_config & CU_PLTFM) {
      return pltfm_cu::reduce_logic_or(a, nelem, flag);
   } else
#endif
      return pltfm_acc::reduce_logic_or(a, nelem, flag);
}


/**
 * \ingroup math
 * \brief Dot product of two linear arrays.
 *
 * \f[ DotProduct = \sum_i^n a_i \cdot b_i \f]
 * \return The dot product to the host thread.
 */
template <class T>
T dotprod(const T* a, const T* b, size_t nelem, DMFlag flag)
{
   return pltfm_acc::dotprod(a, b, nelem, flag);
}


/**
 * \ingroup math
 * \brief Dot product of two linear arrays.
 */
template <class T>
void dotprod(T* ans, const T* a, const T* b, int nelem, DMFlag flag)
{
   if (pltfm_config & CU_PLTFM) {
      pltfm_cu::dotprod(ans, a, b, nelem, flag);
   } else {
      pltfm_acc::dotprod(ans, a, b, nelem, flag);
   }
}


/**
 * \ingroup math
 * \brief Multiply all of the elements in an 1D array by a scalar.
 *
 * \f[ a_i = c \cdot a_i \f]
 */
template <class T>
void scale_array(T* dst, T scal, size_t nelem, DMFlag flag)
{
   return pltfm_acc::scale_array(dst, scal, nelem, flag);
}
}
TINKER_NAMESPACE_END
