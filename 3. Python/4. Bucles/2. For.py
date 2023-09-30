# Bucle For

'''
For en este lenguaje es usado para recorrer una lista o incluso un string

for i in Objeto_a_recorrer
    código
    ...

Esta es la estructura de un for
'''

Equipo = {10:"Leonel Messi", 7:"Cristiano Ronaldo", 11:"Juan Cuadrado", 9:"Radamel Falcao"}

for i in Equipo:
    print(f"Elemento de la variable:  {Equipo[i]}")
    
'''
for clave,valor in Equipo.items():
    print(f"{clave}->{valor}")
'''

for i in "Amaranto":
    print(f"{i}",end=".")