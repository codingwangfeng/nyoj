/**
  *  Author : WANG FENG
  *    File : x.c
  *    Date : 2014年 7月 1日 星期二 20时14分09秒 CST
  *    Desc :
  * History : 1.created on 2014年 7月 1日 星期二 20时14分09秒 CST by WANG FENG
  */

#include <stdlib.h>
#include <stdio.h>

int main(int argc, char** argv) {
  int n,m,max,min,maxunit, minunit, ca;
  while(1){
    scanf("%d %d",&m,&n);
    if(0 == n && m == 0){
      break;
    }
    max = m>n?m:n;
    min = m>n?n:m;
    ca = 0;
    int cnt = 0;
    while(min){
      minunit = min%10;
      maxunit = max%10;
      //printf("x:%d %d\n", minunit, maxunit);
      if(minunit + maxunit + ca >= 10){
        ca = 1;
        cnt+=1;
      }else{
        ca = 0;
      }
      min = min/10;
      max = max/10;
    }
    printf("%d\n",cnt);
  }
	return 0;
}
