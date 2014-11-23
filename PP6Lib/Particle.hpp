////////////////////////////
//                        //
// Particle class headers //
//                        //
////////////////////////////
#include "ClassFourVector.hpp"
#ifndef CLASSTHREEVECTOR_HPP
#define CLASSTHREEVECTOR_HPP

class Particle{
 public:
  Particle();
  Particle(const Particle&);
  Particle(const int , const float );
  Particle(const int , const float ,ThreeVector& );
  Particle(const int , const float , const float , const float , const float);
  ~Particle();
  
  float GetEnergy() const;
  FourVector& GetFourMomentum();
  float GetMagMomentum();
  float GetMassGeV() const;
  int GetPDGCode() const;
  ThreeVector& GetThreeMomentum();

  Particle& operator=(const Particle& rhs){
  if (&rhs != this) {mass=rhs.mass; momentum=rhs.momentum; pdg=rhs.pdg; return *this;}
  else return *this;
  }

  void SetMass(const float );
  void SetPDGCode(const int );
  void SetThreeMomentum(const ThreeVector& );
  void SetThreeMomentum(const float , const float , const float );

 private:
  float mass;
  FourVector momentum;
  int pdg;

};

#endif
