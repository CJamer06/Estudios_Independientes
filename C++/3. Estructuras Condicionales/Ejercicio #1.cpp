//1. Escriba un programa que lea 2 numeros y determine cual es mayor.

#include<iostream>

using namespace std;

int main()
{
    float N1, N2;
    cout<<"Digite el valor #1: ";cin>>N1; // cout<<"Digite el valor #1 y #2: ";cin>>N1>>N2;
    cout<<"Digite el valor #2: ";cin>>N2;

    if(N1 == N2) //Primer condicional
    {
        cout<<"Ambos numero son iguales"<<endl;
    }
    else if(N1>N2)  //Esto nos permite colocar un segundo condicional con respecto al anterior.
    {
        cout<<"El valor 1 es mayor que el 2"<<endl;
    }
    else
    {
        cout<<"El valor 2 es mayor que el valor 1"<<endl;
    }
    return 0;
}