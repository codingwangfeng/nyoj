/**
  *  Author : WANG FENG
  *    Date : 2014年 7月29日 星期二 14时56分02秒 CST
  * History : 1.created on 2014年 7月29日 星期二 14时56分02秒 CST by WANG FENG
  */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char** argv) {
  int num;
  char a[1001],b[1001];
  while(scanf("%s %s",a,b)==2){
    if(a[0] == '0' && a[1] == 0 && b[0] == '0' && b[1] == 0){
      break;
    }
    int ta,tb;
    ta = a[0] == '-';
    tb = b[0] == '-';
    if(ta == tb){
      int ret = strcmp(a+ta,b+tb);
      if(ret > 0){
        printf("a%cb",ta == 0 ? '>':'<');
      }else if(ret < 0){
        printf("a%cb",ta == 0 ? '>':'<');
      }else{
        printf("a==b");
      }
    }else{
      printf("a%cb",ta > tb ? '<':'>');
    }
    printf("\n");
  }
  return 0;
}

