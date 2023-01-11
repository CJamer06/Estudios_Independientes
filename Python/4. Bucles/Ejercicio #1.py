'''
 1. Realiza un programa que solicite al usuario estándar un entero del 1 al 10 y muestre en la salida estándar su tabla de multiplicar
'''

Entero = int(input(f"Ingrese un numero: "))

for i in range(1,10):
    print(f"{Entero} * {i} = {Entero*i}")
