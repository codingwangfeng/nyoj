/**
  *  Author : WANG FENG
  *    File : x.c
  *    Date : 2014年 7月 1日 星期二 12时27分32秒 CST
  *    Desc :
  * History : 1.created on 2014年 7月 1日 星期二 12时27分32秒 CST by WANG FENG
  */

#include <stdlib.h>
#include <stdio.h>

int main(int argc, char** argv) {
  int num, idx = 0, n = 0, m = 0;
  int max, day;
  scanf("%d", &num);
  while(num--){
    max = -1;
    day = 0;
    for(idx = 0; idx < 7; idx ++){
      scanf("%d %d",&m,&n);
      if((m+n) > 8 && max < (m+n)){
        max = m+n;
        day = idx+1;
      }
    }
    printf("%d\n",day);
  }
	return 0;
}

