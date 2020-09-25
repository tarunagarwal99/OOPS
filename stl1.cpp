#include<iostream>
#include<algorithm>
#include<vector>
//#include<stdfix.h>
using namespace std;

int main() {

    //c++ stl
    int intarray[5]={45,34,23,12,1};
    vector<int> intlist(intarray,intarray+5);
    // intlist.push_back(34);
    // intlist.push_back(45);
    // intlist.push_back(67);
    // intlist.push_back(23);   
     


     cout<<"List elements are: ";
     for(int i=0;i<5;i++){
         cout<<intlist[i]<<" ";
    }
    cout<<endl;
    

    
    // cout << "Output of begin and end: "; 
    // for (auto i = g1.begin(); i != g1.end(); ++i) 
    //     cout << *i << " "; 
  
    // cout << "\nOutput of cbegin and cend: "; 
    // for (auto i = g1.cbegin(); i != g1.cend(); ++i) 
    //     cout << *i << " "; 
  
    // cout << "\nOutput of rbegin and rend: "; 
    // for (auto ir = g1.rbegin(); ir != g1.rend(); ++ir) 
    //     cout << *ir << " "; 
  
    // cout << "\nOutput of crbegin and crend : "; 
    // for (auto ir = g1.crbegin(); ir != g1.crend(); ++ir) 
    //     cout << *ir << " "; 
  
    
    
    return 0;
}