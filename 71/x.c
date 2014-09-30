/**
  *  Author : WANG FENG
  *    Date : 2014年 7月27日 星期日 17时21分59秒 CST
  * History : 1.created on 2014年 7月27日 星期日 17时21分59秒 CST by WANG FENG
  */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int cmp(const void* a,const void* b){
  int m = *((int*)a);
  int n = *((int*)b);
  return m-n;
}

int main(int argc, char** argv) {
  int num,w,n,a[301],i,j,cnt;
  char v[301];
  scanf("%d",&num);
  while(num--){
    scanf("%d %d", &w, &n);
    for(i=0;i<n;i++){
      scanf("%d", a+i);
      v[i] = 0;
    }
    qsort(a, n, sizeof(int), cmp);
    cnt = 0;
    for(i=n-1;i>=0;i--){
      if(v[i])continue;
      if(a[i] < w){
        for(j=i-1;j>=0;j--){
          if(v[j])continue;
          if(a[i]+a[j] <= w){
            v[j] = 1;
            break;
          }
        }
      }
      v[i] = 1;
      cnt ++;
    }
    printf("%d\n", cnt);
  }
  return 0;
}

