//  Destructor in C++

#include <iostream>
using namespace std;

int count = 0;

class num{
    public:
    num(){     // constructor
        count ++;
        cout<<"This is the time when constructor is called for object number "<<count<<endl;
    }
    ~num (){            // destructor declaration
        cout<<"This is the time when destructor is called for object number "<<count<<endl;
        count--;
    }
};

int main (){
    cout<<"We are inside our main function "<<endl;
    cout<<"creating first object n1 "<<endl;
    num n1; 
    {
      cout<<" Entering this block "<<endl;
      cout<<"creating two more object n2 , n3 "<<endl;
     num n2 , n3;
      cout<<"Exiting this block"<<endl;
    } 
    cout<<"Back to main"<<endl;
    
    return 0;
}