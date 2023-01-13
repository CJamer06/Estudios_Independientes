# Excepción
'''
Es un error que ocurre durante la ejecución del programa. La sintaxis del código es correcta pero puede que durante la ejecución ocurriera "Algo inesperado".

Nos permite continuar el código aun si este tiene algún error de tipo lógico, si bien no es tan común en programas pequeños, si contamos con altas posibilidades de que se presente dentro de programas con gran cantidad de líneas.

Para solucionar lo antes mencionado, debemos crear un control de excepción, bajo el siguiente principio "Continua el código aunque esto falle"

Con base en lo anterior podemos decir que las excepciones, permiten al código seguir funcionando aun cuando se nos presenta un error.

La estructura de estas Excepciones:
    try:
        Bloque de código
    except Nombre del error:
        Bloque de código
'''

import os


def Suma(N,M):
    return N+M

def Resta(N,M):
    return N-M

def Multiplicacion(N,M):
    return N*M

def Division(N,M):
    try:
        return N/M
    except ZeroDivisionError: # Nombre del Error posible.
        print(f"\t-> No se puede dividir entre 0 <-")
        return "Operación Errónea"

while True:
    try:
        N = int(input(f"Ingrese el numero 1: "))
        M = int(input(f"Ingrese el numero 2: "))
        break
    except ValueError:
        os.system("cls")
        print(f"\t-> Solo colocar valores numéricos, intenta Nueva mente<-")


Op = 0

while Op < 5:

    try:
        Op = int(input(f"\t\n -> MENÚ <- \nQue operación que quiere hacer \n  1. Suma \n  2. Resta \n  3. Multiplicación \n  4. Division \n  5. Salir \nOpción: "))

        if Op == 1:
            print(f"\n -> Suma: {Suma(N,M)}")
        elif Op == 2:
            print(f"\n -> Resta: {Resta(N,M)}")
        elif Op == 3:
            print(f"\n -> Multiplicación: {Multiplicacion(N,M)}")
        elif Op == 4:
            print(f"\n -> Division: {Division(N,M)}")

    except ValueError:
        print(f"-> Solo valores numéricos <-")
        Op = 0

print(f"\t=> Fin del programa <=")

'''
Dado el caso que un mismo bloque de código presente diferentes afectaciones, entonces podemos hacer lo siguiente:

    try:
        Bloque de código
    except Nombre error 1:
        Bloque de código
    except Nombre error 2:
        Bloque de código
    .
    .
    .
    except Nombre error N;
    Bloque de código

Pero también podemos hacerlo de forma general, esta forma capturara cualquier error.

    try:
        Bloque de código
    except:
        Bloque de código

Dentro de las excepciones también tenemos el componente *finally*, que no es mas que un pedazo de código que se ejecutara sin importar el resultado de del try/except.
'''
