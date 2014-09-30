/**
  *  Author : WANG FENG
  *    Date : 2014年 7月15日 星期二 22时06分41秒 CST
  * History : 1.created on 2014年 7月15日 星期二 22时06分41秒 CST by WANG FENG
  */

#include <stdlib.h>
#include <stdio.h>

int num,m,n,cnt,visit[10],out[10];
void printseq(int start, int left){
  int i;
  for(i=1;i<=n;i++){
    if(visit[i])continue;
    out[start] = i;
    visit[i] = 1;
    if(left > 1){
      printseq(start+1,left-1);
    }else{
      int j=1;
      for(j=1;j<=m;j++){
        printf("%d",out[j]);
      }
      printf("\n");
    }
    visit[i] = 0;
  }
}

int main(int argc, char** argv) {
  scanf("%d",&num);
  while(num--){
    scanf("%d %d",&n, &m);
    cnt = 0;
    printseq(1,m);
  }
  return 0;
}

