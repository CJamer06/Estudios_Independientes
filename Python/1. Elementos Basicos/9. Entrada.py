# Entrada de datos
'''
- Entrada tipo cadena: nombre_variable = input("Mensaje a mostrar")
- Entrada tipo entero: nombre_variable = int(input("Mensaje a mostrar"))
- Entrada tipo flotante: nombre_variable = float(input("Mensaje a mostrar"))
Nota: El mensaje es opcional

Ejemplo:

nombre = input("Ingresar nombre: ")
edad = int(input("Ingrese su edad: "))
peso = float(input("Ingrese su peso en kilogramos: "))
'''
nombre = input("Ingrese su nombre: ") # Solo almacena tipo cadena
edad = int(input("Ingrese su edad: ")) #De esta forma luego podemos hacer operaciones con los valores
peso = float(input("Ingrese su peso en kilogramos: "))
print("Hola",nombre,"tienes",edad,"años, tu peso es de:",peso)