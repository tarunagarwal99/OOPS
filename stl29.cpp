#include<iostream>
#include<bits/stdc++.h>
#include<list>
using namespace std;

int main() {
    list<int> l1;
    l1.push_back(0);
    l1.push_back(1);
    l1.push_back(2);
    l1.push_back(3);
    list<int> l2;
    l2.push_back(4);
    l2.push_back(5);
    l2.push_back(6);
    l2.push_back(7);
    l2.insert(l2.begin(),l1.begin(),l1.end());


    // we cannnot access element of list like this we have to declare and iterator.
    // for (int i = 0; i < l2.size(); i++)
    // {
        // cout<< l2[i]<<" ";
    // }

    list<int>::iterator it;
    for (auto it =l2.begin(); it!=l2.end(); it++)
    {
        cout<<*it<<' ';
    }
    
    
    
    return 0;
}