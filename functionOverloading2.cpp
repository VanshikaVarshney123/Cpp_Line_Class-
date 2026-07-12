// function overloading2 

#include <iostream>
using namespace std;

// calculate the volume of a cube
 int volume( int a){
     return ( a*a*a);
 }
 // volume of rectangular box
 int volume( int l, int b, int h ){
     return ( l*b*h );
 }
int main (){
    cout<<"The volume of cube of  edge 6 is "<<volume(6)<<endl;
    cout<<"The volume of rectangular box of  dimensions 61,45,40 is "<<volume(61,45,40)<<endl;
    
    return 0;
}