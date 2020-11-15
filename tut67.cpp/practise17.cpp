#include <stdio.h>
#include<iostream>
#include <stdlib.h>
#include<algorithm>
using namespace std;
  int main()
  {
    int t,a,b,c=0,d=0;
    int arr[10005];
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
       scanf("%d%d",&a,&b);
       c=c+a;               //This Will Save All the Score Of Player 1 in all round
       d=d+b;               //This Will Save All the Score Of Player 1 in all round
       arr[i]=c-d;          //This store lead in each round and save it into a array
    }
    
    int* max=std::max_element(arr,arr+t);  //This will find the maximum lead by Player 1
    int* min=std::min_element(arr,arr+t); //This will find the max lead by Player 2
    
    *min=abs(*min);       //This Will take the positive value of player 2 as it will be negative
    if(*max>*min)         //Check If Player1 Lead>Player 2 Lead if Yes Print 1 else 2
    {
        printf("%d %d\n",1,*max);
    }
    else
    {
        printf("%d %d\n",2,*min);
    }
    
    return 0;
  }



