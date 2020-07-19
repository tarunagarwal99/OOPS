#include <iostream>
using namespace std;
class Employee
{
    int a, b, c;

public:
    int d, e;
    void setdata(int a1, int b1, int c1); //function declarition
    void getdata()
    {
        cout << "the value of a is:" << a << endl;
        cout << "the value of b is:" << b << endl;
        cout << "the value of c is:" << c << endl;
        cout << "the value of d is:" << d << endl;
        cout << "the value of e is:" << e << endl;
    }
};
void Employee::setdata(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;

} //function definition

int main()
{

    Employee tarun;
    //we do not access private member of class without its permission and variable and fucntion of a class are bydefault private and if we want to use them outside the class then we have to declare it public or by using friend function.
    // tarun.a=34;
    tarun.d = 45;
    tarun.e = 56;
    tarun.setdata(1, 2, 3); //function calling
    tarun.getdata();
    // tarun.setdata(1,2,3);

    return 0;
}