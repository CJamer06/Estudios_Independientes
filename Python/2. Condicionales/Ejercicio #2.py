# 2. Hacer un programa que pida 3 numeros y determine cual de los 3 es mayor.

NUM1 = float(input("Valor #1: "))
NUM2 = float(input("Valor #2: "))
NUM3 = float(input("Valor #3: "))

if NUM1>NUM2 and NUM1>NUM3:
    print("Valor #1 es mayor")
elif NUM2>NUM1 and NUM2>NUM3:
    print("Valor #2 es mayor")
elif NUM3>NUM1 and NUM3>NUM2:
    print("Valor #3 es mayor")
else:
    print("Ninguno es mayor")

