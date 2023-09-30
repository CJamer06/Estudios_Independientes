/*1. Comprobar si un número es par o impar, y señalar la posición de memoria donde se está guardando
el número. Con punteros.
*/

#include<iostream>

using namespace std;

int main()
{
    int N = 0;
    int *p; // Puntero.
    
    cout<<"Ingrese un numero: ";cin>>N;

    p = &N; //Indicamos al puntero la direccion de memoria a la cual hara referencia.

    if (*p%2 == 0)
        cout<<*p<<" es un numero par"<<endl;
    else
        cout<<*p<<" es un numero impar"<<endl;
    
    cout<<"El valor esta almacenado en la direccion: "<<p<<endl;
    return 0;
}
