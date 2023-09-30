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

print("Ingrese el nombre de un color en español: Amarillo")
A = "Amarillo"
print("El color en ingles se dice: ", Diccionario[A])

'''
Para poder agregar valores lo que debemos hacer es iniciar el Diccionario con la nueva -clave- y posterior a eso igualar le al -valor- relacionado.
Diccionario[Nueva_Clave] = Nuevo_Valor

De esta misma forma tenemos la opción de editar cualquiera de los componentes del Diccionario, manteniendo el mismo esquema.
'''

Diccionario["Rojo"] = "Red"
Diccionario["Amarillo"] = "YELLOW"

print("Agregamos rojo al diccionario y cambiamos el resultado de amarillo por 'YELLOW' nos queda Diccionario: ", Diccionario)

'''
Para eliminar usamos la función - del() - y en su interior declaramos la la variable tipo diccionario, indicando cual es la clave que queremos eliminar, como por ejemplo:

del(Diccionario[Rojo])
'''

Diccionario["Amarillo"] = "Yellow"
del(Diccionario["Rojo"])
print("Usando el comando Del(), podemos eliminar el rojo: ", Diccionario)

'''
Los diccionarios pueden contar con mas instrucciones siempre y cuando conserven la estructura de Clave:Valor, como por ejemplo un diccionario que guarde las estatura y la edad, según el nombre de una persona:

Diccionario = {Nombre:[Edad,Estatura]}
'''

Diccionario = {"Carlos":[20,1.72]}
print("\nEl diccionario tiene los siguientes datos: ", Diccionario)

Diccionario["Juan"] = [22,1.65]

print("Como ya lo emos visto agregamos mas valores al diccionario: ", Diccionario)

Diccionario = {"Carlos":{"Edad":20 , "Estatura":1.76}, "Juan":{"Edad":22, "Estatura":1.65}}

print("Incluso podemos agregar diccionarios a los diccionarios: ", Diccionario)
print("Para hacer búsquedas usamos lo antes visto, por ejemplo los datos de Carlos: ", Diccionario["Carlos"])

print("\n\n\n")

print("Ejemplos de Diccionario: ")

Equipo = {10:"Leonel Messi", 7:"Cristiano Ronaldo", 11:"Juan Cuadrado", 9:"Radamel Falcao"}
print(Equipo)
print("El 10 es ",Equipo[10])

#Pero y si queremos realizar una búsqueda y no existe un jugador con dicho dorsal, para eso usamos lo siguiente.

A = int(input("Ingrese un numero de dorsal: "))
print("El numero ", A, " : ", Equipo.get(A, "No existe"))

'''
Con la palabra reservada - get - Python nos brinda la posibilidad de decidir, si no existe dentro del diccionario una opción entonces mostrar un mensaje.
'''

#¿Pero y si queremos saber si un jugador esta en la plantilla o no?
A = int(input("\nNumero para verificar: "))
print("El numero ", A, " : ", A in Equipo)

#Pero y si solo queremos ver los números de los dorsales - Claves
print("\nLos dorsales que están son: " , Equipo.keys())

#Pero si solo queremos ver los nombres de los jugadores - Valor
print("\nLos Jugadores que estan son: " , Equipo.values())

#Para ver lo que hay dentro del Diccionario de forma diferente.
print("Items: ", Equipo.items())

#Para saber cuantos items tiene el Diccionario:
print("El numero de jugadores que tiene el equipo es:", len(Equipo))

#Para limpiar el diccionario por completo usamos:
Equipo.clear()
print("El equipo: ", Equipo)
