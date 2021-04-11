#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    stack<int> s;
    for (int i = 0; i < 10; i++)
    {
        s.push(i);
    }
    cout<<s.size()<<endl;
    s.pop();
    cout<<s.size();
    
    return 0;
}