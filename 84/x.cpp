/**
 *  Author : WANG FENG
 *    File : x.c
 *    Date : 2014年 7月10日 星期四 16时41分23秒 CST
 *    Desc :
 * History : 1.created on 2014年 7月10日 星期四 16时41分23秒 CST by WANG FENG
 */

#include <stdlib.h>
#include <stdio.h>
int zeroNum(int n){
  int ret = 0;
  while (n>=5){
    n/=5;
    ret+=n;
  }
  return ret;
}
int main(int argc, char** argv) {
  int num;
  scanf("%d",&num);
  while(num--){
    int n;
    scanf("%d",&n);
    printf("%d\n",zeroNum(n));
  }
  return 0;
}
