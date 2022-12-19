#Listas (Arreglos y struct)
'''
Las listas son un conjunto de informacion almacenado de forma secuancial, sin importar su tipo o definicion.

Nombre de la lista = [Conteido de la lista] #De esta forma se declara una lista en python
print(lista) # De esta forma se muestra una lista
'''
lista = ["Lunes","Martes","Miercoles","Jueves","Viernes","Sabado","Domingo"]
print(lista) #Mostramos el contenido de la lista.

'''
Para mostrar un solo un elemento de la lista debemos tener presente que las listas inicia desde 0 asta n-1. Para acceder 
al interior de la lista tenemos 2 formas, las cuales son:

print(<Nombre de la lista>[<Posicion>]
print(<Nombre de la lista>[- <Posicion>] #En este caso se recorre de atrás hacia delante.
'''

print(f"El primer dia de la lista es {lista[0]}") #Python reconoce el 0 como primera posicion
print(f"El ultimo dia de la lista es {lista[-1]}") #Al igual que el -1 como su ultima posicion

'''
Para mostrar una sola parte de la lista tenemos que:

print(<Nombre de la lista>[<Posicion1(n-1)>:<Posicion2(n+1)>] 
print(<Nombre de la lista>[:<Posicion2(n+1)>] Va desde 0 hasta la Posicion2
print(<Nombre de la lista>[<Posicion1(n-1)>:] Va desde Posicion1 hasta n-1

Se escribe de esta forma para que Python inicie en un valor n-1 y llegue a un indice anterior de n+1.
'''

print(f"\nLos fines de semana son el {lista[5:7]}\n")
lista = ["PAR","IMPAR",1,2,3,4,5,6,7,8,9,10,[2,4,6,8,10],[1,3,5,7,9],True]
print(f"Nueva lista:\n{lista}") #Reciclamos la variable
print(f"La cantidad de elementos en la lista es: {len(lista)}")

'''
Ingresar dato al final de la lista
Para ingresar datos en una lista usamos la siguiente funcion: 
<Nombre lista>.append(<Dato a agregar>)
'''

lista.append(int(input("\nDigite un numero: ")))
print(f"Nueva lista:\n{lista}") #Reciclamos la variable
print(f"La cantidad de elementos en la lista es: {len(lista)}")

'''
Ingresar dato en un lugar especifico
Para ingresar datos en una lista usamos la siguiente funcion: 
<Nombre lista>.insert(<Posicion>,<Dato a agregar>)
'''

lista.insert(0,input("\nDigite su nombre: "))
print(f"Nueva lista:\n{lista}") #Reciclamos la variable
print(f"La cantidad de elementos en la lista es: {len(lista)}")

'''
Ingresar varios datos al final de la lista
Para ingresar datos en una lista usamos la siguiente funcion: 
<Nombre lista>.extend(<Dato a agregar>)
'''
'''
Buscar información en la lista
Para ingresar datos en una lista usamos la siguiente funcion: 
print("<Dato> in <Nombre lista>")
'''

print("\nEsta Carlos e la lista:", 'Carlos' in lista)

'''
Buscar la posición de un dato de la lista
Para ingresar datos en una lista usamos la siguiente función: 
print(<Nombre lista>.index(<Dato>)")
'''

print(lista.index(int(input("\nDesea buscar un numero: "))),"es la posicion del numero")

'''
Anexos
    <Nombre lista>.count(<Datos>): Permite saber cuantas veces hay un valor dentro de la lista
    <Nombre lista>.pop(<Posicion (n-1)>): Permite eliminar un dato según la posición (n-1) y si se deja vació 
    elimina el ultimo valor.
    <Nombre lista>.remove(<Datos>): Permite eliminar un dato, sea cual sea que se ingrese
    <Nombre lista>.clear(): Limpia toda la lista.

Operar listas
    <Nombre lista> * #numero : Puede duplicar, triplicar ...etc la información de la lista dentro de esta misma.
    <Nombre lista>.reverse(): invierte la lista 
    <Nombre lista>.sort(): Ordena la lista de menor a mayor
    <Nombre lista>.sort(reverse=True): Ordena la lista de mayor a menor
'''