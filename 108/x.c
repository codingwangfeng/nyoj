/**
  *  Author : WANG FENG
  *    Date : 2014年 7月19日 星期六 22时39分57秒 CST
  * History : 1.created on 2014年 7月19日 星期六 22时39分57秒 CST by WANG FENG
  */

#include <stdlib.h>
#include <stdio.h>
int main(int argc, char** argv) {
  int i,N,M,si[1000001],m,n;
  scanf("%d %d",&N,&M);
  si[0] = 0;
  for(i=1;i<=N;i++){
    scanf("%d", si+i);
    si[i] += si[i-1];
  }
  while(M--){
    scanf("%d %d",&n,&m);
    printf("%d\n",si[m] - si[n-1]);
  }
  return 0;
}

