# 3. Hacer un programa que pida un caracter e indique si es una vocal o no.

CAR = input("Ingrese un caracter: ").lower() # Esta función permite convertir de mayúscula a minúscula
# CAR = CAR.lower(), Esta función permite convertir de mayúscula a minúscula
# CAR = CAR.upper(), Esta función permite convertir de minúscula a mayúscula
if CAR == 'a' or CAR == 'e' or CAR == 'i' or CAR == 'o' or CAR == 'u':
    print("Es una vocal")
    '''
    elif CAR == 'A' or CAR == 'E' or CAR == 'I' or CAR == 'O' or CAR == 'U':
    print("Es una vocal")
    '''
else:
    print("No es una vocal")