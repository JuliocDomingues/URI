# -*- coding: utf-8 -*-

salario = float(input())

if(salario > 0 and salario <= 400):
  print("Novo salario: %.2f" % (salario + (0.15 * salario)))
  print("Reajuste ganho: %.2f" % (0.15 * salario))
  print("Em percentual: 15 %")
elif(salario > 400 and salario <= 800):
  print("Novo salario: %.2f" % (salario + (0.12 * salario)))
  print("Reajuste ganho: %.2f" % (0.12 * salario))
  print("Em percentual: 12 %")
elif(salario > 800 and salario <= 1200):
  print("Novo salario: %.2f" % (salario + (0.10 * salario)))
  print("Reajuste ganho: %.2f" % (0.10 * salario))
  print("Em percentual: 10 %")
elif(salario > 1200 and salario <= 2000):
  print("Novo salario: %.2f" % (salario + (0.07 * salario)))
  print("Reajuste ganho: %.2f" % (0.07 * salario))
  print("Em percentual: 7 %")
else:
  print("Novo salario: %.2f" % (salario + (0.04 * salario)))
  print("Reajuste ganho: %.2f" % (0.04 * salario))
  print("Em percentual: 4 %")