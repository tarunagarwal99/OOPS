#include<iostream.h>
#include<conio.h>
class A
{
int a,b;
public:
       void setdata()
       {
       a=10;
       b=20;
       }
       void display()
       {
       cout<<"the value of a is:"<<a<<endl;
       cout<<"the value of b is:"<<b<<endl;
       }
       void operator -();
       };
       void A::operator -()
       {
       a=-a;
       b=-b;
       }
       void main()
       {
       clrscr();
       A p;
       p.setdata();
       p.display();
       -p;
       p.display();
       getch();
       }