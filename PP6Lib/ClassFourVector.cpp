///////////////////////////////////
//                               //
// FourVector class definitions  //
//                               //
///////////////////////////////////

#include "ClassFourVector.hpp"
#include "PP6Math.hpp"
#include <cmath>

FourVector::FourVector(const float t_, const float x_, const float y_, const float z_)
  : t(t_), x(x_), y(y_), z(z_)
{length=F_Vector4Length();}

FourVector::FourVector(const FourVector& other)
  : t(other.t), x(other.x), y(other.y), z(other.z)
{length=F_Vector4Length();}

FourVector::~FourVector(){}

int FourVector::SetT(float f){t=f; length=F_Vector4Length(); return 0;}
int FourVector::SetX(float f){x=f; length=F_Vector4Length(); return 0;}
int FourVector::SetY(float f){y=f; length=F_Vector4Length(); return 0;}
int FourVector::SetZ(float f){z=f; length=F_Vector4Length(); return 0;}

float FourVector::GetT(){ return t;} 
float FourVector::GetX(){ return x;} 
float FourVector::GetY(){ return y;} 
float FourVector::GetZ(){ return z;} 
float FourVector::GetLength(){return length;}

float FourVector::F_Vector4Length() const {
  return ( t*t-x*x-y*y-z*z );
}

float FourVector::F_BoostZ(float beta) {
  float t_old=t;
  float gamma=1/sqrt(1-Square(beta));
  t=gamma*(t_old+beta*z);
  z=gamma*(beta*t_old+z);
  return F_Vector4Length();
}
