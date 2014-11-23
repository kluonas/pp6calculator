//////////////////////////////////////
//                                  //
// ThreeVector class header         //
//                                  //
//////////////////////////////////////
#include <iostream>
#ifndef CLASSTHREEVECTOR_H
#define CLASSTHREEVECTOR_H

class ThreeVector{
  public:

// constructors
  ThreeVector(){x=0; y=0; z=0; F_Vector3Length();};
  ThreeVector(const float x_, const float y_, const float z_);
  ThreeVector(const ThreeVector& other);
  ~ThreeVector();

// member functions
  void SetX(float );
  void SetY(float );
  void SetZ(float );

  float GetX() const;
  float GetY() const;
  float GetZ() const;
  float GetLength();


ThreeVector& operator+=(const ThreeVector& rhs){
  x+=rhs.x; y+=rhs.y; z+=rhs.z; F_Vector3Length(); return *this;
}

ThreeVector& operator-=(const ThreeVector& rhs){
  x-=rhs.x; y-=rhs.y; z-=rhs.z; F_Vector3Length(); return *this;
}

ThreeVector& operator=(const ThreeVector& rhs){
  if (&rhs != this) {x=rhs.x; y=rhs.y; z=rhs.z; F_Vector3Length(); return *this;}
  else return *this;
}

private:
  void F_Vector3Length();

// member data
  float x;
  float y;
  float z;
  float length;
};

ThreeVector operator+(const ThreeVector& , const ThreeVector& );
ThreeVector operator-(const ThreeVector& , const ThreeVector& );
std::ostream& operator<<(std::ostream& stream, ThreeVector& V);
std::istream& operator>>(std::istream& stream, ThreeVector& V);

#endif
