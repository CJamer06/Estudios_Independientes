/*7. Realice un programa que defina dos vectores de caracteres y despues almacene el contenido de ambos vectores en un 
nuevo vector, situando en primer lugar los elementos del primer vector seguido por los elementos del segundo vector. 
Muestre el contenido del nuevo vector en la salida estandar*/

#include <iostream>

using namespace std;

int main()
{
    char LETRA1[] = {'a','e','i','o','u'}, LETRA2[] = {'A','E','I','O','U'}, LETRAS[10];

    for (int i = 0; i < 5; i++)
    {
        LETRAS[i] = LETRA1[i];
    }
    
     for (int i = 0; i < 5; i++)
    {
        LETRAS[i+5] = LETRA2[i];
    }

    for (int i = 0; i < 10; i++)
    {
        cout<<LETRAS[i]<<" ";
    }

    cout<<"\n";
    return 0;
}