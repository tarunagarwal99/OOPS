#include<iostream>
using namespace std;


template<class T>
void swapp(T &a,T &b){
    T temp=a;
    a=b;
    b=temp;
}
template<class T1,class T2>
float average(T1 a,T2 b){
    float c=(a+b)/2.0;
    return c;
}
int main() {
    float x;
    int y=10,z=30;

    x=average(5,2);
    // cout<<x<<endl;
    printf("the average of these numbers is:%.3f",x);
    cout<<"the value of y and before swapping:"<<y<<" "<<z<<endl;
    swapp(y,z);
    cout<<"the value of y and after swapping:"<<y<<" "<<z<<endl;

    
    
    return 0;
}