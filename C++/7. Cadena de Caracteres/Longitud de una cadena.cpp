/*Longitud de una cadena de caracteres - Funcion strlen()

    Retorna el numero de elementos que tiene la cadena.

    |H||o||l||a|
     ^  ^  ^  ^
     1  2  3  4
*/

#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    int LARG = 0;
    char PAL[]="Esta es una cadena de prueva";

    cout<<"La cadena es: "<<PAL<<endl;
    LARG = strlen(PAL);

    cout<<"La cadena tiene "<<LARG<<" caracteres"<<endl;
    return 0;
}