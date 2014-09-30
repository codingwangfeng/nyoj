/**
  *  Author : WANG FENG
  *    Date : 2014年 7月14日 星期一 23时22分04秒 CST
  * History : 1.created on 2014年 7月14日 星期一 23时22分04秒 CST by WANG FENG
  */
#include<stdio.h>
#include<stdlib.h>
int main()
{
  int n,i,j;
  int a[3][3];
  scanf("%d",&n);
  while(n--)
  {
    for(i=0;i<3;i++)
      for(j=0;j<3;j++)
        scanf("%d",&a[i][j]);
    for(i=0;i<3;i++)
    {
      for(j=0;j<3;j++)
        printf("%d ",a[j][i]);
      putchar('\n');
    }
  }
  return 0;
}
