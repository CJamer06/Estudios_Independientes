# Class
'''
Para construir una clase usamos la palabra reservada "class" seguido del nombre con primera letra en mayúscula:

class Nombre_Clase:
    Atributos
    Métodos
    Bloque de código

'''
class Coche():
    #Atributos
    largo_chasis = 250
    ancho_chasis = 120
    ruedas = 4
    en_marcha = False

    '''
    Métodos

    def Nombre(self)# -> Define el comportamiento de un objeto.
                #self -> hace la referencia al objeto de la propia clase.
        pass# -> Es solo un seguro caso tal que no se le asigne ninguna acción al método.
    '''
    def arrancar(self):
        self.en_marcha = True
    pass

    def apagar(self):
        self.en_marcha = False

    def estado(self):
        if(self.en_marcha):
            return "El coche esta en marcha"
        else:
            return "El coche esta parado"
    pass

'''
- Objeto

nombreObjeto = NombreClase()  <- Instanciar una clase/Crear un Objeto

- Acceder a los Atributos
nombreObjeto.Atributo

'''
miCoche = Coche()

print(f"El chasis tiene: {miCoche.ancho_chasis}cm")
print(f"El coche tiene {miCoche.ruedas} ruedas")
print(f"\nEsta encendido el coche: {miCoche.en_marcha}")

Op = 0

while Op < 3:

    try:
        Op = int(input(f"Desea Encender/Apagar el coche \n 1.Si \n 2.No \n 3.Salir \nOpción: "))

    except ValueError:
        print(f"-> Solo ingrese 1 o 2 <-")
        Op = 0

    if Op == 1:
        miCoche.arrancar()
    else:
        miCoche.apagar()
        
    print(f"\n-> Estado del coche: {miCoche.estado()} <-\n")
        


