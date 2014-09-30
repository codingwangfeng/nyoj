//
//  x.cpp
//  Created by stevin on 2014-08-11
//  Copyright (c) 2014年 stevin. All rights reserved.
//

#include <iostream>
#include <string>
int add(int a, int b){return a+b;}
int max(int a, int b){return a>b?a:b;}
int min(int a, int b){return a<b?a:b;}
int find(std::string exp){
  exp = exp.substr(4,exp.length()-5);
  int i = 0, cnt =0;
  while(i < exp.length()){
    if(exp[i] == '('){
      cnt += 1;
    }
    if(exp[i] == ')'){
      cnt -= 1;
    }
    if(exp[i] == ',' && !cnt){
      break;
    }
    i++;
  }
  return i+4;
}
int getvalue(std::string exp){
  std::string op = exp.substr(0,3);
  int sep = 0;
  if(exp[0] > '9' || exp[0] < '0'){
    sep = find(exp);
  }
  if(op == "add"){
    return add(getvalue(exp.substr(4,sep-4)),getvalue(exp.substr(sep+1,exp.length()-sep-2)));
  }else if(op == "max"){
    return max(getvalue(exp.substr(4,sep-4)),getvalue(exp.substr(sep+1,exp.length()-sep-2)));
  }else if(op == "min"){
    return min(getvalue(exp.substr(4,sep-4)),getvalue(exp.substr(sep+1,exp.length()-sep-2)));
  }else{
    return atoi(exp.c_str());
  }
}
int main(int argc, char** argv) {
  int num;
  std::string exp;
  std::cin >> num;
  while(num--){
    std::cin >> exp;
    std::cout << getvalue(exp) << std::endl;
  }
  return 0;
}

