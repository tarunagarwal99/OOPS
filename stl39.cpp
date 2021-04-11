#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool myfun(int i, int j){
    return (i==j+3);
}

int main() {
      int arr[]={5,20,5,30,30,20,13,10,10,20};
    vector<int> v(arr,arr+10);
    vector<int>::iterator it;
    it=adjacent_find(v.begin(),v.end(),myfun);
    if(it!=v.end()){
        cout<<"Found:"<<*it<<endl;
    }
    
    return 0;
}