/**
  *  Author : WANG FENG
  *    File : x.cpp
  *    Date : 2014年 7月 8日 星期二 10时57分52秒 CST
  *    Desc :
  * History : 1.created on 2014年 7月 8日 星期二 10时57分52秒 CST by WANG FENG
  */

#include <iostream>
#include <vector>
#include <algorithm>
#include<math.h>

typedef struct C{
  double s,e;
}C;
bool mycmp(C c1, C c2){
  if(c1.s<c2.s) return true;
  return false;
}
int main(int argc, char** argv) {
  int num;
  std::cin >> num;
  while(num--){
    int n,w,h,x,r,i,cnt;
    std::cin >> n >> w >> h;
    std::vector<C> cs;
    while(n--){
      std::cin >> x >> r;
      if(2*r<h)
        continue;
      C c;
      int len = sqrt(1.0*r*r-1.0*h*h/4);
      c.s = x - len > 0 ? x - len : 0;
      c.e = x + len > w ? x + len : w;
      cs.push_back(c);
    }
    std::sort(cs.begin(),cs.end(),mycmp);
    if( cs[0].s > 0 ){
      std::cout << 0 << std::endl;
      continue;
    }
    int lastend = cs[0].e, lastindex;
    cnt=1;
    i = 0;
    while(i < cs.size()){
      lastend = cs[i].e;
      lastindex = i;
      cnt++;
      if(lastend >= w)
        break;
      int j;
      for(j = i+1; j<cs.size();j++){
        if( cs[j].e <= cs[i].s && cs[j].e>lastend){
          lastend = cs[j].e;
          lastindex = j;
        }else if(cs[j].s > cs[i].e){
          break;
        }
      }
      if(i == lastend){
        break;
      }
      lastindex = i;
    }
    if(lastend < w )
      std::cout << 0 << std::endl;
    else
      std::cout <<cnt<< std::endl;
  }
  return 0;
}

