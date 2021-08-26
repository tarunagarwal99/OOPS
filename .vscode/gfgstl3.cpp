//first version to iterate the element in an vector

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int arr[]={10,20,30};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int> v(arr,arr+n);   //rbegin pint to the last element and rend point to hte element ehich is place before arr[0]
    for (auto  it  = v.rbegin(); it != v.rend(); it++)
    {
      cout<<(*it)<<" ";   // gives the value of that iterator
    }
    
    return 0;
}