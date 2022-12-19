#Operadores Aritmeticos

N1 = 10
N2 = 6

resultado = 10 + 5
print("resultado = 10 + 5")
print("El resultado de la suma por consola es:" , resultado)

resultado = N1 + N2
print("\nValor 1:",N1)
print("Valor 2:",N2)

print("El resultado de la suma de variabeles N1 + N2 es:", resultado)

resultado = N1 - N2
print("El resultado de la resta de variabeles N1 - N2 es:", resultado)

resultado = N1 * N2
print("El resultado de la multiplicacion de variabeles N1 * N2 es:", resultado)

resultado = N1 / N2
print("El resultado de la divicion de variabeles N1 / N2 es:", resultado)

resultado = N1 % 2 #Divicion modular
print("El residuo de la divicion modular de variabeles N1 % 2 es:", resultado)

resultado = N1 ** 2 #Potenciacion
print("El resultado de la divicion de variabeles N1 ** 2 es:", resultado)

'''
    La jerarquia de los operadores  aritmeticos tiene el sigiente orden: 
    1. Paréntesis ()
    2. Potencia **
    3. Multiplicacion *, Divicion /, Modiulo %
    4. Suma +, Resta -
'''

print("\nEjemplo de operaciones artitmetivas")

resultado = (3**3)*(13/5 - (2*4))
print("3³*(13/5 - (2*4)) = ", resultado)
