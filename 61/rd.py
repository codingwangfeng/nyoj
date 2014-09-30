#!/usr/bin/python
# -*- coding: UTF-8 -*-

'''
   Author : WANG FENG
     File : rd.py
     Date : 2014年 7月30日 星期三 16时48分00秒 CST
     Desc :
  History :1.created on 2014年 7月30日 星期三 16时48分00秒 CST by WANG FENG
'''

import os
import sys
import random

class Opt:
    def __init(self,argv):
        pass
    def __str__(self):
        pass

def run():
    for i in range(10):
        random.shuffle(l)
        print l
def usage():
    print 'Usage:'

def parse_argv():
    if len(sys.argv) < 1:
        print "param num error"
        sys.exit(-1)

if __name__ == '__main__':
    parse_argv()
    run()


