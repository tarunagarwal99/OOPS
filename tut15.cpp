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
void swapReferenceVar(int &a,int &b){
    int temp =a;
    a=b;
    b=temp;
    

}
int & swapReferenceVar1(int &a,int &b){
    int temp =a;
    a=b;
    b=temp;
    return b;
    

}

int main() {
    int x=10,y=12;
    cout<<"the value of x before swapping:"<<x<<" the value of y before swapping : "<<y<<endl;
    swap(x,y); //call by value 
     cout<<"the value of x before swapping:"<<x<<" the value of y before swapping : "<<y<<endl;
    swapPointer(&x,&y);  //call by reference
    cout<<"the value of x after swapping:"<<x<<" the value of y after swapping : "<<y<<endl;
   swapReferenceVar(x,y);  //using refernce variable
    cout<<"the value of x after swapping using refernce variable:"<<x<<" the value of y after swapping using reference variable : "<<y<<endl;
    swapReferenceVar1(x,y)=455;  //using reference operator
    cout<<"the value of x after swapping using refernce variable:"<<x<<" the value of y after swapping using reference variable : "<<y<<endl;

    
    return 0;
}