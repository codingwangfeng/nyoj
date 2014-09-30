/**
  *  Author : WANG FENG
  *    Date : 2014年 7月24日 星期四 18时31分04秒 CST
  * History : 1.created on 2014年 7月24日 星期四 18时31分04秒 CST by WANG FENG
  */

#include <stdlib.h>
#include <stdio.h>
#include <vector>
#include <queue>
#include <string.h>
typedef std::vector<int> G;
std::queue<int> Q;
G g[10001];
int du[10001], root = -1, p, inputnum = 0;
int istree(){
  if(inputnum == 0)return 1;
  Q.push(root);
  while(!Q.empty()){
    p = Q.front();Q.pop();
    if(!du[p])return 0;
    du[p] = 0;
    for(int i=0;i<g[p].size();i++){
      Q.push(g[p][i]);
    }
  }
  for(int i = 0 ;i < 10001; i ++){
    if(du[i])return 0;
  }
  return 1;
}
int main(int argc, char** argv) {
  int from,to,num = 0;
  memset(du, 0, sizeof(du));
  while(scanf("%d %d",&from, &to)){
    if(from == -1 && to == -1){
      break;
    }
    if(from == 0 && to == 0){
      num ++;
      for(int i = 0 ; i < 10001 ; i ++){
        if(du[i] == 1){
          root = i;
          break;
        }
      }
      printf("Case %d is%s a tree.\n",num,istree()?"":" not");
      for(int i = 0 ; i < 10001 ; i ++){
        g[i].clear();
      }
      memset(du, 0, sizeof(du));
      root = -1;
      inputnum = 0;
    }else{
      inputnum ++;
      g[from].push_back(to);
      if(du[to] == 0) du[to] = 1;
      if(du[from] == 0) du[from] = 1;
      du[to] ++ ;
    }
  }
  return 0;
}

