# Funciones integradas
'''

Nombre_variable = Funcion_integrada(Dato)

Convertir a numérico: Nombre_variable = int(Dato) o Nombre_variable = float(Dato)
    Cadena de caracteres  => Numero entero
    CAD = "10"               NUM_ENT = int("10")

    Cadena de caracteres  => Numero float
    CAD = "20.1"             NUM_FLO = float("20.1")

    Hexadecimal           => Numero entero
    HEX = 0xa                NUM_ENT = int("0xa",16)

    Binario               => Numero entero
    HEX = 0b1111             NUM_ENT = int("0b1111",2)

Convertir de numérico a cadena:
    Numero entero         => Cadena de caracteres
    NUM_ENT = 10             CAD = str(10)

    Numero float          => Cadena de caracteres
    NUM_FLO = 20.1           CAD = str(20.1)

Convertir a binario:
    Numero entero         => Binario
    NUM_ENT = 10             BIN = bin(10)
    HEX = 0xa                BIN = bin("0xa",16)

Convertir de numérico a binario:
    Numero entero         => Hexadecimal
    NUM_ENT = 10             HEX = hex(10)
    BIN = 0b1111             HEX = hex("0b1111",16)

Extras
abs(): Valor absoluto.
round(): Redondea el valor.
len(""): Contador de caracteres.
'''

