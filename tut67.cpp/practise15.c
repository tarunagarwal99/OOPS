#include <stdio.h>
int main(){


    int a,d,i,min=-1,e;
    scanf("%d",&a);
    int b[a],c[a];
for(i=0;i<a;i++){

   scanf("%d %d",&b[i],&c[i]);
}
for(i=0;i<a;i++){
   if(c[i]>b[i]){
        d=c[i]-b[i];
        if(d>min)
        min=d;
    if(d==min){
        e=2;
    }

    }
    if(c[i]<b[i]){
        d=b[i]-c[i];
        if(d>min)
        min=d;
        if(d==min){
        e=1;
    }
}

}
printf("%d %d",e,min);
return 0;
}