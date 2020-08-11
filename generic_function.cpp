#include <iostream>
using namespace std;

template <typename myType> void display(myType x){
  cout << " you have passes "<< x <<endl;
}

int main()
{
  display(10);
  display(1.2345);
  display("anil shetty rocks");
  return 0;
}