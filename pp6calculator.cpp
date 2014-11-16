#include <iostream>
#include <cmath>
#include "PP6Math.hpp"
#include "PP6Math.hpp"
#include <climits>
#include <istream>
#include <cstdlib>
int main(){

do {

/////////////////////////////
//                         //
// MENU                    //
//                         //
/////////////////////////////

  std::cout<<std::endl<<"This is a pp6calculator\nWhat do you want to do?\n";
  std::cout<<"\n\
              1 - Sum\n\
              2 - Subtract\n\
              3 - Multiply\n\
              4 - Divide\n\
              5 - Square root\n\
              6 - Sort an array\n\
              q - quit"<<std::endl;

  char function_choice;

  if(!(std::cin>>function_choice)){
    std::cin.clear();
    std::cin.ignore(INT_MAX, '\n'); 
    std::cout<<"[Error] Error 1: input failed"; return 1;
  }
  std::cin.clear();
  std::cin.ignore(INT_MAX, '\n');

///////////////////////////////
//
// PROGRAM FLOW
//
///////////////////////////////

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

      case 'q': return 0;
      default: std::cout<<"Wrong input, try again\n";
  }
} while (true);


  return 0;
}
