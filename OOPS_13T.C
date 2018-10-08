#include<iostream.h>
#include<conio.h>
class A
{
int a;
public: void setdata()
{
cin>>a;
}
void display()
{
cout<<a;
}
friend int operator +(A p,A q);
};
int operator +(A p,A q)
{
int sum;
sum=p.a+q.a;
return sum;
}
void main()
{
clrscr();
A d1,d2;
d1.setdata();
d2.setdata();
d1.display();
d2.display();
int add=d1+d2;
cout<<add;
getch();
}