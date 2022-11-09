/*¿Qué es una función?
    Una función realiza una tarea concreta y puede ser diseñada, implementada y depurada de manera 
    independiente al resto de código.

Definicion funciones

    La sintaxis basica para la definicion en C++ es la siguiente:
    
    tipo de nombre(tipo var1, tipo var 2...tipo varN)
    {
        conjunto de instrucciones;
    }

Ejemplos

int numMAx(int x, int y); Esta funcion retorna un valor entero.
doble intercambio(doble x, doble y); Esta funcion retorna un valor doble.
void desplegar(float x, float y); No retorna nada.*/

#include<iostream>

using namespace std;

int BUSMAX(int x, int y); //Protoripo de la funcion

int main()  //Funcion principal
{
    int N1, N2;

    cout<<"Digite 2 numeros: ";cin>>N1>>N2;

    cout<<"El numero mayor es: "<<BUSMAX(N1,N2)<<endl;
    return 0;
}

int BUSMAX(int x, int y) // Definicio de la funcion
{
    int NUMMAX;
    if (x > y)
    {
        NUMMAX = x;
    }
    else
    {
        NUMMAX = y;
    }

    return NUMMAX;
}

