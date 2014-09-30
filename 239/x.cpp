/**
  *  Author : WANG FENG
  *    Date : 2014年 7月14日 星期一 17时06分21秒 CST
  * History : 1.created on 2014年 7月14日 星期一 17时06分21秒 CST by WANG FENG
  */

#include <iostream>
#include <stdio.h>
#include <string.h>
#include <vector>
#define N 520 

std::vector<int> G[N];
int lookedgirl[N];
int g2b[N];
int findgirlfriend(int boy){
  int i = 0;
  for(i = 0; i < G[boy].size();i++){
    int girl = G[boy][i];
    if(!lookedgirl[girl]){
      lookedgirl[girl] = 1;
      if(g2b[girl] == -1 || findgirlfriend(g2b[girl])){
        g2b[girl] = boy;
        return 1;
      }
    }
  }
  return 0;
}
int main(int argc, char** argv) {
  int num,n,k, boy, girl, max,i;
  std::cin >> num;
  while(num--){
    std::cin >> n >> k;
    for(i = 1; i <= n; i++){
      G[boy].clear();
      g2b[i] = -1;
      lookedgirl[i] = 0;
    }
    max = 0;
    while(k--){
      std::cin >> boy >> girl ;
      G[boy].push_back(girl);
    }
    for(i = 1 ; i <= n; i++){
      for(int j = 1; j <=n; j++) lookedgirl[j] = 0;
      max += findgirlfriend(i);
    }
    std::cout << max << std::endl;
  }
  return 0;
}

