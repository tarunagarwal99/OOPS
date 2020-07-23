#include <iostream>
using namespace std;
/*
case 1:
class b:public a{}
//order of execution of constructor  --> first a then b because base class constructor is callled before derived class
case 2:
class b: public a ,public c{}
//order of execution of constructor  --> first  a then c and then b
case 3:
class b:
public b: public a,virtual public c{}
//order of execution of constructor  --> first c then a and then b
*/
class Base1
{
    int base1;

public:
    Base1(int n)
    {
        base1 = n;
        cout << "base1 constructor called" << endl;
    }
    void show1()
    {
        cout << "the value of base1 is:" << base1 << endl;
    }
};
class Base2
{
    int base2;

public:
    Base2(int n)
    {
        base2 = n;
        cout << "base2 constructor called" << endl;
    }
    void show2()
    {
        cout << "the value of base2 is:" << base2 << endl;
    }
};

//constructor calling order depend on the order how we take them
class derived : public Base1, public Base2
{
    int der1, der2;

public:
    derived(int a, int b, int c, int d) : Base1(a), Base2(b)
    {
        der1 = c;
        der2 = d;
        cout << "derived constructor called" << endl;
    }
    void display()
    {
        cout << "the value of derived1 is:" << der1 << endl;
        cout << "the value of derived2 is:" << der2 << endl;
    }
};

int main()
{
    derived tarun(1, 2, 3, 4);
    tarun.show1();
    tarun.show2();
    tarun.display();

    return 0;
}