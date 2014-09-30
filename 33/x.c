#include <stdlib.h>
#include <stdio.h>
#include <string.h>
char di[] = {1,0,-1,0},dj[] = {0,-1,0,1};
int num,map[101][101],cnt,n,i,j,x,y;
int shift(int a, int b){
  if(a<n&&a>=0&&b<n&&b>=0&& !map[a][b])return 0;
  return 1;
}
int main(int argc, char** argv) {
  scanf("%d",&n);
  memset(map,0,sizeof(map));
  cnt = j = 0;
  x=-1;y=n-1;
  for(i=1;i<=n*n;i++){
    x+=di[j];y+=dj[j];
    if(i!=1&&shift(x,y)){
      x-=di[j];y-=dj[j];
      cnt++;
      j = cnt % 4;
      x+=di[j];y+=dj[j];
    }
    map[x][y] = i;
  }
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      printf("%d ",map[i][j]);
    }
    printf("\n");
  }
  return 0;
}

