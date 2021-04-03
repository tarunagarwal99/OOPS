#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
     int arr[]={ 1,2,2,2,3,3,2,2,1};
    vector<int> v(9);
    vector<int>::iterator it ;
    it=unique_copy(arr,arr+9,v.begin());
   v.resize(it-v.begin());
    for (it = v.begin(); it!=v.end(); it++)
    {
        cout<<" "<<*it<<endl;
    }
    
    return 0;
    

}