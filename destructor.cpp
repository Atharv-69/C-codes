#include <iostream>
using namespace std;

// distructor5 never takes an argument nor it returns any value
int count = 0;
class num
{
public:
    num()
    {
        count++;
        cout << "this is the time whne contructor is called " << count << endl;
    }

    ~num()
    {
        cout << "this is the time when my destructor is called" << count << endl;
        count--;
    }
};

int main()
{
    cout << "we are in my main function " << endl;
    cout << "we are creating first object " << endl;
    num n1;
    {
        cout << "entering this block " << endl;
        cout << "creating two more obejcts " << endl;
        num n2, n3;
        cout << "exiting this block " << endl;
    }
    cout << "back to main function " << endl;
    return 0;
}