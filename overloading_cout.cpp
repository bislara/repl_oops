// cout is an object of ostream class which is a compiler defined class. When we do "cout << obj" where obj is an object of our class, the compiler first looks for an operator function in ostream, then it looks for a global function. One way to overload insertion operator is to modify ostream class which may not be a good idea. So we make a global method. 

#include <iostream>
using namespace std;

class Complex
{
private:
    int real;
    int imag;
public:
    Complex(int r = 0, int i =0)
    {
        real = r;
        imag = i;
    }
    friend ostream & operator << (ostream &out, const Complex &c);
};

ostream & operator << (ostream &out, const Complex &c)
{
    out << c.real;
    out << "+i" << c.imag<<endl;
    return out;
}

int main()
{
    Complex c1(10, 15);
    cout << c1;
    return 0;
}
