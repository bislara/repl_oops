#include "iostream"
using namespace std;

class Person
{
    private:
        int age;
        string name;
    public:
        Person()
        {
            name = "noname";
            age = 0;
        }
        // copy constructor
        Person(Person& A)
        {
            age = A.age;
            name = A.name;
        }
        // assignment constructor
        Person& operator = (Person& A)
        {
            age = A.age;
            name = A.name;
            return *this;
        }
        // Person operator +(Person const &B)
        // {
        //     Person C;
        //     C.age = age + B.age;
        //     C.name = name + B.name;
        //     return C;
        // }
        void getdata()
        {
            cout<<name<<" "<<age<<endl;
        }
        void setdata(int age,string name)
        {
            this->name = name;
            this->age = age;
        }
};

int main()
{
    Person A,B;
    A.setdata(40, "raju");
    B.setdata(10, "raj");
    // assignment operator is called
    B = A;
    B.getdata();
    // copy constructor is called
    Person C = A;
    C.getdata();
    // Person D = A + B;
    // D.getdata();
}