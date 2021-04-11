#include<iostream>
#include<bits/stdc++.h>
using namespace std;
  template<class T>
  void display1(stack <T> s){
      while(!s.empty()){
          cout<<s.top()<<endl;
          s.pop();
      }
  }
  template<class T>
  void display(stack <T> s){
      int c=0;
      while(!s.empty()){
          if(c%10== 0)
               cout<<s.top()<<endl;
          s.pop();
          c++;
      }
  }
int main() {
    stack<int> s1;
    for (int i = 0; i < 100; i++)
    {
        s1.push(i);

    }
    cout<<s1.size()<<endl;
   // display1(s1);
    display(s1);

    
    return 0;
}