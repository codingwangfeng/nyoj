#include <string.h>
#include <stdio.h>
int main(int argc, char** argv) 
{
  char str[10001];
  int num,i,j,max,n;
  int dp[10001];
  scanf("%d",&num);
  while(num--){
    max = 0;
    scanf("%s", str);
    n = strlen(str);
    for(i=0;i<n-1;i++){
      dp[i]=1;
    }
    for(i=n-2;i>=0;i--){
      for(j=i+1;j<=n-1;j++){
        if(str[i] < str[j] && dp[i] < dp[j]+1){
          dp[i] = dp[j]+1;
        }
      }
    }
    for(i=0;i<n;i++){
      if(dp[i]>max){
        max = dp[i];
      }
    }
    printf("%d\n",max);
  }
  return 0;
}

