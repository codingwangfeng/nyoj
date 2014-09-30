/**
  *  Author : WANG FENG
  *    File : x.c
  *    Date : 2014年 7月 1日 星期二 22时34分24秒 CST
  *    Desc :
  * History : 1.created on 2014年 7月 1日 星期二 22时34分24秒 CST by WANG FENG
  */

#include <stdlib.h>
#include <stdio.h>

int main(int argc, char** argv) {
  int num;
  int month[] = {
    31,28,31,30,31,30,31,
    31,30,31,30,31
  };
  scanf("%d",&num);
  int y,m,d;
  int i;
  while(num--){
    scanf("%d %d %d",&y,&m,&d);
    month[1] = y%4?28:29;
    m-=2;
    while(m>=0){
      d+=month[m];
      m--;
    }
    printf("%d\n",d);
  }
	return 0;
}

