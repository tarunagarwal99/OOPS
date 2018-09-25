#include<iostream.h>
#include<conio.h>
class A
{
int a,b;
public :A()
{
a=10;
b=20;
}
A(int x,int y)
{
a=x;
b=y;
}
A(A&p)
{
a=p.a;
b=p.b;
}
void display()
{
cout<<"a="<<a<<endl;
cout<<"b="<<b<<endl;
}
};
void main()
{
clrscr();
A m;
m.display();
A n(40,50);
n.display();
A o(m);
o.display();
A  y=n;
y.display();
getch();
}
