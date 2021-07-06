<<<<<<< HEAD
//Bubble sort


#include<iostream>
#include<bits/stdc++.h>
using namespace std;

   void bubbleSort(vector<int> &arr){
       int n=arr.size();
       for (int i = 0; i < n-1; ++i)
       {
           for (int j = 0; i < n-1; ++j)
           {
               if(arr[j]>arr[j+1]){
                   swap(arr[j],arr[j+1]);
               }
           }
        
           cout<<arr[i]; 
       }
      
       
   }

int main() {
    int arrSize;
    cin>>arrSize;
    vector<int> arr(arrSize);
    for (int i = 0; i < arrSize; ++i)
    {
        cin>>arr[i];
    }
    bubbleSort(arr);
    // for (int i = 0; i < arrSize;  i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
    
    
    
    return 0;
=======
//Bubble sort


#include<iostream>
#include<bits/stdc++.h>
using namespace std;

   void bubbleSort(vector<int> &arr){
       int n=arr.size();
       for (int i = 0; i < n-1; ++i)
       {
           for (int j = 0; i < n-1; ++j)
           {
               if(arr[j]>arr[j+1]){
                   swap(arr[j],arr[j+1]);
               }
           }
        
           cout<<arr[i]; 
       }
      
       
   }

int main() {
    int arrSize;
    cin>>arrSize;
    vector<int> arr(arrSize);
    for (int i = 0; i < arrSize; ++i)
    {
        cin>>arr[i];
    }
    bubbleSort(arr);
    // for (int i = 0; i < arrSize;  i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
    
    
    
    return 0;
>>>>>>> adbe25192af96d8a004f11cd7b031817436b8c60
}