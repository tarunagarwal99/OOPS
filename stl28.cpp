#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    list<int> l1{1,2,3};
    list<int> l2{2,1,3};
    cout<<  (l2>l1)<<endl;
    cout<<(l1>=l2)<<endl;
    
    return 0;
}