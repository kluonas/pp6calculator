//////////////////////////////////////
//                                  //
//  ParticleInfo class definitions  //
//                                  //
//////////////////////////////////////
#include "ParticleInfo.hpp"
#include "FileReader.hpp"

int ParticleInfo::getPDGCode(std::string type){
  return code[type];
}

int ParticleInfo::getCharge(int pdg_code){
  return charge[pdg_code];
}

std::string ParticleInfo::getName(int pdg_code){
  return name[pdg_code];
}
double ParticleInfo::getMassMeV(int pdg_code){
  return mass[pdg_code];
}

double ParticleInfo::getMassGeV(int pdg_code){
  return mass[pdg_code]*0.001;
}

ParticleInfo::ParticleInfo(const std::string& filename){
  FileReader f(filename);
  if (!f.isValid()){}
  else {
      while(f.nextLine()){
              pdg_code=f.getField<int>(2);
              name.insert(std::make_pair(pdg_code, f.getField<std::string>(1)));
              mass.insert(std::make_pair(pdg_code, f.getField<float>(4)));
              code.insert(std::make_pair(f.getField<std::string>(1), pdg_code));
              charge.insert(std::make_pair(pdg_code, f.getField<int>(3)));
                         }
       }
}

ParticleInfo::ParticleInfo(const ParticleInfo& other): name(other.name), code(other.code), charge(other.charge),  mass(other.mass) {}

