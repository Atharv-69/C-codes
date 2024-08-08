#include <iostream>
using namespace std;

class A{
    int a;
    public:
        A& setdata(int a){
            // a=a;  this will create a problem because local variable a will be given the priority 
            this->a = a ;  
            return *this;  
        }
        void getdata(void){
            cout<<"The value of a is "<<a<<endl;
        }
};

int main(){
    //this is a keyword which is a pointer which points to the object which invokes the member function 
    // A a;
    // a.setdata(6);
    // a.getdata();
    A a;
    a.setdata(7).getdata();
    return 0;
}