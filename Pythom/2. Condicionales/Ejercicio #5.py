#5. Hacer un programa que simule un cajero automatico con un saldo inicial de $1000 y tendra el siguiente
# menu de opciones:

I = 1000

OP = int(input(f"\t MENU \n"
               "1. Ingresar dinero en la cuenta\n"
               "2. Retirar dinero de la cuenta\n"
               "3. Mostrar dinero disponible\n"
               "4. Salir\n"
               "Opcion: "))
if OP == 1:
    F = float(input(f"Cuanto desea ingrasar: "))
    I += F
    print(f"Saldo total: {I}")
elif OP == 2:
    F = float(input(f"Cuanto desea retirar: "))
    if F > I:
        print(f"No tiene esa cantidad de dinero")
    else:
        I -= F
        print(f"Saldo total: {I}")
elif OP == 3:
    print(f"Saldo total: {I}")
elif OP == 4:
    print(f"Gracias por usar su cajero automatico")
else:
    print(f"\tError\n")

