#include <iostream>
#include <cmath>
#include "PP6Math.hpp"
#include "PP6Physics.hpp"
#include <climits>
#include <istream>
#include <cstdlib>
#include "ClassFourVector.hpp"

int TestFourVectorClass();


int main(){

do {

/////////////////////////////
//                         //
// MAIN MENU               //
//                         //
/////////////////////////////

  std::cout<<std::endl<<"This is a pp6calculator\nWhat do you want to do?\n";
  std::cout<<"Choose your day: 1, (2not yet), 3\nq - quit\n";
                     char day;
                     std::cin>>day;
                     switch (day){

  ///////////////////////////
  //                       //
  //  DAY MENU             //
  //                       //
  ///////////////////////////
  case '1':{
           std::cout<<"DAY 1.  What do you want to do?\n\
              1 - Sum\n\
              2 - Subtract\n\
              3 - Multiply\n\
              4 - Divide\n\
              5 - Square root\n\
              6 - Sort an array\n\
              7 - Line interception at x axis\n\
              8 - Solve quadratic equation\n\
              9 - Length of 3 - vector\n\
             10 - Length of 4 - vector\n\
             11 - Calculate invariant mass of two particles\n\
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
                case '1': {std::cout<<"Enter two numbers you want to sum\n"; 
                           float a,b,answer;                               // reserve space for summands and answer 
                           std::cin>>a>>b;                                   // read input
                           if(!std::cin){
                           std::cout<<"[Error] Error 1: input failed\nReturn to main menu"<<std::endl;
                           std::cin.clear();
                           std::cin.ignore(INT_MAX, '\n');
                           continue;
                           }
                           else {
                           Sum(a,b,answer);                                  // call Sum function
                           std::cout<< a <<" + "<< b <<" = "<< answer << std::endl; // output answer
                           std::cout<< "press any key to continue...\n";
                           std::cin.ignore();
                           std::cin.ignore();
                           }
                           break;
                           }

                case '2':  {std::cout<<"Enter two numbers you want to subtract\n";
                           float a,b,answer;                               // reserve space for numbers and answer 
                           std::cin>>a>>b;                                 // read input
                           if(!std::cin){
                              std::cout<<"[Error] Error 1: input failed\nReturn to main menu"<<std::endl;
                              std::cin.clear();
                              std::cin.ignore(INT_MAX, '\n');
                              continue;
                              }
                           else {
                              Subtract(a,b,answer);                                    // call Subtract function
                              std::cout<< a <<" - "<< b <<" = "<< answer << std::endl; // output answer
                              std::cout<< "press any key to continue...\n";
                              std::cin.ignore();
                              std::cin.ignore();
                              }
                          break;
                          }

    case '3':  {std::cout<<"Enter two numbers you want to multiply\n";
               float a,b,answer;                               // reserve space for terms and answer 
               std::cin>>a>>b;                                 // read input
               if(!std::cin){
                 std::cout<<"[Error] Error 1: input failed\nReturn to main menu"<<std::endl;
                 std::cin.clear();
                 std::cin.ignore(INT_MAX, '\n');
                 continue;
                 }
               else {
                 Multiply(a,b,answer);                                    // call Sum function
                 std::cout<< a <<" * "<< b <<" = "<< answer << std::endl; // output answer
                 std::cout<< "press any key to continue...\n";
                 std::cin.ignore();
                 std::cin.ignore();
                 }
               break;
               }

    case '4':  {std::cout<<"Enter two numbers you want to divide\n";
               float a,b,answer;                               // reserve space for terms and answer 
               std::cin>>a>>b;                                 // read input
               if(!std::cin){
                 std::cout<<"[Error] Error 1: input failed\nReturn to main menu"<<std::endl;
                 std::cin.clear();
                 std::cin.ignore(INT_MAX, '\n');
                 continue;
                 }
               else {
                 Divide(a,b,answer);                                      // call Divide function
                 std::cout<< a <<" / "<< b <<" = "<< answer << std::endl; // output answer
                 std::cout<< "press any key to continue...\n";
                 std::cin.ignore();
                 std::cin.ignore();
                 }
               break;
               }

    case '5':  {std::cout<<"Enter number you want to root\n";
               float a,answer;                                   // reserve space for number and answer 
               std::cin>>a;                                   // read input
               if(!std::cin){
                 std::cout<<"[Error] Error 1: input failed\nReturn to main menu"<<std::endl;
                 std::cin.clear();
                 std::cin.ignore(INT_MAX, '\n');
                 continue;
                 }
               else {
                 Sqroot(a,answer);                                        // call Sqroot function
                 std::cout <<" sqrt("<< a <<") = "<< answer << std::endl; // output answer
                 std::cout<< "press any key to continue...\n";
                 std::cin.ignore();
                 std::cin.ignore();
                 }
               break;
               }


    case '6':  {std::cout<<"Feed in some numbers you want to sort; (a non-number stops input)\n";
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
               break;
               }

      case 'q': continue;
      default: {std::cout<<"Wrong input, try again"<<std::endl; continue;}
  }
// Day 2
    /////////////////////////////
    // DAY 3 PROGRAM FLOW      //
    /////////////////////////////

  case '3':{
              std::cout<<"DAY 3.  What do you want to do?\n\
              1 - Boost vecto along z axis\n\
              2 - Test FourVector class\n\
              q - return to main menu"<<std::endl;

              char function_choice;

              if(!(std::cin>>function_choice)){
                 std::cin.clear();
                 std::cin.ignore(INT_MAX, '\n');
                 std::cout<<"[Error] Error 1: input failed"; return 1;
                 }
              std::cin.clear();
              std::cin.ignore(INT_MAX, '\n');

    switch(function_choice){
      case '1':{std::cout<<"Enter 4 vector components x0, x1, x2, x3 and parameter beta"<<std::endl;
              FourVector x;
              float beta;
              std::cin>>x.x0>>x.x1>>x.x2>>x.x3>>beta;
              if(!std::cin){
                 std::cout<<"[Error] Error 1: input failed\nReturn to main menu"<<std::endl;
                 std::cin.clear();
                 std::cin.ignore(INT_MAX, '\n');
                 return 1;
                 }
               else {
                 std::cout<<" Boost vector ("<<x.x0<<","<<x.x1<<","<<x.x2<<","<<x.x3<<") along z axis with parameter beta="<<beta<<std::endl;
                 float length=x.F_BoostZ(beta);                                  // call BoostZ function
                 std::cout<< "Boosted vector (" <<x.x0<<","<<x.x1<<","<<x.x2<<","<<x.x3<<")  Its length="<<length<<std::endl;
                 std::cout<< "press any key to continue...\n";
                 std::cin.ignore();
                 std::cin.ignore();
                 }
               break;
               }
    case '2': {TestFourVectorClass();break;}
    case 'q': continue;
    default : {std::cout<<"Wrong input, try again"<<std::endl; continue;}
    }}
  ///////////////
  // DAY DEFAULT
  //////////////
    case 'q': {std::cout<<"Bye..."<<std::endl; return 0;}
    default: {std::cout<<"Wrong input, try again"<<std::endl; continue;}
    }}
} while (true);


  return 0;
}

