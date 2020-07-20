#include <iostream>
using namespace std;
class employee
{
    int id;

public:
    void setId(void)
    {
        cout << "enter the id:" << endl;
        cin >> id;
    }
    void getId(void)
    {
        cout << "the id of employee is:" << id << endl;
    }
};
int main()
{
    // employee haary,ramesh,suresh,pawan,ashish,shivam;
    // haary.setId();
    // haary.getId();
    employee hp[4];  // if we have many object in same class then we also declare array of object 
    for (int i = 0; i < 4; i++)
    {
        hp[i].setId();
        hp[i].getId();
    }

    return 0;
}