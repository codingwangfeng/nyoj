/**
  *  Author : WANG FENG
  *    File : x.c
  *    Date : 2014年 7月 1日 星期二 09时46分25秒 CST
  *    Desc :
  * History : 1.created on 2014年 7月 1日 星期二 09时46分25秒 CST by WANG FENG
  */

#include <stdio.h>
int main() 
{
  int t,m,n;
  scanf("%d",&t);
  while(t--){
    scanf("%d %d",&n,&m);
    if(m<2*n || 4*n<m || m %2)
      printf("No answer\n");
    else
      printf("%d %d\n",(4*n-m)/2,(m-2*n)/2);
  }
}
