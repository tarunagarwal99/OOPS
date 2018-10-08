#include<iostream.h>
#include<conio.h>
class A
{
int a;
public: void setdata()
{  a=10;
cout<<"a="<<a<<endl;
}
void display()
{
cout<<a<<endl;
}
int operator +(A x)
{
int sum;
sum=(a+x.a);
return sum;
}
};
void main()
{
clrscr();
A d1,d2;
d1.setdata();
d2.setdata();
d1.display();
d2.display();
int add=d1+d2;
cout<<"add="<<add<<endl;
getch();
}
