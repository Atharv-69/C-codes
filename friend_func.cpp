// #include <iostream>
// using namespace std;

// class complex{
//     int a,b;

//     public :
//         void setdata(int x, int y){
//             a=x;
//             b=y;
//         }
//         friend complex sumcomplex(complex m,complex n); // sumcomplex function is allowed to access the private data of class complex
//         void printnum(){
//             cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
//         }
// };

// complex sumcomplex(complex m,complex n){
//     complex s;
//     s.setdata((m.a+n.a),(m.b+n.b));
//     return s;
// }

// int main(){
//     complex n1,n2,sum;
//     n1.setdata(1,4);
//     n2.setdata(4,5);
//     n1.printnum();
//     n2.printnum();
//     sum = sumcomplex(n1,n2);
//     return 0;
// }




// another simple example of frnd func
#include <iostream>
using namespace std;

class y;

class x
{
    int data;

public:
    void setdata(int x)
    {
        data = x;
        cout<<"data set "<<endl;
    }
    friend void sum(x &, y &);
};

class y
{
    int num;

public:
    void setnum(int x)
    {
        num = x;
        cout<<"data set "<<endl;
    }
    friend void sum(x &, y &);
};

void sum(x &a, y &b)
{
    cout << "sum is " << (a.data + b.num);
}

int main()
{
    x a;
    a.setdata(10);
    y b;
    b.setnum(20);
    sum(a,b);
    return 0;
}