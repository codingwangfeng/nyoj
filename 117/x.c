/**
  *  Author : WANG FENG
  *    Date : 2014年 7月22日 星期二 19时48分39秒 CST
  * History : 1.created on 2014年 7月22日 星期二 19时48分39秒 CST by WANG FENG
  */

#include <stdlib.h>
#include <stdio.h>
int a[1000010],b[1000010];
long long sum = 0;
void merge(int low, int mid, int high){
  int i = low, j = mid+1, k=low;
  while(i <= mid && j <= high){
    if(a[i] <= a[j]){
      b[k] = a[i++];
    }else{
      b[k] = a[j++];
      sum += (mid - i + 1);
    }
    k++;
  }
  while(i <= mid){b[k++] = a[i++];}
  while(j <= high){b[k++] = a[j++];}
  for(i=low;i<=high;i++){a[i] = b[i];}
  return;
}
void msort(int low, int high){
  if(low >= high){
    return;
  }
  int mid = (low+high)>>1;
  msort(low,mid);
  msort(mid+1,high);
  merge(low, mid, high);
}
int main(int argc, char** argv) {
  int num,N,i;
  scanf("%d",&num);
  while(num--){
    scanf("%d",&N);
    for(i=0;i<N;i++){
      scanf("%d",a+i);
    }
    sum = 0;
    msort(0,N-1);
    printf("%lld\n", sum);
  }
  return 0;
}

