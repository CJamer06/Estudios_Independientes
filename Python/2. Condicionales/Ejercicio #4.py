'''
4. Hacer un programa que simule el funcionamiento de una calculadora que puede realizar las cuatro operaciones
aritméticas básicas (Suma, Resta, Multiplicación y división). El usuario debe especificar la operación con el primer
carácter del nombre de la operación.
'''

NUM1 = int(input("Valor #1: "))
NUM2 = int(input("Valor #2: "))

OP = input("Que operación desea realizar: ").upper() #Esta extensión pasa a mayúscula cualquier carácter.

if OP == 'S':
    RES = NUM1+NUM2
    print(f"{NUM1} + {NUM2} = {RES}")
elif OP == 'R':
    RES = NUM1-NUM2
    print(f"{NUM1}-{NUM2}={RES}")
elif OP == 'P' or OP == 'M':
    RES = NUM1*NUM2
    print(f"{NUM1}*{NUM2} = {RES}")
elif OP == 'D':
    RES = NUM1 / NUM2
    print(f"{NUM1}/{NUM2} = {RES:.2f}") # .<numero>f sirve para decir cuantos decimales queremos después de la coma.
else:
    print(f"Operación inexistente")

