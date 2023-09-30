#Pilas

Pila = [1,2,3]

print("La pila tiene los siguientes valores: ", Pila)

Valor1 = int(input("Ingrese un valor que desea agregar: "))
Valor2 = int(input("Ingrese un valor que desea agregar: "))

#Agregar elementos por el final
Pila.append(Valor1)
Pila.append(Valor2)

print("La pila ahora tiene estos valores: ", Pila) 

#Sacar elementos por el final
n1 = Pila.pop()
n2 = Pila.pop()
n3 = Pila.pop()

print("Estos son los valores sacados ", n1, ", ", n2, ", ", n3, " y lo que quedo en la pila es: " , Pila)