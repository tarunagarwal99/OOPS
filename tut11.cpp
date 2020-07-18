#include<iostream>
using namespace std;

int main() {
    int a=3;
    int* b=&a; //pointer variable where & is (address of) operator//and * is dereferencing variable 
    cout<<"the value of address of a is:"<<&a<<endl;
    cout<<"the value of address of a is:"<<b<<endl;
    cout<<"the value of b is:"<<*b<<endl;
    
    int** c=&b; //pointer ke address ko store krne wala pointer
    cout<<"the adresss od b is"<<&b<<endl;
    cout<<"the address os c is"<<c<<endl;
    cout<<"the value at address of b is:"<<**c<<endl;
    return 0;
}