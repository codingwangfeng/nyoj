/**
  *  Author : WANG FENG
  *    File : y.c
  *    Date : 2014年 7月 7日 星期一 23时05分51秒 CST
  *    Desc :
  * History : 1.created on 2014年 7月 7日 星期一 23时05分51秒 CST by WANG FENG
  */
#include “iostream”
#include “cstring”
using namespace std;
const int N=105;
int a[N][N],m,n,f[N][N];
inline int max(int a,int b)
{
  return a>b?a:b;
}
inline int max(int a,int b,int c,int d)//求四个数的最大值
{
  return max(max(a,b),max(c,d));
}
int d(int x,int y,int h)//x，y为坐标，h为前一个位置的高度
{
  if(x==0||y==0||x>m||y>n||a[x][y]>=h)//当到达边界，或当前位置高度不小于前一个时返回0
    return 0;
  if(f[x][y]>=0)//若f[x][y]计算过，直接返回
    return f[x][y];
  //递归求出此点的最大长度，保存在f[x][y]并返回
  f[x][y]=max(d(x+1,y,a[x][y]),d(x,y+1,a[x][y]),d(x-1,y,a[x][y]),d(x,y-1,a[x][y]))+1;
  return f[x][y];
}
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int i,j,k,maxi=-0xffff;
    cin>>m>>n;
    memset(f,-1,sizeof(f));
    for(i=1;i<=m;i++)
      for(j=1;j>a[i][j];
          for(i=1;i<=m;i++)
          for(j=1;j<=n;j++)
          {
          k=d(i,j,0xffff);
          if(maxi<k)
          maxi=k;
          }
          cout<<maxi<<endl;
          }
          return 0;
          }
