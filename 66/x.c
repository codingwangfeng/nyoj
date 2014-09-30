/**
  *  Author : WANG FENG
  *    File : x.c
  *    Date : 2014年 7月 1日 星期二 14时40分41秒 CST
  *    Desc :
  * History : 1.created on 2014年 7月 1日 星期二 14时40分41秒 CST by WANG FENG
  */

#include <stdlib.h>
#include <stdio.h>

int main(int argc, char** argv) {
  int num,k,x,y,t;
  scanf("%d",&num);
  while(num--){
    scanf("%d", &k);
    for(y=k+1;y<=2*k;y++){
      x = k*y/(y-k);
      t = k*y%(y-k);
      if( t == 0 && x >= y)
        printf("1/%d=1/%d+1/%d\n",k,x,y);
    }
  }
  return 0;
}

