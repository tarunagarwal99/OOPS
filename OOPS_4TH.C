#include<iostream.h>
#include<conio.h>




























#include<iostream.h>
#include<conio.h>

void f1()
{
int count=0;
cout<<"count="<<count++<<endl;
}
void f2()
{
static int count;
cout<<"count="<<count++<<endl;
}
void main()
{
clrscr();
cout<<"for normal variable:";
for(int i=0;i<3;i++)
f1();
cout<<"for static variable:";
for(i=0;i<3;i++)
f2();
getch();
}