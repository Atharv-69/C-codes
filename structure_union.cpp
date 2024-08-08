#include <iostream>
using namespace std;

typedef struct employee {
    int eID;
    char favchar;
    float salary;
}ep;

union money{
    int rice;
    float pounds;
    char car;
}

int main(){
    // struct employee alpha;
    // ep beta;
    // ep gamma;
    // alpha.eID=69;
    // alpha.favchar='c';
    // alpha.salary=20000;
    // cout<<"the id of "<<"is"<<alpha.eID<<endl;
    // cout<<"the favchar of "<<"is"<<alpha.favchar<<endl;
    // cout<<"the salary of "<<"is"<<alpha.salary<<endl;



    m1.rice=19;
    // m1.char='f'; this will show error as we can only use on of the three different datatypes defined in union
    cout<<"the amount of rice is "<<m1.rice<<endline;
    return 0;
} 