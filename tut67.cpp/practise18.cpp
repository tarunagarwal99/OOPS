 
// C++ program to demonstrate the use of std::max_element 
#include <iostream> 
#include <algorithm> 
#include<stdio.h>
using namespace std; 
int main() 
{ 
    int n,a[1000];

    cin>>n;
    for (int  i = 0; i < n; i++){
        cin>>a[i];
    }
    int* i1=std::max_element(a, a+ n);
    cout << *i1 << "\n"; 
    return 0; 
} 