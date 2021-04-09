#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct A{
    void operator()(int i){
        cout<<i<<" ";
    }
};

int main() {
  vector<int> v;
  for (int i = 0; i < 5; i++)
  {
      v[i]=i+1;
  }   //instead of upper loop we can use this loop 
  for ( auto i:v){
      v[i]=i+1;
  }
  {
      /* code */
  }
  
  struct A obj;
  for_each(v.begin(),v.end(),obj);
  cout<<endl;
      
    return 0;
}