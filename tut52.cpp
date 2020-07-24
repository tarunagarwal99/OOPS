#include <iostream>
using namespace std;
class shopItem
{
    int id;
    float price;

public:
    void setdata(int n1, float n2)
    {
        id = n1;
        price = n2;
    }
    void getdata()
    {
        cout << "the value of id is:" << id << endl;
        cout << "the value of price is :" << price << endl;
    }
};
/*
1  2  3
   ^
   |
   |
   str
ptrtemp
*/
int main()
{
    int size = 3;
    int p;
    float q;
    shopItem *str = new shopItem[size];
    shopItem *ptrtemp = str; //here ptrtemp is always point the  initial value of  str
    for (int i = 0; i < size; i++)
    {
        cout << "enter the id and price of item:" << i + 1 << endl;
        cin >> p >> q;
        // (*str).setdata(40,50);
        str->setdata(p, q);
        str++;
    }
    for (int i = 0; i < size; i++)
    {
        /* code */ cout << "item number is:" << i + 1 << endl;
        ptrtemp->getdata();
        ptrtemp++;
    }

    return 0;
}