#include<iostream.h>
#include<conio.h>

class stat
{
static int count;
public:
static void getcount()
{
cout<<"count="<<count++<<endl;
}
};
int stat::count;
void main()
{
clrscr();
for(int i=0;i<5;i++)
stat::getcount();
getch();
}