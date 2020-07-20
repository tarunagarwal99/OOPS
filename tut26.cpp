#include <iostream>
using namespace std;
class complex
{
    int a;
    int b;

public:
    void setdata(int x, int y)
    {
        a = x;
        b = y;
    }
    void setdataBysum(complex o1, complex o2)
    { //method of declaring object as a argument
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }
    void displayResult()
    {
        cout << "your complex number is:" << a << " + " << b << "i" << endl;
    }
};
int main()
{
    complex c1, c2, c3;
    c1.setdata(1, 2);
    c1.displayResult();

    c2.setdata(3, 4);
    c2.displayResult();

    c3.setdataBysum(c1, c2);
    // c3.setdataBysum(10, 20);   //here also we use argument as a object
    c3.displayResult();

    return 0;
}