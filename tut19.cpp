#include<iostream>
using namespace std;
int fib(int n){
    if(n<=1){
        return 1;
    }
    return fib(n-1)+fib(n-2);
}
int main() {
    int a;
    cout<<"enter the value of a:"<<endl;
    cin>>a;
    cout<<"the value at "<<a<<" in fibinacci series is:"<<fib(a)<<endl;

    return 0;
}