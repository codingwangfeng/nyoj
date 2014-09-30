//============================================================================
// Name        : /Users/stevin/.vim/templates/dynamic/ext/cpp
// Author      : stevin
// Version     : 1.0.0
// Copyright   : Your copyright notice
// Description : Code in C++, Ansi-style
// History     : Created on 2014年 8月 4日 星期一 18时58分29秒 CST by stevin
//============================================================================

#include <iostream>
#include <string.h>
unsigned char father[50001],rootrela[50001];
int find(int i){
  if(i!=father[i]){
    int oldf = father[i];
    father[i] = find(oldf);
    rootrela[i] = (rootrela[i]+rootrela[oldf])%3;
  }
  return father[i];
}
int main(int argc, char** argv) {
  int N,K,D,X,Y,cnt=0,rootx,rooty;
  memset(father,0,sizeof(0));
  memset(rootrela,0,sizeof(0));
  std::cin >> N >> K;
  while(K--){
    std::cin >> D >> X >> Y;
    if( X>N||Y>N){cnt++;continue;}
    if(D==2&&X==Y){cnt++;continue;}
    rootx = find(X);
    rooty = find(Y);
    if(rooty == rootx){//same union
      if(D==1&&rootrela[X] != rootrela[Y]) cnt ++;
      if(D==2&&rootrela[X] != (rootrela[Y]+2)%3) cnt ++;
    }else{//connection
      father[rooty] = rootx;
      rootrela[rooty] = (rootrela[X] + (D-1) + (3-rootrela[Y])) % 3;
    }
  }
  printf("%d\n",cnt);
  return 0;
}

