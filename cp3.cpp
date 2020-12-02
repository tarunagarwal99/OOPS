#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int maxsubarraysum(int arr[],int n){
    int a=arr[0];
    int b=0;

    for(int i=1;i<n;i++){
        int c=a;
        a=b+arr[i];
        b=max(c,b);

    }
    return max(a,b);
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0;i<n ;i++)
        cin>>arr[i];
        cout<<maxsubarraysum(arr,n);    
    
    
    return 0;
}