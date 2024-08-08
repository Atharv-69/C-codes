#include <iostream>
using namespace std;

class complex{
    int real , imaginary;
    public:
        void setdata(int a , int b){
            real = a;
            imaginary = b;
        }
        void printdata(void){
            cout<<"the real part of number is "<<real<<endl;
            cout<<"the imaginary part of number is "<<imaginary<<endl;
        }
};

int main(){
    // complex c1;
    // complex *ptr = &c1;
    // c1.setdata(2,5);
    // c1.printdata();
    complex *ptr = new complex;
    // (*ptr).setdata(2,5); will work the same way as using the arrow operator (->)
    ptr -> setdata(2,5);
    // (*ptr).printdata();
    ptr -> printdata();
    return 0;
}