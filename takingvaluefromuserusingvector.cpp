#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, value=0;
    vector<int> v;
    cout<<"Enter the value of n:"<<endl;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>value;
        v.push_back(value);
    }
    for (int i = 0; i < n; i++)
    {
        cout<<v[i]<<" ";
    }
    
    
    return 0;
}