/**
  *  Author : WANG FENG
  *    File : x.c
  *    Date : 2014年 7月 2日 星期三 10时46分17秒 CST
  *    Desc :
  * History : 1.created on 2014年 7月 2日 星期三 10时46分18秒 CST by WANG FENG
  */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char** argv) {
  int num;
  scanf("%d",&num);
  char sub[10];
  char src[1000];
  while(num--){
    scanf("%s",sub);
    scanf("%s",src);
    int sublen = strlen(sub);
    int srclen = strlen(src);
    int idx = 0, cnt=0;
    for(idx = 0; idx <= srclen - sublen; idx++){
      if(strncmp(src+idx,sub,sublen)==0){
        cnt++;
      }
    }
    printf("%d\n", cnt);
  }
  return 0;
}
