#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    complex(void); //constructor(also a fucntion) have same name as class name.

    void displaynumber(void)
    {
        cout << "your complex number is:" << a << " + " << b << "i" << endl;
    }
};
complex::complex(void)// and this is default constructor 
{
    a = 10;
    b = 20;
}
int main()
{
    complex c1, c2, c3;
    c1.displaynumber();
    c2.displaynumber();
    c3.displaynumber();

    return 0;
}