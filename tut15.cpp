#include<iostream>
using namespace std;
void swap(int a,int b){
    int temp =a;
    a=b;
    b=temp;
}
void swapPointer(int* a, int* b){
    int temp =*a;
    *a=*b;
    *b=temp;
}

int main() {
    int x=10,y=12;
    cout<<"the value of x before swapping:"<<x<<" the value of y before swapping : "<<y<<endl;
    swap(x,y); //call by value 
     cout<<"the value of x before swapping:"<<x<<" the value of y before swapping : "<<y<<endl;
    swapPointer(&x,&y);  //call by reference
    cout<<"the value of x after swapping:"<<x<<" the value of y after swapping : "<<y<<endl;

    
    return 0;
}