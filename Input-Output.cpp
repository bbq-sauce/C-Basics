#include <iostream>
#include <stdio.h>
int main() {
  int age;
 std::cout<<"enter age :";//standanrd output
  std::cin>> age;// standardinput
  std::cout<<"Age is "<<age;//shows the text and variable 'age' in console

  return 0;

//______Error buffer________(shows errors in console)

  std::cerr << "An error occurred";
  std::clog << "An error occurred";


  
}
