#include<iostream>
using namespace std;
class complex{
    int real,imaginery;
    public:
    void setdata(int a1,int b1)
    {
        real=a1;
        imaginery=b1;
    }
    void getdata(){
        cout<<"the real part is:"<<real<<endl;
        cout<<"the imaginery part is:"<<imaginery<<endl;
    }
};
int main() {
    complex c1;
    c1.setdata(45,56);
    c1.getdata();
    complex* c2=new complex;
   // (*c2).setdata(40,50);      this is as good as return as the below arroy representation of pointer.
    c2->setdata(40,50);
   // (*c2).getdata();            this is as good as return as the below arroy representation of pointer.
    c2->getdata();
    
    return 0;
}