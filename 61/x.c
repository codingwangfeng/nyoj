/**
  *  Author : WANG FENG
  *    Date : 2014年 7月30日 星期三 15时51分45秒 CST
  * History : 1.created on 2014年 7月30日 星期三 15时51分45秒 CST by WANG FENG
  */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int dp[51][51],map[51][51],i,j,m,n;
int max(int a,int b){return a>b?a:b;}
int isin(int i, int j){ return i>=1 && i <= m && j >=1 && j <= n;}
int go(int i, int j){
  if(dp[i][j] > 0){
    return dp[i][j];
  }
  if(isin(i-1,j) && isin(i,j-1)){
    dp[i][j] = max(go(i-1,j),go(1,j-1)) + map[i][j];
  }else if(isin(i-1,j)){
    dp[i][j] = go(i-1,j) + map[i][j];
  }else if(isin(i,j-1)){
    dp[i][j] = go(i,j-1) + map[i][j];
  }
  return dp[i][j];
}
int main(int argc, char** argv) {
  int num;
  scanf("%d",&num);
  while(num--){
    scanf("%d %d",&m,&n);
    for(i=1;i<=m;i++){
      for(j=1;j<=n;j++){
        scanf("%d", &map[i][j]);
      }
    }
    printf("%d\n", go(m,n));
  }
  return 0;
}

