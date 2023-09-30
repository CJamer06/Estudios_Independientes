/*1. Realiza un programa que solicite al ususario estandar un entero del 1 al 10 y muestre en
la salida estandar su tabla de multiplicar*/

#include<iostream>

using namespace std;

int main()
{
    int N = 0;

    cout<<"Ingrese u  valor del 1 al 10: ";cin>>N;

    for (int i = 1; i < 10; i++)
    {
        cout<<i<<" x "<<N<<" = "<<i*N<<endl;
    }
    
    return 0;
}