///////////////////////////////////
//                               //
// ThreeVector class definitions //
//                               //
///////////////////////////////////

#include "ClassThreeVector.hpp"
#include "PP6Math.hpp"
#include <cmath>
#include <iostream>
ThreeVector::ThreeVector(const float x_, const float y_, const float z_)
  : x(x_), y(y_), z(z_)
{F_Vector3Length();}

ThreeVector::ThreeVector(const ThreeVector& other)
  : x(other.x), y(other.y), z(other.z)
{F_Vector3Length();}

ThreeVector::~ThreeVector(){}

void ThreeVector::SetX(float f){x=f; F_Vector3Length();}
void ThreeVector::SetY(float f){y=f; F_Vector3Length();}
void ThreeVector::SetZ(float f){z=f; F_Vector3Length();}

float ThreeVector::GetX() const { return x;} 
float ThreeVector::GetY() const { return y;} 
float ThreeVector::GetZ() const { return z;} 
float ThreeVector::GetLength(){return length;}

void ThreeVector::F_Vector3Length() {
  length=( x*x+y*y+z*z );
}

ThreeVector operator+(const ThreeVector& lhs, const ThreeVector& rhs){
  ThreeVector temp(lhs);
  temp+=rhs; return temp;
}

ThreeVector operator-(const ThreeVector& lhs, const ThreeVector& rhs){
  ThreeVector temp(lhs);
  temp-=rhs; return temp;
}

std::ostream& operator<<(std::ostream& stream, ThreeVector& V){
  stream<<"("<<V.GetX()<<", "<<V.GetY()<<", "<<V.GetZ()<<")";
  return stream;
}

std::istream& operator>>(std::istream& stream, ThreeVector& V){
  float x,y,z;
  stream>>x>>y>>z;
  V.SetX(x);V.SetY(y);V.SetZ(z);
  return stream;
}

