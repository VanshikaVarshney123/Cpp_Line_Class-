// Array of objects
#include <iostream>
using namespace std;

class Employee {
    int id;
    int salary;
     public :
     void setId(void){
         salary = 122;
         cout<<"Enter the id of employee "<<endl;
         cin>>id;
     }
     void getId (void) {
         cout<<"The id of this Employee is "<<id<<endl;
     }
};
int main() {
    Employee facebook[4];
    for( int i = 0; i<4; i++){
      facebook[i].setId(); 
      facebook[i].getId(); 
    }
    return 0;
}