#include<stdio.h>
int countFunctionCall(){
    int count=0;
    return ++count;

}
int main(){
    countFunctionCall();
    countFunctionCall();
    //countFunctionCall();
    //countFunctionCall();
    printf("%d times function called",countFunctionCall());
     return 0;
}