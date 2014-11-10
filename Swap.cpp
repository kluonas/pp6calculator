#include <iostream>

int swap(int& , int& );







int main(){

  int a, b;
  std::cout<<"enter two integers"<<std::endl<<"a=";
  std::cin>>a;
  std::cout<<"b=";
  std::cin>>b;
  
  swap(a,b);
  
  std::cout<<"swap:"<<std::endl<<"a="<< a <<std::endl<<"b="<<b<<std::endl;

  return 0;
}








int swap(int& i, int& j){
  int k=i;
  i=j;
  j=k;

  return 0;
}

