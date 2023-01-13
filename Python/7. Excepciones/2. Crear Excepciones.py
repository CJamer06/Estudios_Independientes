# Lanzar una Excepción propia.
'''
No sirve de mucho, pero nos permite crear excepciones propias (Con los errores propios de Python que están en su biblioteca) y arrojar un error con mensaje personalizado, sin embargo esto se ve en su máxima capacidad cuando lo usamos de la mano con la POO
'''
def evaluaEdad(Edad):

    if Edad<0:
        raise ValueError("No se permiten edades negativas")

    if Edad<20:
        return "Eres muy Joven"
    elif Edad<40:
        return "Eres Joven"
    elif Edad<65:
        return "Eres maduro"
    elif Edad<100:
        return "Cuídate..."

print(evaluaEdad(-20))