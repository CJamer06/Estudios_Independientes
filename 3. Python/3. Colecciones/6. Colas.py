#Colas

Cola = [1,2,3]

print("La Cola tiene los siguientes valores: ", Cola)

Valor1 = int(input("Ingrese un valor que desea agregar: "))
Valor2 = int(input("Ingrese un valor que desea agregar: "))

#Agregar elementos por el fina de la cola
Cola.append(Valor1)
Cola.append(Valor2)

print("La Cola ahora tiene estos valores: ", Cola) 

#Sacar elementos por el principio de la cola
n1 = Cola.pop(0)
n2 = Cola.pop(0)
n3 = Cola.pop(0)

print("Estos son los valores sacados ", n1, ", ", n2, ", ", n3, " y lo que quedo en la Cola es: " , Cola)