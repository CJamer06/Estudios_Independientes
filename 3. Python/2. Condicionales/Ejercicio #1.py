# 1. Hacer un programa que pida 2 numeros y se de cuenta cual de ellos es par, o si ambos lo son

NUM1 = int(input("Valor #1: "))
NUM2 = int(input("Valor #2: "))

if NUM1%2 == 0 and NUM2%2 == 0:
    print("Ambos son pares")
elif NUM1 % 2 == 0 and NUM2 % 2 != 0:
    print(f"Valor #1 es par")
elif NUM1 % 2 != 0 and NUM2 % 2 == 0:
    print(f"Valor #2 es par")
else:
    print("Ninguno es par")