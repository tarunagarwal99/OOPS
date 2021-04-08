#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 void displayList(list<int> l){
    for (auto it = l.begin(); it!=l.end(); it++)
    {
        cout<<*it<<' ';
    }
    
 }
int main() {
    list<int> l1;
    for (int i = 1; i <=10; i++)
    {
    l1.push_back(i);
    }
  //  displayList(l1);
    //cout<<l1.front()<<endl;
    list<int> l2;
    for (int i = 5; i <=15; i++)
    {
    l2.push_back(i);
    }
    l1.pop_front();
    l2.pop_back();
    //displayList(l1);
    //displayList(l2);
    l1.reverse();
    //displayList(l1);
    l1.swap(l2);
    //displayList(l1);
    //displayList(l2);
    list<int> l3(10,22);
    //displayList(l3);  //it will have 22 at 10 times
    l3.resize(7);  // here we resize the number of 22  from 10 to 7
    //displayList(l3);
    l3.assign(l2.begin(),l2.end());
    //displayList(l3);
    //cout<<l3.size();
    list<int> l4(l3);
   // cout<<(l3==l4)<<endl;
    // cout<<l3.capacity();     there is no capacity in list container
    l4.insert(l4.begin(),2,10);
    displayList(l4);
    l4.clear();
    cout<<l4.size()<<endl;
    cout<<!l4.empty()<<endl;
    cout<<l4.max_size()<<endl;
     
    return 0;
}