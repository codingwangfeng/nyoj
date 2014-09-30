/**
  *  Author : WANG FENG
  *    Date : 2014年 7月29日 星期二 09时00分26秒 CST
  * History : 1.created on 2014年 7月29日 星期二 09时00分26秒 CST by WANG FENG
  */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <queue>
#include <utility>
typedef std::pair<int,int> P;
int map[9][9] = {
  {1,1,1,1,1,1,1,1,1},
  {1,0,0,1,0,0,1,0,1},
  {1,0,0,1,1,0,0,0,1},
  {1,0,1,0,1,1,0,1,1},
  {1,0,0,0,0,1,0,0,1},
  {1,1,0,1,0,1,0,0,1},
  {1,1,0,1,0,1,0,0,1},
  {1,1,0,1,0,0,0,0,1},
  {1,1,1,1,1,1,1,1,1}
};
char dist[9][9];
int isin(int x,int y){
  return x>=0&&x<=8 && y >=0 && y <=8;
}
int bfs(int a, int b, int c, int d){
  int i,j,k,x,y,oi[]={1,-1,0,0},oj[]={0,0,1,-1};
  memset(dist, 0, sizeof(dist));
  std::queue<P> q;
  q.push(P(a,b));
  P p;
  dist[a][b] = 1;
  while(!q.empty()){
    p = q.front();q.pop();
    i = p.first;
    j = p.second;
    if(i == c && j == d)
      break;
    for(k=0;k<=3;k++){
      x = i + oi[k];
      y = j + oj[k];
      if(dist[x][y])continue;
      if(!isin(x,y))continue;
      if(map[x][y])continue;
      dist[x][y] = dist[i][j] + 1;
      q.push(P(x,y));
    }
  }
  return dist[c][d]-1;
}
int main(int argc, char** argv) {
  int num,a,b,c,d;
  scanf("%d",&num);
  while(num--){
    scanf("%d %d %d %d", &a,&b,&c,&d);
    printf("%d\n", bfs(a,b,c,d));
  }
  return 0;
}

