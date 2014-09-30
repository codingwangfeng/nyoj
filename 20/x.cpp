/**
  *  Author : WANG FENG
  *    File : x.cpp
  *    Date : 2014年 7月 9日 星期三 10时03分12秒 CST
  *    Desc :
  * History : 1.created on 2014年 7月 9日 星期三 10时03分12秒 CST by WANG FENG
  */

#include <iostream>
#include <vector>

typedef std::vector<int> linkedlist;
linkedlist City[100001];
int lastcity[100001];
int visited[100001];
void DFS(int from){
  visited[from] = 1;
  int i = 0;
  for( i = 0; i < City[from].size();i++){
    int v = City[from][i];
    if(!visited[v]){
      lastcity[v] = from;
      DFS(v);
    }
  }
}
int main(int argc, char** argv) {
  int num,n,from,citya,cityb,i;
  std::cin >> num;
  while(num--){
    std::cin >> n >> from;
    for(i=1;i<=n;i++){
      City[i].clear();
      lastcity[i] = -1;
      visited[i] = 0;
    }
    for(i=1;i<n;i++){
      std::cin >> citya >> cityb;
      City[cityb].push_back(citya);
      City[citya].push_back(cityb);
    }
    lastcity[from] = -1;
    visited[from] = 1;
    DFS(from);
    bool first = 1;
    for(i=1;i<=n;i++){
      if(first){
        first = !first;
      }else{
        std::cout << " ";
      }
      std::cout << lastcity[i];
    }
    std::cout << std::endl;
  }
  return 0;
}

