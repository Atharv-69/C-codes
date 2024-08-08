#include <iostream>
using namespace std;

// base class
class  employee {
    float salary ;
    public :
    int id ;
        employee(int i){
            id=i;
            salary=1000;
        }
        employee(){}
        void prts(){
            cout<<"the salary of employee "<<id<<" is "<<salary<<endl;
        }
};

//derived class syntax
//class  derived-class-name : visibility mode base-class-name
//{
// class members,methods,etc.
// }

class programmer : public employee{
    public :
        programmer(int x){
            id = x;
        }
        int language=9;
        void getdata(){
            cout<<"the id of programmer is "<<id<<" and language is "<<language<<endl;
        }
};

int main(){
    employee harry(1), rohan(2);
    harry.prts();
    rohan.prts();
    programmer atharv(9);
    cout<<atharv.language<<endl;
    atharv.getdata();
    return 0;
}