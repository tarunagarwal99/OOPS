#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;


bool IsEven(int i){
    return  ((i%2)==0);
}
int main() {
vector<int> v;
for (int i = 0; i < 10; i++)
{
    v.push_back(i);
}
int c=count_if(v.begin(),v.end(),IsEven);
cout<<"Vector v contains "<<c<<" even values."<<endl;

    
    return 0;
}