#include <iostream>
using namespace std;

//for multiple inheritence 
// class derived : visiblity-mode base1 , visibility mode base2 

class base1{
    protected:
        int base1int;
    public:
        void setbase1int(int a){
            base1int = a;
        }
};

class base2{
    protected:
        int base2int;
    public:
        void setbase2int(int x){
            base2int = x;
        }
};

class derived : public base1 , public base2{
    public:
    void show(){
        cout<<"the value of base 1 is "<<base1int<<endl;
        cout<<"the value of base 2 is "<<base2int<<endl;
    }
    void sum(){
        cout<<"the sum of both the base input will be "<<(base1int + base2int) <<endl;
    }
};

int main(){
    derived d;
    d.setbase1int(25);
    d.setbase2int(34);
    d.show();
    d.sum();
    return 0;
}