#include <iostream>
using namespace std;

class base_class
{
public:
    int var_base ;
    void display()
    {
        cout << "value of var_base is " << var_base << endl;
    }
};

class derived_class : public base_class
{
public:
    int var_derived ;
    void display()
    {
        cout << "value of var_base is " << var_base << endl;
        cout << "value of var_derived is " << var_derived << endl;
    }
};

int main()
{
    base_class *base_class_pointer;
    base_class objbase;
    derived_class objderived;
    base_class_pointer = &objderived; // this will not give any error and will be executed without any problem
    base_class_pointer->var_base = 69;
    base_class_pointer->display();    // this will run the display function of base class not the derived class
    // base_class_pointer->var_derived = 70; //this will show error because the pointer is of base class and though
                                    //it points to var_derived but it can not access var_derived 

    derived_class *  derived_class_pointer;
    derived_class_pointer = &objderived;
    derived_class_pointer -> var_derived=99;
    derived_class_pointer->display();
    return 0;
}