# -*- coding: utf-8 -*-
nome = str(input())
salario = float(input())
vendas = float(input())
joao = float(vendas * 0.15)
total = float(salario + joao)
print('TOTAL = R$ {:.2f}'.format(total))