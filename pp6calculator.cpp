#include <iostream>
#include <cmath>
#include "PP6Math.hpp"
#include "PP6Math.hpp"
#include <climits>
#include <cstdio>
int main(){

do {
  std::cout<<std::endl<<"This is a pp6calculator\nWhat do you want to do?\n";
  std::cout<<"\n\
              1 - Sum\n\
              q - quit"<<std::endl;
/*
              2 - Subtract\n\
              3 - Multiply\n\
              4 - Divide\n\
              5 - Square root\n\
              6 - Sort an array\n\
              q - quit"<<std::endl;
*/
  char function_choice;

  if(!(std::cin>>function_choice)){
    std::cin.clear();
    std::cin.ignore(INT_MAX, '\n'); 
    std::cout<<"[Error] Error 1: input failed"; return 1;
  }
  std::cin.clear();
  std::cin.ignore(INT_MAX, '\n');

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
                 }
               break;
               }
//    case 2: Subtract();
//    case 3: Multiply();
//    case 4: Divide();
//    case 5: {std::cout<<"Enter number for square root\n"; float number; std::cin>>number; std::cout<<Sqroot(number)<<std::endl;break;}
//    case 6: {std::cout<<"feed me some ints\n"; int size=0; int a[100]; while(std::cin>>a[size]){size++;}; Sort(size, a);std::cout<<"Sorted array\n";for(int i=0; i<size;++i)std::cout<<a[i]<<std::endl;break;}
      case 'q': return 0;
      default: std::cout<<"Wrong input, try again\n";
  }
} while (true);


  return 0;
}
