#include <iostream>
using namespace std;

class complex{
    int a,b;
    public:
        // complex(void) this is a dewfault constructor it does not takes any parameter for running
        complex(int , int); //this is a parameterized constructor it takes parameter to run 

        void printnum(){
            cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
        }
};

// complex :: complex(void){   //This is a default constructor
// a=9;   
// b=10;
// }

complex :: complex(int x,int y){
    a=x;
    b=y;
}

int main(){
    complex c(1,2);
    c.printnum();
    return 0;
}