//============================================================================
// Name        : /Users/stevin/.vim/templates/dynamic/ext/cpp
// Author      : stevin
// Version     : 1.0.0
// Copyright   : Your copyright notice
// Description : Code in C++, Ansi-style
// History     : Created on 2014年 8月 5日 星期二 12时22分09秒 CST by stevin
//============================================================================
#include<stdio.h>
#include<algorithm>
using namespace std;
const int N = 10005;
double w[N], v[N], x[N], max_ave;
int n, k;
//将区间二分了
bool judge(double a)
{
  for(int i = 0; i < n; i++)
    x[i] = v[i] - a * w[i]; 
  sort(x, x+n);
  double sum = 0;
  for(int i = 0; i < k; i++)
    sum += x[n-1-i];
  return sum >= 0 ? true : false;
}

double get_ans()
{
  double l = 0, r = max_ave;
  while(r - l > 0.0001f)
  {
    double mid = (l + r) / 2;
    if(judge(mid))
      l = mid;
    else
      r = mid;
  }
  return l;
}

int main()
{
  while(~scanf("%d%d",&n,&k))
  {
    max_ave = 0;
    for(int i = 0; i < n; i++)
    {
      scanf("%lf%lf",&w[i],&v[i]);
      double tmp = v[i] / w[i];
      max_ave = max(max_ave, tmp);
    }
    printf("%.2lf\n",get_ans());
  }
  return 0;
}
