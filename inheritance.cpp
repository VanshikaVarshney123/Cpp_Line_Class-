// Inheritance

#include <iostream>
using namespace std;

// Base class
class Employee {
    public:
    int id;
    float salary;
  Employee( int inpId ){     // parameterized constructor declaration
      id = inpId;
      salary = 343444.0;
  }
  Employee (){}           // default constructor declaration 
};

 class Programmer : public Employee {
     public:
     int languageCode;
     Programmer ( int inpId ){
     id = inpId;
     languageCode = 9;
     }
     void getData (){
         cout<<id<<endl;
     }
 };
 
int main() {
    Employee dolly(1), vihu(2);
    cout<<dolly.salary<<endl;
    cout<<vihu.salary<<endl;
    Programmer skillF(10);
    cout<<skillF.id<<endl;
    skillF.getData();
    
    return 0;
}