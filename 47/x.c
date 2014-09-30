/**
  *  Author : WANG FENG
  *    Date : 2014年 7月17日 星期四 19时13分35秒 CST
  * History : 1.created on 2014年 7月17日 星期四 19时13分35秒 CST by WANG FENG
  */

#include <stdlib.h>
#include <stdio.h>

int si[1001],n,gone[1001];
int compare (const void * a, const void * b){return ( *(int*)a - *(int*)b );}
int min(int a, int b){return a>b?b:a;}
int go(int i){
  int time = 0,t1 = 0,t2 = 0; 
  while(i>2){
    t1 = 2*si[1] + si[0] + si[i];
    t2 = 2*si[0] + si[i] + si[i-1];
    time += min(t1,t2);
    i-=2;
  }
  if(i == 0){
    time += si[0];
  }
  if(i == 1){
    time += si[1];
  }
  if(i == 2){
    time += si[1] + si[2] + si[0];
  }
  return time;
}
int main(int argc, char** argv) {
  int num,i;
  scanf("%d",&num);
  while(num--){
    scanf("%d",&n);
    for(i=0;i<n;i++){
      scanf("%d",si+i);
    }
    qsort(si,n,sizeof(int),compare);
    printf("%d\n",go(n-1));
  }
  return 0;
}

