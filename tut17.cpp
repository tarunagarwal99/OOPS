#include<iostream>
using namespace std;
//default argument (it is changed when we get the new vaue otherwise it is same as default value)
float moneyReceived(int currentMoney,float factor=1.06){
    return currentMoney*factor; 
}
//constant argument  (it is used when we dont wsnt any change in your declared variable which is mostly used in refernce varibale)
int traun(const int *p){

}

int main() {
    int money=100000;
    cout<<"if you have "<<money<<" then after one year you will get "<<moneyReceived(money)<<" in your bank account."<<endl;
    
    return 0;
}