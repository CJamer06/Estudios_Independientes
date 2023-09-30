'''
1. Un program que permite calcular la raíz cuadrada de un valor, pero si el valor es negativo muestre un error pero continue con el programa.
'''

import math

def calculaRaiz(num1):

    if num1<0:
        raise ValueError("El numero no puede ser negativo") #Guarda un mensaje que almacena un String para ser mostrado con posterioridad.
    else:
        return math.sqrt(num1)

op1 = int(input("Introduce un valor numérico: "))
try:

    print(calculaRaiz(op1))

except ValueError as ErrorDeNumeroNegativo: #Con es "as" le puedo asignar un nombre diferente al tipo de error.

    print(ErrorDeNumeroNegativo) # Llamo por su nuevo nombre al error, que llama al *raise* y nos muestra el mensaje guardado en este.

print("Programa terminado")