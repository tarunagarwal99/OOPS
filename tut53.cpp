#include <iostream>
using namespace std;
class tarun
{
    int a;

public:
    void setdata(int a)
    { 

        //a=a; this will show the garbage value so here we use "this" keyword to remove this ambiguity
       this-> a = a;
    }
    void getdata()
    {
        cout << "the value of a is:" << a << endl;
    }
};
int main()
{
    tarun t1;
    t1.setdata(40);
    t1.getdata();

    return 0;
}