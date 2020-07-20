#include <iostream>
using namespace std;

//forward declarition
class complex;
class calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }
    int sumRealcomplex(complex, complex);
    int sumCompcomplex(complex, complex);
};
class complex
{
    int a, b;
    friend int calculator::sumRealcomplex(complex, complex); //this how we can can declare a friend function in private part of other class by using scope resolution operator
    friend int calculator::sumCompcomplex(complex, complex);
    friend class calculator;// this use when we want many more fucntion to be use within the class 

public:
    void setNumber(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    void printNumber(void)
    {
        cout << "your complex number is:" << a << " + " << b << "i" << endl;
    }
};
int calculator::sumRealcomplex(complex o1, complex o2)
{
    return (o1.a + o2.a);
}
int calculator::sumCompcomplex(complex o1, complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    complex c1, c2;
    c1.setNumber(1, 4);
    c1.printNumber();
    c2.setNumber(5, 8);
    c2.printNumber();
    calculator calc;
    int sum = calc.sumRealcomplex(c1, c2);
    cout << "the sum of real part of complex numbers is:" << sum << endl;
    int sum1 = calc.sumCompcomplex(c1, c2);
    cout << "the sum of complex part of complex number is:" << sum1 << endl;

    return 0;
}