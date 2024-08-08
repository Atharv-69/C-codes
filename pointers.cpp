#include <iostream>
using namespace std;

int main(){
    //basic example
    int a=6;
    int* ptr = &a;
    cout<<"the value of a is "<<*(ptr)<<endl;
    cout<<"the value of address of a is "<<(ptr)<<endl;

    //new operator
    int *p = new int(40);
    cout<<"the value at address p is "<<*(p)<<endl;

    int *arr = new int[3];
    arr[0] = 3;
    arr[1] = 4;
    arr[2] = 5;
    delete[] arr;
    cout<<"the value of arr[0] is "<<arr[0]<<endl;
    cout<<"the value of arr[1] is "<<arr[1]<<endl;
    cout<<"the value of arr[2] is "<<arr[2]<<endl;

    // delete operator
    //delete[] arr;
    return 0;
}