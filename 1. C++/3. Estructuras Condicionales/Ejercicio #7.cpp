/*7. Escriba un programa que solicite una edad (un enter) e indique en la salida estandar si la salida estandar 
esta en el rango [18-25]*/

#include<iostream>

using namespace std;

int main()
{
    int Edad;
    cout<<"Ingrese su edad: ";cin>>Edad;

    if(Edad >= 18 && Edad <=25)
    {
        cout<<"esta dentro del rango"<<endl;
    }
    else
    {
        cout<<"No esta dentro del rango"<<endl;
    }

    return 0;
}
