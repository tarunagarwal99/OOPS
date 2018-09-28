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
       void operator ++();
       void operator --();
       };
       void A::operator ++()
       {
       a=++a;
       b=++b;
       }
       void A::operator--()
       {
       a=--a;
       b=--b;
       }
       void main()
       {
       clrscr();
       A s;
       s.setdata();
       s.display();
       ++s;
       s.display();
       --s;
       s.display();
       getch();
       }