int TestFourVectorClass(){
FourVector x;
do{
              std::cout<<"Test FourVector class. What do you want to do?\n\
              1 - Initialize vector (default 0 0 0 0)\n\
              2 - Boost vector along z axis\n\
              3 - Calculate length\n\
              q - return to main menu"<<std::endl;

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
                 std::cout<<"Enter 4 vector components x0, x1, x2, x3"<<std::endl;
                 std::cin>>x.x0>>x.x1>>x.x2>>x.x3;
              if(!std::cin){
                 std::cout<<"[Error] Error 1: input failed\nReturn to main menu"<<std::endl;
                 std::cin.clear();
                 std::cin.ignore(INT_MAX, '\n');
                 return 1;
                 }
               else {
                 std::cout<<" Vector ("<<x.x0<<","<<x.x1<<","<<x.x2<<","<<x.x3<<")"<<std::endl;
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
                    std::cout<<"[Error] Error 1: input failed\nReturn to main menu"<<std::endl;
                    std::cin.clear();
                    std::cin.ignore(INT_MAX, '\n');
                    break;
                    }
                  else {
                     float length=x.F_BoostZ(beta);                                  // call BoostZ function
                     std::cout<< "Boosted vector (" <<x.x0<<","<<x.x1<<","<<x.x2<<","<<x.x3<<")  Its length="<<length<<std::endl;
                     std::cin.ignore();
                     std::cin.ignore();
                       }
                  break;}
       case '3': {std::cout<<"Length of a Vector l="<<x.F_Vector4Length()<<std::endl;std::cin.ignore();std::cin.ignore();break;}
       case 'q': return 0;}
}while(true);
return 0;
}


