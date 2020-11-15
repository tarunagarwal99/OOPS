#include<stdio.h>

int main(){
    FILE *fp;
    char ch;
    fp=fopen("test.txt","w");
    printf("enter data:");
    while((ch=getchar())!=EOF){
        putc(ch,fp);
        
    }
    fclose(fp);
    fp=fopen("one.txt","r");
    while((ch=getc(fp))!=EOF){
        //printf("%c",ch);
        putc(ch,fp);   //here we can use any one of them. 
    }
     return 0;
}