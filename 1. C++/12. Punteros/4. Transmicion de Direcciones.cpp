/*Transmicion de Direcciones

Ejercicio: Intercambiar el valor de 2 variables. */

#include<iostream>
using namespace std;

void intercambio(float *, float *); 
//Asi pasamos los punteros indicando que se enviara una direccion de memoria.

int main()
{
    float num1 = 20.8, num2 = 6.68;

    cout<<"Valor 1: "<<num1<<endl;
    cout<<"Valor 2: "<<num2<<endl;


    intercambio(&num1,&num2); //Indicamos la direccion de memoria.

    cout<<"\n\nDespues del intercambio: \n";
    cout<<"Valor 1: "<<num1<<endl;
    cout<<"Valor 2: "<<num2<<endl;

    system("pause");
    return 0;
}

void intercambio(float *dirnum1, float *dirnum2)
{
    float aux;

    aux = *dirnum1;
    *dirnum1 = *dirnum2;
    *dirnum2 = aux;
}