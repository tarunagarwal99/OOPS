#include<iostream>
#include<vector>
using namespace std;

int main() {
    int n;    //size of the array
    cin>>n;
  //  int *arr[] = new int[n]();     we can do this but this is only intiaize the array with zero (what if we want to initalize this to some other value like 5 or -1 or anything)
    vector<int> arr(n,0);
     int q;   //number of Queries
     cin>>q;
     while (q--)
     {
        int l,r;    //left limit and right limit
        cin>>l>>r;
        arr[l]++;
        if(r+1<n){
            arr[r+1]--;
        }
     }
     //cummulative sum
     for (int  i = 1; i < n; i++)
     {
        arr[i] +=arr[i-1];
     }
     //printed the array
      for (int  i = 0; i < n; i++)
     {
        cout<<arr[i]<<" ";
     }
     
     
     
    return 0;
}