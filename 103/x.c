/**
  *  Author : WANG FENG
  *    File : x.c
  *    Date : 2014年 7月11日 星期五 11时00分34秒 CST
  *    Desc :
  * History : 1.created on 2014年 7月11日 星期五 11时00分34秒 CST by WANG FENG
  */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char** argv) {
  int num,idx,i,j,add,k;
  char a[1024], b[1024], r[1024];
  scanf("%d",&num);
  for(idx=1;idx<=num;idx++){
    scanf("%s %s",a,b);
    i = strlen(a)-1;
    j = strlen(b)-1;
    k = i > j ? i : j;
    r[k+1] = 0;
    add = 0;
    while(i>=0 && j >= 0){
      add = a[i]+b[j]-'0'-'0' + add;
      r[k] = add%10 + '0';
      add/=10;
      i--;
      j--;
      k--;
    }
    while(i>=0){
      r[k] = a[i] - '0' + add;
      add = r[k]/10;
      r[k] %=10;
      r[k] +='0';
      i--;
      k--;
    }
    while(j>=0){
      r[k] = b[j] - '0' + add;
      add = r[k]/10;
      r[k] %=10;
      r[k] +='0';
      k--;
      j--;
    }
    printf("Case %d:\n",idx);
    printf("%s + %s = ", a,b);
    if(add > 0){
      printf("%d%s\n",add,r);
    }else{
      printf("%s\n",r);
    }
  }
  return 0;
}

