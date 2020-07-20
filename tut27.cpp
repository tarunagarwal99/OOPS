#include<iostream>
using namespace std;
class complex{
    int a,b;
    public:
    void setNumber(int v1,int v2){
        a=v1;
        b=v2;
    }
    void printNumber(void){
        cout<<"your complex number is:"<<a<<" + "<<b<<"i"<<endl;
    }
    friend complex setcomplex(complex o1,complex o2);

};
complex setcomplex(complex o1,complex o2){
    complex o3;
    o3.setNumber((o1.a+o2.b),(o1.b+o2.b));
    return o3;

}
int main() {
    complex c1,c2,sum;
    c1.setNumber(2,4);
    c1.printNumber();
    c2.setNumber(6,8);
    c2.printNumber();
    sum=setcomplex(c1,c2);
    sum.printNumber();
    
    return 0;
}