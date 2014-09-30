/**
  *  Author : WANG FENG
  *    Date : 2014年 7月17日 星期四 16时00分02秒 CST
  * History : 1.created on 2014年 7月17日 星期四 16时00分02秒 CST by WANG FENG
  */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int dp[1010][1010];
char s1[1010], s2[1010];
int LCS(){
  memset(dp,0,sizeof(dp));
  int i,j,m=strlen(s1),n=strlen(s2);
  for(i=1;i<=m;i++){
    for(j=1;j<=n;j++){
      if(s1[i-1] == s2[j-1])
        dp[i][j] = dp[i-1][j-1] + 1;
      else
        dp[i][j] = dp[i-1][j] > dp[i][j-1] ? dp[i-1][j] : dp[i][j-1];
    }
  }
  return dp[m][n];
}
int main(int argc, char** argv) {
  int num;
  scanf("%d",&num);
  while(num--){
    scanf("%s",s1);
    scanf("%s",s2);
    printf("%d\n",LCS());
  }
  return 0;
}

