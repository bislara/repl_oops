#include <iostream>
#include <string>
using namespace std;

class Human{
private:
    string *name;
    int *age;
public:
    Human(string iname, int iage){
      // dynamically data is created here. If not written like this then error wont show but will give segmentation fault
        name = new string;
        age = new int;

        *name = iname;
        *age = iage;
    }

    void display(){
      cout << "Hi i am "<<*name<<" and i am "<<*age<<" years old"<<endl;
    }

    ~Human(){
    delete name;
    delete age;
    cout << "all memories are released"<<endl;
    }
};
int main()
{
    Human *anil = new Human("anil",24);
    anil->display();
    delete anil;

    return 0;
}