#include<iostream>
using namespace std;

int main() {
    int marks[]={34,45,56,78};
    int* p=marks;  //here we doesnot require '&' because array is also represent the address of its first element 
    cout<<p<<endl; //this show the address of its first value
    cout<<*p<<endl;// this show the value of first element of the array
    cout<<*(p+1)<<endl;
    cout<<*(p+2)<<endl;
    cout<<*(p+3)<<endl;
    cout<<*(p+1)<<endl;
    cout<<*(p++)<<endl;
    cout<<*(++p)<<endl;


    return 0;
}