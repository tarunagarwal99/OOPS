#include<stdio.h>

int main() {
int num,a,b,lead=0,i,name;
scanf("%d",&num);

	for(i=0;i<num;i++){
		scanf("%d",&a);
		scanf("%d",&b);
		if(a>b){
			if(lead<(a-b)){
				name=1;
				lead=a-b;
			}
			
		}
		else{
			if(lead<(b-a)){
				name=2;
				lead=b-a;
			}
		}
		
		
	}
	printf("%d %d",name,lead);

return 0;
}