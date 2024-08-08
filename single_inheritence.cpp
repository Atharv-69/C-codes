#include <iostream>
using namespace std;

class base{
    int data1;
    public:
        int data2;
        void setdata(){
            cout<<"enter the value of data1"<<endl;
            cin>>data1;
            cout<<"enter the value of data2"<<endl;
            cin>>data2;
            // data1 = 10;
            // data2 = 20;
        }
        int getdata1(){
            return data1;
        }
        int getdata2(){
            return data2;
        }
};


class derived : public base{
    int data3;
    public:
        void process(){
            data3 = data2*getdata1();
        }
        void display(){
            cout<<"value of data 1 is "<<getdata1()<<endl;
            cout<<"value of data 2 is "<<data2<<endl;
            cout<<"value of data 3 is "<<data3<<endl;
        }
};

int main(){
    base a;
    derived b;
    b.setdata();
    b.process();
    b.display();
    return 0;
}