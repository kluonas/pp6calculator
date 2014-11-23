///////////////////////////////////
//                               //
// FourVector class definitions  //
//                               //
///////////////////////////////////

#include "ClassFourVector.hpp"
#include "PP6Math.hpp"
#include <cmath>
#include <iostream>
FourVector::FourVector(const float t_, const ThreeVector& x_)
  : t(t_), threeMomentum(x_)
{F_Vector4Length();}

FourVector::FourVector(const FourVector& other)
  : t(other.t), threeMomentum(other.threeMomentum)
{F_Vector4Length();}

FourVector::~FourVector(){}

void FourVector::SetT(const float f){t=f; F_Vector4Length();}
void FourVector::SetThreeVector(const ThreeVector& other){threeMomentum=other;}
void FourVector::SetX(const float f){threeMomentum.SetX(f); F_Vector4Length();}
void FourVector::SetY(const float f){threeMomentum.SetY(f); F_Vector4Length();}
void FourVector::SetZ(const float f){threeMomentum.SetZ(f); F_Vector4Length();}

float FourVector::GetT() const { return t;} 
ThreeVector& FourVector::GetThreeVector() {return threeMomentum;}
float FourVector::GetX() const { return threeMomentum.GetX();} 
float FourVector::GetY() const { return threeMomentum.GetY();} 
float FourVector::GetZ() const { return threeMomentum.GetZ();} 
float FourVector::GetLength() const {return length;}

void FourVector::F_Vector4Length() {
  length= ( t*t-threeMomentum.GetLength() );
}

float FourVector::F_BoostZ(float beta) {
  float t_old=t;
  float gamma=1/sqrt(1-Square(beta));
  t=gamma*(t_old-beta*threeMomentum.GetZ());
  threeMomentum.SetZ(gamma*(-beta*t_old+threeMomentum.GetZ()));
  return length;
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

