//second method to insert an element in the vector
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//here value is changed because we do it by pasiing the value by reference
void func(vector<int> &v){
    v.push_back(12);
    v.push_back(23);
}

int main() {
    vector<int> v{5,8,10};
    func(v);
  for(auto i:v){
      cout<<i<<" ";
  }
    
    
    return 0;
}