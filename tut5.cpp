#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int age ;
    cout<<"tell me your age:"<<endl;
    cin>>age;
    if((age<18) && (age>0)){
        cout<<"you are  not allowed in the party"<<endl;
    }
    else if(age=18){
        cout<<"you are an kid and you will get the kid pass for the party."<<endl;
    }
    else if(age<1){
        cout<<"you are  not yet born."<<endl;

    }
    else {
        cout<<"you are allowed in the party."<<endl;
    }
    return 0;
}
