#include<iostream>
using namespace std;

int main(){
    int age;
    cout<<"tell me your age";
    cin>>age;
    if(age<18){
        cout<<"you can not come to party";
    }
    else if(age==18){
        cout<<"you can get a kid pass for the party";
    }
    else{
        cout<<"you are free to come to the party";
    }
    return 0;
}