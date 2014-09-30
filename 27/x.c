/**
  *  Author : WANG FENG
  *    Date : 2014年 7月15日 星期二 22时41分10秒 CST
  * History : 1.created on 2014年 7月15日 星期二 22时41分10秒 CST by WANG FENG
  */

#include <stdlib.h>
#include <stdio.h>

int visit[101][101],map[101][101],i,j,m,n,cnt;
int ox[] = {1,-1,0,0};
int oy[] = {0,0,1,-1};
int isinmap(int i,int j){
  if(i>=0&&i<m&&j>=0&&j<n)
    return 1;
  return 0;
}
void DFS(int i, int j){
  int k = 0,x,y;
  for(k=0;k<4;k++){
    x=i+ox[k];y=j+oy[k];
    if(isinmap(x,y) && !visit[x][y]){
      if(map[x][y]){
        visit[x][y] = 1;
        DFS(x,y);
      }
    }
  }
  return;
}
int main(int argc, char** argv) {
  int num;
  scanf("%d",&num);
  while(num--){
    scanf("%d %d",&m,&n);
    cnt = 0;
    for(i=0;i<m;i++){
      for(j=0;j<n;j++){
        scanf("%d",&map[i][j]);
        visit[i][j] = 0;
      }
    }
    for(i=0;i<m;i++){
      for(j=0;j<n;j++){
        if(!map[i][j] || visit[i][j]){
          continue;
        }
        if(map[i][j] == 1 && ! visit[i][j]){
          visit[i][j] = 1;
          DFS(i,j);
          cnt ++;
        }
      }
    }
    printf("%d\n",cnt);
  }
  return 0;
}

