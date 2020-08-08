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

class Student : public Person{
  public:
    void display(){
    cout << name <<endl;
    }

};


int main()
{
  Student anil;
  anil.setName("anil");
  anil.display();
  // below is protected hence gives error
  // cout<<anil.name;
    return 0;
}