'''
2. Escriba un programa que tenga dos listas y que, a continuación, cree las siguientes listas (en las que no debe haber repeticiones):

- Lista de elementos que aparecen en las dos listas.
- Lista de elementos que aparecen en la primera lista, pero no en la segunda.
- Lista de elementos que aparecen en la segunda lista, pero no en la primera.
- Lista de elementos que aparecen en ambas listas.
'''

lista1 = [2,4,6,8,10,12,14]
lista2 = [2,4,8,16,32,64,128]

print("\nLista 1: ", lista1, "\nLista 2: ", lista2)

lista1 = set(lista1)
lista2 = set(lista2)

lista3 = list(lista1 | lista2) 
print("Los elementos que aparecen en las 2 listas son: ", lista3)

lista3 = list(lista1 - lista2)
print("Los elementos que aparecen en la lista 1 que no están en la 2 son: ", lista3)

lista3 = list(lista2 - lista1)
print("Los elementos que aparecen en la lista 2 1ue no están en la 1 son: ", lista3)

lista3 = list(lista1 & lista2)
print("Los elementos que aparecen en ambas listas: ", lista3)
