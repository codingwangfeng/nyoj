/**
  *  Author : WANG FENG
  *    Date : 2014年 7月14日 星期一 19时01分21秒 CST
  * History : 1.created on 2014年 7月14日 星期一 19时01分21秒 CST by WANG FENG
  */

#include <stdlib.h>
#include <stdio.h>
//f(x)=a*f(x-2)+b*f(x-1)+c
char result[7];
int main(int argc, char** argv) {
  int num,f1,f2,f3,a,b,c,n,i;
  scanf("%d",&num);
  while(num--){
    scanf("%d %d %d %d %d %d",&f1,&f2,&a,&b,&c,&n);
    i = 3;
    while(i++<=n){
      f3 = a*f1+b*f2+c;
      f1 = f2;
      f2 = f3;
    }
    printf("%d\n",f3);
  }
  return 0;
}

