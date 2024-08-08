 #include <iostream>
using namespace std;

class complex{
    int a,b;
    public:
        complex(){
            a=0;
            b=0;
        }
        complex(int x){
            a=x;
            b=0;
        }
        complex(int x, int y){
            a=x;
            b=y;
        }
        void printnum(){
            cout<<"your number is "<<a<<" + "<<b<<"i"<<endl;
        }
};

int main(){
    complex c1;
    complex c2(2);
    complex c3(3,6);
    c1.printnum();  
    c2.printnum();  
    c3.printnum();  
    return 0;
}