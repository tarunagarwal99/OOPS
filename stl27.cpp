#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v;
    for (int i = 1; i < 10; i++)
    {
        v.push_back(i);
    } 

    // v={1,2,3,4,5,6,7,8,9}s
    rotate(v.begin(),v.begin()+5,v.end());
    cout<<" Content of vector v is:";
    vector<int>::iterator it;
    for ( it = v.begin(); it!=v.end(); it++)
    {
        cout<<' '<<*it;
    }
    
    
    return 0;
}