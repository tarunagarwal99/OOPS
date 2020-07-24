#include <iostream>
using namespace std;

int main()
{
    int a = 4;
    int *ptr = &a;
    *ptr = 400;
    cout << "the value of ptr is:" << *ptr << endl;
    int *p = new int(80);
    int *q = new int[3]; //dynamcally  allocated memory space
    q[0] = 12;
    q[1] = 24;
    q[2] = 36;
    delete q; //this will delete the dynamically  created memory space
    cout << "the value of q[0] is:" << q[0] << endl;
    cout << "the value of q[1] is:" << q[1] << endl;
    cout << "the value of q[2] is:" << q[2] << endl;

    cout << "the value of p:" << *p << endl;
    return 0;
}