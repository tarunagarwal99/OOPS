#include <iostream>
using namespace std;
//here we use the concept of constructor overloading
class complex
{
    int a, b;

public:
    complex(int x, int y)
    {
        a = x;
        b = y;
    } //constructor(also a fucntion) have same name as class name.
    complex(int x)
    {
        a = x;
        //  b=0;
    }
    complex()
    {
        //  a=0;
        //b=0;
    }

    void displaynumber(void)
    {
        cout << "your complex number is:" << a << " + " << b << "i" << endl;
    }
};
int main()
{
    complex c1(2, 3);
    c1.displaynumber();
    complex c2(5);
    c2.displaynumber();
    complex c3;
    c3.displaynumber();

    return 0;
}