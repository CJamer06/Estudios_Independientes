#4. Hacer un programa para ingrsar el radio de un circulo y se reporto su área y la longitud de la circunferencia.

import math #Importamos el modulo math, esto nos permite usar pi = 3.14.

print("\t--CALCULADORIA DE ÁREA Y LONGITUD DE UN CIRCULO--")
RAD = float(input("Ingrese el radio: "))
ARE = math.pi * RAD**2
LON = 2 * math.pi * RAD

print(f"El área de la circunferencia es: {ARE:.2f}") # Usamos el "------:.#f", para definir cuatos dicimales colocar despues de la coma.
print(f"La longitud de la circunferencaia es: {LON:.3f}") # Usamos el "------:.#f", para definir cuatos dicimales colocar despues de la coma.