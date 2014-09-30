/**
  *  Author : WANG FENG
  *    Date : 2014年 7月19日 星期六 19时24分55秒 CST
  * History : 1.created on 2014年 7月19日 星期六 19时24分55秒 CST by WANG FENG
  */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int D,i,I,n;
int go(){
  int p = 0, m = I;
  while(2*p < n-1 && m > 1){
    if(m%2 == 0){
      p = 2*p+2;
      m = m/2;
    }else{
      p = 2*p+1;
      m = m/2+1;
    }
  }
  while(2*p < n-1){
    p = 2*p + 1;
  }
  return p;
}
int main(int argc, char** argv) {
  while(scanf("%d %d",&D,&I)== 2){
    if(D == 0 && I == 0){
      break;
    }
    n=1;
    for(i=0;i<D;i++){
      n*=2;
    }
    n--;
    printf("%d\n",go()+1);
  }
  return 0;
}

