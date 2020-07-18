#include<iostream>
using namespace std;
 int sum(int, int);
 void g();
int main() {
    int num1,num2;
    cout<<"enter the first variable:"<<endl;
    cin>>num1;
    cout<<"enter the first variable:"<<endl;
    cin>>num2;
    cout<<"the sum is:"<<sum(num1,num2)<<endl; //actual parameters
     g();
    return 0;
}
//formal parameters
int sum(int a,int b){
    int c=a+b;
    return c;
}
void g(){
    cout<<"\nhello,good morning";
}