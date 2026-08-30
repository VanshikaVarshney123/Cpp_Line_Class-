// virtual function 

#include <iostream>
using namespace std;

class BaseClass{
    public:
    int var_base;
   virtual  void display(){
        cout<<"Display base class variable var_base "<<var_base<<endl;
    }
};
class DerivedClass : public BaseClass {
    public:
    int var_derived;
    virtual void display(){
        cout<<"Display base class variable var_base "<<var_base<<endl;
        cout<<"Display derived class variable var_derived "<<var_derived<<endl;
    }
};

int main() {
    BaseClass * base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;
    base_class_pointer = & obj_derived;

    // pointing base class pointer to derived class
   base_class_pointer->var_base = 98;
    obj_derived.var_derived = 100;

    base_class_pointer -> display();
   
    return 0;
}