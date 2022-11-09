#Operadores Relacionales
'''
        1. Se utilizan para establecer una relacion entre 2 valores.
        2. Compara estos valores entre si y esta comparacion produce
        un resultado de certeza o falcedad (Verdadero o falso).
        3. Tienen el mismo nivel prioridad en su valuacion. (se realizan de izquierda a derecha)
        4. Los operadores relacionales tienen menor prioridad que los aritmeticos.

        Operadores relacionales

        - Mayor que (>) , Mayor o igual que (>=)
        - Menor que (<) , Menor o igual que (<=)
        - Diferente (!=) , Igual (==)

'''

print("Menor que - Menor o igual")
RES = 10 < 20
print("Comparamos si 10 < 20 : " , RES) #Menor que
RES = 10 <= 20
print("Comparamos si 10 <= 20 : " , RES) #Menor o igual (Se cumplira siempre que sea menor o igual al otro dato)

print("\nMayor que - Mayor o igual ")
RES = 10 > 20
print("Comparamos si 10 > 20 : " , RES) #Mayor que
RES = 10 >= 20
print("Comparamos si 10 >= 20 : " , RES) #Mayor o igual (Se cumplira siempre que sea mayor o igual al otro dato)

print("\nDiferente - Igual ")
RES = 10 != 20
print("Comparamos si 10 != 20 :" , RES) #Diferente
RES = 10 == 20
print("Comparamos si 10 == 20 :" , RES) #Igual

#Aplicamos el uso de variables
a = 5
b = 10
c = 15

RES = a+b == c
print("\nEjemplos")
print("Donde a = 5, b = 10, c = 15")
print(" a + b = c : " , RES)
RES = a+b != c
print(" a + b != c : " , RES)
