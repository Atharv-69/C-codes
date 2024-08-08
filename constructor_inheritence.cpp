#include <iostream>
using namespace std;

class base1{
    int data1;
    public: 
        base1(int i){
            data1 = i;
            cout<<"base1 class constructor is called"<<endl;
        }
        void printdatabase1(void){
            cout<<"the value of data1 is "<<data1<<endl;
        }
};

class base2{
    int data2;
    public: 
        base2(int i){
            data2 = i;
            cout<<"base2 class constructor is called"<<endl;
        }
        void printdatabase2(void){
            cout<<"the value of data2 is "<<data2<<endl;
        }
};


class derived : public base1 , public base2{
    int x,y;
    public :
        derived(int a,int b,int c,int d) : base1(a) , base2(b){
            x=c;
            y=d;
            cout<<"derived class constructor is called"<<endl;
        }
        void printdata(void){
            printdatabase1();
            printdatabase2();
            cout<<"the value of x is "<<x<<endl;
            cout<<"the value of y is "<<y<<endl;
        }
};

int main(){
    derived d(2,3,4,5);
    d.printdata();
    return 0;
}