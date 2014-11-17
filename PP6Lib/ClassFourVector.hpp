//////////////////////////////////////
//                                  //
// FourVector class declarations    //
//                                  //
//////////////////////////////////////

#ifndef CLASSFOURVECTOR_H
#define CLASSFOURVECTOR_H

class FourVector{
  public:
// constructors
  FourVector(){x0=0; x1=0; x2=0; x3=0;}
  FourVector(const float x0_, const float x1_, const float x2_, const float x3_);
  FourVector(const FourVector& other);
  ~FourVector();
// member functions
  float F_BoostZ(const float beta);
  float F_Vector4Length() const;

// member data
  float x0;
  float x1;
  float x2;
  float x3;
};

#endif
