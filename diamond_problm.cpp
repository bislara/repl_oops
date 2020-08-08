#include <iostream>
using namespace std;

class Animal{
public:
    Animal(){
        cout << "animal constructor" << endl;
    }
    int age;
    void walk(){
        cout << "animal walks" << endl;
    }
};

class Tiger :virtual public Animal{
public:
    Tiger(){
        cout << "constructor of tiger" << endl;
    }
};

class Lion :virtual public Animal{
public:
    Lion(){
        cout << "constructor of Lion" << endl;
    }
};

class Liger : public Tiger , public Lion{
public:
    Liger(){
        cout << "constructor of Liger" << endl;
    }
};

int main()
{
    Liger anil;
    anil.walk();
    return 0;
}