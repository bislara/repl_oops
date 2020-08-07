#include <iostream>
#include <string>

using namespace std;

class Human{
private:
    string name;
    int age;

public:
  //  Human(){
  //       age = 0;
  //       cout << "default constructor"<<endl;
  //       name = "noname";
  //       age = 0;
  //   }
    Human(string iname = "raju",int iage = 0){
        cout << "overloaded constructor"<<endl;
        name = iname;
        age = iage;
    }

    void speakUp(){
    cout <<name<<endl<<age<<endl;
    }
};


int main()
{
 Human anil;
 anil.speakUp();
    return 0;
}