#include <iostream>
using namespace std;

class Person{
public:
    void introduce(){
    cout << "hi i am a person"<<endl;
    }
};

class Student : public Person{
public:
    void introduce(){
    cout << "hi i am a student and i am awesome"<<endl;
    Person::introduce();
    }
};

int main()
{
    Student anil;
    anil.Person::introduce();
    anil.introduce();
    return 0;
}