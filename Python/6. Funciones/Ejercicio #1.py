'''
1. Separar una lista depares e impares
'''

Lista = [3,7,9,5,8,3,7,12] # La declaro como variable global

def band():
    Par = []
    Impar = []

    print(Lista)
    Lista.sort() # Ordena de menor a mayor los valores de una lista

    for i in Lista:

        if i%2 == 0:
            Par.append(i)
        else:
            Impar.append(i)

    return Par, Impar # La función Python puede retornar 1 o mas resultados

Par, Impar = band()

print(f"Los pares son {Par}")
print(f"Los impares son {Impar}")