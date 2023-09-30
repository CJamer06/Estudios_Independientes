#Condicionales Combinados

edad = int(input("Ingrese su edad: "))

# De esta forma tenemos los condicionales combinados (and, or)
if edad > 0 and edad < 100: # 0<edad<100 esta es otra forma para realizar una condición combinada
	# De esta forma tenemos los condicionales anidados
	if edad >= 18:
		print("Es mayor de edad")
	else:
		print("En menor de edad")
else:
	print("Edad incorrecta")