#include<bits/stdc++.h>
using namespace std;

void mergeArrays(int a[], int b[], int n, int m)
{
   
    map<int, bool> mp;
     
 
    for(int i = 0; i < n; i++)
    mp[a[i]] = true;
     
    for(int i = 0;i < m;i++)
    mp[b[i]] = true;
     
   
    for(auto i: mp)
    cout<< i.first <<" ";
}
 

int main()
{
    int a[] = {1, 3, 5, 7,9,13,25}, b[] = {2, 4, 6, 8,50,135,235};
     
    int size = sizeof(a)/sizeof(int);
    int size1 = sizeof(b)/sizeof(int);
     
    
    mergeArrays(a, b, size, size1);
     
    return 0;
}
 