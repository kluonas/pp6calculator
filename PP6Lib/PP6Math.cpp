////////////////////////////////////
//                                //
// cppcalculator math function    //
// definitions                    //
//                                //
////////////////////////////////////

#include "PP6Math.hpp"

#include <iostream>
#include <cmath>

int Sum(float augend, float addend, float& sum){
  sum=augend+addend;
  return 0;
}

int Subtract(float minuend, float subtrahend, float& difference){
  difference=minuend-subtrahend;
  return 0;
}

int Multiply(float multiplicand, float multiplier, float& product){
  product=multiplicand*multiplier;
  return 0;
}

int Divide(float dividend, float divisor, float& quotient){
  quotient=dividend/divisor;
  return 0;
}

float Square(float x){ return x*x; }

int Sqroot(float a, float& answer){
  answer=sqrt(a);
  return 0;
}

int Swap(float& i, float& j){
  float k=i;
  i=j;
  j=k;
  return 0;
}

int Sort(int size, float* array){
  bool swaped;
  do {
     swaped=false;
     for(int j=0; j<size-1; ++j){
        if (array[j]<array[j+1]){ Swap(array[j],array[j+1]);
                                  swaped=true;}
     }
    if (!swaped) return 0;
  } while (swaped);
}

int Intercept(float k, float b, float& answer){
  answer=-b/k;
  return 0;
}

int SolveQuadr(float a, float b, float c, float& answer1, float& answer2){
  float D=b*b-4*a*c;
  answer1=(-b-sqrt(D))/2/a;
  answer2=(-b+sqrt(D))/2/a;
  return 0;
}

int Vector3Length(float x1, float x2, float x3, float& answer){
  answer= x1*x1+x2*x2+x3*x3;
  return 0;
}

int Vector4Length(float x0, float x1, float x2, float x3, float& answer){
  answer=x0*x0-x1*x1-x2*x2-x3*x3;
  return 0;
}

int InvariantMass(float p0, float p1, float p2, float p3, float k0, float k1, float k2, float k3, float& answer){
  float m1; Vector4Length(p0,p1,p2,p3,m1);
  float m2; Vector4Length(k0,k1,k2,k2,m2);
  answer=m1*m1+m2*m2+2*(p0*k0-p1*k1-p2*k2-p3*k3);
  return 0;
}
