'''
3. Escriba un programa donde cree una lista con los siguientes personajes del Señor de los anillos. 

Nombre: Aragorn
Clase: Guerrero
Raza: Dúnadan del Norte 

Nombre: Gandalf
Clase: Mago
Raza: Istar 

Nombre: Legolas
Clase: Arquero
Raza: Elfo Sindar
'''

lista = []

Nombre = input(f"Ingrese el nombre del personajes: ")
Clase = input(f"Ingrese la clase del personajes: ")
Raza = input(f"Ingrese la raza del personaje: ")

Personaje = {"Nombre":Nombre, "Clase":Clase, "Raza":Raza}
lista.append(Personaje)

Nombre = input(f"\nIngrese el nombre del personajes: ")
Clase = input(f"Ingrese la clase del personajes: ")
Raza = input(f"Ingrese la raza del personaje: ")

Personaje = {"Nombre":Nombre, "Clase":Clase, "Raza":Raza}
lista.append(Personaje)

Nombre = input(f"\nIngrese el nombre del personajes: ")
Clase = input(f"Ingrese la clase del personajes: ")
Raza = input(f"Ingrese la raza del personaje: ")

Personaje = {"Nombre":Nombre, "Clase":Clase, "Raza":Raza}
lista.append(Personaje)

print(lista)