#include <iostream>
#include <string>

using namespace std;

class Person{
protected:
    string name;
public:
    void setName(string iname){
    name = iname;
    }
};

class Student : private Person{
public:
    void display(){
    cout << name<<endl;
    }
    void studentSetName(string iname){
    setName(iname);
    }
};

class GStudent : public Student{
public:
    void setGStudentName(string iname){
    studentSetName(iname);
    }
};

int main()
{
    GStudent anil;
    anil.setGStudentName("anil");
    anil.display();
    return 0;
}
