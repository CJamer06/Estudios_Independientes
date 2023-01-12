# Funciones

'''
En Python, para crear funciones usamos la palabra reservada "def", la declaramos al inicio del programa y usamos la siguiente estructura: 

def Nombre_Función():
    Bloque de código
    ...

Las funciones se usan para sintetizar código, ya que estar permiten reutilizar partes que se ven utilizadas con frecuencia.
'''

def Mostrar():
    if i != N-1:
        print(f"{z}", end=", ")
    else:
        print(f"{z}", end=".")


N = int(input("Numero de elementos de la secuencia: "))

x = 0 
y = 1
z = 1
i = 0

while i<N:

    Mostrar()
    
    z = x + y;

    x = y;
    y = z;
    
    i=i+1