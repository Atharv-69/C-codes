#include <iostream>
using namespace std;

class base{
    protected:
        int a;
    private:
        int b;
    
};

class derived : protected base {

}

int main(){
    base b;
    derived d;
    // cout<<d.a<<endl; // will not work because a is protected in both base as well as derived class so it can not
                        // be accessed by us  
    return 0;
}