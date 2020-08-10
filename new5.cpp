#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"enter the size of array:"<<endl;

cin>> n;
int arr[n]; 
cout<<"element of the array is:"<<endl;
for (int i=0;i<n; i++){
    cin>>arr[i];
}
for (int i=n-1;i>=0; i--){
    cout<<arr[i]<<" ";
}

    return 0;
}