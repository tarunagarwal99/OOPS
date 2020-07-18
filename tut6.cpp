#include<iostream>
using  namespace std;
int main(int argc, char const *argv[])
{
    int age;
    cout<<"tell me your age:"<<endl;
    cin>>age;
    switch (age)
    {
        case 18:
        cout<<"you are 18."<<endl;
        break;
        case 22:
        cout<<"you are 22."<<endl;
        break;
        case 2:
        cout<<"you are 2."<<endl;
        break;

    default:
    cout<<"you are not mentioned.";
        break;
    }
 
    return 0;
}
