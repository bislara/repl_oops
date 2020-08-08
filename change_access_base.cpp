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
    // changing the access level from private to public in derived class
    using Person :: name;
    using Person :: setName;

    void display(){
    cout << name<<endl;
    }
    void studentSetName(string iname){
        setName(iname);
    }

};


int main()
{
    Student anil;
    anil.name = "Anil";
    anil.display();
    return 0;
}