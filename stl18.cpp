#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
 bool Iseven(int i){
     return ((i%2)==0);
 }
int main() {
    vector<int> v;
    for (int i = 0; i < 10;i++)
    {
        v.push_back(i);
    }
    vector<int>::iterator it;
    it=find_if(v.begin(),v.end(),Iseven);
    if(it!=v.end()){
        cout<<"even number found in v."<<endl;
    }
    else{
        cout<<"even number not found in v."<<endl;
    }
    
    return 0;
}