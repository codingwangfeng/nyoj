/**
  *  Author : WANG FENG
  *    Date : 2014年 7月14日 星期一 22时24分21秒 CST
  * History : 1.created on 2014年 7月14日 星期一 22时24分21秒 CST by WANG FENG
  */

#include <stdlib.h>
#include <stdio.h>
int n, k, arr[22],visit[22],sum,found;
void DFS(int start){
  printf(":%d\t%d\n",start,sum);
  if(sum >= k){
    if(sum == k){
      if(!found){
        found = 1;
        printf("YES\n");
      }
      for(int i=0;i<n;i++){
        if(visit[i])printf("%d ",arr[i]);
      }
      printf("\n");
    }
    return;
  }
  for(int i = start;i<n;i++){
    sum+=arr[i];
    printf("::%d\t%d\n",i,sum);
    visit[i] = 1;
    DFS(i+1);
    sum-=arr[i];
    visit[i] = 0;
  }
}
int main(int argc, char** argv) {
  int num;
  while(scanf("%d %d",&n,&k) == 2){
    for(int i=0;i<n;i++){
      scanf("%d",arr+i);
      visit[i] = 0;
    }
    sum=0;
    found = 0;
    DFS(0);
    if(!found)
      printf("NO\n");
  }
  return 0;
}

