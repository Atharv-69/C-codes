#include <iostream>
using namespace std;

// Forward declaration for assuring the compiler that class complex is present in the program 
class complex;

class calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }
    int sumrealcomplex(complex, complex);
    int sumcompcomplex(complex, complex);
};

class complex
{
    int a, b;
    //individually declaring the funcrions as friend one by one 
    // friend int calculator ::sumrealcomplex(complex, complex);
    // friend int calculator ::sumcompcomplex(complex, complex);

    //declaring entire class as friends 
    friend class calculator;

public:
    void setdata(int x, int y)
    {
        a = x;
        b = y;
    }
    void printnum()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

int calculator ::sumrealcomplex(complex m, complex n)
{
    cout<<"The sum of real part of your numbers is ";
    return (m.a + n.a);
}

int calculator ::sumcompcomplex(complex m, complex n)
{
    cout<<"The sum of imaginary part of your numbers is ";
    return (m.b + n.b);
}

int main()
{
    complex m, n;
    m.setdata(1, 2);
    n.setdata(6, 4);
    m.printnum();
    n.printnum();
    calculator cal;
    int realsum = cal.sumrealcomplex(m, n);
    cout << realsum << endl;
    int compsum = cal.sumcompcomplex(m, n);
    cout << compsum << endl;
    return 0;
}
