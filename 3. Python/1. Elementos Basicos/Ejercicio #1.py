#1. Escribir la siguiente exprecion en forma de expresión algebraica

print("Ecuacion: a³*(b²-2ac) / 2b")
a = float(input("Ingrese el valor de a: "))
b = float(input("Ingrese el valor de b: "))
c = float(input("Ingrese el valor de c: "))

RES = (a**3 * (b**2 - 2*a*c)) / (2*b)

print("El resultado es: ",RES)