// Friend Functions in C++
#include <iostream>
using namespace std;

class complex {
    int a , b;
     pulbic:
     void setNumber ( int n1, int n2){
         a = n1;
         b = n2;
     }
     friend complex sumComplex( complex o1, complex o2);  // friend function declaration 
     void printNumber (){
         cout <<"Your number is "<<a<<" + "<<b<<"i";
     }
};
complex sumComplex( complex o1, complex o2){
    complex o3;
    o3.setNumber( (o1.a + o2.a), (o1.b + o2.b));
    return o3;
}
   int main () {
       complex c1 , c2 , sum;
       
       c1.setNumber(1,5);
       c1.printNumber();
       
       c2.setNumber(17,52);
       c2.printNumber();
       
       sum = sumComplex(c1 , c2);
       sum.printNumber();
       
    return 0;
}