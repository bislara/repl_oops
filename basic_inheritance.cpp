#include <iostream>
#include<string>
using namespace std;
// base class
class Person{
public:
    string name;
    int age;
    void setName(string iname){name = iname;}
    void setAge(int iage){age = iage;}

};
// derived class with public inheritance
class Student : public Person{
public:
    int id;
    void setId(int iid){id = iid;}

    void introduce(){
    cout <<"hi iam "<<name<<" and i am "<<age<<" years old "<<endl<<"and my student id is "<<id;

    }

};

int main()
{
    Student anil;
    anil.setName("anil");
    anil.setAge(24);
    anil.setId(12345);

    anil.introduce();
    return 0;
}