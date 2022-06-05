#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() { 
    vector<int> v;
    v.push_back(2);
    v.push_back(4);
    v.push_back(5);
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;    
    return 0;
}