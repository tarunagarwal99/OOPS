#include<iostream>
using namespace std;
 class point{
     int a,b;
     public:
      point(int x,int y){
          a=x;
          b=y;
      }
      void display(){
          cout<<"the point is :("<<a<<","<<b<<")"<<endl;
      }
 };
int main() {
    point p1(1,2);  //parameterized constructor
    p1.display();
    point p2(3,4);
    p2.display();
    
    return 0;
}