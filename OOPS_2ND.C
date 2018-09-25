#include<iostream.h>
#include<conio.h>
#include<math.h>
class vol
{
public : int volume(int s)
	{
	return(s*s*s);
	}
	double volume(float r,int h)
	{
	return(3.14*r*r*h);
	}
	int volume(int l,int b,int h)
	{
	return(l*b*h);
	}
	};
	void main()
	{
	clrscr();
	vol obj;
	cout<<"volume of cube is:"<<endl;
	cout<<obj.volume(5);
	cout<<"volume of cylinder is:"<<endl;
	cout<<obj.volume(2.5,7);
	cout<<"volume of cuboid is:"<<endl;
	cout<<obj.volume(2,3,4);
	getch();
	}