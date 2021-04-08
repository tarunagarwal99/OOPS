#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    priority_queue<int,vector<int>,greater<int>> q;   //by use of greater function we reverse our output.
    q.push(0);
    q.push(2);
    q.push(1);
    q.push(7);
    q.push(4);
    while (!q.empty())
    {
        cout<<'\t'<<q.top();
        q.pop();
    }
    
    return 0;
}