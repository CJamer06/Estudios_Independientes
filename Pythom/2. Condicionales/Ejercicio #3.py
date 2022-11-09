# 3. Hacer un programa que pida un caracter e indique si es una vocal o no.

CAR = input("Digite un caracter: ").lower() # Esta funcion permite convertir de mayuscula a minuscula
# CAR = CAR.lower(), Esta funcion permite convertir de mayuscula a minuscula
# CAR = CAR.upper(), Esta funcion permite convertir de minuscula a mayuscula
if CAR == 'a' or CAR == 'e' or CAR == 'i' or CAR == 'o' or CAR == 'u':
    print("Es una vocal")
    '''
    elif CAR == 'A' or CAR == 'E' or CAR == 'I' or CAR == 'O' or CAR == 'U':
    print("Es una vocal")
    '''
else:
    print("No es una vocal")