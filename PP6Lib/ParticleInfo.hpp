////////////////////////////////
//                            //
// ParticleInfo class header  //
//                            //
////////////////////////////////
#include <string>
#include <map>
#ifndef PARTICLEINFO_HPP
#define PARTICLEINFO_HPP

class ParticleInfo {

   public:
int getPDGCode(std::string);
int getCharge(int);
std::string getName(int);
double getMassMeV(int);
double getMassGeV(int);
ParticleInfo(const std::string&);

  private:
ParticleInfo(const ParticleInfo&);
ParticleInfo& operator=(const ParticleInfo& rhs){
  if (this != &rhs) {code=rhs.code; charge=rhs.charge; name=rhs.name; mass=rhs.mass; return *this;}
  else return *this;
}

int pdg_code;
typedef std::map<int, int> chargeType;
typedef std::map<int, float> massType;
typedef std::map<int, std::string> nameType;
typedef std::map<std::string, int> codeType;
nameType name;
codeType code;
chargeType charge;
massType mass;// MeV
};

#endif
