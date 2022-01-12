# -*- coding: utf-8 -*-
from bisect import bisect_left
def procurar(n, q):
    resultado = (bisect_left(n, q))
    if (resultado < len(n) and n[resultado] == q):
        return resultado + 1
    else:
        return -1
n = 1
q = 1
case = 1
vetn = list()
while n != 0 and q != 0:
    n, q = input().split(" ")
    n = int(n)
    q = int(q)
    if(n == 0 and q == 0):
        break
    for i in range(n):
        vetn.append(int(input()))
    vetn.sort()
    print("CASE# %d:" % case)
    for i in range(q):
        vetq = int(input())
        vetr = procurar(vetn, vetq)
        if(vetr == -1):
            print("%d not found" % vetq)
        else:
            print("%d found at " % vetq, end="")
            print("%d" % vetr)
    case += 1
    vetn.clear()