#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    int arr[]={3,1,2,4,5,8,7,6};
    vector<int> v(arr,arr+8);
    vector<int>::iterator it;
    it=find(v.begin(),v.end(),8);
    if(it!=v.end()){
        cout<<"Element found in v is:"<<*it<<endl;
    }
    else{
        cout<<"Element not found in v\n"<<*it<<endl;
    }
    
    return 0;
}