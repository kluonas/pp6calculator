//////////////////////////////////////
//                                  //
// FourVector class header          //
//                                  //
//////////////////////////////////////
#include <iostream>
#ifndef CLASSFOURVECTOR_H
#define CLASSFOURVECTOR_H

class FourVector{
  public:

// constructors
  FourVector(){t=0; x=0; y=0; z=0; length=F_Vector4Length();};
  FourVector(const float t_, const float x_, const float y_, const float z_);
  FourVector(const FourVector& other);
  ~FourVector();

// member functions
  float F_BoostZ(const float );
  int SetT(float );
  int SetX(float );
  int SetY(float );
  int SetZ(float );

  float GetT() const;
  float GetX() const;
  float GetY() const;
  float GetZ() const;
  float GetLength();

  FourVector& operator+=(const FourVector& rhs){
  t+=rhs.t; x+=rhs.x; y+=rhs.y; z+=rhs.z; return *this;
}

  FourVector& operator-=(const FourVector& rhs){
  t-=rhs.t; x-=rhs.x; y-=rhs.y; z-=rhs.z; return *this;
}

  FourVector& operator=(const FourVector& rhs){
  if (&rhs != this) {t=rhs.t; x=rhs.x; y=rhs.y; z=rhs.z; return *this;}
}

private:
  float F_Vector4Length() const;

// member data
  float t;
  float x;
  float y;
  float z;
  float length;
};

std::ostream& operator<<(std::ostream& stream, FourVector& V);
std::istream& operator>>(std::istream& stream, FourVector& V);

#endif
