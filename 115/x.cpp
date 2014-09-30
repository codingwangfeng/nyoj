//
//  x.cpp
//  Created by stevin on 2014-08-14
//  Copyright (c) 2014年 stevin. All rights reserved.
//

#include <iostream>
#include <vector>
#include <string.h>
typedef std::vector<int> List;
List G[1001];
char cost[1001][1001];
int armycity[1001],num,N,M,P,Q;
int go(int p){
  return 0;
}
void DFS(){
}
int main(int argc, char** argv) {
  std::cin >> num;
  int a,b,t;
  while(num--){
    memset(cost, 0, sizeof(cost));
    for(int i=0;i < 1001;i++) G[i].clear();
    std::cin >> N >> M >> P >> Q;
    for(int i=0;i<N;i++)
      std::cin >> armycity[i];
    for(int i=0;i<P;i++){
      std::cin >> a>>b>>t;
      cost[a][b] = t;
      cost[b][a] = t;
      G[a].push_back(b);
      G[b].push_back(a);
    }
    std::cout << go(Q) << std::endl;
  }
  return 0;
}

