#include<iostream>
#include<iomanip>
using namespace std;
int main(int argc, char const *argv[])
{

    //constamt in c++
    const int a=45;
    cout<<"the value of a is:"<<a<<endl;
    //manipulators in c++
    int b=2,c=34,d=456;
    cout<<"the value od b is:"<<b<<endl;
     cout<<"the value od b is:"<<c<<endl;
      cout<<"the value od b is:"<<d<<endl;
       cout<<"the value od b is:"<<setw(4)<<b<<endl;
        cout<<"the value od b is:"<<setw(4)<<c<<endl;
         cout<<"the value od b is:"<<setw(4)<<d<<endl;
          //cout<<"the value od b is:"<<b<<endl;

          //operator precendence on c++
          int e=a*5-b+c-d;
          cout<<"the value of d id:"<<e<<endl;



    return 0;
}
