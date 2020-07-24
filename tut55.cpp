#include <iostream>
using namespace std;
class base_class
{
public:
    int var_base;
    virtual void display()
    {
        cout << "the value of base class variable is:" << var_base << endl;
    }
};
class derived_class : public base_class
{
public:
    int var_derived;
    void display()
    {
        cout << "the value of base class variable is:" << var_base << endl;
        cout << "the value of derived class variable is:" << var_derived << endl;
    }
};
int main()
{
    base_class *base_class_pointer;
    base_class obj1;
    derived_class obj2;
    base_class_pointer = &obj2;
    base_class_pointer->var_base = 40;
    base_class_pointer->display();
    return 0;
}