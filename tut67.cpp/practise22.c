#include<stdio.h>

int main(){
    char s[6]="world";
    int i ,j;
    for(i=0,j=5;i<j;s[i++]=s[j--]){
        printf("%s",s);
    }
     return 0;
}