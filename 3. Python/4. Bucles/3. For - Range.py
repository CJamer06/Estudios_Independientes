# For - Range

'''
Range(a,b,c)

En la función range podemos tener 3 parámetros que indican a la range como actuar:

- range(a)          -> (a) es el numero de veces que se repetirá [0,1,2,3]
- range(a,b)        -> (a) es el numero en el que inicia y (b) en el que finaliza
- range(a,b,c)      -> (a) es el numero en el que inicia, (b) en el que finaliza y (c) como aumenta.

Nota: Si i = 0
'''

O = int(input("\nPares antes del numero: "))

for i in range(2,O,2): # Inicia en 2, hasta el valor de O y aumentara de 2 en dos.
    print(f"{i}")

O = int(input("\nPares antes del numero: "))
for i in range(O,0,-1): # Inicia en "n", hasta el valor de 0 y disminuye de 1 en 1.
    print(f"{i}")