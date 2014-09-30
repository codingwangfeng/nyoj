/**
  *  Author : WANG FENG
  *    Date : 2014年 7月11日 星期五 15时43分44秒 CST
  * History : 1.created on 2014年 7月11日 星期五 15时43分44秒 CST by WANG FENG
  */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main(int argc, char** argv) {
  int num, len, i, j, cur;
  char str[1000001];
  scanf("%d",&num);
  while(num--){
    scanf("%s", str);
    len = strlen(str);
    cur = 0;
    for(i = 0;i < len ; i++){
      cur = (cur*10 + str[i] - '0')%10003;
    }
    printf("%d\n",cur);
  }
  return 0;
}

