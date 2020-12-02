#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> arr(1,0);    //by the use of vector we can resize it in runtime
    cout<<arr.size()<<endl;
    for (int i = 1; i < 9; i++)
    {
        arr.push_back(i);

    }
     for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";   
        
    }
    cout<<"\n"<<arr.size()<<endl;
     for (int i = 0; i < 3; i++)
    {
        arr.pop_back();   
        
    }
     for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";   
        
    }
     cout<<"\n"<<arr.size()<<endl;
    

    return 0;
}