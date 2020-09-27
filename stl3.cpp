#include<iostream>
#include<vector>
using namespace std;

int main() {
    std::vector<int> vect1;
    vect1.reserve(1000);   //this will intitalize the size to be 1000 from starting ,and end the work load for coping and pasting the item when new size array is created. 
    for(int i=0;i<32;i++){
    vect1.push_back(i);
     cout<<"size:"<<vect1.size()<<"    capacity:"<<vect1.capacity()<<endl;
     }
    return 0;
}