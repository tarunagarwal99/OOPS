#include<iostream>
using namespace std;
//function overloading
int volume(int n){
    return (n*n*n);
}
int volume(int l,int b,int h){
    return (l*b*h);
}
int volume(int r,int h){
    return (3.14*r*r*h);
}

int main() {
    cout<<"the volume od cylinder is:"<<volume(3,7)<<endl;
    cout<<"the volume od cube is:"<<volume(3)<<endl;
    cout<<"the volume od cuboid is:"<<volume(3,7,6)<<endl;
    return 0;
}