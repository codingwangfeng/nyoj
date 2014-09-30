/**
  *  Author : WANG FENG
  *    File : x.cpp
  *    Date : 2014年 7月 1日 星期二 20时09分04秒 CST
  *    Desc :
  * History : 1.created on 2014年 7月 1日 星期二 20时09分04秒 CST by WANG FENG
  */

#include <iostream>

int main(int argc, char** argv) {
  int num = 12;
  float money, sum;
  while(num){
    std::cin >> money;
    sum+=money;
    num--;
  }
  std::cout << sum/12 << std::endl;
  return 0;
}

