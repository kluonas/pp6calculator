///////////////////////////////////
//                               //
// FourVector class definitions  //
//                               //
///////////////////////////////////

#include "ClassFourVector.hpp"
#include "PP6Math.hpp"
#include <cmath>

FourVector::FourVector(const float x0_, const float x1_, const float x2_, const float x3_)
  : x0(x0_), x1(x1_), x2(x2_), x3(x3_)
{}

FourVector::FourVector(const FourVector& other)
  : x0(other.x0), x1(other.x1), x2(other.x2), x3(other.x3)
{}

FourVector::~FourVector(){}

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
