#include <iostream>
using namespace std;

class Human{
public:
    Human(){
    cout << "constructer called"<<endl;
    }

    ~Human(){
        cout << "destructer called"<<endl;
    }
};

int main()
{
    Human *anil;
    anil = new Human();
    delete anil;
    return 0;
}