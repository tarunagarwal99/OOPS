#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    complex(int, int); //constructor(also a fucntion) have same name as class name.

    void displaynumber(void)
    {
        cout << "your complex number is:" << a << " + " << b << "i" << endl;
    }
};
complex::complex(int x, int y) // and this is default constructor
{
    a = x;
    b = y;
}
int main()
{
    //implicit calling
    complex c1(2, 3);
    c1.displaynumber();
    //explicit calling
    complex c2 = complex(4, 5);
    c2.displaynumber();

    return 0;
}