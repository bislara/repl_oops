#include <iostream>
using namespace std;

class Human
{
  public:
    // cannot initialize the static variable inside class
    // static int human_count = 0;
    static int human_count;

    Human()
    {
      human_count++;
    }

    void humanTotal()
    {
      cout << "There are "<<human_count<<" peoples are in this program" <<endl;
    }

    static void humanCount();
};
// static data member can be declared globally also
int Human::human_count = 0;

void Human::humanCount()
{
    cout << "There are "<<human_count<<" peoples are in this program " <<endl;   
}

int main()
{
    cout << Human::human_count<<endl;

    Human anil;
    Human anjali;
    Human rashith;
    Human sandeep;
    // non static data member
    anil.humanTotal();
    // static data member
    Human ::humanCount();
    cout << Human::human_count<<endl;

    return 0;
}