#include<iostream>
using namespace std;
 int c=34;
int main(int argc, char const *argv[])
{
    int a,b,c;
    cout<<"the value of a is:"<<endl;
    cin>>a;
    cout<<"the value of b is:"<<endl;
    cin>>b;
    c=a+b;
    cout<<"the value of c is :"<<c<<endl;
    cout<<"the global value of a is:"<<::c<<endl;
  /*size of operator*/
    float d =34.4f;
    double  e =  34.3l;
    cout<<"the value of d is:"<<d<<endl;
    cout<<"the value of e is:"<<e<<endl;
    cout<<"the size of 34.4 is:"<<sizeof(34.4)<<endl;
    cout<<"the size of 34.4f is:"<<sizeof(34.4f)<<endl;
    cout<<"the size of 34.4F is:"<<sizeof(34.4F)<<endl;
    cout<<"the size of 34.4l is:"<<sizeof(34.4l)<<endl;
    cout<<"the size of 34.4L is:"<<sizeof(34.4L)<<endl;
    /* reference variable*/
      int x=455;
      int &y=x;
      cout<<x<<endl;
      cout<<y<<endl;

      /* type casting */
      float f=23.45;
      cout<< "the value after type casting is:"<<int(f);
    



    return 0;
}
