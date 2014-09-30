/**
  *  Author : WANG FENG
  *    File : x.c
  *    Date : 2014年 7月 1日 星期二 15时36分55秒 CST
  *    Desc :
  * History : 1.created on 2014年 7月 1日 星期二 15时36分55秒 CST by WANG FENG
  */

#include <stdlib.h>
#include <stdio.h>
#include <math.h>
int main(int argc, char** argv) {
  int num, n;
  double d;
  scanf("%d",&num);
  while(num--){
    d=0;
    scanf("%d", &n);
    while(n){
      d+=log10((double)n);
      n--;
    }
    printf("%d\n",(int)(d+1));
  }
	return 0;
}

