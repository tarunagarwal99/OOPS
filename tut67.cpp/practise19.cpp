#include<stdio.h>
#include<iostream>
//#include<bits/c++.h>
using namespace std;
int main()
{
int t;
cin>>t;
for(int i=0;i<t;i++){
    int n;
    long long int c;
    int a[1000];
    cin>>n>>c;
    for(int j=0;j<n;j++){
        cin>>a[j];
        c=c-a[j];
    }
    if(c>=0){
        cout<<"Yes/n";
    }
    else{
        cout<<"No/n";
    }
}
return 0;
}