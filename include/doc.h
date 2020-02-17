/**
 * \defgroup ff      Force Field Terms
 * \defgroup macro   Macros
 * \defgroup math    Math
 * \defgroup md      MD Configurations
 * \defgroup nvidia  Nvidia GPU
 * \defgroup spatial Spatial Decomposition
 * \defgroup test    Unit Tests
 * \defgroup util    Utilities
 */


/**
 * \defgroup pme   Particle Mesh Ewald
 * \ingroup ff
 * \defgroup geom  Geometrical Restraints
 * \ingroup ff
 * \defgroup mpole Multipole Electrostatics
 * \ingroup ff
 * \defgroup vdw   Van der Waals (VDW)
 * \ingroup ff
 */


/**
 * \defgroup egv        Energies, Gradients, Virials, and Counts
 * \ingroup md
 * \defgroup integrate  Integrators
 * \ingroup md
 */


/**
 * \defgroup atomic Atomic Operations
 * \ingroup util
 * \defgroup box    Periodic Boundary Box
 * \ingroup util
 * \defgroup ebuf   Energy Buffer
 * \ingroup util
 * \defgroup error  Errors and Exceptions
 * \ingroup util
 * \defgroup io     I/O and Text
 * \ingroup util
 * \defgroup mem    Memory and Pointers
 * \ingroup util
 */


#include "macro.h"
TINKER_NAMESPACE_BEGIN
/**
 * \brief Integer flags for different kinds of atom data and energy routines.
 */
namespace calc {}


/**
 * \brief Math functions running in parallel.
 */
namespace parallel {}


/**
 * \brief OpenACC parallel computing platform.
 */
namespace pltfm_acc {}


/**
 * \brief CUDA parallel computing platform.
 */
namespace pltfm_cu {}


/**
 * \brief Starting from 0 (which must be the `(0,0,0)` box), number the spatial
 * decomposition boxes as if they are stored in the `c[nx][ny][nz]` (or
 * `f(nz,ny,nx)`) array.
 */
namespace spatial_v1 {}


/**
 * \brief Starting from 0 (which must be the `(0,0,0)` box), number the spatial
 * decomposition boxes in a "binary tree" way.
 */
namespace spatial_v2 {}
TINKER_NAMESPACE_END
