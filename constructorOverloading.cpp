// Constructor Overloading
#include <iostream>
using namespace std;
class complex{
    int a,b;
     public:
     complex(){         // default constructor declaration
         a = 0;
         b = 0;
     }
     complex( int x, int y){           // parameterized constructor declaration
         a = x;
         b = y;
     }
     complex(int x){           // parameterized constructor declaration
         a = x;
         b = 0;
     }
      void printNumber(){
          cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
      }
};
int main() {
    complex c1(4,6);
    c1.printNumber();
    complex c2(8);
    c2.printNumber();
    complex c3;
    c3.printNumber();

    return 0;
}