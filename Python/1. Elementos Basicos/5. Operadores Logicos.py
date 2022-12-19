#Operadores Lógicos
'''
    Permite construir expreciones logicas, se obtienen como resultado booleano

    - Conjuncion (and)
    - Disyuncion (or)
    - Negacion (not)

    CONJUNCION (and): Se le conoce como una multiplicacion logica

        Operando 1 - Operador - Operando 2  - Resultado
        True         and        True          True
        True         and        False         False
        False        and        True          False
        False        and        False         False

    DISYUNCION (or): Se le conoce como una suma logica
        Operando 1 - Operador - Operando 2  - Resultado
        True         or         True          True
        True         or         False         True
        False        or         True          True
        False        or         False         False

    NEGACION (not): Se le conoce como el inverso logico
        Operando   -   Resultado
        not(True)      False
        not(False)     True

    La prioridad de los operadores logicos es:
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
    Prioridad de todos los operadores (Aritmeticos, Logicos, Relacionales)

    1. ()
    2. **
    3. *, /, %, not
    4. +, -, and
    5. <, >, <=, >=, !=, ==, or
'''