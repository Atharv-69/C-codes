#include <iostream>
#include <cmath>
using namespace std;

class simplecalculator{
    protected:
        int a, b;
        char c;
    public:
        void setvalsimple(void){
            cout<<"enter the value of a for simple calculations "<<endl;
            cin>>a;
            cout<<"enter the value of b for simple calculations "<<endl;
            cin>>b;
        }
        void performsimple(void){
            cout<<"The value of a+b is "<<a+b<<endl;
            cout<<"The value of a-b is "<<a-b<<endl;
            cout<<"The value of a*b is "<<a*b<<endl;
            cout<<"The value of a/b is "<<a/b<<endl;
        }
};   

class scientificcalculator {
    protected:
        int a, b;
        char c;
    public:
        void setvalscientific(void){
            cout<<"enter the value of a for simple calculations "<<endl;
            cin>>a;
            cout<<"enter the value of b for simple calculations "<<endl;
            cin>>b;
        }
        void performscientific(void){
            cout<<"The value of cos(a) is "<<cos(a)<<endl;
            cout<<"The value of cos(b) "<<cos(b)<<endl;
            cout<<"The value of sin(a) is "<<sin(a)<<endl;
            cout<<"The value of sin(b) is "<<sin(b)<<endl;
        }
};

class hybridcalculator : public simplecalculator , public scientificcalculator{

}; 

int main(){
    // simplecalculator c;
    // c.setval();
    // c.perform();
    // scientificcalculator a;
    // a.setval();
    // a.perform();
    hybridcalculator h;
    h.setvalsimple();
    h.performsimple();
    h.setvalscientific();
    h.performscientific();
    return 0;
}   