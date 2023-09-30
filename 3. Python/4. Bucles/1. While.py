# Bucle While
'''
Como su nombre lo indica, es un pedazo de código que se va a repetir de forma definida y realizando una acción definida.

while Condición:
    Cuerpo
    ...

Lo anterior es la estructura que conservan los siclos while.
'''

# Digite un numero para sacar su raíz cuadrada.

import math #Importamos librería para usar funciones matemáticas.

numero = int(input("Digite un numero: "))

while numero<0:
    print(f"ERROR -> SOLO VALORES POSITIVOS")
    numero = int(input("Digite un numero: "))

print(f"\nLa raíz cuadrada de {numero} es {math.sqrt(numero):.2f}")