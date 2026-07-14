// Copy Constructor

#include <iostream>
using namespace std;

class Number{
    int a;
public:
Number(){         // default constructor
  a = 0;  
}
Number ( int num ){
    a = num;
}
Number (Number &obj){
    cout<<"copy constructor called !!!"<<endl;
    a = obj.a;
}
void display(){
    cout<<"The number for this object is "<<a<<endl;
    }
};

int main (){
    Number x,y,z(7),z2;
    x.display();
    y.display();
    z.display();
Number z1(z);       // copy constructor invoked
z1.display();

z2 = z;       // copy constructor not called
z2.display();

Number z3 = z;      // copy constructor invoked
z3.display();

return 0;
}