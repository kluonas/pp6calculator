//////////////////////////////////////
//                                  //
// FourVector class declarations    //
//                                  //
//////////////////////////////////////

#ifndef CLASSFOURVECTOR_H
#define CLASSFOURVECTOR_H

class FourVector{
  public:
  float F_BoostZ(const float beta);
  float F_Vector4Length() const;

  float x0;
  float x1;
  float x2;
  float x3;
};

#endif
