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


// Making private constructor
#include <iostream> 
using namespace std; 
  
// class A 
class A{ 
private: 
    A(){ 
       cout << "constructor of A\n"; 
    } 
    friend class B; 
}; 
  
// class B, friend of class A 
class B{ 
public: 
    B(){ 
        A a1; 
        cout << "constructor of B\n"; 
    } 
}; 
  
// Driver program 
int main(){ 
    B b1; 
    return 0; 
} 