#Sentencia if
'''
    if bloque de condiciones :
        Orden
    else:
        Orden

    Caso especial:
    if bloque de condiciones :
        Orden
    elif bloque de condiciones:
        Orden
    else:
        Orden

'''

numero = int(input("Ingrese un numero: "))

if numero > 0:
    print("El numero es positivo")
elif numero == 0:
    print("EL numero es cero")
else:
    print("EL numero es negativo")
