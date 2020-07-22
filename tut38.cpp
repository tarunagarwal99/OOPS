#include<iostream>
using namespace std;
class Number{
    int a;
    public:
    Number(){
        a=0;
        }
    Number(int num){
        a=num;
    } //when no copy constructor is found ,compiler supplies its own copy constructor
    Number(Number &obj){
         cout<<"copty constructor called!!!"<<endl;
        a=obj.a;
    }
    void display(){
        cout<<"the number of this object is:"<<a<<endl;
        }

};
int main() {  
    Number c1,c2,c3(45),z;
    c1.display();
    c2.display();
    c3.display();
    Number x(c2); //copy constructor calling
    x.display();
    z=c2;  //here copy constructor not called
    z.display();
    Number y=c3;
    y.display();
    



    
    return 0;
}