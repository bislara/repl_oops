#include <iostream>
#include<string>
using namespace std;

class Father{
protected:
    int height;
public:
    Father(int x){
      height = x;
      cout << "constructor of father is called"<<endl;
    }
};
class Mother{
protected:
    string skincolor;
public:
    Mother(){
      cout << "constructor of mother is called"<<endl;
    }
};

class Child : public Father,public Mother{
public:
    Child(int x,string color) : Father(x),Mother(){
      skincolor = color;
      cout << "child classs constructor"<<endl;
    }
    void display(){
      cout << "height is "<<height<<" skin color is "<<skincolor<<endl;
    }
};

int main()
{
    Child anil(24,"while");
    anil.display();
    return 0;
}