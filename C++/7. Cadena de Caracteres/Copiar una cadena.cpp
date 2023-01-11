/*Copiar el contenido de una cadena a otra - función strcpy

    Tomamos la cadena 2 (Que esta vacia) y le copiamos la ingformacion de la cadena 1

    char CAD[] = NOMBRE;
    char CAD2[30];

    strcpy(CAD2,CAD1);

    CAD[30] = NOMBRE;
    CAD2[30] = NOMBRE;
*/


#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char CAD[30], CAD2[30];

    cout<<"Ingrese siu nombre: ";cin.getline(CAD,30,'\n');

    strcpy(CAD2, CAD);

    cout<<"Lo almacenado en la cadena 1: "<<CAD<<endl;
    cout<<"Lo almacenado en la cadena 2: "<<CAD2<<endl;

    return 0;
}