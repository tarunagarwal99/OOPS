#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int myop1(int x,int y){
    return (x%y);
}
int myop2(int x,int y){
    return (y%x);
}

int main() {
    int arr[]={1,2,3,5,9,11,12};
    int out[7];
    adjacent_difference(arr,arr+7,out,myop1);
    for (int i = 0; i < 7; i++)
    {
        cout<<out[i]<<" ";
    }cout<<endl;
    adjacent_difference(arr,arr+7,out,myop2);
    for (int i = 0; i < 7; i++)
    {
        cout<<out[i]<<" ";
    }cout<<endl;
    


    
    return 0;
}