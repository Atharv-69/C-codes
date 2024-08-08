#include <iostream>
using namespace std;

int main (){
    int age;
    cout<<"enter your age"<<endl;
    cin>>age;
    switch(age){
        case 18:
        cout<<"you are 18 years old"<<endl;
        break;

        case 19:
        cout<<"you are 19 years old"<<endl;
        break;

        default:
        cout<<"no special cases"<<endl;
        break;

    }
    return 0;
}