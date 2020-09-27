#include<iostream>
using namespace std;
template<class T1,class T2>

float average(T1 a,T2 b){
    float c=(a+b)/2.0;
    return c;
}
int main() {
    float x;
    x=average(5,2);
    // cout<<x<<endl;
    printf("the average of these numbers is:%.3f",x);
    
    return 0;
}