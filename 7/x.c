/**
  *  Author : WANG FENG
  *    File : x.c
  *    Date : 2014年 7月 2日 星期三 12时08分50秒 CST
  *    Desc :
  * History : 1.created on 2014年 7月 2日 星期三 12时08分50秒 CST by WANG FENG
  */

#include <stdlib.h>
#include <stdio.h>
void swap(int* a, int*b){
  int t = *a;
  *a = *b;
  *b = t;
}
int getmin(int* a, int len){
  int i=0, j=0;
  for(i=0;i<len;i++){
    for(j=len-1;j>i;j--){
      if(a[j]> a[j-1]){
        swap(a+j,a+j-1);
      }
    }
  }
  int sum = 0;
  for(i=0,j=len-1;i<len && j >0 && a[i]!= a[j] && j > i;i++,j--){
    sum+= a[i] - a[j];
  }
  return sum;
}
int main(int argc, char** argv) {
  int num;
  scanf("%d",&num);
  while(num--){
    int m;
    int *x,*y;
    scanf("%d", &m);
    x = (int*)malloc(sizeof(int)*m);
    y = (int*)malloc(sizeof(int)*m);
    int i = 0;
    for(i = 0; i < m ; i++){
      scanf("%d %d",x+i,y+i);
    }
    printf("%d\n",getmin(x,m)+getmin(y,m));
    free(x);
    free(y);
  }
  return 0;
}

