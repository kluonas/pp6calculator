///////////////////////////////////
//                               //
// FourVector class definitions  //
//                               //
///////////////////////////////////

#include "ClassFourVector.hpp"
#include "PP6Math.hpp"
#include <cmath>

float FourVector::F_Vector4Length() const {
  return ( x0*x0-x1*x1-x2*x2-x3*x3 );
}

float FourVector::F_BoostZ(float beta) {
  float x0_old=x0, x3_old=x3;
  float gamma=1/sqrt(1-Square(beta));
  x0=gamma*(x0_old+beta*x3_old);
  x3=gamma*(beta*x0_old+x3_old);
  return F_Vector4Length();
}
