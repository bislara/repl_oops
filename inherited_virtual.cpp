#include <iostream>
using namespace std;

class Person{
public:
   virtual void introduce(){
      cout <<"hi from person"<<endl;
    }
};

class Student : public Person{
public:
    void introduce(){
      cout <<"hi from Student"<<endl;
    }
};

class GStudent : public Student{
public:
    void introduce(){
      cout << "hi from graduated student"<<endl;;
    }
};

void whoIsThis(Person &p){
  p.introduce();
}

int main()
{
    Person anil;
    Student anjali;
    GStudent rashmith;

    whoIsThis(anil);
    whoIsThis(anjali);
    whoIsThis(rashmith);
    return 0;
}