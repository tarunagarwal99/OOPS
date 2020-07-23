#include<iostream>
using namespace std;
 class Employee{
     //int id;
     //int salary;
     public:
     int salary;
        int id;
     Employee(int intid){
         id=intid;
         salary=34;
     }
     Employee(){}
 };
  //derived class syntax
 /* class {{derived-class}}:{{visibility-mode}} {{base class}}
 {
     code  and function
 }
 Note:
1.default visibility-mode is private
2.public: public member of base class become public member of derived class
3.private: public member of base class become the private member of derived class
4.private member of base class do not inherit.
*/
 class programmer:  public Employee{
     public:
     programmer(int intid){
         id=intid;
     }
     int languagecode=9;
     void setdata(){
         cout<<id<<endl;
     }

 };

int main() {
    Employee e1(5);
     cout<<e1.salary<<endl;
     //cout<<e1.id<<endl;
     programmer p1(2);
     cout<<p1.id<<endl;
     cout<<p1.languagecode<<endl;
     p1.setdata();
   //  p1.setdata();

    
    return 0;
}