/**
  *  Author : WANG FENG
  *    Date : 2014年 7月27日 星期日 17时13分15秒 CST
  * History : 1.created on 2014年 7月27日 星期日 17时13分15秒 CST by WANG FENG
  */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char** argv) {
  int num,M,X,Y,Z;
  scanf("%d",&num);
  while(num--){
    scanf("%d %d %d %d", &M,&X,&Y,&Z);
    printf("%.2f\n",1.0f*X*M/(Y-X)*Z);
  }
  return 0;
}

