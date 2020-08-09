#include <iostream>
using namespace std;

class Marks{
  int intmark;
  int extmark;
  public:
      Marks(){
        intmark = 0;
        extmark = 0;
      }
    Marks( int im,int em){
        intmark =im;
        extmark = em;
      }
      void display(){
        cout << intmark<<endl<<extmark<<endl;
      }
      // member function hence takes only one parameter of object. First parameter is m1
      Marks operator+(Marks m){
          Marks temp;
          temp.intmark = intmark + m.intmark;
          temp.extmark = extmark + m.extmark;
          return temp;
      }
};

int main()
{
   Marks m1(10,20),m2(30,40);
  // operator overloading.
   Marks m3 = m1 + m2;
   m3.display();
    return 0;
}