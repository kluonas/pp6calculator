#include <iostream>
#include <cmath>
#include "PP6Math.hpp"
#include "PP6Math.hpp"

int main(){

  std::cout<<"This is a pp6calculator\nWhat do you want to do?\n";
  std::cout<<"1 - Sum\n2 - Subtract\n3 - Multiply\n4 - Divide\n5 - Square root\n6 - Sort an array\n";
  int function_choice;
  std::cin>>function_choice;
  switch (function_choice){
    case 1: {std::cout<<"Enter two numbers you want to sum\n";float a,b,answer=0; std::cin>>a>>b; Sum(a,b,answer); std::cout<<answer<<std::endl; break;}
//    case 2: Subtract();
//    case 3: Multiply();
//    case 4: Divide();
//    case 5: {std::cout<<"Enter number for square root\n"; float number; std::cin>>number; std::cout<<Sqroot(number)<<std::endl;break;}
//    case 6: {std::cout<<"feed me some ints\n"; int size=0; int a[100]; while(std::cin>>a[size]){size++;}; Sort(size, a);std::cout<<"Sorted array\n";for(int i=0; i<size;++i)std::cout<<a[i]<<std::endl;break;}
    default: break;
  }

  return 0;
}
