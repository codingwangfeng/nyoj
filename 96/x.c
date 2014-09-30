/**
  *  Author : WANG FENG
  *    File : x.c
  *    Date : 2014年 7月 1日 星期二 23时04分55秒 CST
  *    Desc :
  * History : 1.created on 2014年 7月 1日 星期二 23时04分55秒 CST by WANG FENG
  */

#include <stdlib.h>
#include <stdio.h>

int main(int argc, char** argv) {
  int num;
  scanf("%d",&num);
  while(num--){
    int w = 0,cnt = 1, b = 0;
    scanf("%d",&w);
    b = w;
    while(w/10){
      w/=10;
      cnt*=10;
    }
    printf("%d\n",b-w*cnt);
  }
	return 0;
}

