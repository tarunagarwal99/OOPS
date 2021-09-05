//problem 1-maths
//codechef must do question
//placement series

#include<iostream>
#include<bits/stdc++.h>
using namespace std;


class solution{
    public:
     int missingNumber(vector<int>& array, int n) {
        int total = (n + 1) * (n + 2) / 2;
    for (int i = 0; i < n; i++)
        total -= array[i];
    return total;
    }

};

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        solution obj;
        cout<<obj.missingNumber(arr,n)<<"\n";
        
    }
    return 0;
}