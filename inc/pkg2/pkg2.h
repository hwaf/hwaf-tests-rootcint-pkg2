#ifndef PKG2_PKG2_H
#define PKG2_PKG2_H 1

#include "TObject.h"
#include "pkg1/pkg1.h"

class MyClassPkg2 : public TObject {
 
public: 
#if !defined(__CINT__) | defined(__MAKECINT__)
  // Define the class for the cint dictionary
  ClassDef(MyClassPkg2,1);
#endif

  MyClassPkg2();
  MyClassPkg2(double data);
  ~MyClassPkg2();

  double data() const;

private:
  double m_data;
  MyPkg1 m_pkg1;
};

#endif /* PKG2_PKG2_H */
