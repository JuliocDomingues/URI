# -*- coding: utf-8 -*-
a = int(input())
aux = a
cont100 = 0
cont50 = 0
cont20 = 0
cont10 = 0
cont5 = 0
cont2 = 0
cont1 = 0
if(a > 0):
    while(a >= 100):
        cont100 = cont100 + 1
        a = a - 100
    while(a >= 50):
        cont50 = cont50 + 1
        a = a - 50
    while(a >= 20):
        cont20 = cont20 + 1
        a = a - 20
    while(a >= 10):
        cont10 = cont10 + 1
        a = a - 10
    while(a >= 5):
        cont5 = cont5 + 1
        a = a - 5
    while(a >= 2):
        cont2 = cont2 + 1
        a = a - 2
    while(a >= 1):
        cont1 = cont1 + 1
        a = a - 1
print(aux)
print(cont100,'nota(s) de R$ 100,00')
print(cont50,'nota(s) de R$ 50,00')
print(cont20,'nota(s) de R$ 20,00')
print(cont10,'nota(s) de R$ 10,00')
print(cont5,'nota(s) de R$ 5,00')
print(cont2,'nota(s) de R$ 2,00')
print(cont1,'nota(s) de R$ 1,00')