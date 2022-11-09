#2. Determinar la solucion logica de la siguiente operacion:
print("Operacion: ((3+5*8)<3 and ((-6/3 * 4) + 2 < 2)) or (a>b)")

a = float(input("Ingrese a: "))
b = float(input("Ingrese b: "))

RES = ((3+5*8)<3 and ((((-6/3)*4) + 2) < 2)) or (a>b)
print("El resultado de la operacion es: ",RES)