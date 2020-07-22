#include <iostream>
using namespace std;
class simple
{
    int val1, val2;

public:
    simple(int a, int b = 5)  //constructor with default argument
    {
        val1 = a;
        val2 = b;
    }
    void display();
};
void simple::display()
{
    cout << "the value of val1 and val2 are:" << val1 << " and " << val2 << endl;
}
int main()
{
    simple s1(2);
    s1.display();

    return 0;
}