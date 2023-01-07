#Conjuntos
'''
Los conjuntos son grupos de elementos juntos, donde no se repitan valores o datos, y no cuente con listas dentro de él.

Declarar conjuntos
Para declarar conjuntos usamos lo siguiente:

<Nombre conjunto> = set()
<Nombre conjunto> = {}

Estas lineas se deben escribir juntas para poder funcionar
'''

Conjunto = set() #Se escribe de esta forma para crear un conjunto vacío.
Conjunto  = {1,2,3,"hola",4.56}

print(Conjunto)

print(f"\nAgregamos 5")
Conjunto.add(5)

print(Conjunto)

print(f"\nEliminemos 'hola'")
Conjunto.discard("hola")

print(Conjunto)

print(f"\nEliminemos todo")
Conjunto.clear()

print(Conjunto)

'''
Notas:
- Para buscar usamos lo ya antes visto en el programa de listas.
'''

'''
Si no se busca crear un conjunto vacío lo que debemos o podemos hacer es declarar directamente los componentes de el conjunto.

ConjuntoA = {1,2,3}
ConjuntoB = {4,5,6}
'''

A = {1,2,3}
B = {4,5,6}

'''
Podemos usar lo visto anteriormente para operar los conjuntos.
'''

print("Conjunto A: ",A,"\nConjunto B: ", B)
print("Son a y b iguales: ", A == B)

'''
Aplicando la lógica de los conjuntos podemos generar expresiones lógicas con estos:

Union (|)
Diferencia (-) de uno a otro
Intersección (&)
Diferencia simétrica ( ^ )


'''

C = A | B
print("La union del conjunto A y B: ", C)
A.add(4)
B.add(3)
print("Conjunto A: ",A,"\nConjunto B: ", B)

print("La diferencia del conjunto A para con B: ", A - B)
print("La diferencia del conjunto B para con A: ", B - A)

print("La intersección del conjunto A y B: ", A & B)
print("La diferencia simétrica de A y B: ", A ^ B)

'''
Subconjuntos y Superconjunto
- Tenemos un método de saber si un conjunto es perteneciente a otro conjunto y para eso usamos el comando A.issubset(B), para saber si A es contenido en B.
- Tenemos un método de saber si un conjunto es incluye a otro conjunto dentro de el y para usamos el comando A.issuperset(B), para saber si A contiene a B.

Disconexos
Tenemos un método de saber si un conjunto es conexo, osea que comparten elementos, lo sabremos usando el comando A.isdisjoint(B)
'''

print("\nEl Conjunto C: ", C)
print("El Conjunto A", A, "esta contenido en C: ", A.issubset(C))
print("El Conjunto B", B, "esta contiene al conjunto C: ", B.issuperset(C))
print("El Conjunto A es disconexo con B: ", A.isdisjoint(B))

'''
Para crear conjuntos inmutables en el código solo debemos usar el comando = frozenset({}) a la hora de declarar el conjunto.

D = frozenset({1,2,3,4})
'''

D = frozenset({1,2,3,4,5,6,7}) #Dias de la semana

print("El conjunto D contiene los números de los Dias de la semana ", D)
