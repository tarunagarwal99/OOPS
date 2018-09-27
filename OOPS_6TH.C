#include<iostream.h>
#include<conio.h>
class A
{
int a,b;
public:
A()
{
a=10;
b=20;
}
A(int x,int y)
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
A p;
p.display();
A q(5,7);
q.display();
A r=A(8,9);
r.display();
getch();
}
