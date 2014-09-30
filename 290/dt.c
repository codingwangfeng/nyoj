//
//  dt.c
//  Created by stevin on 2014-08-13
//  Copyright (c) 2014年 stevin. All rights reserved.
//
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define MAX 26//字符集大小
typedef struct TrieNode{
  int nCount;//记录该字符出现次数
  struct TrieNode* next[MAX];
}TrieNode;

TrieNode Memory[1000000];
int allocp=0;

/*初始化*/
void InitTrieRoot(TrieNode**pRoot){*pRoot=NULL;}

/*创建新结点*/
TrieNode*CreateTrieNode(){
  int i;
  TrieNode*p;
  p=&Memory[allocp++];
  p->nCount=1;
  for(i=0;i<MAX;i++)
    p->next[i]=NULL;
  return p;
}

/*插入*/
void InsertTrie(TrieNode**pRoot,char*s){
  int i,k;
  TrieNode*p;
  if(!(p=*pRoot)){
    p=*pRoot=CreateTrieNode();
  }
  i=0;
  while(s[i]){
    k=s[i++]-'a';//确定branch
    p->next[k]=CreateTrieNode();
    p->nCount++;
    p=p->next[k];
  }
    printf("%d\n",p->nCount);
}

/*查找*/
int SearchTrie(TrieNode**pRoot,char*s){
  TrieNode*p;
  int i,k;
  if(!(p==*pRoot)){
    return 0;
  }
  i=0;
  while(s[i]){
    k=s[i++]-'a';
    if(p->next[k]==NULL)return 0;
    p=p->next[k];
  }
  return p->nCount;
}
int main(int argc, char** argv) {
  int num;
  char name[12];
  scanf("%d",&num);
  TrieNode*root = NULL;
  while(num--){
    scanf("%s",name);
    InsertTrie(&root, name);
  }
  return 0;
}

