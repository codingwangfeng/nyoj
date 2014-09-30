/**
  *  Author : WANG FENG
  *    Date : 2014年 7月28日 星期一 20时44分20秒 CST
  * History : 1.created on 2014年 7月28日 星期一 20时44分20秒 CST by WANG FENG
  */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
typedef struct area{
  int a,b;
}area;
int cmp(const void* A, const void* B){
  area M = *((area*)A);
  area N = *((area*)B);
  if( M.a != N.a) return M.a - N.a;
  else return M.b - N.b;
}
area aa[100];
int main(int argc, char** argv) {
  int i, num, M, L;
  scanf("%d",&num);
  while(num--){
    scanf("%d %d",&L, &M);
    for(i=0;i<M;i++){
      scanf("%d %d", &aa[i].a, &aa[i].b);
    }
    qsort(aa, M, sizeof(area), cmp);
    i=0;
    L++;
    int start = 0, end = 0;
    while(i<M){
      start = aa[i].a;
      while(i < M -1 && aa[i].b >= aa[i+1].a)i++;
      end = aa[i].b;
      L -= (end - start + 1);
      i++;
    }
    printf("%d\n",L);
  }
  return 0;
}

