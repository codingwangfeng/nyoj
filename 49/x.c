/**
  *  Author : WANG FENG
  *    Date : 2014年 7月29日 星期二 13时59分41秒 CST
  * History : 1.created on 2014年 7月29日 星期二 13时59分41秒 CST by WANG FENG
  */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int price[32], imp[32],dp[32][30001],i,j,N,m;
int max(int a,int b){return a>b?a:b;}
int main(int argc, char** argv) {
  int num;
  scanf("%d",&num);
  while(num--){
    memset(dp, 0, sizeof(dp));
    scanf("%d %d", &N, &m);
    for(i=0;i<m;i++){
      scanf("%d %d",price+i, imp+i);
    }
    for(i=0;i<m;i++){//物品个数
      for(j=0;j<=N;j++){//money
        if(j < price[i]){
          dp[i+1][j] = dp[i][j];
        }else{
          dp[i+1][j] = max(dp[i][j-price[i]]+price[i]*imp[i], dp[i][j]);
        }
      }
    }
    printf("%d\n",dp[m][N]);
  }
  return 0;
}

