""" 
2.  Escriba una función llamada al_cuadrado() que calcule el cuadrado del valor que se le transmite y despliegue el resultado. La función deberá ser capaz de elevar al cuadrado números flotantes. 
"""

def al_cuadrado(N):
    Resultado = N*N
    print(f"{N} * {N} = {Resultado:.2f}")

N = float(input("Numero a calcular el cuadrado: "))

al_cuadrado(N)