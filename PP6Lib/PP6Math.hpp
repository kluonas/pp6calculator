///////////////////////////////////
//                               //
// pp6calculator math functions  //
//                               //
///////////////////////////////////

#ifndef PP6CALCULATOR_MATH_H
#define PP6CALCULATOR_MATH_H

int Sum(float , float , float&);

int Subtract(float , float , float&);

int Multiply(float , float , float&);

int Divide(float , float , float&);

float Square(float);

int Sqroot(float , float& );

int Swap(float& , float&);
 
int Sort(int , float* );

int Intercept(float, float, float&);

int SolveQuadr(float, float, float, float&);

int Vector3Length(float, float, float, float&);

int Vector4Length(float, float, float, float, float&);

int InvariantMass(float, float, float, float,float, float, float, float, float&);
#endif
