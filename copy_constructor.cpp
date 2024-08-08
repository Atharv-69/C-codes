#include <iostream>
using namespace std;

class number{
    int a;
    public:
        number(){
            a=0;
        }

        number(int x){
           a=x;
        }

        // copy constructor is being called      
        //if copy constructor is not found then  compiler supplies its own copy constructor
        number(number &obj){
           a=obj.a;
        }

        void display(){
            cout<<"The number is "<<a<<endl;
        }
};

int main(){
    number x,y,z,z2;
    x.display();
    y.display();
    z.display();

    number z1(x); // copy constructor invoked 
    z1.display();

    z2=z;//copy constructor will not be invoked
    return 0;
}   