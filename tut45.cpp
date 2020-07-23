#include <iostream>
#include <cmath>
using namespace std;
class simple_calculator
{
protected:
    int n1;
    int n2;

public:
    void take_input_simple(int, int);
    void display_simple(void);
};
void simple_calculator::take_input_simple(int a, int b)
{
    n1 = a;
    n2 = b;
}
void simple_calculator::display_simple()
{
    cout << "the addition of n1 and n2 is:" << (n1 + n2) << endl;
    cout << "the substraction of n1 and n2 is:" << (n1 - n2) << endl;
    cout << "the multiplication of n1 and n2 is:" << (n1 * n2) << endl;
    cout << "the division of n1 and n2 is:" << (n1 / n2) << endl;
    cout << "the remainder of n1 and n2 is:" << (n1 % n2) << endl;
}
class scientific_calculator
{
protected:
    int n1;
    int n2;

public:
    void take_input_scientific(int, int);
    void display_scientific(void);
};
void scientific_calculator::take_input_scientific(int a, int b)
{
    n1 = a;
    n2 = b;
}
void scientific_calculator::display_scientific()
{
    cout << "the sin value of n1 is:" << sin(n1) << endl;
    cout << "the cos value of n1 is:" << cos(n1) << endl;
    cout << "the sin value of n2  is:" << sin(n2) << endl;
    cout << "the cos value of n2 is:" << cos(n2) << endl;
    cout << "the tan vlaue of n1 is:" << (sin(n1) / cos(n1)) << endl;
    cout << "the tan value of n2 is:" << (sin(n2) / cos(n2)) << endl;
    cout << "the cot value of n1 is:" << (cos(n1) / sin(n1)) << endl;
    cout << "the cot value of n2 is:" << (cos(n2) / sin(n2)) << endl;
}
class hybrid_calculator : public simple_calculator, public scientific_calculator
{
public:
    void show()
    {
        cout << "output show by these two calculators" << endl;
        cout<<"simple calculator shows:"<<endl;
        display_simple();
        cout<<"scientific calulator shows:"<<endl;
        display_scientific();
        
    }
};

int main()
{
    hybrid_calculator hyb;
    hyb.take_input_simple(10, 5);
    hyb.take_input_scientific(60, 30);
    hyb.show();
    return 0;
}