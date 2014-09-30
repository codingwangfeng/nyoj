//
//  x.cpp
//  Created by stevin on 2014-08-13
//  Copyright (c) 2014年 stevin. All rights reserved.
//

#include <iostream>
#include <map>

int main(int argc, char** argv) {
  int num,max=-1;
  std::cin >> num;
  std::map<std::string, int> cnt;
  std::string name;
  while(num--){
    std::cin >> name;
    if(cnt.find(name) == cnt.end()){
      cnt[name] = 1;
    }else{
      cnt[name] +=1;
    }
  }
  std::map<std::string, int>::iterator it;
  for(it = cnt.begin(); it != cnt.end(); it++){
    if(max < it->second){
      max = it->second;
      name = it->first;
    }
  }
  std::cout << name << " " << max << std::endl;
  return 0;
}

