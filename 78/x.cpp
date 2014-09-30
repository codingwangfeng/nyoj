/**
  *  Author : WANG FENG
  *    Date : 2014年 7月29日 星期二 16时49分07秒 CST
  * History : 1.created on 2014年 7月29日 星期二 16时49分07秒 CST by WANG FENG
  */
#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>
#include <math.h>
typedef std::pair<int, int> P;
std::vector<P> path;
std::vector<P> src;
char visit[101];
double getcos(int x1,int y1, int x2, int y2){
  return (x1*x2+y1*y2)/pow(((x1*x2+x2*x2)*(y1*y1+y2*y2)),0.5);
}
int cmp(P p1, P p2){
  if(p1.first == p2.first){
    return p1.second - p2.second;
  }else{
    return p1.first - p2.first;
  }
}
int main(int argc, char** argv) {
  int num;
  std::cin >> num;
  while(num--){
    path.clear();
    src.clear();
    int n,x,y;
    P minp;
    std::cin >> n;
    std::cin >> x >> y;
    minp.first = x;minp.second= y;
    src.push_back(minp);
    n--;
    while(n--){
      std::cin >> x >> y;
      if((minp.second==y && minp.first > x) || minp.second > y){
        minp.first = x;minp.second= y;
      }
      src.push_back(minp);
    }
    path.push_back(minp);
    double maxcos = 0,curcos;
    P start = minp;
    while(true){
      for(int i = 0; i < src.size();i++){
        curcos = getcos(minp.first, minp.second, src[i].first, src[i].second);
        if(curcos > maxcos){
          maxcos = curcos;
          minp = src[i];
        }
      }
      if(minp.first == start.first && minp.second == start.second){
        break;
      }else{
        path.push_back(minp);
      }
    }
    std::sort(path.begin(), path.end(), cmp);
    for(int i=0;i<path.size();i++){
      std::cout << path[i].first << " " << path[i].second << std::endl;
    }
  }
  return 0;
}

