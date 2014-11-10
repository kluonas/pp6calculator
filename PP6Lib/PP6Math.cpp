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

float Sqroot(float a){
  return sqrt(a);
}

int Swap(int& i, int& j){
  int k=i;
  i=j;
  j=k;
  return 0;
}

int Sort(int size, int* array){
  for(int i=0; i<size; ++i){
     for(int j=0; j<size-1; ++j){
        if (array[j]<array[j+1])Swap(array[j],array[j+1]);
     }
  }
 return 0;
}
