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
