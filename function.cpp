#include <iostream>
using namespace std;

int sum(int a,int b){
    int c = a+b;
    return c;
}

int main(){
    int a=2,b=6;
    cout<<"the sum of numbers is "<<sum(a,b);
    return 0;
}