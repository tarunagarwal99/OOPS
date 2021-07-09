//problem 6- rearrange alternate +ve and -ve
//gfg
//must do coding question for placement in product based companies
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        solution ab;
        ab.rearrange(arr,n);
        for (int i = 0; i < n; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<"\n";
        
    }
    return 0;
} 