# -*- coding: utf-8 -*-
a = int(input())
horas = 0
minutos = 0
segundos = 0
if(a < 60):
    segundos = a
if(a >= 60 and a < 3600):
    minutos = int(a / 60)
    segundos = int(a % 60)
if(a >= 3600):
    horas = int(a / 3600)
    a = int(a % 3600)
    minutos = int(a / 60)
    segundos = int(a % 60)
print(str(horas)+':'+str(minutos)+':'+str(segundos))