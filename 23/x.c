/**
  *  Author : WANG FENG
  *    File : x.c
  *    Date : 2014年 7月 9日 星期三 17时23分05秒 CST
  *    Desc :
  * History : 1.created on 2014年 7月 9日 星期三 17时23分05秒 CST by WANG FENG
  */
#include<stdio.h>
int main()
{
  int n,N,M;
  scanf("%d",&n);
  while(n--)
  {
    scanf("%d%d",&N,&M);
    if(N%(M+1)==0)
      printf("Lose\n");
    else
      printf("Win\n");
  }
  return 0;
}
