/**
  *  Author : WANG FENG
  *    File : x.c
  *    Date : 2014年 7月 1日 星期二 23时23分37秒 CST
  *    Desc :
  * History : 1.created on 2014年 7月 1日 星期二 23时23分37秒 CST by WANG FENG
  */

#include <stdlib.h>
#include <stdio.h>

int main(int argc, char** argv) {
  int num;
  scanf("%d",&num);
  while(num--){
    int n;
    scanf("%d", &n);
    char cnt = 0;
    while(n){
      if(n%2)
        cnt++;
      n>>=1;
    }
    printf("%d\n",cnt);
  }
  return 0;
}

