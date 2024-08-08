#include <iostream>
using namespace std;

class complex
{
    int a;
    int b;

public:
    void setdata(int x, int y)
    {
        a = x;
        b = y;
    }
    void setdatasum(complex m, complex n)
    {
        a = m.a + n.a;
        b = m.b + n.b;
    }
    void printnum(void)
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

int main()
{
    complex num1, num2, num3;
    num1.setdata(1, 1);
    num1.printnum();
    num2.setdata(2, 2);
    num2.printnum();
    num3.setdatasum(num1, num2);
    num3.printnum();
    return 0;
}