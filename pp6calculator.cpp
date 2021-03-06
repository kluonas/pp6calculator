#include <cmath>
#include <climits>
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include "PP6Math.hpp"
#include "PP6Physics.hpp"
#include "StructFourVector.hpp"
#include "FileReader.hpp"
#include "Particle.hpp"
#include <vector>
#include "ParticleInfo.hpp"
#include <algorithm>
#include <iterator>
const float MUON_MASS=0.105;

// Day 1
int TestSum();
int TestSubtract();
int TestMultiply();
int TestDivide();
int TestSqroot();
int TestIntercept();
int TestSolveQuadratic();
int TestVector3Length();
int TestVector4Length();
int TestInvariantMass();
//Day 2
int TestSwap();
int TestSort();
int GenerateEnergy();
int TestSortIndex();
int AnalyzeData();
//Day 3
int TestBoostZ();
int TestFourVectorStruct();
int TestFourVectorClass();
int TestParticle();
//Day 4
int TestTemplate();
int TestParticleInfo();
int TestAlgorithm();
int TestParticleData();

int main(){//open main

while (true) {//open while

///////////////////////////////////////////////////////////////////////////////////
//                                                                               //
// MAIN MENU                                                                     //
//                                                                               //
///////////////////////////////////////////////////////////////////////////////////

  std::cout<<std::endl<<"This is a pp6calculator\nWhat do you want to do?\n";
  std::cout<<"Choose your day: \n1 - Day 1,\n2 - Day 2, \n3 - Day 3, \n4 - Day 4, \nq - quit\n"<<std::endl;
                     char day;
                     std::cin>>day;
                     switch (day){//open day

  ///////////////////////////
  //                       //
  //  DAY MENU             //
  //                       //
  ///////////////////////////

// Day 1
  case '1':{bool dayloop=true; while(dayloop){//open day1
            std::cout<<"DAY 1.  What do you want to do?\n\
              1 - Sum\n\
              2 - Subtract\n\
              3 - Multiply\n\
              4 - Divide\n\
              5 - Square root\n\
              6 - Line interception at x axis\n\
              7 - Solve quadratic equation\n\
              8 - Length of 3-vector\n\
              9 - Length of 4-vector\n\
              a - Calculate invariant mass of two particles\n\
              q - return to main menu"<<std::endl;

             char function_choice;

             if(!(std::cin>>function_choice)){
                std::cin.clear();
                std::cin.ignore(INT_MAX, '\n');
                std::cout<<"[Error] Error 1: input failed"; return 1;
                }
             std::cin.clear();
             std::cin.ignore(INT_MAX, '\n');
        //////////////////////////
        //                      //
        // DAY 1 PROGRAM FLOW   //
        //                      //
        //////////////////////////
         switch (function_choice){
                case '1': {TestSum(); continue;}
                case '2': {TestSubtract(); continue;}
                case '3': {TestMultiply(); continue;}
                case '4': {TestDivide(); continue;}
                case '5': {TestSqroot(); continue;}
                case '6': {TestIntercept(); continue;}
                case '7': {TestSolveQuadratic(); continue;}
                case '8': {TestVector3Length(); continue;}
                case '9': {TestVector4Length(); continue;}
                case 'a': {TestInvariantMass(); continue;} 
                case 'q': dayloop=false; break;
                default: {std::cout<<"Wrong input, try again"<<std::endl; continue;}
                };
          }break;}//close day1

// Day 2
  case '2':{bool dayloop=true; while(dayloop){
            std::cout<<"DAY 2.  What do you want to do?\n\
              1 - Swap numbers\n\
              2 - Sort an array\n\
              3 - Generate Energies (Homework)\n\
              4 - Sort array by indices (Homework)\n\
              5 - Analyze data file (Homework)\n\
              q - return to main menu"<<std::endl;

             char function_choice;

             if(!(std::cin>>function_choice)){
                std::cin.clear();
                std::cin.ignore(INT_MAX, '\n');
                std::cout<<"[Error] Error 1: input failed"; return 1;
                }
             std::cin.clear();
             std::cin.ignore(INT_MAX, '\n');

        //////////////////////////
        //                      //
        // DAY 2 PROGRAM FLOW   //
        //                      //
        //////////////////////////
         switch (function_choice){
                case '1': {TestSwap(); break;}
                case '2': {TestSort();break;}
                case '3': {GenerateEnergy(); break;}
                case '4': {TestSortIndex(); break;}
                case '5': {AnalyzeData(); break;}
                case 'q': {dayloop=false; break;}
                default : {std::cout<<"Wrong input, try again"<<std::endl; break;}
                };
         }break;}

// Day 3
  case '3':{bool dayloop=true; while(dayloop){
              std::cout<<"DAY 3.  What do you want to do?\n\
              1 - Boost vector along z axis\n\
              2 - Test FourVector struct\n\
              3 - Test FourVector class\n\
              4 - Test Particle class (Homework)\n\
              q - return to main menu"<<std::endl;

              char function_choice;

              if(!(std::cin>>function_choice)){
                 std::cin.clear();
                 std::cin.ignore(INT_MAX, '\n');
                 std::cout<<"[Error] Error 1: input failed"; return 1;
                 }
              std::cin.clear();
              std::cin.ignore(INT_MAX, '\n');

        //////////////////////////
        //                      //
        // DAY 3 PROGRAM FLOW   //
        //                      //
        //////////////////////////
         switch (function_choice){
                case '1': {TestBoostZ(); break;}
                case '2': {TestFourVectorStruct(); break;}
                case '3': {TestFourVectorClass();break;}
                case '4': {TestParticle(); break;}
                case 'q': {dayloop=false; break;}
                default : {std::cout<<"Wrong input, try again"<<std::endl; break;}
                };
         }break;}

// Day 4
case '4':{bool dayloop=true; while(dayloop){
              std::cout<<"DAY 4.  What do you want to do?\n\
              1 - Test FileReader template\n\
              2 - Test ParticleInfo class\n\
              3 - Test Algorithm\n\
              4 - Homework\n\
              q - return to main menu"<<std::endl;

              char function_choice;

              if(!(std::cin>>function_choice)){
                 std::cin.clear();
                 std::cin.ignore(INT_MAX, '\n');
                 std::cout<<"[Error] Error 1: input failed"; return 1;
                 }
              std::cin.clear();
              std::cin.ignore(INT_MAX, '\n');

        //////////////////////////
        //                      //
        // DAY 4 PROGRAM FLOW   //
        //                      //
        //////////////////////////
         switch (function_choice){
                case '1': {TestTemplate(); break;}
                case '2': {TestParticleInfo(); break;}
                case '3': {TestAlgorithm(); break;}
                case '4': {TestParticleData(); break;}
                case 'q': {dayloop=false; break;}
                default : {std::cout<<"Wrong input, try again"<<std::endl; break;}
                };
         }break;}


// Day default
  case 'q': {std::cout<<"Bye..."<<std::endl; return 0;}
  default : {std::cout<<"Wrong input, try again"<<std::endl; continue;}
  }//close day
}//close while

  return 0;
}//close main

