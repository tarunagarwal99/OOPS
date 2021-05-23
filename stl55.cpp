#include<iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        int X,A,B,sum;
        cin>>X>>A>>B;
        sum=A+(100-X)*B;
        sum=sum*10;
         cout<<sum<<endl;
    }
    
    return 0;
}