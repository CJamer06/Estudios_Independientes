# Los Vectores o arreglos

Un vector unidimensional es un tipo de datos que almacena una secuencia de datos del mismo tipo. Los elementos de un vector
se almacenan en zonas contiguas de memoria y se puede acceder a ellos de manera directa mediante un índice o posición.


| 0 | 1 | 2 | 3 |$\leftarrow$ Posiciones en memoria|
|---|---|---|---|---|
|H  |  o|  l|  a| $\leftarrow$ Tipo texto|
1   |2  |3  |  4| $\leftarrow$ Tipo numérico entero.|

- Estructura vector:
- 
    Tipo nombre[tamaño];
    ^     ^     ^ 
    ^     ^     ^ Numero de espacios en el vector
    ^     ^
    ^     ^ Nombre de la variable
    ^
    ^ Tipo de dato (int, char, float...etc)

    Ejemplos

    int números[10];
    char letras[5];
    float reales[15];

- Iniciar un Vector:

    int numero[] = {1, 4, 6, 7, 3};
    ^     ^               ^
    ^     ^               ^ Numero de elementos en el vector
    ^     ^
    ^     ^ Nombre de la variable
    ^
    ^ Tipo de dato (int, char, float...etc)

    int letras[] = {'a','e','i',o','u'}};
    ^     ^               ^
    ^     ^               ^ Elementos en el vector
    ^     ^
    ^     ^ Nombre de la variable
    ^
    ^ Tipo de dato (int, char, float...etc)

    letra[0] = 'a';
    letra[1] = 'e';
    letra[2] = 'i';
    letra[3] = 'o';
    letra[4] = 'u';
