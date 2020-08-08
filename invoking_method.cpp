#include <iostream>
#include <string>
using namespace std;

class Person{
public:
    void introduce(){
    cout <<"hey from person"<<endl;
    }
};

class Student : public Person{
public:
    void introduce(){
    cout <<"hey from student"<<endl;
    }
};

void whosThis(Person p){
  p.introduce();
}

int main()
{
    Student anil;
    anil.introduce();
    whosThis(anil);
    return 0;
}