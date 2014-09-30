/**
  *  Author : WANG FENG
  *    Date : 2014年 7月30日 星期三 15时51分45秒 CST
  * History : 1.created on 2014年 7月30日 星期三 15时51分45秒 CST by WANG FENG
  */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int dp[21][21],map[21][21],i,j,m,n;
int max(int a,int b){return a>b?a:b;}
int main(int argc, char** argv) {
  int num;
  scanf("%d %d",&m,&n);
  for(i=1;i<=m;i++){
    for(j=1;j<=n;j++){
      scanf("%d", &map[i][j]);
      dp[i][j] = map[i][j] + max(dp[i][j-1],dp[i-1][j]);
    }
  }
  printf("%d\n", dp[m][n]);
  return 0;
}

