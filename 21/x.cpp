#include <iostream>
#include <queue>
#include <algorithm>
#include <string.h>
typedef struct state{
  int v[3];
  int step;
}state;
int v[3],V[3],visited[101][101][101];
int BFS(){
  std::queue<state> q;
  state st;
  st.v[0] = v[0];
  st.v[1] = st.v[2] = 0;
  st.step = 0;
  visited[v[0]][0][0] = 1;
  q.push(st);
  int i,j,k;
  int nv[3];
  while(!q.empty()){
    state s = q.front();
    if(s.v[0] == V[0] && s.v[1] == V[1] && s.v[2] == V[2])
      return s.step;
    q.pop();
    for(i=0;i<3;i++){
      for(j=0;j<3;j++){
        if(i==j)continue;
        for(k=0;k<3;k++) nv[k] = s.v[k];
        if(s.v[i] > 0 && s.v[j] < v[j]){
          int d = v[j] - s.v[j];
          d = std::min(d,s.v[i]);
          nv[i] -= d;
          nv[j] += d;
          if(visited[nv[0]][nv[1]][nv[2]] != 1){
            visited[nv[0]][nv[1]][nv[2]] = 1;
            state ns;
            for(k=0;k<3;k++) ns.v[k] = nv[k];
            ns.step = s.step+1;
            q.push(ns);
          }
        }
      }
    }
  }
  return -1;
}

int main(int argc, char** argv) {
  int num,i;
  std::cin >> num;
  while(num--){
    for(i=0;i<3;i++) std::cin >> v[i];
    for(i=0;i<3;i++) std::cin >> V[i];
    memset(visited, 0, sizeof(int)*101*101*101);

    std::cout << BFS() << std::endl;
  }
  return 0;
}

