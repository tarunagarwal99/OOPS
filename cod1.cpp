#include<iostream>
#include<stdio.h>
struct  STRUCT
{
    int a=5;
    int func(){
        printf("%d",a);
    }
};


int main(){
    struct STRUCT s;
    s.func();
     return 0;
}