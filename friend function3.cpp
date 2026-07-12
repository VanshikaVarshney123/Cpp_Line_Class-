// friend function ( complex example )
#include <iostream>
using namespace std;
// forward declaration 
class c2;

class c1{
    int val1;
    friend void exchange ( c1 & , c2 & );
    public :
    void indata( int a ){       // indata = input data
        val1 = a;
    }
     void display (void){
         cout<<val1<<endl;
     }
};
class c2{
    int val2;
    friend void exchange ( c1 & , c2 & );
    public :
    void indata( int a ){       // indata = input data
        val2 = a;
    }
     void display (void){
         cout<<val2<<endl;
     }
};
void exchange ( c1 &X, c2 &Y){
    int tmp = X.val1;
    X.val1 = Y.val2;
    Y.val2 = tmp;
}
int main (){
    c1 oc1;
    c2 oc2;
    
    oc1.indata(45);
    oc2.indata(854);
    exchange( oc1 , oc2 );
     cout<<"The value of c1 after exchanging becomes : ";
     oc1.display();
     cout<<"The value of c2 after exchanging becomes : ";
     oc2.display();
     return 0;
}
    