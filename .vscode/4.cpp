//problem 4-plus one
//must do question for interview in product based companies 
//gfg question 

#include<iostream>
#include<bits/stdc++.h>
using namespace std;


class solution{
    public:
    vector<int> increament(vector<int>& arr,int n){
    int idx = arr.size()-1;
    while(idx >= 0){
        if(arr[idx] == 9){
            arr[idx]=0;
        }else{
            arr[idx] +=1;
            return arr;
        }
        idx--;
    }

    arr.insert(arr.begin(),1);
    return arr;
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
        solution ab;
        vector<int> res =ab.increament(arr,n);
        for (int i : res)
        {
            cout<<i<<" ";
        }
        cout<<endl;
        
        
    }
    
    return 0;
}