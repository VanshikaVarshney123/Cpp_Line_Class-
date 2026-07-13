// Parameterized Constructor
#include <iostream>
using namespace std;

class complex {
    int a, b;
     public:
     complex( int , int ); // constructor declaration
    void printNumber(){
        cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
    } 
};
     complex :: complex( int x , int y) // this is a parameterized constructor as it takes 2 parameters.
     {
         a = x;
         b = y;
     }

int main() {
    complex a(4,69); // implicit call 
    complex b = complex(46,12);  // explicit call 
    
    a.printNumber();
    b.printNumber();

    return 0;
}