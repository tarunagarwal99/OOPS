#include <iostream>
using namespace std;
class b
{
public:
    void show()
    {
        cout << "hello world" << endl;
    }
};
class d : public b
{
public:
    void show()
    {
        cout << "hello world,i am here!!" << endl;
    }
};
int main()
{
    b o1;
    o1.show();
    d o2;
    o2.show();

    return 0;
}