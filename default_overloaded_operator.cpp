#include<iostream>
using namespace std;

class Complex {
private:
    int real, imag;
public:
    Complex(int r = 0, int i =0)  {real = r;   imag = i;}

    void show_val()
    {
        cout<<this->real<<" "<<this->imag<<endl;
    }
};

int main()
{
    Complex c1(10, 5), c2(2, 4);

    // compilor writes the default assignment operator 
    c1 = c2;

    // But compiler doesnot write the default comparison operator
    // below code throws compiler error
    // if (c1 == c2)
    //    cout << "Same";

    c1.show_val();
    c2.show_val();

    return 0;
}