#include<stdio.h>
int i;
void func1(){
    i=10;
    printf("%d\n",i);
}
void func2(){
    int  i=40;
    printf("%d",i);
}


int main(){
    func1();
    func2();

     return 0;
}