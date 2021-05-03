#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    deque<int> q{1,2,3};
    for (int i = 10; i < 40 ; i+=10)
    {
        q.push_front(i);
            }
    cout<<q.size()<<endl;
    for (auto it = q.begin(); it!=q.end() ; it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    auto it=q.cbegin();
    it++;
    cout<<(*it)<<endl;
    deque<string> q1{"abc","def","gh"};
     // stack using deque

     deque<int> s;
     s.push_back(1);
     s.push_back(2);
     s.push_back(3);

     while(!s.empty()){
         cout<<s.back()<<" ";
         s.pop_back();
     }


    
    return 0;
}