# -*- coding: utf-8 -*-
A, B, C = input().split(" ")
A = float(A)
B = float(B)
C = float(C)
pi = 3.14159
triangulo = float(A * C)/2.0
circulo = float(pi * C**2)
trapezio = float(A + B) * C
trapezio = trapezio/2.0
quadrado = float(B * B)
retangulo = float(A * B)
print('TRIANGULO: {:.3f}'.format(triangulo))
print('CIRCULO: {:.3f}'.format(circulo))
print('TRAPEZIO: {:.3f}'.format(trapezio))
print('QUADRADO: {:.3f}'.format(quadrado))
print('RETANGULO: {:.3f}'.format(retangulo))