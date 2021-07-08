//rotated array
//must do cp question-gfg

//problem 2: day6

#include<iostream>
#include<bits/stdc++.h>
using namespace std;



class solution{

    public:
    void rotateArr(int arr[],int n,int d){

    }
};
int main() {
    int t;
    cin>>t;
    while(t--){
        int n,d;
        cin>>n>>d;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];

        }
        solution ab;
        ab.rotateArr(arr,d,n);
        for (int i = 0; i < n; i++)
        {
            cout<<arr[i]<<" ";

        }
        cout<<endl;

        
        
    }
    return 0;
}
