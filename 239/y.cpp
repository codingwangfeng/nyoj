/**
  *  Author : WANG FENG
  *    Date : 2014年 7月14日 星期一 17时31分59秒 CST
  * History : 1.created on 2014年 7月14日 星期一 17时31分59秒 CST by WANG FENG
  */

#include <stdio.h>
#include <string.h>
#include <vector>
#define N 520

using namespace std;

int P_Num;          // 人数 
vector<int>Boy[N];      // 临界表，保存匹配信息 
bool use[N];        // 标记数组 
int form[N];        // 父节点（i号女生对应的男生编号） 

bool Match(int cur){                    // 匹配函数 
  for(int i = 0; i < Boy[cur].size(); i ++){        // 遍历所有能与cur男生匹配的女生 
    if(!use[ Boy[cur].at(i) ]){             // 判断该女生结点是否被判断过,没有进入 
      use[ Boy[cur].at(i) ] = 1;            // 标记该女生已经判断 
      if(form[ Boy[cur].at(i) ] == -1 || Match(form[ Boy[cur].at(i) ])){    // 如果该女生未被匹配，或者之前匹配该女生的男生可以匹配其它女生 
        form[ Boy[cur].at(i) ] = cur;       // 则将该女生匹配给cur男生
        return 1;                 // 成功匹配返回1 
      }
    }
  }

  return 0;
}

int Hungary(){                  // 匈牙利算法 
  int count = 0;                // 计数器 
  memset(form, -1, sizeof(form));       // form保存女生对应的男生的编号，初始化为-1 

  for(int i = 1; i <= P_Num; i ++){     // 遍历每个男生结点，与女生深搜匹配 
    memset(use, 0, sizeof(use));      // 匹配前先将标记数组清零，起作用是防止重复搜索某结点 
    count += Match(i);
  }

  return count;
}

int main() 
{
  int loop, G_Num;
  scanf("%d", &loop);
  while(loop --){
    int start, end;
    scanf("%d%d", &P_Num, &G_Num);

    for(int i = 1; i <= P_Num; i ++){     // 多组数据初始化，清空数组 
      Boy[i].clear();
    }

    for(int i = 0; i < G_Num; i ++){
      scanf("%d%d", &start, &end);
      Boy[start].push_back(end);
    }

    int ans = Hungary();

    printf("%d\n", ans);
  }

  return 0;
}
