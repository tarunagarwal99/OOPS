#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void alter(stack<string> &s,string &x){
    if(x[0]=='/'){
        x=x.substr(1,x.length()-1);
        stack<string> temp;
        temp.swap(s);
        
    }
     string curr="";
     for(auto c:x){
         if(c!='/'){
             curr+=c;

         }
         else{
             if(curr==".."){
                if(!s.empty())    s.pop();
         }
         else{
             s.push(curr);  
         }
         curr="";
         }
     }
     if(curr==".."){
         if(!s.empty())  s.pop();

     }
     else{
         s.push(curr);
     }
}

void print(stack<string> &s){
    if(!s.empty()){
        string emp=s.top();
        s.pop();
        print(s);

         cout<<emp<<"/";
    }
}
void solve(){
    int n;
    cin>>n;
    string a,b;
    while (n--)     
    {
        cin>>a;
        stack<string> s;
        if(a=="pwd"){
            cout<<"/";
            stack<string> s2=s;
              print(s2);
        }
        else{
            cin>>b;
            alter(s,b);
        }
        
    }
    
}
int main() {
    int T;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}