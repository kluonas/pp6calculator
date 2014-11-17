#include "PP6Physics.hpp"
#include "PP6Math.hpp"
#include <cmath>

int BoostZ(float& x0, float& x1, float& x2, float& x3, float beta, float& length){
  float x0_old=x0, x3_old=x3;
  float gamma=1/sqrt(1-Square(beta));
  x0=gamma*(x0_old+beta*x3_old);
  x3=gamma*(beta*x0_old+x3_old);
  Vector4Length(x0,x1,x2,x3,length);
  return 0;
}
