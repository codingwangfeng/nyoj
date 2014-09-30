/**
  *  Author : WANG FENG
  *    Date : 2014年 7月31日 星期四 14时11分48秒 CST
  * History : 1.created on 2014年 7月31日 星期四 14时11分48秒 CST by WANG FENG
  */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int a[100001],dp[100001],i,j,n;
int main(int argc, char** argv) {
  int num;
  while(scanf("%d",&n)>0){
    for(i = 0; i < n;i++){
      scanf("%d",a+i);
      dp[i] = 1;
    }
    for(i = n-2; i >= 0;i--){
      for(j = i+1; j < n;j++){
        if(a[i] < a[j]&& dp[i] < dp[j] + 1){
          dp[i] = dp[j] + 1;
        }
      }
    }
    printf("%d\n",dp[0]);
  }
  return 0;
}

