// FUNCTION OVERLOADING IN C++
#include <iostream>
using namespace std;

int sum ( int a, int b ){
    cout<<" Using function with 2 arguments "<<endl;
    return a+b; 
}
    int sum ( int a, int b, int c ){
    cout<<" Using function with 3 arguments "<<endl;
    return a+b+c; 
   }
     int main () {
     cout<<" The sum of 78 and 568 is "<<sum(78,568)<<endl;
     cout<<" The sum of 72,69 and 56 is "<<sum(72,69,56)<<endl;
       
     return 0;
     }