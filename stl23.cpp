#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    vector<int> v(10);  
    reverse_copy(arr,arr+10,v.begin());
    cout<<"Content of vector v :"<<endl;
    vector<int>::iterator it;
    for ( it = v.begin(); it !=v.end(); it++)
    {
        cout<<' '<<*it;
    }
        
    
    return 0;
}