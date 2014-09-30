/**
  *  Author : WANG FENG
  *    File : x.c
  *    Date : 2014年 7月 3日 星期四 10时48分34秒 CST
  *    Desc :
  * History : 1.created on 2014年 7月 3日 星期四 10时48分34秒 CST by WANG FENG
  */

#include <stdlib.h>
#include <stdio.h>
typedef struct info{
  int start;
  int end;
}info;
int cmp(const void* pa, const void* pb){
  info a = *((info*)pa);
  info b = *((info*)pb);
  return a.end > b.end;
}
void swap(int* a, int*b){
  int tt = *a;
  *a = *b;
  *b = tt;
}
int main(int argc, char** argv) {
  int num;
  scanf("%d",&num);
  while(num--){
    int i,j,len;
    scanf("%d",&len);
    info* p = (info*)malloc(sizeof(info)*len);
    for(i=0;i<len;i++){
      scanf("%d %d", &(p[i].start),&(p[i].end));
    }
    qsort(p, len, sizeof(info),cmp);
    int cnt = 0;
    info tmp = p[0];
    for(i=0;i<len-1;i++){
      if(tmp.end < p[i+1].start){
        cnt++;
        tmp = p[i+1];
      }
    }
    printf("%d\n",cnt);
    free(p);
  }
  return 0;
}

