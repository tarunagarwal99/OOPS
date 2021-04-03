#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    int arr[]={ 1,2,2,2,3,3,2,2,1};
    vector<int> v(arr,arr+9);
    vector<int>::iterator it ;
    it=unique(v.begin(),v.end());
    v.resize(it-v.begin());
    for (it = v.begin(); it!=v.end(); it++)
    {
        cout<<" "<<*it<<endl;
    }
    // this prgram is without predicate
    return 0;
}