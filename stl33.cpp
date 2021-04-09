#include<iostream>
#include<bits/stdc++.h>
using namespace std;
   void fun(int i){
       cout<<i<<" ";
   }
int main() {
  vector<int> v;
  for (int i = 0; i < 5; i++)
  {
      v[i]=i+1;
  }
  for_each(v.begin(),v.end(),fun);
  cout<<endl;
      
    return 0;
}