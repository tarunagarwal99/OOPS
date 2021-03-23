#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> v;  // create the default constructor with zero element in it.
    // v[0]=1;   // this one gives us the segmentation fault
   v.push_back((1));

    cout<<v[0]<<endl;
    vector<int> v1(v); //copy constructor
    v1[0]=6;
    cout<<v1[0]<<endl;
    vector<char> v2(5,66);  // here we create an character vector with all 5 elemnet ha value 66(here ascii value of 'B' is 66)
    cout<<v2.size()<<endl;
    cout<<v2[3]<<endl;
    vector<int> v3(v.begin(),v.end());
    v3.push_back((4));
    cout<<v3[1]<<endl;
    // cout<<v.at(1)<<endl;    // this is out of bound error or out of range.
     cout<<(v>v3);   //In boolean algebra if value is true then it will return 1 otherwise 0

     vector<int> a(10);
     for (int i = 0; i < 10; i++)
     {
         a[i]=i+1;
     }
         vector<int> b(a);
         a.clear();
         cout<<"The size is "<<a.size()<<endl;
         cout<<"The capacity is "<<a.capacity()<<endl;
      
     

    
    return 0;
}