# Class
'''
Para construir una clase usamos la palabra reservada "class" seguido del nombre con primera letra en mayúscula:

class Nombre_Clase:
    Atributos
    Métodos


'''
class Coche():
    """ 
    Constructor
    Es una forma de especificar la forma inicial de una clase o el estado inicial:

        def __init__(self):
            self.Atributo1 = Condición_inicial
            self.Atributo2 = Condición_inicial
            self.__Atributo3 = Condición_inicial <- Con los guiones bajos indicamos que no se puede modificar el valor de esta variable. (Dentro de la clase de este atributo su nombre debe ser escrito con los guiones bajos, pero desde el exterior no hay ningún problema.)

    """
    def __init__(self):
        #Atributos
        self.largo_chasis = 240
        self.ancho_chasis = 120
        self.ruedas = 4
        self.en_marcha = False
        pass

    '''
    Métodos
    Son las acciones que que realiza el objeto y que trasladamos al código.

        def Nombre(self, valor)# -> Define el comportamiento de un objeto.
                    #self -> hace la referencia al objeto de la propia clase.
                        #valor -> Es una variable que le indica al usuario que este método recibe una valor.
            pass# -> Es solo un seguro caso tal que no se le asigne ninguna acción al método.
    '''

    def arrancar(self, arrancamos):
        self.en_marcha = arrancamos

        if(self.en_marcha):
            return "esta en marcha"
        else:
            return "esta parado"
    

    def Atributos(self):
        return f"El coche tiene {self.ruedas} ruedas, un ancho de {self.ancho_chasis}cm y un largo de {self.largo_chasis}cm"

    


