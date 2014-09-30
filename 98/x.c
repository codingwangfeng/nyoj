/**
  *  Author : WANG FENG
  *    File : x.c
  *    Date : 2014年 7月 1日 星期二 23时15分42秒 CST
  *    Desc :
  * History : 1.created on 2014年 7月 1日 星期二 23时15分42秒 CST by WANG FENG
  */

#include <stdlib.h>
#include <stdio.h>

int main(int argc, char** argv) {
  int num;
  scanf("%d",&num);
  char level[] = {'E','D','C','B','A'};
  while(num--){
    int score;
    scanf("%d",&score);
    if(score == 100)
      score--;
    score = score > 50? score -50:0;
    printf("%c\n",level[score/10]);
  }
	return 0;
}

