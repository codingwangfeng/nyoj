/**
 *  Author : WANG FENG
 *    File : x.cpp
 *    Date : 2014年 7月10日 星期四 14时35分27秒 CST
 *    Desc :
 * History : 1.created on 2014年 7月10日 星期四 14时35分27秒 CST by WANG FENG
 */

#include <iostream>
#include <queue>
#include <stack>

std::queue<char> result;
std::stack<char> s;
int main(int argc, char** argv) {
  int n;
  std::cin >> n;
  while(!result.empty())result.pop();
  result.push(1);
  while(n>1){
    int i,len = result.size(),add = 0;
    for(i = 0; i < len && !result.empty();i ++){
      char c = result.front();
      result.pop();
      int r = c*n+add;
      add = r/10;
      result.push(r%10);
    }
    while(add){
      result.push(add%10);
      add/=10;
    }
    n--;
  }
  while(!result.empty()){
    s.push(result.front());
    result.pop();
  }
  while(!s.empty()){
    std::cout << (int)(s.top());
    s.pop();
  }
  std::cout << std::endl;
  return 0;
}

