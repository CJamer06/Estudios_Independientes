'''
4. Hacer un programa que simule el fucionamiento de una calculadora que puede realizar las cuatro operaciones
aritmaticas basicas (Suma, Resta, Multiplicacion y división). El usuario debe especificar la operacion con el primer
caracter del nombre de la operación.
'''

NUM1 = int(input("Valor #1: "))
NUM2 = int(input("Valor #2: "))

OP = input("Que operacion desea realizar: ").upper() #Esta extencion pasa a mayuscula cualquier caracter.

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
    print(f"{NUM1}/{NUM2} = {RES:.2f}") # .<numero>f sirve para decir cuantos decimales queremos despues de la coma.
else:
    print(f"Operacion inexistente")

