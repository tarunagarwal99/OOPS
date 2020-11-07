#include<stdio.h>

int main(){
    FILE *fp;
    int len;
    fp=fopen("file1.txt","r");
    if(fp==NULL){
        printf("error opening file");
    }
    fseek(fp,0,0);
    len=ftell(fp);
    printf("Total size of the file.txt=%d bytes",len);
     return 0;
}