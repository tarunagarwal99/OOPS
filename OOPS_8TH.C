#include<iostream.h>
#include<conio.h>
class A
{
int a,b;
public: A(int x,int y=10)
       {
       a=x;
       b=y;
       }
       void display()
       {
       cout<<"the value of a is:"<<a<<endl;
       cout<<"the value of b is:"<<b<<endl;
       }
       };
       void main()
       {
       clrscr();
       A p(50);
       p.display();
       getch();
       }