#include <iostream>
using namespace std;

class complex{
    int a,b;
    public:
        //Constructor is special member function of class with same name as of class
        //Constructor is used to initialze objects and value 
        //it is automatically invoked when any object is created 

        complex(void);

        void printnum(){
            cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
        }
};

complex :: complex(void){   //This is a default constructor
a=9;   
b=10;
}

int main(){
    complex c1,c2,c3;
    c1.printnum();
    c2.printnum();
    c3.printnum();
    return 0;
}


//properties of constructors 
//It should be declared in  the public section of the class
//automatically invoked when object is created 
//they do not return value and do nto have return types
//it can have default arguments 
//we cannoot refer to their address