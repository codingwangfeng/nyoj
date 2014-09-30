/**
  *  Author : WANG FENG
  *    Date : 2014年 7月25日 星期五 10时57分55秒 CST
  * History : 1.created on 2014年 7月25日 星期五 10时57分55秒 CST by WANG FENG
  */
#include<iostream>
#include<map>
#include<deque>
#include <string.h>
std::map<int, int> m;
std::deque<int> q;
int main(){
  int t,n,val;
  std::cin >> t;
  while(t--){
    int minsz=10000000, uniqnum = 0;
    std::cin >> n;
    for(int i=0;i<n;i++){
      std::cin >> val;
      ++m[val];
      q.push_back(val);
      while(m[q.front()] > 1){
        m[q.front()]--;
        q.pop_front();
      }
      if(q.size()<minsz||uniqnum != m.size()){
        minsz=q.size();
        uniqnum = m.size();
      }
    }
    std::cout << minsz << std::endl;
    q.clear();
    m.clear();
  }
}
