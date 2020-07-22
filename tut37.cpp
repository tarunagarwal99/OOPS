#include <iostream>
using namespace std;
class bankdeposit
{
    int principal;
    int year;
    float interestRate;
    float returnValue;

public:
    bankdeposit() {}  //
    bankdeposit(int p, int y, float r);
    bankdeposit(int p, int y, int r);
    void show();
};
bankdeposit::bankdeposit(int p, int y, float r)
{
    principal = p;
    year = y;
    interestRate = r;
    returnValue = principal;
    for (int i = 0; i < year; i++)
    {
        returnValue = returnValue * (1 + interestRate);
    }
}
bankdeposit::bankdeposit(int p, int y, int R)
{
    principal = p;
    year = y;
    interestRate = float(R) / 100;
    returnValue = principal;
    for (int i = 0; i < year; i++)
    {
        returnValue = returnValue * (1 + interestRate);
    }
}
void bankdeposit ::show()
{
    cout << "your principal amount is:" << principal << " after " << year << " years you would get: " << returnValue<<endl;
}

int main()
{
    bankdeposit bd1, bd2, bd3;//dynamic intialization of object using constructor
    int p, y;
    float r;
    int R;
    cout << "enter the value of p,y and r" << endl;
    cin >> p >> y >> r;
    bd1 = bankdeposit(p, y, r);
    bd1.show();

    cout << "enter the value of p,y and R" << endl;
    cin >> p >> y >> R;
    bd2 = bankdeposit(p, y, R);
    bd2.show();

    return 0;
}