# Cadenas de caracteres
'''
En Python existes distintas operaciones para manipular una cadena de caracteres (Strings). Dentro de las cuales se encuentra:

- La asignación (+=)
- La concatenación (+)
- La búsqueda (find)

Entre muchas otras.
'''

MySTR = "Hola Mundo"

#print(dir(MySTR)) -> Mostrara en consola todo lo que se puede hacer con este dato.

print(MySTR.upper()) # Convierte a mayúscula
print(MySTR.lower()) # Convierte a minúscula
print(MySTR.swapcase()) # Convierte las mayúsculas en minúsculas y viceversa
print(MySTR.capitalize()) # Convierte la primera letra en mayúscula y las demás en minuscula
print(MySTR.replace("Hola", "Adios")) # Convierte un texto  otro.

#Todo lo anterior se puede combinar entre si de forma que:
print(MySTR.replace("Hola", "Adios")) # Convierte un texto  otro.
print(MySTR.count("o")) # Cuenta una cadena o carácter especifico

print(MySTR.startswith("H")) # El texto empieza con "x" carácter o cadena.
print(MySTR.endswith("o")) # El texto termina con "x" carácter o cadena.

print(MySTR.split(" ")) # Separa el texto con base a "x" carácter o cadena.
print(MySTR.find("o")) # Busca en el texto con base a "x" carácter o cadena.

print(len(MySTR)) # Tamaño de la cadena de caracteres.
print(MySTR.index(" ")) # Separa el texto con base a "x" carácter o cadena.