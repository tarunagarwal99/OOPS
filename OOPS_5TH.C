#include<iostream.h>
#include<conio.h>
class B;
class C;
class A
{
int a;
public:
      void seta()
      {
      a=10;
      }
      friend int add(A p,B q,C r)
      };
      class B
      {
      int b;
      public:
      void setb()
      {
      b=20;
      }
      friend int add(A p,B q,C r)
      };
      class C
      {
      int c;
      public:
      void setc()
      {
      c=30;
      }
      friend int add(A p,B q,C r)
      };
      int add(A p,B q,C r)
      {
      int x;
      x=(p.a+q.b+r.c);
      return x;
      }
      void main()
      {
       clrscr();
       A p;
       B q;
       C r;
       p.seta();
       q.setb();
       r.setc();
       cout<<add(p,q,r);
       getch();
       }


