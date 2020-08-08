#include <iostream>

using namespace std;
// abstract class
class Person{
public:
   virtual void introduce()=0;
};
// we can define the virtual function  outside the class but it mush be overridden in the derived class, else it gives error
void Person :: introduce(){
  cout << "hey from person"<<endl;
}

class Student : public Person{
public:
   void introduce(){
      cout << "hi i am a student"<<endl;
      Person ::introduce();
    }
};

int main()
{
    Student anil;
    anil.introduce();
    return 0;
}