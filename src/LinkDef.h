#ifndef PKG2_LINKDEF_H
#define PKG2_LINKDEF_H 1

#include "pkg2/pkg2.h"

#ifdef __CINT__

#pragma link off all globals;
#pragma link off all classes;
#pragma link off all functions;
#pragma link C++ nestedclasses;

#pragma link C++ class MyClassPkg2;

#endif /* __CINT__ */

#endif /* PKG2_LINKDEF_H */

