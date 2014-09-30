/**
 * 1.当读到一个操作数时，立即将它放到输出中。操作符则不立即输出，放入栈中。遇到左圆括号也推入栈中。
 * 2.如果遇到一个右括号，那么就将栈元素弹出，将符号写出直到遇到一个对应的左括号。但是这个左括号只被弹出，并不输出。
 * 3.在读到操作符时，如果此时栈顶操作符优先性大于或等于此操作符，弹出栈顶操作符直到发现优先级更低的元素位置。除了处理）的时候，否则决不从栈中移走"（"。操作符中，+-优先级最低，（）优先级最高。
 */

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <stack>

std::stack<char> opst;
std::stack<double> vals;
int pri(char c){
  if(c=='-' || c == '+')return 0;
  else if(c=='/' || c == '*')return 1;
  else return 3;
}
void compute(char op){
  double a, b;
  b = vals.top();vals.pop();
  a = vals.top();vals.pop();
  switch(op){
    case '+':a+=b;break;
    case '-':a-=b;break;
    case '/':a/=b;break;
    case '*':a*=b;break;
  }
  vals.push(a);
}
void dealop(char c){
  double a,b;
  if( (opst.empty() && c != ')')||c == '('){
    opst.push(c);
    return;
  }
  if(c == ')'){
    while( !opst.empty() && opst.top() != '('){
      compute(opst.top());
      opst.pop();
    }
    opst.pop();
  }else{
    while( !opst.empty() && opst.top() != '(' && pri(opst.top()) >= pri(c)){
      compute(opst.top());
      opst.pop();
    }
    opst.push(c);
  }
}
int main(int argc, char** argv) {
  int i,num,j;
  double vlaue;
  std::string s;
  std::cin >> num;
  while(num--){
    std::cin >> s;
    s = s.substr(0,s.size()-1);
    i = 0;j=0;
    while(i < s.size()){
      if(s[i] >= '0' && s[i] <= '9'){
        j = 0;
        while((s[i+j] >= '0' && s[i+j] <= '9')||s[i+j] == '.')j++;
        vals.push(strtod(s.substr(i,j).c_str(),NULL));
        i+=j;
      }else{
        dealop(s[i++]);
      }
    }
    while(!opst.empty()){
      compute(opst.top());
      opst.pop();
    }
    printf("%.2f\n",vals.top());
    vals.pop();
  }
  return 0;
}

