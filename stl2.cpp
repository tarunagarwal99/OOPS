#include<iostream>
#include<array>
using namespace std;

int main() {
    std::array<int,5> arr1;     //declation of array
    

    std::array<int ,5> arr1={1,2,3,4,5};   //initialization list
    std::array<int,5> arr2{2,4,5,7,8};   ///uniform initialization

    std::array<int,5> arr3;
    arr3={34,56,78,90,67};
    return 0;
}