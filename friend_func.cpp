#include <iostream>
#include<string>
using namespace std;

class Human{
  string name;
  int age;
public:
    Human(string iname,int iage){
      name = iname;
      age = iage;
    }
    void tellme(){
        cout <<name<<endl<<age<<endl;
    }
    void display(Human man);

};

void Human ::display(Human man){
    man.name = "LARA";
    cout <<man.name<<endl<<man.age<<endl;
}

int main()
{
    Human anil("anil",24);
    anil.display (anil);
    return 0;
}