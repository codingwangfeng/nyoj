/**
  *  Author : WANG FENG
  *    Date : 2014年 7月31日 星期四 09时33分58秒 CST
  * History : 1.created on 2014年 7月31日 星期四 09时33分58秒 CST by WANG FENG
  */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int m,dp[21],a[21],i,j,max;
int main(int argc, char** argv) {
  int num;
  scanf("%d",&num);
  while(num--){
    max=1;
    scanf("%d",&m);
    if(m == 0)
      printf("0\n");
    for(i=0;i<m;i++){
      dp[i] = 1;
      scanf("%d", a+i);
    }
    for(i=m-2;i>=0;i--){
      for(j=i+1;j<m;j++){
        if(a[i] > a[j] && dp[i] < dp[j]+1){
          dp[i] = dp[j] + 1;
        }
      }
      if(max < dp[i]) max = dp[i];
    }
    printf("%d\n", max);
  }
  return 0;
}

