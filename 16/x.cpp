/**
  *  Author : WANG FENG
  *    File : x.cpp
  *    Date : 2014年 7月 8日 星期二 14时52分14秒 CST
  *    Desc :
  * History : 1.created on 2014年 7月 8日 星期二 14时52分14秒 CST by WANG FENG
  */

#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>

typedef struct rec{
  int x,y;
}rec;
std::vector<rec> recs;
int dp[1024];
int gMaxLen=1;

bool cmp(rec a, rec b){
  if( a.y < b.y ) return true;
  return false;
}

int main(int argc, char** argv) {
  int N,n,x,y;
  std::cin >> N;
  while(N--){
    std::cin >> n;
    recs.clear();
    gMaxLen = 1;
    while(n--){
      rec r;
      std::cin >> x >> y;
      r.x = std::min(x,y);
      r.y = std::max(x,y);
      recs.push_back(r);
    }
    std::sort(recs.begin(), recs.end(), cmp);
    int i = 0, j = 0, maxlen = 1, curlen = 1;
    for(i=0;i<recs.size();i++){
      dp[i]=1;
      for(j=0;j<i;j++){
        if( recs[j].x < recs[i].x && recs[j].y < recs[i].y){
          dp[i] = std::max(dp[i], dp[j]+1);
        }
      }
    }
    std::cout << *std::max_element(dp,dp+recs.size()) << std::endl;
  }
  return 0;
}

