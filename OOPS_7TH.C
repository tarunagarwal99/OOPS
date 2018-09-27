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
a=y;
}
A(A &p)
{
a=p.a;
b=p.b;
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
A s(p);
s.display();
getch();
}