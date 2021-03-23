#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> v(5,15);
    for (int i = 0; i < 5; i++)
    {
        cout<<"Element at "<<i<<" is: "<<v.at(i)<<endl;
    }
    
    
    return 0;
}