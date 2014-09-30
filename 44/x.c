/**
  *  Author : WANG FENG
  *    Date : 2014年 7月28日 星期一 20时32分41秒 CST
  * History : 1.created on 2014年 7月28日 星期一 20时32分41秒 CST by WANG FENG
  */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char** argv) {
  int num,n,a,max,sum,first;
  scanf("%d",&num);
  while(num--){
    scanf("%d",&n);
    sum = 0;
    first = 1;
    while(n--){
      scanf("%d",&a);
      if(first) {
        max = a;
        first = 0;
      }
      sum += a;
      if(sum > max){
        max = sum;
      }
      if(sum < 0){
        sum = 0;
      }
    }
    printf("%d\n", max);
  }
  return 0;
}

