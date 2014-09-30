//
//  x.cpp
//  Created by stevin on 2014-08-08
//  Copyright (c) 2014年 stevin. All rights reserved.
//

#include <iostream>
#include <string.h>
typedef struct student{
  char name[24];
  int avgscore;
  int eva;
  char isleader;
  char iswest;
  int papernum;
  int money;
}student;
void swap(student& a, student& b){
  student c = a;
  a = b;
  b = c;
}
int main(int argc, char** argv) {
  int num,x,maxidx,maxmoney,sum;
  student st[101];
  std::cin >> num;
  while(num--){
    maxmoney = -1;
    sum=0;
    memset(st,sizeof(0),0);
    std::cin >>x;
    for(int i=0;i<x;i++){
      st[i].money = 0;
      std::cin >> st[i].name >> st[i].avgscore >> st[i].eva >> st[i].isleader >> st[i].iswest >> st[i].papernum;
      if(st[i].avgscore > 80 && st[i].papernum >= 1){
        st[i].money += 8000;
      }
      if(st[i].avgscore > 85 && st[i].eva> 80){
        st[i].money += 4000;
      }
      if(st[i].avgscore> 90){
        st[i].money += 2000;
      }
      if(st[i].avgscore> 85 && st[i].iswest == 'Y'){
        st[i].money += 1000;
      }
      if(st[i].eva> 80 && st[i].isleader == 'Y'){
        st[i].money += 850;
      }
      if(st[i].money > maxmoney){
        maxmoney = st[i].money;
        maxidx = i;
      }
      sum+=st[i].money;
    }
    std::cout << st[maxidx].name << std::endl;
    std::cout << st[maxidx].money<< std::endl;
    std::cout << sum<< std::endl;
  }
  return 0;
}

