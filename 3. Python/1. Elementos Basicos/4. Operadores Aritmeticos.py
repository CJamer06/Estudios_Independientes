#Operadores Aritméticos

N1 = 10
N2 = 6

resultado = 10 + 5
print("resultado = 10 + 5")
print("El resultado de la suma por consola es:" , resultado)

resultado = N1 + N2
print("\nValor 1:",N1)
print("Valor 2:",N2)

print("El resultado de la suma de variables N1 + N2 es:", resultado)

resultado = N1 - N2
print("El resultado de la resta de variables N1 - N2 es:", resultado)

resultado = N1 * N2
print("El resultado de la multiplicación de variables N1 * N2 es:", resultado)

resultado = N1 / N2
print("El resultado de la division de variables N1 / N2 es:", resultado)

resultado = N1 % 2 #Division modular
print("El residuo de la division modular de variables N1 % 2 es:", resultado)

resultado = N1 ** 2 #Potenciación
print("El resultado de la division de variables N1 ** 2 es:", resultado)

'''
    La jerarquía de los operadores  aritméticos tiene el siguiente orden: 
    1. Paréntesis ()
    2. Potencia **
    3. Multiplicación *, Division /, Modulo %
    4. Suma +, Resta -
'''

print("\nEjemplo de operaciones aritméticas")

resultado = (3**3)*(13/5 - (2*4))
print("3³*(13/5 - (2*4)) = ", resultado)
