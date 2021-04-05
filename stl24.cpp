#include<iostream>

#include<vector>
#include<algorithm>
using namespace std;

int main() {
    vector<int> v;
    for (int i = 0; i < 10; i++)
    {
        v.push_back(i);
    }
    vector<int>::iterator it;
    random_shuffle(v.begin(),v.end());
    for (it=v.begin(); it!=v.end(); it++)
    {
       cout<<' '<<*it; 
    }
    
    
    
    return 0;
}