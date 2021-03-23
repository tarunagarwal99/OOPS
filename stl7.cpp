#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> v(10);
    cout<<"The capacity of v is:"<<v.capacity()<<endl;
    v.reserve(20);
    cout<<"The capacity of v is:"<<v.capacity()<<endl;
    return 0;
}