#include<iostream>
using namespace std;
//forwad declarition
class y;
class x{
    int data;
    public:
    void setdata(int value){
        data=value;
    }
    friend void add(x,y);


};
class y{
    int num;
    public:
    void setdata(int  value){
        num=value;
    }
    friend void add(x,y);
};
void add(x o1,y o2){
    cout<<"summing of data from x and y will be:"<<(o1.data+o2.num)<<endl;
}
int main() {
    x c1;
    y c2;
    c1.setdata(3);
    c2.setdata(4);
    add(c1,c2);
    
    return 0;
}