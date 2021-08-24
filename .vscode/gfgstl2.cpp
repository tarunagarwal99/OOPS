

//  making pair of given array element 
//make pair of first element to last ,second element to second last and so on.
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<pair<int,int>> array_of_pairs(int arr[],int n){
    vector<pair<int,int>> p;
    int start=0,end=n-1;
    while (start<=end)
    {
        p.push_back({arr[start],arr[end]});
        start++;
        end--;
    }
    return p;
}

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
       
        vector<pair<int,int>> res = array_of_pairs(arr,n);

        for (int i = 0; i < res.size(); i++)
        {
            cout<<"("<<res[i].first<<","<<res[i].second<<")";
        }
        cout<<endl;
        
    }
    return 0;
}