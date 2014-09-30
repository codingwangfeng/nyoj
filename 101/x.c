/**
  *  Author : WANG FENG
  *    File : x.c
  *    Date : 2014年 7月 2日 星期三 08时11分26秒 CST
  *    Desc :
  * History : 1.created on 2014年 7月 2日 星期三 08时11分26秒 CST by WANG FENG
  */

#include <stdlib.h>
#include <stdio.h>
#include <math.h>
int main(int argc, char** argv) {
  int num;
  scanf("%d",&num);
  while(num--){
    float x,y,x1,y1,x2,y2;
    scanf("%f %f %f %f",&x1,&y1,&x2,&y2);
    x=x1>x2?x1-x2:x2-x1;
    y=y1>y2?y1-y2:y2-y1;
    printf("%.2f\n",sqrt(x*x+y*y));
  }
  return 0;
}

