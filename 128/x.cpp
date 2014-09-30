/**
 *  Author : WANG FENG
 *    Date : 2014年 7月11日 星期五 11时54分36秒 CST
 * History : 1.created on 2014年 7月11日 星期五 11时54分36秒 CST by WANG FENG
 */

#include <iostream>
#include <stack>
#include <vector>
#include <stdlib.h>
#include <stdio.h>

std::vector<std::string> split(std::string str, std::string seq = " "){
  std::vector<std::string> ret;
  if(str.length() <= 0 ) return ret; 
  int p1 = 0, p2 = 0;
  p2 = str.find(seq,p1);
  while(p2 != std::string::npos){
    ret.push_back(str.substr(p1,p2-p1));
    p2 += seq.length();
    p1 = p2;
    p2 = str.find(seq,p1);
  }
  ret.push_back(str.substr(p1,str.length()-p1));
  return ret;
}
int main(int argc, char** argv) {
  int i;
  double a,b,r;
  std::string exp, digit;
  const std::string ops = "+-*/";
  std::stack<double> s;
  while(std::getline(std::cin,exp)){
    std::vector<std::string> vec = split(exp);
    int i =0;
    for(i=vec.size()-1;i>=0;i--){
      int pos = ops.find(vec[i]);
      if(pos != std::string::npos){
        a = s.top();s.pop();
        b = s.top();s.pop();
        switch(pos){
          case 0:r= a+b;break;
          case 1:r= a-b;break;
          case 2:r= a*b;break;
          case 3:r= a/b;break;
        }
        s.push(r);
      }else{
        s.push(strtod(vec[i].c_str(),NULL));
      }
    }
    printf("%.2f\n",r);
  }
  return 0;
}

