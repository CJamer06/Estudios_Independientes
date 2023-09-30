#5. Una tienda ofrece u descuento del 15% sobre el total de la compra y un cliente desea saber cuanto debería pagar
#finalmente por su compra.
print("\t --DESCUENTO DEL 15%--")
TOTAL = float(input("Total de la compra: "))
DESC = TOTAL * 0.15
TOTAL -= DESC
print(f"El total a cancelar es: ${TOTAL:.2f}")