# Diccionarios
'''
    Un diccionario es un tipo de colección que sus elementos se almacenan desordenados y con la forma clave:valor donde no pueden haber claves duplicadas.

    Si bien dijimos que para que Python no confundiera los conjuntos con los Diccionarios, a la hora de declarar los conjuntos usábamos la palabra reservada "set", ya que este no es el caso tenemos que la estructura de los diccionarios esta dada por:

    Diccionario = {clave1:valor1, clave2:valor2, ... clave-n:valor-n}
'''

Diccionario = {"Azul":"Blue", "Amarillo":"Yellow", "Verde":"Green"}

print(Diccionario)

'''
De esta forma un diccionario almacena 2 versiones de un mismo objeto, lo que nos permite poder mostrar el valor asociado a uno en especifico.
Diccionario[clave]
'''

A = input("Ingrese el nombre de un color en español: ")
print("El color en ingles se dice: ", Diccionario[A])

'''
Para poder agregar valores lo que debemos hacer es iniciar el Diccionario con la nueva -clave- y posterior a eso igualar le al -valor- relacionado.
Diccionario[Nueva_Clave] = Nuevo_Valor

'''

Diccionario["Rojo"] = "Red"

print("Agregamos rojo al diccionario y nos queda ", Diccionario)

'''
Para eliminar usamos la función - del() - y en su interior declaramos la la variable tipo diccionario, indicando cual es la clave que queremos eliminar, como por ejemplo:

del(Diccionario[Rojo])
'''

del(Diccionario["Rojo"])
print("Usando el comando Del(), podemos eliminar el rojo: ", Diccionario)
