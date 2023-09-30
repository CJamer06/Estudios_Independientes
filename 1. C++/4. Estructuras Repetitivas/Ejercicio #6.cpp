//6. Escriba un programa que calcule x^y, donde tato x como y sorn enteros positivos.

#include<iostream>

using namespace std;

int main()
{
    int x = 0, y = 0, ACUM = 1;
    cout<<"Ingrese el valor de la base: ";cin>>x;
    cout<<"Ingrese el valor del exponente: ";cin>>y;

    for(int i = 0; i < y; i++)
    {
        ACUM *= x; 
    }
    cout<<x<<"^"<<y<<" = "<<ACUM<<endl;

    return 0;
}
//Nota: No usar la función pow.