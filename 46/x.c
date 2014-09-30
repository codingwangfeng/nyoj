/**
  *  Author : WANG FENG
  *    Date : 2014年 7月16日 星期三 16时38分45秒 CST
  * History : 1.created on 2014年 7月16日 星期三 16时38分45秒 CST by WANG FENG
  */

#include <stdlib.h>
#include <stdio.h>
char ret[100001];
char func(int n){
  if(ret[n] > 0) return ret[n];
  if(n <= 3) return n - 1;
  if(n%2 == 0){
    ret[n] =  func(n/2) + 1;
    return ret[n];
  }
  else {
    ret[n] = func(n/2) + 2;
    return ret[n];
  }
}
int main(int argc, char** argv) {
  int num,n;
  scanf("%d",&num);
  while(num--){
    scanf("%d",&n);
    printf("%d\n",(int)func(n));
  }
  return 0;
}

