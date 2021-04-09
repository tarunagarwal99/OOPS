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
void display(priority_queue<char,vector<char> ,greater<char>> q){
    while(!q.empty()){
        cout<<q.top ()<<" ";
        q.pop();
    }cout<<endl;
}  
class  compare{
    public:
    bool operator()(int a,int b){
        return (a%3>b%3);
    } 
};
void display(priority_queue<int,vector<int> ,compare> q){
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
    priority_queue<char,vector<char>,greater<char>> q4;
    q4.push('q');
    q4.push('a');
    q4.push('b');
    q4.push('y');
    display(q4);
    priority_queue<int,vector<int>,compare> q5;
    q5.push(10);
    q5.push(23);
    q5.push(13);
    q5.push(45);
    display(q5);
    
    
    return 0;
}