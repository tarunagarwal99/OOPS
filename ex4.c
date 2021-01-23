#include<stdio.h>

int main(){
    int * p;   //p is a integer type pointer which only accept address
    int a=10;;
    p=&a;   //here p stores the address of a 
    printf("%d\n",p);
    printf("%d\n",a);
    printf("%d\n",&p);
    printf("%d\n",*p);

     return 0;
}