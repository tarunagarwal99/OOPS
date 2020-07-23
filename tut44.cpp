#include <iostream>
using namespace std;
class base1
{
protected:
    int base_int1;

public:
    void set_base_int1(int a)
    {
        base_int1 = a;
    }
};
class base2
{
protected:
    int base_int2;

public:
    void set_base_int2(int a)
    {
        base_int2 = a;
    }
};
class derived : public base1, public base2
{
public:
    void show()
    {
        cout << "the value of base1 is:" << base_int1 << endl;
        cout << "the value of base2 is:" << base_int2 << endl;
        cout << "the value of sum of both of the values  is:" << (base_int1 + base_int2) << endl;
    }
};
/*
the inherited will something look like this
data members:
base_int1-->protected
base_int2-->protected
member function:
set_base_int1()-->public
set_base_int2()-->public
show()--public
*/
int main()
{
    derived dr;
    dr.set_base_int1(67);
    dr.set_base_int2(56);
    dr.show();
    return 0;
}