///////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////
int TestSum(){
    std::cout<<"Enter two numbers you want to sum\n"; 
    float a,b;
    std::cin>>a>>b;
    if(!std::cin){
       std::cout<<"[Error] Error 1: input failed\nReturn to day menu"<<std::endl;
       std::cin.clear();
       std::cin.ignore(INT_MAX, '\n');
       return 1;
       }
    std::cin.clear();
    std::cin.ignore(INT_MAX, '\n');

    std::cout<< a <<" + "<< b <<" = "<< Sum(a,b) << std::endl;
    std::cout<< "press any key to continue...";
    std::cin.ignore();
    std::cin.ignore();
    return 0;
}
////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////
int TestSubtract(){
    std::cout<<"Enter two numbers you want to subtract\n"; 
    float a,b;
    std::cin>>a>>b;
    if(!std::cin){
       std::cout<<"[Error] Error 1: input failed\nReturn to day menu"<<std::endl;
       std::cin.clear();
       std::cin.ignore(INT_MAX, '\n');
       return 1;
       }
    std::cin.clear();
    std::cin.ignore(INT_MAX, '\n');

    std::cout<< a <<" - "<< b <<" = "<< Subtract(a,b) << std::endl;
    std::cout<< "press any key to continue...";
    std::cin.ignore();
    std::cin.ignore();
    return 0;
}
////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////
int TestMultiply(){
    std::cout<<"Enter two numbers you want to multiply\n"; 
    float a,b;
    std::cin>>a>>b;
    if(!std::cin){
       std::cout<<"[Error] Error 1: input failed\nReturn to day menu"<<std::endl;
       std::cin.clear();
       std::cin.ignore(INT_MAX, '\n');
       return 1;
       }
    std::cin.clear();
    std::cin.ignore(INT_MAX, '\n');

    std::cout<< a <<" * "<< b <<" = "<< Multiply(a,b) << std::endl;
    std::cout<< "press any key to continue...";
    std::cin.ignore();
    std::cin.ignore();
    return 0;
}
///////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////
int TestDivide(){
    std::cout<<"Enter two numbers you want to divide\n"; 
    float a,b;
    std::cin>>a>>b;
    if(!std::cin){
       std::cout<<"[Error] Error 1: input failed\nReturn to day menu"<<std::endl;
       std::cin.clear();
       std::cin.ignore(INT_MAX, '\n');
       return 1;
       }
    std::cin.clear();
    std::cin.ignore(INT_MAX, '\n');

    std::cout<< a <<" / "<< b <<" = "<< Divide(a,b) << std::endl;
    std::cout<< "press any key to continue...";
    std::cin.ignore();
    std::cin.ignore();
    return 0;
}
///////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////
int TestSqroot(){
    std::cout<<"Enter a number you want to root\n"; 
    float a;
    std::cin>>a;
    if(!std::cin){
       std::cout<<"[Error] Error 1: input failed\nReturn to day menu"<<std::endl;
       std::cin.clear();
       std::cin.ignore(INT_MAX, '\n');
       return 1;
       }
    std::cin.clear();
    std::cin.ignore(INT_MAX, '\n');

    std::cout<< "sqrt("<<a <<")="<< Sqroot(a) << std::endl;
    std::cout<< "press any key to continue...";
    std::cin.ignore();
    std::cin.ignore();
    return 0;
}
////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////
int TestSwap(){
    std::cout<<"Enter two numbers to swap\n"; 
    float a,b;
    std::cout<<"a=";std::cin>>a;
    std::cout<<"\nb=";std::cin>>b;
    if(!std::cin){
       std::cout<<"[Error] Error 1: input failed\nReturn to day menu"<<std::endl;
       std::cin.clear();
       std::cin.ignore(INT_MAX, '\n');
       return 1;
       }
    std::cin.clear();
    std::cin.ignore(INT_MAX, '\n');

    std::cout<< "Numbers a="<<a <<" ,b="<< b << std::endl;
    Swap(a,b);
    std::cout<< "Swaped a="<<a <<" ,b="<< b << std::endl;
    std::cout<< "press any key to continue...";
    std::cin.ignore();
    std::cin.ignore();
    return 0;
}
////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////
int TestSort(){
    std::cout<<"Feed in some numbers you want to sort; (a non-number stops input)\n";
    int size=0; 
    float a[100];
    while(std::cin>>a[size]){size++;};
    std::cin.clear();
    std::cin.ignore(INT_MAX, '\n');

    Sort(size, a);
    std::cout<<"Sorted array\n";
    for(int i=0;i<size;++i) std::cout<<a[i]<<std::endl;
    std::cout<< "press any key to continue...\n";
    std::cin.ignore();
    std::cin.ignore();
    return 0;
}
////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////
int TestIntercept(){
    std::cout<<"Enter coeficients of the line in the form k*x+b\n"; 
    float k,b;
    std::cout<<"k=";std::cin>>k;
    std::cout<<"\nb=";std::cin>>b;
    if(!std::cin){
       std::cout<<"[Error] Error 1: input failed\nReturn to day menu"<<std::endl;
       std::cin.clear();
       std::cin.ignore(INT_MAX, '\n');
       return 1;
       }
    std::cin.clear();
    std::cin.ignore(INT_MAX, '\n');

    std::cout<<"The line intercepts x axis at x="<< Intercept(k, b) <<std::endl;
    std::cout<< "press any key to continue...";
    std::cin.ignore();
    std::cin.ignore();
    return 0;
}
//////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////
int TestSolveQuadratic(){
    std::cout<<"Enter coeficients of a quadratic equation in the form A*x*x+B*x+C=0\n"; 
    float A,B,C;
    float answer1, answer2;
    std::cout<<"A=";std::cin>>A;
    std::cout<<"\nB=";std::cin>>B;
    std::cout<<"\nC=";std::cin>>C;
    if(!std::cin){
       std::cout<<"[Error] Error 1: input failed\nReturn to day menu"<<std::endl;
       std::cin.clear();
       std::cin.ignore(INT_MAX, '\n');
       return 1;
       }
    std::cin.clear();
    std::cin.ignore(INT_MAX, '\n');
    SolveQuadratic(A,B,C,answer1,answer2);
    std::cout<<"The roots of the equation are x1="<< answer1 <<" and x2="<< answer2 << std::endl;
    std::cout<< "press any key to continue...";
    std::cin.ignore();
    std::cin.ignore();
    return 0;
}
////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////
int TestVector3Length(){
    std::cout<<"Enter three-vector in the form (x,y,z)\n"; 
    float x,y,z;
    std::cout<<"x=";std::cin>>x;
    std::cout<<"\ny=";std::cin>>y;
    std::cout<<"\nz=";std::cin>>z;
    if(!std::cin){
       std::cout<<"[Error] Error 1: input failed\nReturn to main menu"<<std::endl;
       return 1;
       }
    std::cin.clear();
    std::cin.ignore(INT_MAX, '\n');

    std::cout<<"The length of the three-vector is L="<< Vector3Length(x,y,z) <<std::endl;
    std::cout<< "press any key to continue...";
    std::cin.ignore();
    std::cin.ignore();
    return 0;
}
//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////
int TestVector4Length(){
    std::cout<<"Enter four-vector in the form (t,x,y,z)\n"; 
    float t,x,y,z;
    std::cout<<"t=";std::cin>>t;
    std::cout<<"\nx=";std::cin>>x;
    std::cout<<"\ny=";std::cin>>y;
    std::cout<<"\nz=";std::cin>>z;
    if(!std::cin){
       std::cout<<"[Error] Error 1: input failed\nReturn to main menu"<<std::endl;
       return 1;
       }
    std::cin.clear();
    std::cin.ignore(INT_MAX, '\n');

    std::cout<<"The length of the four-vector is L="<< Vector4Length(t,x,y,z) <<std::endl;
    std::cout<< "press any key to continue...";
    std::cin.ignore();
    std::cin.ignore();
    return 0;
}
///////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////
int TestInvariantMass(){
    std::cout<<"Enter two momentum four-vectors in the form (t,x,y,z)\n"; 
    float t1,x1,y1,z1,t2,x2,y2,z2;
    std::cout<<"First one\nt=";std::cin>>t1;
    std::cout<<"\nx=";std::cin>>x1;
    std::cout<<"\ny=";std::cin>>y1;
    std::cout<<"\nz=";std::cin>>z1;
    std::cout<<"\nSecond one\nt=";std::cin>>t2;
    std::cout<<"\nx=";std::cin>>x2;
    std::cout<<"\ny=";std::cin>>y2;
    std::cout<<"\nz=";std::cin>>z2;
    if(!std::cin){
       std::cout<<"[Error] Error 1: input failed\nReturn to day menu"<<std::endl;
       std::cin.clear();
       std::cin.ignore(INT_MAX, '\n');
       return 1;
       }
    std::cin.clear();
    std::cin.ignore(INT_MAX, '\n');

    std::cout<<"The invariant mass is s="<< InvariantMass(t1,x1,y1,z1,t2,x2,y2,z2) <<std::endl;
    std::cout<< "press any key to continue...";
    std::cin.ignore();
    std::cin.ignore();
    return 0;
}
///////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////
int GenerateEnergy(){
   std::cout<<"...Generating 100 random Energies..."<<std::endl;
   std::cout<<"...Generating momenta and mass in range [0 , 99]GeV and calculating Energy..."<<std::endl;
   float Energy[100], mass;

   time_t timer1;
   time(&timer1);
   srand(timer1);
   
   mass=rand()%100;
   std::cout<<"mass="<<mass<<std::endl;
   for(int i=0; i<100; ++i){
      Energy[i]=Sqroot( Square(mass) + Vector3Length(rand()%100,rand()%100,rand()%100) );
      }

   std::cout<<"...Calculating Mean Energy..."<<std::endl;
   float mean=0;
   for(int i=0; i<100; ++i){mean+=Energy[i];}
   mean=mean/100;
   std::cout<<"Mean Energy="<<mean<<std::endl;

   std::cout<<"...Calculating Standard deviation..."<<std::endl;
   float sigma=0;
   for(int i=0; i<100; ++i){sigma+=Square( Energy[i]-mean );}
   sigma=sigma/100;
   std::cout<<"Standard deviation="<<Sqroot(sigma)<<std::endl;
	
   std::cout<< "press any key to continue...\n";
   std::cin.ignore();
   std::cin.ignore();
   return 0;
}
///////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////
int TestSortIndex(){
    std::cout<<"Feed in some numbers you want to sort; (a non-number stops input)\n";
    int size=0; 
    float a[100];
    while(std::cin>>a[size]){size++;};
    std::cin.clear();
    std::cin.ignore(INT_MAX, '\n');

    std::cout<<"Unsorted array\n";
    for(int i=0;i<size;++i) std::cout<<a[i]<<",  ";

    int* array=SortIndex(size, a);
    std::cout<< "\nSorted indices\n";
    for(int i=0;i<size;++i) std::cout<<array[i]<<",  ";

    delete [] array;
    std::cout<< "\npress any key to continue...\n";
    std::cin.ignore();
    std::cin.ignore();
    return 0;
}
///////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////
int AnalyzeData(){
  std::cout<<"Enter a relative or absolute path to a file, press 'd' for default \"observedparticles.dat\" "<<std::endl;
  std::string filename;
  std::cin>>filename;
  if (filename=="d") { filename="observedparticles.dat";}
      
  FileReader f(filename);

// Only process if the file is open/valid
if (f.isValid()) { 
  std::cout<<"File OPENED!"<<std::endl;
  // Initialize variables
  int type[1000], event[1000]; // type of a muon +1 or -1
  float px[1000], py[1000], pz[1000], Energy[1000]; // selected muon momenta
  std::string DataSource;
  int i=0;
  // skip first line
  f.nextLine();
  // Loop until out of lines
  std::cout<<"...Geting Muons in run4.dat...Recording their momenta...Calculating energy..."<<std::endl;
  while (f.nextLine()) {
    // Fields in each line are treated as whitespace separated
    // and counted from 1. Fields can be retrieved as one of four main
    // types

    // retrieve field 1 of current line as an integer
    if ( f.getFieldAsString(6) == "run4.dat" ){
       if ( f.getFieldAsString(2) == "mu+" ) type[i]=1;
       else if ( f.getFieldAsString(2) == "mu-" ) type[i]=-1;
       else continue;
       event[i]=f.getFieldAsInt(1);
       px[i]=f.getFieldAsFloat(3);
       py[i]=f.getFieldAsFloat(4);
       pz[i]=f.getFieldAsFloat(5);
       Energy[i]=Sqroot(Square(MUON_MASS)+Vector3Length(px[i],py[i],pz[i]) );
       i++;
       }
    // Check that input is o.k.
    if (f.inputFailed()) break;
  }
  // at this point we have a list of #i muons with type and momenta
std::cout<<"...Calculating invariant masses of mu+ mu- pairs..."<<std::endl;
float invMass[1000];
int eventMuPlus[1000], eventMuMinus[1000];
int l=0;
for(int j=0; j<i; ++j){
   if (type[j]==1){
   for(int k=0; k<i; ++k){
      if (type[j]!=type[k]) {invMass[l]=InvariantMass(Energy[j],px[j],py[j],pz[j],Energy[k],px[k],py[k],pz[k]);
                             eventMuPlus[l]=event[j];eventMuMinus[l]=event[k];
                             ++l;
                            }
   }}
}
std::cout<<"There are "<<l<<" pairs\nListing top 10 invariant masses"<<std::endl;
  // at this point we have a list of #l invariant masses
  int *masses=SortIndex(l-1,invMass);
  std::cout<<"___ Invariant mass^2 GeV^2 ___ mu+ ___ mu- ___"<<std::endl;
  for(int j=0; j<10; ++j){std::cout<<"    "<< invMass[masses[j]]<< "               " <<eventMuPlus[masses[j]]<<"   "<<eventMuMinus[masses[j]]<<std::endl;}

    std::cout<< "press any key to continue...\n";
    std::cin.ignore();
    std::cin.ignore();

}
else std::cout<<"File didn't open"<<std::endl;
  
return 0;
}
///////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////
int TestBoostZ(){
    std::cout<<"Enter 4 vector components in the form (t,x,y,z) and parameter beta"<<std::endl;
    float t,x,y,z,beta;
    std::cout<<"t=";std::cin>>t;
    std::cout<<"\nx=";std::cin>>x;
    std::cout<<"\ny=";std::cin>>y;
    std::cout<<"\nz=";std::cin>>z;
    std::cout<<"\nbeta=";std::cin>>beta;
    if(!std::cin){
       std::cout<<"[Error] Error 1: input failed\nReturn to day menu"<<std::endl;
       std::cin.clear();
       std::cin.ignore(INT_MAX, '\n');
       return 1;
       }
    std::cin.clear();
    std::cin.ignore(INT_MAX, '\n');

    std::cout<<"Boost vector ("<<t<<","<<x<<","<<y<<","<<z<<") along z axis with parameter beta="<<beta<<std::endl;
    float length=BoostZ(t,x,y,z,beta);                                  // call BoostZ function
    std::cout<< "Boosted vector (" <<t<<","<<x<<","<<y<<","<<z<<")  Its length="<<length<<std::endl;
    std::cout<< "press any key to continue...\n";
    std::cin.ignore();
    std::cin.ignore();
    return 0;
}
///////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////
int TestFourVectorStruct(){
SFourVector *SV;
SV=createSFourVector();
StructSetVector(SV, 0, 0, 0, 0);
    do{
              std::cout<<"Test FourVector struct. What do you want to do?\n\
              1 - Initialize vector (default 0 0 0 0)\n\
              2 - Boost vector along z axis\n\
              3 - Calculate length\n\
              4 - Show vector\n\
              5 - Get vector type\n\
              q - return to day 3 menu"<<std::endl;

              char function_choice;

              if(!(std::cin>>function_choice)){
                 std::cin.clear();
                 std::cin.ignore(INT_MAX, '\n');
                 std::cout<<"[Error] Error 1: input failed"; return 1;
                 }
              std::cin.clear();
              std::cin.ignore(INT_MAX, '\n');

    switch(function_choice){
        case '1':{
                 std::cout<<"Enter 4 vector components (t,x,y,z)"<<std::endl;
                 float t,x,y,z;
                 std::cin>>t>>x>>y>>z;
                 StructSetVector(SV, t, x, y, z);
              if(!std::cin){
                 std::cout<<"[Error] Error 1: input failed\nReturn to Test FourVector menu"<<std::endl;
                 std::cin.clear();
                 std::cin.ignore(INT_MAX, '\n');
                 break;
                 }
               else {
                 std::cout<<" Vector ("<<StructGetT(SV)<<","<<StructGetX(SV)<<","<<StructGetY(SV)<<","<<StructGetZ(SV)<<")"<<std::endl;
                 std::cout<< "press any key to continue...\n";
                 std::cin.ignore();
                 std::cin.ignore();
                 }
               break;}
       case '2': {
                  std::cout<<"Enter beta parameter"<<std::endl;
                  float beta;
                  std::cin>>beta;
                  if(!std::cin){
                    std::cout<<"[Error] Error 1: input failed\nReturn to Test FourVector menu"<<std::endl;
                    std::cin.clear();
                    std::cin.ignore(INT_MAX, '\n');
                    break;
                    }
                  else {
                     StructBoostZ(SV,beta);                                  // call BoostZ function
                     std::cout<< "Boosted vector (" <<StructGetT(SV)<<","<<StructGetX(SV)<<","<<StructGetY(SV)<<","<<StructGetZ(SV)<<")"<<std::endl;
                     std::cout<< "press any key to continue...\n";
                     std::cin.ignore();
                     std::cin.ignore();
                       }
                  break;}
       case '3': {std::cout<<"Length of a Vector l="<<StructGetLength(SV)<<std::endl;
                  std::cout<< "press any key to continue...\n";
                  std::cin.ignore();std::cin.ignore();
                  break;}
       case '4':{std::cout<<" Vector ("<<StructGetT(SV)<<","<<StructGetX(SV)<<","<<StructGetY(SV)<<","<<StructGetZ(SV)<<")"<<std::endl;
                 std::cout<< "press any key to continue...\n";
                 std::cin.ignore();
                 std::cin.ignore();
                 break;}
       case '5':{SFourVectorType t=StructGetFourVectorType(SV);
                 std::string type;
                 if (t==UNDEFINED) type="UNDEFINED";
                 else if(t==SPACELIKE) type="SPACELIKE";
                 else if (t==LIGHTLIKE) type="LIGHTLIKE";
                 else type="TIMELIKE";
                 std::cout<<" Vector type is "<<type<<std::endl;
                 std::cout<< "press any key to continue...\n";
                 std::cin.ignore();
                 std::cin.ignore();
                 break;}
       case 'q': return 0;}
}while(true);
return 0;
}
///////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////
int TestFourVectorClass(){
    FourVector V;
    do{
              std::cout<<"Test FourVector class. What do you want to do?\n\
              1 - Initialize vector (default 0 0 0 0)\n\
              2 - Boost vector along z axis\n\
              3 - Calculate length\n\
              4 - Show vector\n\
              q - return to day 3 menu"<<std::endl;

              char function_choice;

              if(!(std::cin>>function_choice)){
                 std::cin.clear();
                 std::cin.ignore(INT_MAX, '\n');
                 std::cout<<"[Error] Error 1: input failed"; return 1;
                 }
              std::cin.clear();
              std::cin.ignore(INT_MAX, '\n');

    switch(function_choice){
        case '1':{
                 std::cout<<"Enter 4 vector components (t,x,y,z)"<<std::endl;
                 std::cin>>V;
              if(!std::cin){
                 std::cout<<"[Error] Error 1: input failed\nReturn to Test FourVector menu"<<std::endl;
                 std::cin.clear();
                 std::cin.ignore(INT_MAX, '\n');
                 break;
                 }
               else {
                 std::cout<<"Vector "<<V<<std::endl;
                 std::cout<<"press any key to continue...\n";
                 std::cin.ignore();
                 std::cin.ignore();
                 }
               break;}
       case '2': {
                  std::cout<<"Enter beta parameter"<<std::endl;
                  float beta;
                  std::cin>>beta;
                  if(!std::cin){
                    std::cout<<"[Error] Error 1: input failed\nReturn to Test FourVector menu"<<std::endl;
                    std::cin.clear();
                    std::cin.ignore(INT_MAX, '\n');
                    break;
                    }
                  else {
                     float length=V.F_BoostZ(beta);                                  // call BoostZ function
                     std::cout<< "Boosted vector " <<V<<" Its length="<<length<<std::endl;
                     std::cout<< "press any key to continue...\n";
                     std::cin.ignore();
                     std::cin.ignore();
                       }
                  break;}
       case '3': {std::cout<<"Length of a Vector l="<<V.GetLength()<<std::endl;
                  std::cout<< "press any key to continue...\n";
                  std::cin.ignore();std::cin.ignore();
                  break;}
       case '4':{
                 std::cout<<"Vector "<<V;
                 std::cout<<std::endl;
                 std::cout<< "press any key to continue...\n";
                 std::cin.ignore();
                 std::cin.ignore();
                 break;}
       case 'q': return 0;}
}while(true);
return 0;
}
///////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////
int TestParticle(){
  std::cout<<"Enter a relative or absolute path to a file, press 'd' for default \"observedparticles.dat\" "<<std::endl;
  std::string filename;
  std::cin>>filename;
  if (filename=="d") { filename="observedparticles.dat";}
      
  FileReader f(filename);

// Only process if the file is open/valid
if (f.isValid()) { 
  std::cout<<"File OPENED!"<<std::endl;
  // Initialize variables
  Particle mu[100];
  int event[100];
  int i=0;
  int pdgcode;
  // skip first line
  f.nextLine();
  // Loop until out of lines
  std::cout<<"...Geting Muons in run4.dat...Recording their momenta...Calculating energy..."<<std::endl;
  while (f.nextLine()) {
    // Fields in each line are treated as whitespace separated
    // and counted from 1. Fields can be retrieved as one of four main
    // types

    // retrieve field 1 of current line as an integer
    if ( f.getFieldAsString(6) == "run4.dat" && ( f.getFieldAsString(2)=="mu+" || f.getFieldAsString(2)=="mu-" ) ){
       if (f.getFieldAsString(2)=="mu+" ) pdgcode=-13;
       else pdgcode=+13;

       ThreeVector threeMomentum(f.getFieldAsFloat(3),f.getFieldAsFloat(4),f.getFieldAsFloat(5));
       Particle muon(pdgcode, MUON_MASS, threeMomentum);
       mu[i]=muon;
       event[i]=f.getFieldAsInt(1);
       i++;
       }
    // Check that input is o.k.
    if (f.inputFailed()) break;
  }
// check what we recorded
std::cout<<"recorded events\n";
 std::cout<<"___ pdg code ___ event ___ E ___ px ___ py ___ pz ___"<<std::endl;
  for(int j=0; j<i; ++j){std::cout<<"    "<< mu[j].GetPDGCode() << "               " <<event[j]<<"   "<<mu[j].GetFourMomentum().GetT()<<"   "<<mu[j].GetFourMomentum().GetX()<<"   "<<mu[j].GetFourMomentum().GetY()<<"   "<<mu[j].GetFourMomentum().GetZ()<<std::endl;}

  // at this point we have a list of #i muons with type and momenta
std::cout<<"...Calculating invariant masses of mu+ mu- pairs..."<<std::endl;
float invMass[1000];
int eventMuPlus[1000], eventMuMinus[1000];
int l=0;
for(int j=0; j<i; ++j){
   if (mu[j].GetPDGCode()==13){
   for(int k=0; k<i; ++k){
      if (mu[j].GetPDGCode() != mu[k].GetPDGCode() ) {
                                                      FourVector Sum=(mu[j].GetFourMomentum()+mu[k].GetFourMomentum());
                                                      invMass[l]=Sum.GetLength();
                                                      eventMuPlus[l]=event[k];eventMuMinus[l]=event[j];
                                                      ++l;
                                                      }
                         }
                              }
                      }

std::cout<<"There are "<<l<<" pairs\nListing top 10 invariant masses"<<std::endl;
  // at this point we have a list of #l invariant masses
  int *masses=SortIndex(l-1,invMass);
  std::cout<<"___ Invariant mass^2 GeV^2 ___ mu+ ___ mu- ___"<<std::endl;
  for(int j=0; j<10; ++j){std::cout<<"    "<< invMass[masses[j]]<< "               " <<eventMuPlus[masses[j]]<<"   "<<eventMuMinus[masses[j]]<<std::endl;}

    std::cout<< "press any key to continue...\n";
    std::cin.ignore();
    std::cin.ignore();

}
else std::cout<<"File didn't open"<<std::endl;

return 0;
}
//////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////// 
int TestTemplate(){  

  FileReader f("pdg.dat");
  std::vector<std::string> name;
  std::vector<int> pdg_code;
  std::vector<int> charge;
  std::vector<float> mass;//MeV
  if (f.isValid()){
    std::cout<<"File pdg.dat opened."<<std::endl;
    while(f.nextLine()){
      name.push_back(f.getField<std::string>(1));
      pdg_code.push_back(f.getField<int>(2));
      charge.push_back(f.getField<int>(3));
      mass.push_back(f.getField<float>(4));
                       }
    }
  else std::cout<<"File not open"<<std::endl;
// print contents of vectors
  std::vector<std::string>::iterator iterName=name.begin(), iterNameEnd=name.end();
  std::vector<int>::iterator iterCode=pdg_code.begin(), iterCharge=charge.begin();
  std::vector<float>::iterator iterMass=mass.begin();

  for ( ; iterName != iterNameEnd; ++iterName, ++iterCode, ++iterCharge, ++iterMass) std::cout<<*iterName<<"	"<<*iterCode<<"	"<<*iterCharge<<"	"<<*iterMass<<std::endl;

  std::cout<< "press any key to continue...\n";
  std::cin.ignore();
return 0;
}
/////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////
int TestParticleInfo(){

  std::cout<<"...Creating ParticleInfo database from pdg.dat file..."<<std::endl;
  ParticleInfo particle("pdg.dat"); 
  std::cout<<"Let's check some values\n";
  std::cout<<"name of pdg code 511:  "<<particle.getName(511)<<"\n name of non existing pdg code 666:  "<< particle.getName(666)<<"\n mass of 310:  "<<particle.getMassMeV(310)<<"\npdg code for e+:  "<<particle.getPDGCode("e+")<<std::endl;

  std::cout<< "press any key to continue...\n";
  std::cin.ignore();

return 0;
}
/////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////
int RandomNumber () { return (std::rand()%100); }
//////////////////////////////////////////////////////////////
int TestAlgorithm(){
// create a vector with 10 elements
std::cout<<"...Creating vector with 10 elements..."<<std::endl;
std::vector<int> myVector(10);

// fill random values
std::cout<<"...Filling vector with random numbers..."<<std::endl;
std::generate (myVector.begin(), myVector.end(), RandomNumber );

// output vector content on the screen
std::cout<<"...Output vector..."<<std::endl;
std::copy(myVector.begin(), myVector.end(), std::ostream_iterator<int>(std::cout,"\n"));

// output max and min
std::cout<<"...Output min and max values..."<<std::endl;
std::cout<< *std::min_element(myVector.begin(), myVector.end()) <<std::endl;
std::cout<< *std::max_element(myVector.begin(), myVector.end()) <<std::endl;

// sort and output
std::cout<<"...Sorting vector..."<<std::endl;
std::sort(myVector.begin(), myVector.end());
std::cout<<"...Output vector..."<<std::endl;
std::copy (myVector.begin(), myVector.end(), std::ostream_iterator<int>(std::cout,"\n"));

return 0;
}
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
bool compareFunction(const std::pair<float, std::pair<int, int> >& one, const std::pair<float, std::pair<int, int> >& two)
{
  return one.first > two.first;
}
///////////////////////////////////////////////////////////////////////////////
int TestParticleData(){

// open data file
  FileReader f("observedparticles.dat");
// creat particle_info database
  ParticleInfo particle_info("pdg.dat");

// Only process if the file is open/valid
if (f.isValid()) 
{ 
   std::cout<<"File OPENED!"<<std::endl;

 // A pair of event number and particle
   std::map<int, Particle> Muon;
 // Vector of pairs of invariant mass and a pair of mu+ mu- event numbers
   std::vector<std::pair<float, std::pair<int, int> > > vectorOfMasses;
 // A pair of event numbers
   std::pair<int, int> events;
 // A pair of invariant mass and a pair of mu+ mu- event numbers
   std::pair<float, std::pair<int, int> > masses;

   std::map<int, Particle>::iterator  iter;

// skip first line
  f.nextLine();

// Loop until out of lines
  std::cout<<"...Geting Muons in run4.dat...Recording their momenta...Calculating energy..."<<std::endl;
  while (f.nextLine()) 
       {
         std::string name=f.getField<std::string>(2);
       // select only run4.dat and only muons
         if ( f.getField<std::string>(6) == "run4.dat" && ( name=="mu+" || name=="mu-" ) )
           { 
           // record three momentum
             ThreeVector threeMomentum(f.getField<float>(3),f.getField<float>(4),f.getField<float>(5));
           // find out particle id
             int pdg=particle_info.getPDGCode(name);
           // record event number
             int event=f.getField<int>(1);
           // create particle
             Particle mu( pdg, particle_info.getMassGeV(pdg), threeMomentum );
           // calculate invariant masses with other muons
             iter=Muon.begin();
             for(; iter != Muon.end(); ++iter)
                { if ((*iter).second.GetPDGCode() != pdg)
                    { FourVector Sum=((*iter).second.GetFourMomentum()+mu.GetFourMomentum());
                    // The first entry in a pair is for mu+, second for mu-
                      if (pdg>0) events=std::make_pair((*iter).first,event);
                      else       events=std::make_pair(event,(*iter).first);
                      masses=std::make_pair(Sum.GetLength(), events);
                      vectorOfMasses.push_back(masses);
                    }
                }
             Muon.insert(std::make_pair(event, mu));
           }
       // Check that input is o.k.
         if (f.inputFailed()) break;
       }

// check what we recorded
  std::cout<<"recorded events\n";
  std::cout<<"___ pdg code ___ event ___ E ___ px ___ py ___ pz ___"<<std::endl;
  iter=Muon.begin();
  for(;iter != Muon.end();++iter)
     { std::cout<<"    "<< (*iter).second.GetPDGCode() << "               " <<(*iter).first<<"   "<<(*iter).second.GetFourMomentum().GetT()<<"   "<<(*iter).second.GetFourMomentum().GetX()<<"   "<<(*iter).second.GetFourMomentum().GetY()<<"   "<<(*iter).second.GetFourMomentum().GetZ()<<std::endl;
     }

// sort masses
  std::sort(vectorOfMasses.begin(), vectorOfMasses.end(), compareFunction);
// output masses and event numbers
  std::vector<std::pair<float, std::pair<int, int> > >::iterator kk=vectorOfMasses.begin();
  std::cout<<"___ Invariant mass^2 GeV^2 ___ mu+ ___ mu- ___"<<std::endl;
  for (; kk != vectorOfMasses.end(); ++kk){std::cout<<(*kk).first<<"     "<<(*kk).second.first<<"    "<<(*kk).second.second<<std::endl;}


  std::cout<< "press any key to continue...\n";
  std::cin.ignore();
  std::cin.ignore();

}

else std::cout<<"File didn't open"<<std::endl;

return 0;
}
