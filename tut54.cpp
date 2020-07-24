#include <iostream>
using namespace std;
class base_class
{
public:
    int var_base;
    void display()
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
    //base_class_pointer=&obj1;
    base_class_pointer = &obj2; //pointing base class pointer to derived class( due to bydeault behaviour  it is still running the function of base_class)
    base_class_pointer->var_base = 45;
    //base_class_pointer->var_derived=47;//this will throw an error because of runtime polymorphism
    base_class_pointer->display();
    derived_class* derived_class_pointer;
    derived_class_pointer=&obj2;
    derived_class_pointer->var_derived=78;
    derived_class_pointer->display();

    return 0;
}