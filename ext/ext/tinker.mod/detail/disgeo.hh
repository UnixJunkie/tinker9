#ifndef TINKER_MOD_DISGEO_HH_
#define TINKER_MOD_DISGEO_HH_

#include "util/macro.h"

TINKER_NAMESPACE_BEGIN namespace disgeo {
extern double& vdwmax;
extern double& compact;
extern double& pathmax;
extern double*& dbnd;
extern double*& georad;
extern int& use_invert;
extern int& use_anneal;

#ifdef TINKER_MOD_CPP_
extern "C" double TINKER_MOD(disgeo, vdwmax);
extern "C" double TINKER_MOD(disgeo, compact);
extern "C" double TINKER_MOD(disgeo, pathmax);
extern "C" double* TINKER_MOD(disgeo, dbnd);
extern "C" double* TINKER_MOD(disgeo, georad);
extern "C" int TINKER_MOD(disgeo, use_invert);
extern "C" int TINKER_MOD(disgeo, use_anneal);

double& vdwmax = TINKER_MOD(disgeo, vdwmax);
double& compact = TINKER_MOD(disgeo, compact);
double& pathmax = TINKER_MOD(disgeo, pathmax);
double*& dbnd = TINKER_MOD(disgeo, dbnd);
double*& georad = TINKER_MOD(disgeo, georad);
int& use_invert = TINKER_MOD(disgeo, use_invert);
int& use_anneal = TINKER_MOD(disgeo, use_anneal);
#endif

} TINKER_NAMESPACE_END

#endif
