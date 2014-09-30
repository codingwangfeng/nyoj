/**
  *  Author : WANG FENG
  *    File : x.c
  *    Date : 2014年 7月 2日 星期三 14时45分49秒 CST
  *    Desc :
  * History : 1.created on 2014年 7月 2日 星期三 14时45分49秒 CST by WANG FENG
  */

#include <stdlib.h>
#include <stdio.h>
typedef struct node{
  int no,x,y;
}node;
void swap(node* a, node* b){
  node t;
  t = *a;
  *a = *b;
  *b = t;
}
void sort(node *arr, int len){
  int i = 0, j = 0;
  for(i=0; i<len; i++){
    for(j=len-1; j>i; j--){
      if(arr[j].no < arr[j-1].no){
        swap(arr+j,arr+j-1);
      }else if (arr[j].no == arr[j-1].no){
        if(arr[j].y < arr[j-1].y){
          swap(arr+j,arr+j-1);
        }else if (arr[j].y ==  arr[j-1].y){
          if(arr[j].x < arr[j-1].x){
            swap(arr+j,arr+j-1);
          }
          if(arr[j].x == arr[j-1].x){
            arr[j].no = -1;
          }
        }
      }
    }
  }
}
int main(int argc, char** argv) {
  int num;
  scanf("%d",&num);
  while(num--){
    int m,i;
    scanf("%d",&m);
    node* arr = (node*)malloc(sizeof(node)*m);
    for(i = 0; i < m ; i ++){
      int no,x,y;
      scanf("%d %d %d", &no, &x,&y);
      arr[i].no = no;
      arr[i].y = x>y?x:y;
      arr[i].x = x<y?x:y;
    }
    sort(arr, m);
    for(i=0;i<m;i++){
      if(arr[i].no < 0){
        continue;
      }
      printf("%d %d %d\n",arr[i].no, arr[i].y, arr[i].x);
    }
    free(arr);
  }
  return 0;
}

