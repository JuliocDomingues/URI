# -*- coding: utf-8 -*-
import math
A, B, C = input().split(" ")
A = float(A)
B = float(B)
C = float(C)
if(A == 0):
    print('Impossivel calcular')
else:
    delta = float(B*B - (4*A*C))
    if(delta < 0.0):
        print('Impossivel calcular')
    else:
        deltar = float(math.sqrt(delta))
        r1 = float((B*(-1) + deltar)/(2.0*A))
        r2 = float((B*(-1) - deltar)/(2.0*A))
        print('R1 = {:.5f}' .format(r1))
        print('R2 = {:.5f}' .format(r2))