#Operadores Lógicos
'''
    Permite construir expresiones lógicas, se obtienen como resultado booleano

    - Conjunción (and)
    - Disyunción (or)
    - Negación (not)

    CONJUNCIÓN (and): Se le conoce como una multiplicación lógica

        Operando 1 - Operador - Operando 2  - Resultado
        True         and        True          True
        True         and        False         False
        False        and        True          False
        False        and        False         False

    DISYUNCIÓN (or): Se le conoce como una suma lógica
        Operando 1 - Operador - Operando 2  - Resultado
        True         or         True          True
        True         or         False         True
        False        or         True          True
        False        or         False         False

    NEGACIÓN (not): Se le conoce como el inverso lógico
        Operando   -   Resultado
        not(True)      False
        not(False)     True

    La prioridad de los operadores lógicos es:
        1. not
        2. and
        3. or
'''
a = 10
b = 12
c = 13
d = 10
res = ((a>b) or (a<c)) and ((a==c) or (a>=b))
print("1. Si tenemos que: a = 10, b = 12, c = 13, d = 10")
print("Entonces el resultado de ((a>b) or (a<c)) and ((a==c) or (a>=b)) es : ", res)

res = (a<b) and (b<c)
print("\n2. Si tenemos que: a = 10, b = 12, c = 13, d = 10")
print("Entonces el resultado de (a<b) and (b<c) es : ", res)

res = not((a<b) and (b<c)) #Al usar el not este cambia por completo el resultado
print("\n3. Si tenemos que: a = 10, b = 12, c = 13, d = 10")
print("Entonces el resultado de not((a<b) and (b<c)) es : ", res)
'''
    Prioridad de todos los operadores (Aritméticos, Lógicos, Relacionales)

    1. ()
    2. **
    3. *, /, %, not
    4. +, -, and
    5. <, >, <=, >=, !=, ==, or
'''