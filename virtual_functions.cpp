#include <iostream>
using namespace std;

class base_class
{
public:
    int var_base = 1;
    virtual void display()
    {
        cout << "1 value of var_base is " << var_base << endl;
    }
};

class derived_class : public base_class
{
public:
    int var_derived = 2;
    void display()
    {
        cout << "2 value of var_base is " << var_base << endl;
        cout << "2 value of var_derived is " << var_derived << endl;
    }
};

int main(){
    base_class obj_base;
    derived_class obj_derived;
    base_class * base_class_pointer ;
    base_class_pointer = &obj_derived;
    base_class_pointer -> display();
    return 0;
}