#Conjuntos
'''
Los conjuntos son grupos de elementos juntos, donde no se  repitan valores o datos, y no cunte con listas demntro de
el.

Declarar conjuntos
Para declarar conjuntos usamos lo siguiente:

<Nombre conjunto> = set()
<Nombre conjunto> = {}

Estas lineas se deben escribir juntas para poder funcionar
'''

Conjunto = set()
Conjunto  = {1,2,3,"hola",4.56}

print(Conjunto)

print(f"Agregamos 5")
Conjunto.add(5)

print(Conjunto)

print(f"Eliminemos 'hola'")
Conjunto.discard("hola")

print(Conjunto)

print(f"Eliminemos todo")
Conjunto.clear()

print(Conjunto)

'''
Notas:
- Para buscar usamos lo ya antes visto en el programa de listas.
'''

