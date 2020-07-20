#include <iostream>
using namespace std;
//forward declarition
class c2;
class c1
{
    int val1;
    friend void exchange(c1 &, c2 &);

public:
    void setdata(int value)
    {
        val1 = value;
    }
    void display()
    {
        cout << val1 << endl;
    }
};
class c2
{
    int val2;
    friend void exchange(c1 &, c2 &);

public:
    void setdata(int value)
    {
        val2 = value;
    }
    void display()
    {
        cout << val2 << endl;
    }
};
void exchange(c1 &x, c2 &y)
{
    int tmp = x.val1;
    x.val1 = y.val2;
    y.val2 = tmp;
}
int main()
{
    c1 obj1;
    c2 obj2;
    obj1.setdata(23);
    obj2.setdata(35);
    exchange(obj1, obj2);
    cout << "the value of obj1 after exchanging:" << endl;
    obj1.display();
    cout << "the value of obj2 after exchanging:" << endl;
    obj2.display();

    return 0;
}