/**
  *  Author : WANG FENG
  *    Date : 2014年 7月15日 星期二 22时33分33秒 CST
  * History : 1.created on 2014年 7月15日 星期二 22时33分33秒 CST by WANG FENG
  */
 
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <algorithm>
using namespace std;
int n,m,used[10];
char ans[11];
void dfs(int x,int num)
{
  printf("\t%d %d ",x,num);
  int k = 0;
  for(k=0;k<=num;k++)printf("%c",ans[k]);
  printf("\n");
  if(num==m-1)
  {
    ans[m]='\0';
    printf("%s\n",ans);
    return;
  }
  int i;
  for(i=1;i<=n;i++)
  {
    if(!used[i])
    {
      used[i]=1;
      ans[num+1]=i+'0';
      dfs(i,num+1);
      used[i]=0;
    }
  }
}
int main()
{
  int i,t;
  scanf("%d",&t);
  while(t--)
  {
    scanf("%d%d",&n,&m);
    for(i=1;i<=n;i++)
    {
      memset(used,0,sizeof(used));
      used[i]=1;
      ans[0]=i+'0';
      dfs(i,0);
    }
  }
  return 0;
}        
