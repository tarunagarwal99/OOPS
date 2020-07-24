#include <iostream>
using namespace std;
class test
{
    int a, b;

public:
    //test(int i,int j):a(i),b(j) //this is run
    // test(int i,int j):a(i),b(i+j)//this is run
    // test(int i,int j):a(i),b(2*j)//this is also run
    // test(int i,int j):a(i),b(a+j)  //this is also run
    // test(int i,int j):b(j),a(b+i)  //this will show the because a is intialize first so we couldn't get the b's value first
    test(int i, int j) : a(i), b(j)
    {
        cout << "the value of  a and b is:" << a << endl
             << b << endl;
    }
};
int main()
{
    test t1(4, 6);

    return 0;
}