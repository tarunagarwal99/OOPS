#include<iostream>
using namespace std;
 typedef struct employee
 {
    int eid;
    char favchar;
    float salary;

 } tp;
 union money
 {
     int rice;
     char car;
     float pounds;
 };
 
 
int main() {
    tp harry;
    union money m1;
    m1.car='w';   //in union at one time we only use one variable because here we share the memory among the variable 
    //m1.rice =12;
   // ml.pounds=2345;
    cout<<m1.car<<endl;
    harry.eid=2;
    harry.favchar='p';
    harry.salary=12345;
    cout<<harry.eid<<endl;
    cout<<harry.favchar<<endl;
    cout<<harry.salary<<endl;

    //enumerated datatype
    enum meal {breakfast ,lunch,dinner};
    meal m1=dinner;
  //  cout<<m1<<endl;


     
    return 0;
}