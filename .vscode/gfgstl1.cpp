// simple formulas and basics of stl in c++
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {10,20,30,40,50,60,70,80,90};
    vector<int>::iterator it = v.begin();
    cout<<(*it)<<endl;
    it++;
    cout<<(*it)<<endl;
    it=next(it);
    cout<<(*it)<<endl;
    it= next(it,2);  //it will print address of element which is at next 2 position later to present one
    cout<<(*it)<<endl;
    it=prev(it,2);   //it will print two  element before the previous element 
    cout<<(*it)<<endl;


    return 0;
}