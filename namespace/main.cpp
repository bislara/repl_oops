#include <iostream>
using namespace std;

#include "one.cpp"
#include "two.cpp"

int main()
{
  // here "using" keyword is used so that we dont need to use the scope resolution operator 
  using namespace one;
  //using namespace Two;
  display();
  Two :: display();
  return 0;
}