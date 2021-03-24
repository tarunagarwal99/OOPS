#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int arr[]={1,2,3,3,2,1,1,2};
    vector<int> v(arr,arr+8);
    int c=count(arr,arr+8,1);
    cout<<"1 occurs "<<c<<" times";
    return 0;
}