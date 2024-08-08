#include <iostream>
using namespace std;

class num{
    int x,y,z;
    public:
        num(int a,int b=7,int c=28){
            x=a;
            y=b;
            z=c;
        }       
        void printnum(){
            cout<<"your numbers are "<<x<<","<<y<<","<<z<<endl;
        } 
};

int main(){
    num n(1,2,3);
    n.printnum();
    return 0;
}
