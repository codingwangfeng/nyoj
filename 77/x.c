/**
  *  Author : WANG FENG
  *    File : x.c
  *    Date : 2014年 7月 1日 星期二 22时44分27秒 CST
  *    Desc :
  * History : 1.created on 2014年 7月 1日 星期二 22时44分27秒 CST by WANG FENG
  */

#include <stdlib.h>
#include <stdio.h>

int main(int argc, char** argv) {
  int n,k;
  scanf("%d %d",&n,&k);
  char * a = (char*)malloc(sizeof(char)*n);
  int idx = 0;
  for(idx = 0; idx < n; idx++)a[idx]=0;
  for(idx = 1; idx <= k; idx++){
    int j = 0;
    for(j = idx-1; j <= n; j+=idx){
      a[j] = (a[j]+1)%2;
    }
  }
  for(idx=0;idx<n;idx++){
    if(a[idx])
      printf("%d ",idx+1);
  }
  printf("\n");
  free(a);
  return 0;
}

