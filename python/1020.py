# -*- coding: utf-8 -*-
x = int(input())
anos = 0
meses = 0
dias = 0
anos = int(x/365)
a = int(x%365)
meses = int(a/30)
dias = int(a%30)
print(anos, 'ano(s)')
print(meses, 'mes(es)')
print(dias, 'dia(s)')