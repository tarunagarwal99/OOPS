#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> a{1,2,3,4,5,6,7,8,9};
    vector<int>::iterator it;
    for ( it = a.end(); it!=a.begin(); it--)
    {
        cout<<*it<<" ";
    }  //firstly garbage value is printed because iterator first point to a.end which doesnot have any value
    
    return 0;
}