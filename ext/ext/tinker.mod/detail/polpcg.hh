#ifndef TINKER_MOD_POLPCG_HH_
#define TINKER_MOD_POLPCG_HH_

#include "util/macro.h"

TINKER_NAMESPACE_BEGIN namespace polpcg {
extern int*& mindex;
extern double& pcgpeek;
extern double*& minv;
extern int& pcgprec;
extern int& pcgguess;

#ifdef TINKER_MOD_CPP_
extern "C" int* TINKER_MOD(polpcg, mindex);
extern "C" double TINKER_MOD(polpcg, pcgpeek);
extern "C" double* TINKER_MOD(polpcg, minv);
extern "C" int TINKER_MOD(polpcg, pcgprec);
extern "C" int TINKER_MOD(polpcg, pcgguess);

int*& mindex = TINKER_MOD(polpcg, mindex);
double& pcgpeek = TINKER_MOD(polpcg, pcgpeek);
double*& minv = TINKER_MOD(polpcg, minv);
int& pcgprec = TINKER_MOD(polpcg, pcgprec);
int& pcgguess = TINKER_MOD(polpcg, pcgguess);
#endif

} TINKER_NAMESPACE_END

#endif
