#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main() {

    int arr[]={1,2,3,3,2,1,1,2};
    vector<int> v(arr,arr+8);
    sort(v.begin(),v.end());
    vector<int>::iterator lo=lower_bound(v.begin(),v.end(),2);
    vector<int>::iterator up=upper_bound(v.begin(),v.end(),2);
    cout<<"Lower bound is at pos:"<<(lo-v.begin());
    cout<<"Upper bound is at pos:"<<(up-v.begin());
    return 0;
}