///////////////////////////////////
//                               //
// FourVector class definitions  //
//                               //
///////////////////////////////////

#include "ClassFourVector.hpp"
#include "PP6Math.hpp"
#include <cmath>
#include <iostream>
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

float FourVector::GetT() const { return t;} 
float FourVector::GetX() const { return x;} 
float FourVector::GetY() const { return y;} 
float FourVector::GetZ() const { return z;} 
float FourVector::GetLength(){return length;}

float FourVector::F_Vector4Length() const {
  return ( t*t-x*x-y*y-z*z );
}

float FourVector::F_BoostZ(float beta) {
  float t_old=t;
  float gamma=1/sqrt(1-Square(beta));
  t=gamma*(t_old-beta*z);
  z=gamma*(-beta*t_old+z);
  return F_Vector4Length();
}


FourVector operator+(const FourVector& lhs, const FourVector& rhs){
  FourVector temp(lhs);
  temp+=rhs; return temp;
}

FourVector operator-(const FourVector& lhs, const FourVector& rhs){
  FourVector temp(lhs);
  temp-=rhs; return temp;
}

std::ostream& operator<<(std::ostream& stream, FourVector& V){
  stream<<"("<<V.GetT()<<", "<<V.GetX()<<", "<<V.GetY()<<", "<<V.GetZ()<<")";
  return stream;
}

std::istream& operator>>(std::istream& stream, FourVector& V){
  float t,x,y,z;
  stream>>t>>x>>y>>z;
  V.SetT(t);V.SetX(x);V.SetY(y);V.SetZ(z);
  return stream;
}

