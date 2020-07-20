#include <iostream>
using namespace std;
class employee
{
    int id;
    static int count; //static varible is the varible which can use by class for the all onbject of the class and declared only once and its default value is 0
    int days = 0;

public:
    void setdata(void)
    {
        cout << "enter the id of employee:" << endl;
        cin >> id;
        count++;
        days++;
    }

    void getdata(void)
    {
        cout << "the id of employee is " << id << " and the employee number is " << count << " and the day of working of employee " << days << endl;
    }
    static void getcount(void)
    { 
        //staic member function me hamesha staic variable hi print honge ,other nhi honge
        cout << "the value of count is:" << count << endl;
    }
};
int employee::count;
int main()
{
    employee harish, suresh, ramesh, ashish, shivam;
    harish.setdata();
    harish.getdata();
    employee::getcount(); //method to call static member function
    suresh.setdata();
    suresh.getdata();
    employee::getcount();
    ramesh.setdata();
    ramesh.getdata();
    employee::getcount();
    ashish.setdata();
    ashish.getdata();
    employee::getcount();
    shivam.setdata();
    shivam.getdata();
    employee::getcount();
    return 0;
}