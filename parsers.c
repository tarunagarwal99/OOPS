#include<stdio.h>
    l=getchar();
match(char t){
    if(l==t)
       l=getchar();
       else  
       printf("error");
}
E(){
    if(l=='i'){
        match('i');
        E1();
    }
}
E1(){
    
    if(l=='+'){
        match('+');
        match('i');
        E1();
    }
    else
    return;
}
match(char t){
    if(l==t)
       l=getchar();
       else  
       printf("error");
}
int main(){
    E();
    if(l=='$')
    printf("parsing sucess");
    
     return 0;
}