/*Plantillas de funciones

    Sirve para hacer una funcion que sirva para varios tipos de datos.

Ejemplo: Sacar el valor absoluto de un valor
*/

#include<iostream>

using namespace std;

template <class TIPOD> 
/*Prefijo de la plantilla, sirve para que el comColador determine de forma automatica el tipo de dato 
que se le esta igresando*/

//Protrotipo de funcion
void MOSVAB(TIPOD NUM);

int main()
{
    int NUM1 = -4;
    float NUM2 = 56.67;
    double NUM3 = 123.5678;

    MOSVAB(NUM1);
    MOSVAB(NUM2);
    MOSVAB(NUM3);

    system("pause");
    return 0;
}

template <class TIPOD>
/*COn esto reducimos la cantidad de funciones y maximizamos la eficiencia del programa.*/
void MOSVAB(TIPOD NUM)
{
    if(NUM < 0)
    {
        NUM *= -1; 
    }

    cout<<"EL valor absoluto del numero: "<<NUM<<endl;
}