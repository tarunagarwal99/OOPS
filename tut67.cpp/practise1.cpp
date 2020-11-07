#include<iostream>
#include<set>
#include<string.h>
#include<functional>
using namespace std;

int main() {
    set<int> set={1,2,3,4,5,6,4,3,2};
     for(const auto& e: set){
         cout<<e<<endl;
     }
    return 0;
}