/*2. Escriba un programa que lea 3 numeros y determine cual de ellos es el mayor*/

#include<iostream>

using namespace std;

int main()
{
    int Num1, Num2, Num3;

    cout<<"Ingrese un valor 1: ";cin>>Num1;
    cout<<"Ingrese un valor 2: ";cin>>Num2;
    cout<<"Ingrese un valor 3: ";cin>>Num3;

    if(Num1 > Num2 && Num1 > Num3)  // conector 'o'(||), conector 'y'(&&)
    {
        cout<<"El numero 1 es el mayor"<<endl;
    }
    else if(Num2 > Num1 && Num2 > Num3)  // conector 'o'(||), conector 'y'(&&)
    {
        cout<<"El numero 2 es el mayor"<<endl;
    }
    else if(Num3 > Num1 && Num3 > Num2)
    {
        cout<<"El numero 3 es el mayor"<<endl;
    }
    else if(Num1 == Num2 && Num1 == Num3)
    {
        cout<<"Los numeros son iguales"<<endl;
    }
    else
    {
        cout<<"Dos valores son mayores"<<endl;
    }
    return 0;
}