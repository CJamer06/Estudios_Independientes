/*1. Hacer un programa que pida al usuario que digite una cadena de caracteres, luego verificar de la longitud de la cadena,
y si esta supera a 10 caracteres mostrarla en pantalla caso contrario no mostrarla.*/

#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    char CAD[30];

    cout<<"Ingrese una cadena de caracteres: ";cin.getline(CAD,30,'\n');

    if(strlen(CAD) > 10)
    {
        cout<<CAD<<endl;
    }
    return 0;
}