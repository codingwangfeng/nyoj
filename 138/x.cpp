//============================================================================
// Name        : /Users/stevin/.vim/templates/dynamic/ext/cpp
// Author      : stevin
// Version     : 1.0.0
// Copyright   : Your copyright notice
// Description : Code in C++, Ansi-style
// History     : Created on 2014年 8月 4日 星期一 18时15分58秒 CST by stevin
//============================================================================

#include <stdio.h>
#include <stdlib.h>
#include <ext/hash_map>
int main(int argc, char** argv) {
  int num,n,cur;
  char type[10];
  __gnu_cxx::hash_map<int, int> hashtable;
  scanf("%d",&num);
  while(num--){
    scanf("%s",type);
    scanf("%d",&n);
    if(type[0] == 'A'){
      while(n--){
        scanf("%d",&cur);
        hashtable[cur] = 1;
      }
    }else{
      while(n--){
        scanf("%d",&cur);
        if(hashtable.find(cur) == hashtable.end()){
          printf("NO\n");
        }else{
          printf("YES\n");
        }
      }
    }
  }
  return 0;
}

