//////////////////////////////////////
//                                  //
// FourVector class header          //
//                                  //
//////////////////////////////////////
#include "ClassThreeVector.hpp"
#ifndef CLASSFOURVECTOR_H
#define CLASSFOURVECTOR_H

class FourVector{
  public:

// constructors
  FourVector(){t=0; threeMomentum.SetX(0); threeMomentum.SetY(0); threeMomentum.SetZ(0); F_Vector4Length();};
  FourVector(const float t_, const ThreeVector& x_);
  FourVector(const FourVector& other);
  ~FourVector();

// member functions
  float F_BoostZ(const float );
  void SetT(const float );
  void SetThreeVector(const ThreeVector& );
  void SetX(const float );
  void SetY(const float );
  void SetZ(const float );

  float GetT() const;
  ThreeVector& GetThreeVector();
  float GetX() const;
  float GetY() const;
  float GetZ() const;
  float GetLength() const;

FourVector& operator+=(const FourVector& rhs){
  t+=rhs.t; threeMomentum+=rhs.threeMomentum; F_Vector4Length(); return *this;
  }

FourVector& operator-=(const FourVector& rhs){
  t-=rhs.t; threeMomentum-=rhs.threeMomentum; F_Vector4Length(); return *this;
  }

FourVector& operator=(const FourVector& rhs){
  if (&rhs != this) {t=rhs.t; threeMomentum=rhs.threeMomentum; F_Vector4Length(); return *this;}
  else return *this;
  }

private:
  void F_Vector4Length();

// member data
  float t;
  ThreeVector threeMomentum;
  float length;
};

FourVector operator+(const FourVector& , const FourVector& );
FourVector operator-(const FourVector& , const FourVector& ); 

std::ostream& operator<<(std::ostream& stream, FourVector& V);
std::istream& operator>>(std::istream& stream, FourVector& V);

#endif
