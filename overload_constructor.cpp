#include <iostream>
#include <string>

using namespace std;

class Human{
private:
    int age;
    string name;
    string address;
public:
   Human(){
        cout << "default constructor"<<endl;
        age = 0;
        name = "noname";
       address = "noaddress";
    }

    Human(string iname){
        cout << "constructor with name as the parameter"<<endl;
        age = 0;
        name = iname;
        address = "noaddress";
    }
    Human(int iage){
        cout << "constructor with age as the parameter"<<endl;
        age = iage;
        name = "noname";
        address = "noaddress";
    }
    Human(string add){
        
        cout << "constructor with address as the parameter"<<endl;
        age = 21;
        name = "noname";
        address = add;
    }
    Human(string iname,int iage){
        cout << "constructor with age and name as the parameter"<<endl;
        age = iage;
        name = iname;
        address = "noaddress";
    }
    void display(){
    cout <<name <<endl<<age<<endl;
    }


};


int main()
{
    Human anil;
    anil.display();

    Human andy("andy");
    andy.display();


    Human alex("alex",25);
    alex.display();

    return 0;
}
