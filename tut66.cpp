#include<iostream>
using namespace std;
template<class T1=int,class T2=char,  class T3=float>
class tarun{
    public:
    T1 a;
    T2 b;
    T3 c;
    tarun(T1 x,T2 y,T3 z){
        a=x;
        b=y;
        c=z;
    }
    void display(){
        cout<<"the value of a is:"<<a<<endl;
        cout<<"the value of b is:"<<b<<endl;
        cout<<"the value of c is:"<<c<<endl;
    }
};

int main() {
    tarun<> obj1(4,'c',4.56);
    obj1.display();
    tarun<float,int,char> obj2(5.67,6,'o');   //if we dont want to use previously decalred datatype then we have to mark here other leave it
    obj2.display();
    
    return 0;
}