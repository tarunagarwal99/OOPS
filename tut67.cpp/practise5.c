#include<stdio.h>

int main(){
    int i=10;
    register *a=&i;   //here register is a keyword from storage class.
    printf("%d",*a);
     return 0;
}