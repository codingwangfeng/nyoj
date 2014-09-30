/**
 *  Author : WANG FENG
 *    Date : 2014年 7月14日 星期一 23时25分18秒 CST
 * History : 1.created on 2014年 7月14日 星期一 23时25分18秒 CST by WANG FENG
 */
#include <stdio.h>
#define MAXN 100
int a[MAXN];
int f(int m, int k)
{
  int i,j;
  for(i = m; i >= k; i--) 
  {
    a[k] = i;
    if(k > 1)
      f(i-1, k-1);
    else {
      for(j = a[0]; j > 0; j--)
        printf("%d", a[j]);
      printf("\n");
    }
  }
  return 0;
}
int main()
{
  int n,r;
  scanf("%d%d",&n,&r);
  a[0] = r;
  f(n,r);
}
