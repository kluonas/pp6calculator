#ifndef STRUCTFOURVECTOR_HPP
#define STRUCTFOURVECTOR_HPP

struct SFourVector;

SFourVector* createSFourVector();

void destroySFourVector(SFourVector *&SV);

void StructSetVector(SFourVector*, float, float, float, float);

void StructBoostZ(SFourVector*, float);

float StructGetT(SFourVector*);
float StructGetX(SFourVector*);
float StructGetY(SFourVector*);
float StructGetZ(SFourVector*);

float StructGetLength(SFourVector*);

#endif
