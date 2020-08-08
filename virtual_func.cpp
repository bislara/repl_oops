#include <iostream>
using namespace std;

class Person{
public:
    virtual void introduce(){
    cout <<"hey from person"<<endl;
    }
};

class Student : public Person{
public:
    void introduce(){
    cout <<"hey from student"<<endl;
    }
};

class Farmer : public Person{
public:
    void introduce(){
    cout <<"hey from Farmer"<<endl;
    }
};

void whosThis(Person &p){
  p.introduce();
}

int main()
{
    Farmer anil;
    Student alex;

    whosThis(anil);
    whosThis(alex);
    return 0;
}