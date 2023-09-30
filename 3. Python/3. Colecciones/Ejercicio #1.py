#1. Escriba un programa donde tenga una lista y que, a continuación, elimine los elementos repetidos, por último mostrar la lista.

lista = [1,2,3,"Carlos",3,4,5,"Carlos","Javier",5,6,7]

print("La lista que tenemos es: ", lista)

#lista = list(set(lista)) #Esto lo que hace es resumir todo lo que se hace a continuación.

Conjunto = set(lista) #Se convierte a la lista en un conjunto, en el cual no se repiten valores.
lista = list(Conjunto) #Se convierte  nuevamente de conjunto a lista.

print("El resultado es: ", lista)
