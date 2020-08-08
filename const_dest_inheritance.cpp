#include <iostream>

using namespace std;

class Person{
public:
    Person(){
    cout << "constructor of the Person class called"<<endl;
    }
    ~Person(){
    cout << "destructor of the Person class called"<<endl;
    }
};

class Student : public Person{
public:
    Student(){
     cout << "constructor of the Student class called"<<endl;
    }
    ~ Student(){
     cout << "destructor of the Student class called"<<endl;
    }
};

int main()
{
    Student anil;
    return 0;
}