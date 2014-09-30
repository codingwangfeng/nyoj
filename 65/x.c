/**
  *  Author : WANG FENG
  *    File : x.c
  *    Date : 2014年 7月 1日 星期二 12时01分45秒 CST
  *    Desc :
  * History : 1.created on 2014年 7月 1日 星期二 12时01分45秒 CST by WANG FENG
  */

#include <stdlib.h>
#include <stdio.h>
int jiecheng(int n){
  int m=1;
  n = n - (n+1)%2;
  while(n>0){
    m*=n;
    n-=2;
  }
  return m;
}
int main(int argc, char** argv) {
  int num, n, m = 0;
  scanf("%d", &num);
  while(num--){
    m=0;
    scanf("%d", &n);
    while(n>0){
      m+=jiecheng(n);
      n--;
    }
    printf("%d\n",m);
  }
	return 0;
}

