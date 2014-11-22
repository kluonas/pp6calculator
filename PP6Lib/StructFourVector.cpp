#include "StructFourVector.hpp"
#include "PP6Physics.hpp"

struct SFourVector{
  float t,x,y,z;
};

SFourVector* createSFourVector(){
  return new SFourVector;
}

void destroySFourVector(SFourVector *&SV){
  if (SV) {delete SV;
           SV=0;
          }
}

void StructSetVector(SFourVector *SV, float t, float x, float y, float z){
  if (SV){SV->t=t;
          SV->x=x;
          SV->y=y;
          SV->z=z;
         }
}

void StructBoostZ(SFourVector *SV, float beta){
  BoostZ((SV->t),(SV->x),(SV->y),(SV->z), beta);
}

float StructGetT(SFourVector *SV){if(SV) return SV->t; else return 0;}
float StructGetX(SFourVector *SV){if(SV) return SV->x; else return 0;}
float StructGetY(SFourVector *SV){if(SV) return SV->y; else return 0;}
float StructGetZ(SFourVector *SV){if(SV) return SV->z; else return 0;}

float StructGetLength(SFourVector* SV){if(SV) return Vector4Length((SV->t),(SV->x),(SV->y),(SV->z)); else return 0;}
