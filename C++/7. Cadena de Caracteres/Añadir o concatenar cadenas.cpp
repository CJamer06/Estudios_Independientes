//Añadir o concatenar una cadena con otra- Funcion strcat()

#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char CAD[] = "Esto es una cadena";
    char CAD2[] =" de ejemplo";
    char CAD3[30];

    strcpy(CAD3,CAD);
    strcat(CAD3,CAD2);

    cout<<"Cadena 1: "<<CAD<<endl;
    cout<<"Cadena 2: "<<CAD2<<endl;

    cout<<"\nLuego de usar strcat: "<<endl;
    cout<<CAD3<<endl;
    return 0;
}