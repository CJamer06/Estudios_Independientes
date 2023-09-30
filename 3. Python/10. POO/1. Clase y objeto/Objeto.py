import Class

miCoche = Class.Coche
miCoche2 = Class.Coche

'''
- Objeto

    nombreObjeto = NombreClase()  <- Instanciar una clase/Crear un Objeto
    nombreObjeto = NombreClaseImportada.NombreFuncion

- Acceder a los Atributos
nombreObjeto.Atributo

'''

print(f"El chasis tiene: {miCoche.largo_chasis}cm")
print(f"El coche tiene {miCoche.ruedas} ruedas")
print(f"\n-> Estado del coche: {miCoche.Atributos()} y {miCoche.arrancar(True)} <-\n")         

print("\t\n-----------------------------> Segundo Objeto/Instancia <-----------------------------------\n")

print(f"El chasis tiene: {miCoche2.largo_chasis}cm")
print(f"El coche tiene {miCoche2.ruedas} ruedas")
print(f"\n-> Estado del coche: {miCoche2.Atributos()} y {miCoche2.arrancar(False)} <-\n")
