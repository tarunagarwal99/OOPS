#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int arr[]={1,2,3,5,9,11,12};
    int out[7];
    adjacent_difference(arr,arr+7,out);
    for (int i = 0; i < 7; i++)
    {
        cout<<out[i]<<" ";
    }
    cout<<endl;
    adjacent_difference(arr,arr+7,out,multiplies<int>());
    for (int i = 0; i < 7; i++)
    {
        cout<<out[i]<<" ";
    }
    cout<<endl;
    
    
    return 0;
}