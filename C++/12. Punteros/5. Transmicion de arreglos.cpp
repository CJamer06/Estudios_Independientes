/*Transmicion de arreglos

Ejercicio: Hallar el maximo elemento de un arreglo. */

#include<iostream>

using namespace std;

int HM(int *, int); //Se debe enviar la direccion de memoria del arreglo.
int main()
{
    const int nElem = 5; //Variable que no cambia (const).
    int numeros[nElem] = {3,5,2,8,1};

    cout<<"El elemento mayor es: "<<HM(numeros,nElem)<<endl; //&numeros[0]

    return 0;
}

int HM(int *dirvec, int nElem)
{
    int max = 0;

    for (int i = 0; i < nElem; i++)
    {
        if ((*dirvec+1) > max)
        {
            max = (*dirvec+1); //Aumentando la direccion de memoria podemos recorrer el arreglo.
        }
    }   
}