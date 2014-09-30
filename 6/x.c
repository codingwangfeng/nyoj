/**
  *  Author : WANG FENG
  *    File : x.c
  *    Date : 2014年 7月 2日 星期三 11时26分44秒 CST
  *    Desc :
  * History : 1.created on 2014年 7月 2日 星期三 11时26分44秒 CST by WANG FENG
  */

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

void swap(float *a,float *b){
  float t = *a;
  *a = *b;
  *b = t;
}
float getlen(float r){
  return 2*sqrt(r*r-1);
}
int main(int argc, char** argv) {
  int num;
  scanf("%d",&num);
  while(num--){
    int n;
    scanf("%d", &n);
    float* a = (float*)malloc(sizeof(float)*n);
    int idx = n - 1;
    while(idx>=0){
      scanf("%f",&a[idx]);
      idx--;
    }
    int i,j;
    float sum = 0.0;
    for(i=0;i<n;i++){
      for(j=n-1;j>i;j--){
        if(a[j] > a[j-1]){
          swap(a+j,a+j-1);
        }
      }
      sum+=getlen(a[i]);
      //printf("%f:%f\n", sum,a[i]);
      if(sum>20.0){
        printf("%d\n", i+1);
        break;
      }
    }
    free(a);
  }
  return 0;
}

