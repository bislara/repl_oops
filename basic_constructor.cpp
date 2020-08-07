#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Human {
  private:
    string name;
    int age;
    // wrong and gives error
    // Human()
    // {
    //     name = "noname";
    //     age = 0;
    // }
  public:
    Human()
    {
        name = "noname";
        age = 0;
    }
    void introduce()
    {
      cout<<name<<" "<<age<<endl;
    }
};

int main() {
  Human man;
  man.introduce();
  cout << "Hello World!\n";
}