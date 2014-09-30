/**
  *  Author : WANG FENG
  *    Date : 2014年 7月30日 星期三 11时54分48秒 CST
  * History : 1.created on 2014年 7月30日 星期三 11时54分48秒 CST by WANG FENG
  */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int tower[101][101],dp[101][101],num,i,j,imax;
int max(int a, int b){return a>b?a:b;}
int dfs(int i,int j){
  if(dp[i][j]>0){
    return dp[i][j];
  }
  if(j == 0){
    dp[i][j] = dfs(i-1,j)+tower[i][j];
  }else if (j==i){
    dp[i][j] = dfs(i-1,j-1)+tower[i][j];
  }else{
    dp[i][j] = max(dfs(i-1,j),dfs(i-1,j-1)) + tower[i][j];
  }
  return dp[i][j];
}
int main(int argc, char** argv) {
  scanf("%d",&num);
  for(i=0;i<num;i++){
    tower[i] = (int*)malloc(sizeof(int)*(i+1));
    for(j=0;j<=i;j++){
      scanf("%d",&tower[i][j]);
    }
    dp[i] = (int*)malloc(sizeof(int)*(i+1));
  }
  imax = 0;
  dp[0][0] = tower[0][0];
  for(i=0;i<num;i++){
    int sum = dfs(num-1,i);
    imax = max(sum, imax);
  }
  printf("%d\n",imax);
  return 0;
}

