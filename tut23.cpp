#include <iostream>
using namespace std;
class shop
{
    int itemId[100]; //array varible
    int itemPrice[100];
    int counter;

public:
    void intiCounter() { counter = 0; }
    void setPrice(void);
    void displayprice(void);
};
void shop::setPrice(void)
{
    cout << "enter id of your item number:" << counter + 1 << endl;
    cin >> itemId[counter];
    cout << "enter price of your item number:" << endl;
    cin >> itemPrice[counter];
    counter++;
}
void shop::displayprice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "the price of item with id " << itemId[i] << " is " << itemPrice[i] << endl;
    }
}

int main()
{
    shop dukaan;
    dukaan.intiCounter();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.setPrice();

    dukaan.displayprice();

    return 0;
}