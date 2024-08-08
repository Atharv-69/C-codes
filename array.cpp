#include <iostream>
using namespace std;

class Employee{
    int id;
    int salary;

    public:
        void setdata(void){
            cout<<"Enter the id "<<endl;
            cin>>id;
            cout<<"Enter the salary "<<endl;
            cin>>salary;
        }
        void getdata(void){
            cout<<"The id is "<<id<<endl;
            cout<<"The salary is "<<salary<<endl;
        }
};

int main(){
    // Employee Atharv,Rohan,Aryan,Rahul;
    // Atharv.setdata();
    // Atharv.getdata();

    Employee fb[5];
    for(int i=0; i<5 ;i++){
        fb[i].setdata();
    }
    for(int i=0; i<5 ;i++){
        fb[i].getdata();
    }
    return 0;
}