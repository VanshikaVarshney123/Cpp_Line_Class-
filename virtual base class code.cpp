// VIRTUAL BASEE CLASS IN C++

#include <iostream>
using namespace std;

class student{
    protected:
    int roll_no;
     public:
void set_number(int a){
    roll_no = a; 
 }
void print_number(void) {
    cout<<"Your roll number is "<<roll_no<<endl;
}
};

class test : virtual public student {   // or public virtual student both are same
    protected:
    float maths, physics;
    public:
    void set_marks(float m1, float m2){
        maths = m1;
        physics = m2;
    }
void print_marks (void){
    cout<<"Your result is here: "<<endl
    <<"Maths: "<<endl
    <<"Physics: "<<endl;
    
}
};

class sports : virtual public student{
 protected:
 float score;
 public:
 void set_score(float sc){
     score = sc;
 }
void print_score(void){
    cout<<"Your PT score is "<<endl;
}
};

class result : public test, public sports{
 private:
 float total;
 public:
 void display(void){
     total = maths + physics + score;
     print_number();
     print_marks();
     print_score();
     cout<<"Your total score is: "<<total<<endl;
 }
};

int main() {
   result dolly;
   dolly.set_number(34);
   dolly.set_marks(98.3, 97.6);
   dolly.set_score(9);
   dolly.display();

    return 0;
}