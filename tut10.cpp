#include<iostream>
using namespace std;

int main() {
    for (int i = 0; i < 7; i++)
    {
        //continue statement only skip that value in which that continue statement is used
        if(i==2){
            continue;
        }
        cout<<i<<endl;
    }
    
    return 0;
}