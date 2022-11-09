/*1. Escriba una funcion llamada mult() que acepte dos numeros en punto flotante como parametros, 
multiplique estos dumeros y despliegue el resultado.
*/

#include<iostream>

using namespace std;

//Prototipod de la fucion;
void PD();
void mult(float x, float y);

float NUM1, NUM2; 
//Variables globales, son estandar para todas las funciones y en todas tendran el mismo nombre.

int main()
{
    PD();
    mult(NUM1, NUM2);
    system("pause");
    return 0;
}

void PD()
{
    // float NUM1, NUM2; Variables locales.
    cout<<"Numero 1: ";cin>>NUM1;
    cout<<"Numero 2: ";cin>>NUM2;
}

void mult(float x, float y)
{
    cout<<"El resultado es: "<<(x*y)<<endl; 
}