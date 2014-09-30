/**
  *  Author : WANG FENG
  *    Date : 2014年 7月26日 星期六 22时59分08秒 CST
  * History : 1.created on 2014年 7月26日 星期六 22时59分08秒 CST by WANG FENG
  */

#include <iostream>
#include <vector>
#include <stack>
typedef std::vector<int> V;
std::stack<int> s;
V v[1001];
int vis[1001];
int main(int argc, char** argv) {
  int num,P,Q,f,t;
  std::cin >> num;
  while(num--){
    std::cin >> P >> Q;
    while(Q--){
      std::cin >> f >> t;
      v[f].push_back(t);
    }
    s.push(f);
    while(!s.empty()){
      
    }
  }
  return 0;
}

