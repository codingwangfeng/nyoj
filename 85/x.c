/**
  *  Author : WANG FENG
  *    File : x.c
  *    Date : 2014年 7月10日 星期四 19时22分31秒 CST
  *    Desc :
  * History : 1.created on 2014年 7月10日 星期四 19时22分31秒 CST by WANG FENG
  */

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(int argc, char** argv) {
  int num;
  scanf("%d",&num);
  while(num--){
    int n,x,y,m,d;
    scanf("%d",&n);
    m = floor(sqrt(2*n));
    if(m*(m+1)/2 < n)
      m++;
    d = n-(m)*(m-1)/2;
    if(m%2){
      x = m - d + 1;
      y = d;
    }else{
      x = d;
      y = m - d + 1;
    }
    printf("%d/%d\n",x,y);
  }
  return 0;
}

