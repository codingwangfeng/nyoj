#include <utility>
#include <stack>
#include <iostream>
typedef std::pair<int, int> Position;
int gHMap[100][100],gDMap[100][100],gRowLen = 0,gColLen = 0;
int gMaxD = 1;
int offsetX[] = {0, 0, 1, -1};
int offsetY[] = {1, -1, 0, 0};
int isIn(const int x,const int y){
  return x>=0&&x<gRowLen&&y>=0&&y<gColLen;
}
int isTop(const int i, const int j);
void trySkiing(const int i, const int j){
  std::stack<Position> S;
  int ri = i, ci = j;
  S.push(std::make_pair(ri,ci));
  gDMap[ri][ci] = 1;
  while(!S.empty()){
    Position p = S.top();
    S.pop();
    ri = p.first;
    ci = p.second;
    int nextD = gDMap[ri][ci] + 1;
    int idx,x,y;
    for(idx=0; idx<4;idx++){
      x = ri+offsetX[idx];
      y = ci+offsetY[idx];
      if( isIn(x,y)&&gHMap[x][y]<gHMap[ri][ci]&&gDMap[x][y] < nextD ){
        S.push(std::make_pair(x,y));
        gDMap[x][y] = nextD;
        gMaxD = gMaxD>nextD?gMaxD:nextD;
      }
    }
  }
}
void getHappiestPaths(){
  int i,j;
  for(i=0; i<gRowLen; i++){
    for(j=0; j<gColLen; j++){
      if(isTop(i,j)){
        trySkiing(i,j);
      }
    }
  }
}
int isTop(const int i, const int j){
  if(!isIn(i,j)){
    return 0;
  }
  int idx,x,y;
  for(idx=0;idx<4;idx++){
    x = i+offsetX[idx];
    y = j+offsetY[idx];
    if(gHMap[x][y] > gHMap[i][j]){
      return 0;
    }
  }
  return 1;
}
int main(int argc, char** argv) {
  int num,i,j;
  std::cin >> num;
  while(num--){
    gMaxD = 1;
    std::cin >> gRowLen >> gColLen;
    for(i=0; i<gRowLen; i++){
      for(j=0;j<gColLen;j++){
        std::cin >> gHMap[i][j];
        gDMap[i][j] = -1;
      }
    }
    getHappiestPaths();
    std::cout << gMaxD << std::endl;
  }
  return 0;
}
