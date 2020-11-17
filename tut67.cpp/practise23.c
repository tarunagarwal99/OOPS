#include<stdio.h>

int main(){
    char *name[]={"ravi","ravindra","ravindrababu"};
    printf("%s",*(name+1));
     return 0;
}