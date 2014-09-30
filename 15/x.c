/**
  *  Author : WANG FENG
  *    Date : 2014年 7月15日 星期二 11时24分15秒 CST
  * History : 1.created on 2014年 7月15日 星期二 11时24分15秒 CST by WANG FENG
  */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
char str[128];
char dp[102][102];
int min(int a,int b){ return a>=b?b:a;}
int match(char a,char b){
  if(a == '(' && b == ')') return 1;
  if(a == '[' && b == ']') return 1;
  return 0;
}
int minmatch(int n){
  int i,j,k;
  memset(dp, 0, sizeof(dp));
  for(i=1;i<=n;i++) dp[i][i] = 1;
  for(i=1;i<=n;i++){
    for(j=i-1;j>0;j--){
      dp[j][i] = 102;
      for(k=j;k<=i;k++){
        if(match(str[j],str[k])) dp[j][i] = min(dp[j][i],dp[j+1][k-1]+dp[k+1][i]);
        if(match(str[k],str[i])) dp[j][i] = min(dp[j][i],dp[j][k-1]+dp[k+1][i-1]);
        if(!match(str[k],str[i])&&!match(str[j],str[k])) dp[j][i] = min(dp[j][i], dp[j][k-1]+dp[k+1][i]+1);
      }
    }
  }
  return dp[1][n];
}
int main(int argc, char** argv) {
  int num;
  scanf("%d",&num);
  while(num--){
    scanf("%s",str+1);
    printf("%d\n",minmatch(strlen(str+1)));
  }
  return 0;
}

