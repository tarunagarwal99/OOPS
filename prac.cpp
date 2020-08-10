#include<iostream>
#include<vector>
using namespace std;
//variable length array 
int main(){
    int n,q,k,i,j;
    cout<<"enter the value of n and q:";
    
    cin >> n >> q;
   vector<vector<int> >arr(n);
    for (i=0; i<n; ++i){
        cout<<"enter the value of k[i]: "<<endl;
        cin >> k;
        arr[i].resize(k);
           cout<<"the value of element of referenced array is:"<<endl;
        for(j=0 ; j<k; ++j){
         
            cin >> arr[i][j];
        }       
    }

    for(int l=0; l<q; ++l){
        cout<<"enter the value of i and j:"<<endl;
        cin >> i >> j;
        cout << arr[i][j]<<endl;
    }  
    
     return 0;
}
