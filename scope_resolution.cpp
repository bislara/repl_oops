#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Human {
  public:
    string name;
    void introduce();
};

void Human::introduce()
{
  Human::name = "Changed name";
  cout<<Human::name<<endl;
}

int main() {
  Human man;
  man.name = "I am human";
  cout<<man.name<<endl;
  man.introduce();
  cout << "Hello World!\n";
}