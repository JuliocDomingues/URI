# -*- coding: utf-8 -*-
import sys
a, b, c = input().split(' ')
a = int(a)
b = int(b)
c = int(c)
if(a > c and a > b):
    print(a, 'eh o maior')
    sys.exit()
if(b > a and b > c):
    print(b, 'eh o maior')
else:
    print(c, 'eh o maior')