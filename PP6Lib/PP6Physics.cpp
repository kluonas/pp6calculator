#include "PP6Physics.hpp"
#include "PP6Math.hpp"

float Vector3Length(float x1, float x2, float x3){
  return (x1*x1+x2*x2+x3*x3);
}

float Vector4Length(float x0, float x1, float x2, float x3){
  return ( x0*x0-x1*x1-x2*x2-x3*x3 );
}

float InvariantMass(float p0, float p1, float p2, float p3, float k0, float k1, float k2, float k3) {
  float m1=Vector4Length(p0,p1,p2,p3);
  float m2=Vector4Length(k0,k1,k2,k3);
  return ( m1+m2+2*(p0*k0-p1*k1-p2*k2-p3*k3) );
}

float BoostZ(float& x0, float& x1, float& x2, float& x3, float beta) {
  float x0_old=x0, x3_old=x3;
  float gamma=1/Sqroot(1-Square(beta));
  x0=gamma*(x0_old-beta*x3_old);
  x3=gamma*(-beta*x0_old+x3_old);
  return Vector4Length(x0,x1,x2,x3);
}
