// AMBIGUITY RESOLUTION IN C++ 

#include <iostream>
using namespace std;

class base1{
    public:
     void greet(){
    cout<<"Namaste jiii!!"<<endl;
     }
};

class base2{
    public:
     void greet(){
    cout<<"Hello beautiesss!!"<<endl;
     }
};

class derived : public base1, public base2{
    int a;
  public:
   void greet(){     // ambiguity resolution 
       base1 :: greet();
   }
};

int main(){
    base1 base1obj;
    base2 base2obj;
    base1obj.greet();
    base2obj.greet();
    
    derived d;
    d.greet();
    
    return 0;
}
