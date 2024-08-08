#include<iostream>
using namespace std;
int g=22;

int main(){
    int a=2,b=5,g;
    g=a+b;
    cout<<"the sum of a and b is "<<::g<<endl; //in this the result will be the global operator 
    cout<<"the sum of a and b is "<<g<<endl; //in this the result will be the local operator
    return 0;
}