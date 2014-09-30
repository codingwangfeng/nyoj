/**
  *  Author : WANG FENG
  *    Date : 2014年 7月30日 星期三 19时05分35秒 CST
  * History : 1.created on 2014年 7月30日 星期三 19时05分35秒 CST by WANG FENG
  */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int dp[128];
int cntsteps(int n){
  if(dp[n] > 0){
    return dp[n];
  }
  if(n == 2){
    return 1;
  }
  if(n == 1){
    return 1;
  }
  dp[n] = cntsteps(n-1) + cntsteps(n-2);
  return dp[n];
}
int main(int argc, char** argv) {
  int num;
  scanf("%d",&num);
  while(num--){
    int n;
    scanf("%d",&n);
    printf("%d\n", cntsteps(n));
  }
  return 0;
}

