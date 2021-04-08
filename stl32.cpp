#include<iostream>
#include<bits/stdc++.h>
using namespace std;
template<class T>
void display(priority_queue<T> q){
    while(!q.empty()){
        cout<<q.top ()<<" ";
        q.pop();
    }cout<<endl;
}  
int main() {
    priority_queue<int> q1;
    for (int i = 0; i < 10; i++)
    {
        q1.push(i);
    }
    display(q1);
    priority_queue<string> q2;
    q2.push("ab");
    q2.push("xy");
    q2.push("cd");
    q2.push("ef");
    display(q2);
    
    
    return 0;
}