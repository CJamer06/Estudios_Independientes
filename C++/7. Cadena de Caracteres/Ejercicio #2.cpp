/*2. Pedir al usuario una cadena de caracteres, almacenarla en un arreglo y copiar todo su contenido hacia otro arreglo de 
caracteres.*/

#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char CAD[30], CAD2[30];

    cout<<"Ingrese siu nombre: ";cin.getline(CAD,30,'\n');

    strcpy(CAD2, CAD);

    cout<<"Lo almacenado en la cadena 2: "<<CAD2<<endl;

    return 0;
}
