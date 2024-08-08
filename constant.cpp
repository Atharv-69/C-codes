#include <iostream>
using namespace std;

int main(){
    const int c=3;
    cout<<"the value of c is "<<c;
    c=33;
    cout<<c;// here it will show error bcz value of c can not be changed by us as now it is a constant 
    return 0;
}