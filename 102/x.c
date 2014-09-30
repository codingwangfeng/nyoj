/**
 *  Author : WANG FENG
 *    Date : 2014年 7月30日 星期三 09时44分04秒 CST
 * History : 1.created on 2014年 7月30日 星期三 09时44分05秒 CST by WANG FENG
 */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char** argv) {
  int num,a,b,c,ans;
  scanf("%d",&num);
  while(num--){
    scanf("%d %d %d",&a,&b,&c);
    if(b==1){
      printf("%d\n", a%c);
      continue;
    }
    ans=1;
    a=a%c;
    while(b>0){
      if(b%2)
        ans=(a*ans)%c;
      b=b>>1;
      a=(a*a)%c;
    }
    printf("%d\n",ans);
  }
  return 0;
}

