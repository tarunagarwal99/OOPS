#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    stack<int> s;
    s.push(0);
    s.push(1);
    s.push(2);
    while (!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
    {
        /* code */
    }
    
    return 0;
}