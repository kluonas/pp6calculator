#include "Particle.hpp"
#include "PP6Math.hpp"
Particle::Particle(){mass=0; pdg=0;}

Particle::Particle(const Particle& other)
  : mass(other.mass),  momentum(other.momentum), pdg(other.pdg){}

Particle::Particle(const int code, const float m)
  : mass(m), pdg(code) {}

Particle::Particle(const int code, const float m, ThreeVector& X)
  : mass(m), pdg(code)
  {momentum.SetThreeVector(X);
   momentum.SetT(Sqroot(mass*mass+X.GetLength()));
  }

Particle::Particle(const int code, const float t, const float x, const float y, const float z)
  : pdg(code)
  {momentum.SetT(t); momentum.SetX(x); momentum.SetY(y); momentum.SetZ(z);}

Particle::~Particle(){}
  
float Particle::GetEnergy() const {return momentum.GetT();}

FourVector& Particle::GetFourMomentum() {return momentum;}

float Particle::GetMagMomentum() {return momentum.GetThreeVector().GetLength();}

float Particle::GetMassGeV() const {return mass;}

int Particle::GetPDGCode() const {return pdg;}

ThreeVector& Particle::GetThreeMomentum() {return momentum.GetThreeVector();}

void Particle::SetMass(const float m){mass=m;}
void Particle::SetPDGCode(const int code){pdg=code;}
void Particle::SetThreeMomentum(const ThreeVector& X){momentum.SetThreeVector(X);}
void Particle::SetThreeMomentum(const float x, const float y, const float z){momentum.SetX(x); momentum.SetY(y); momentum.SetZ(z);}

