#include<stdio.h>
int main() {
int a,b,x,y,n,m,h,g;
scanf("%d",&a);
for(b=1;b<=a;b++)
{
scanf("%d %d",&x,&y);
if(x>y)
{
n = x-y;
m=1;
}
else
{
n = y-x;
m=2;
}
if(n>=h)
{
g=m;
h=n;
}
}
printf("%d %d",g,h);
return 0;
}