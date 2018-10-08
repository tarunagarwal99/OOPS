#include<iostream.h>
#include<conio.h>
class A
{
int a;
public:
void setdata()
{
cin>>a;
}
void display()
{
cout<<a;
}
A operator +(A p)
{
A q;
q.a=a+p.a;
return q;
}
};
void main()
{
clrscr();
A d1,d2,d3;
d1.setdata();
d2.setdata();
d1.display();
d2.display();
d3=d1+d2;
d3.display();
getch();
}
