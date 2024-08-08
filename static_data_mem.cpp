#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count;

public:
    void setData(void)
    {
        cout << "Enter the id " << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "The id of this employee is " << id << " and the employee number is " << count << endl;
    }
    static void getCount(void){
        cout<<"The value of count is "<<count<<endl;
    }
};

int Employee::count;    //default value is 0

int main()
{
    Employee Atharv, Rohan, Rahul;
    Atharv.setData();
    Atharv.getData();
    Employee::getCount();
    Rohan.setData();
    Rohan.getData();
    Employee::getCount();
    Rahul.setData();
    Rahul.getData();
    Employee::getCount();
    return 0;
}