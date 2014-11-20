////////////////////////////////////
//                                //
// cppcalculator math function    //
// definitions                    //
//                                //
////////////////////////////////////

#include "PP6Math.hpp"
#include <cmath>

float Sum(float augend, float addend){
  return augend+addend;
}

float Subtract(float minuend, float subtrahend){
  return minuend-subtrahend;
}

float Multiply(float multiplicand, float multiplier){
  return multiplicand*multiplier;
}

float Divide(float dividend, float divisor){
  return dividend/divisor;
}

float Square(float x){
  return x*x;
}

float Sqroot(float a){
  return sqrt(a);
}

float Intercept(float k, float b){
  return -b/k;
}

int SolveQuadratic(float a, float b, float c, float& answer1, float& answer2){
  float D=b*b-4*a*c;
  answer1=(-b-sqrt(D))/2/a;
  answer2=(-b+sqrt(D))/2/a;
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
return 0;
}

int SwapInt(int& i, int& j){
  int k=i;
  i=j;
  j=k;
  return 0;
}

int* SortIndex(int size, float* array){ // returns pointer to a sorted indexArray,
  int *indexArray=new int[size];
  float *originalArray=new float[size];
  for(int i=0; i<size; ++i){indexArray[i]=i; originalArray[i]=array[i];}
  bool swaped;
  do {
     swaped=false;
     for(int j=0; j<size-1; ++j){
        if (originalArray[j]<originalArray[j+1]){ 
                                  Swap(originalArray[j],originalArray[j+1]);
                                  SwapInt(indexArray[j],indexArray[j+1]);
                                  swaped=true;}
     }
    if (!swaped) return indexArray;
  } while (swaped);
return indexArray;
}




